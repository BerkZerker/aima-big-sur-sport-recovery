import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.app.cmd.disassemble.*;
import java.io.*;
import java.nio.file.*;
public class DecompAll extends GhidraScript {
  void seed(long v,String name) throws Exception {
    Address a=toAddr(v);
    if(getInstructionAt(a)==null){ try{ new ArmDisassembleCommand(a,null,true).applyTo(currentProgram,monitor);}catch(Exception e){} }
    if(getInstructionAt(a)!=null&&getFunctionAt(a)==null){ try{createFunction(a,name);}catch(Exception e){} }
  }
  public void run() throws Exception {
    Memory m=currentProgram.getMemory(); Address base=toAddr(0x08004800L);
    for(int i=1;i<76;i++){ long v=m.getInt(base.add(i*4))&0xffffffffL;
      if(v==0||v<0x08004800L||v>0x08015400L)continue; seed(v&~1L,String.format("vec%02d_%08x",i,v&~1L)); }
    for(String s:Files.readAllLines(Paths.get(getScriptArgs()[1]))){ long v=Long.decode(s.trim()); if(v>=0x08004800L&&v<0x08011800L&&(v&1)==0) seed(v,null); }
    analyzeAll(currentProgram);
    DecompInterface d=new DecompInterface(); d.openProgram(currentProgram);
    PrintWriter w=new PrintWriter(new FileWriter(getScriptArgs()[0])); int n=0,fail=0;
    for(Function f:currentProgram.getFunctionManager().getFunctions(true)){
      DecompileResults r=d.decompileFunction(f,60,monitor);
      w.println("/* "+f.getEntryPoint()+" "+f.getName()+" */");
      if(r.decompileCompleted()) w.println(r.getDecompiledFunction().getC()); else {w.println("// FAILED "+r.getErrorMessage());fail++;}
      n++;
    }
    w.close(); println("functions decompiled: "+n+" failed "+fail);
  }
}
