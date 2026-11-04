/* 08004938 thunk_FUN_0800f138 */

void thunk_FUN_0800f138(void)

{
  (*DAT_0800493c)();
  return;
}


/* 0800495e vec16_0800495e */

void vec16_0800495e(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08004968 FUN_08004968 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08004968(void)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  
  uVar2 = getProcessStackPointer();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setProcessStackPointer(DAT_08004bb4);
  }
  iVar3 = getProcessStackPointer();
  if (iVar3 == DAT_08004bb4) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setProcessStackPointer(DAT_08004bb8);
    }
    iVar3 = getProcessStackPointer();
    if (iVar3 == DAT_08004bb8) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setProcessStackPointer(uVar2);
      }
      uVar2 = UnsignedSaturate(0xffffffff,10);
      bVar4 = UnsignedDoesSaturate(0xffffffff,10);
      if ((bVar4 & 0x1f | 0x16) == 0x17) {
        return CONCAT44(uVar2,1);
      }
    }
  }
  do {
    *DAT_08010620 = DAT_0801061c;
  } while( true );
}


/* 08004bbc FUN_08004bbc */

/* WARNING: Removing unreachable block (ram,0x08010608) */
/* WARNING: Removing unreachable block (ram,0x08010618) */

undefined8 FUN_08004bbc(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,1);
}


/* 08004d9c FUN_08004d9c */

longlong FUN_08004d9c(uint param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = 0;
  iVar3 = 0x40;
  while (iVar4 = iVar3 + -1, 0 < iVar3) {
    uVar6 = FUN_08004e40(param_1,param_2,iVar4);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    iVar3 = iVar4;
    if (param_4 < uVar2 || uVar2 - param_4 < (uint)(param_3 <= (uint)uVar6)) {
      uVar6 = FUN_08004e22(param_3,param_4,iVar4);
      bVar5 = param_1 < (uint)uVar6;
      param_1 = param_1 - (uint)uVar6;
      param_2 = (param_2 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)bVar5;
      lVar7 = FUN_08004e22(1,0,iVar4);
      lVar1 = lVar7 + lVar1;
    }
  }
  return lVar1;
}


/* 08004dfe FUN_08004dfe */

void FUN_08004dfe(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    for (; 3 < param_3; param_3 = param_3 - 4) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
  }
  while (bVar2 = param_3 != 0, param_3 = param_3 - 1, bVar2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


/* 08004e22 FUN_08004e22 */

longlong FUN_08004e22(uint param_1,int param_2,uint param_3)

{
  if ((int)param_3 < 0x20) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}


/* 08004e40 FUN_08004e40 */

ulonglong FUN_08004e40(uint param_1,uint param_2,uint param_3)

{
  if ((int)param_3 < 0x20) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return (ulonglong)(param_2 >> (param_3 - 0x20 & 0xff));
}


/* 08004e60 FUN_08004e60 */

void FUN_08004e60(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *extraout_r2;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar1 = puRam08004e80;
  for (puVar8 = puRam08004e7c; puVar8 < puVar1; puVar8 = puVar8 + 4) {
    (*(code *)puVar8[3])(*puVar8,puVar8[1],puVar8[2]);
  }
  pbVar2 = (byte *)thunk_FUN_0800f138();
  pbVar5 = extraout_r2;
  do {
    pbVar4 = (byte *)0x0;
    do {
      uVar9 = (uint)*pbVar2;
      uVar7 = uVar9 & 7;
      pbVar3 = pbVar2 + 1;
      if ((*pbVar2 & 7) == 0) {
        pbVar3 = pbVar2 + 2;
        uVar7 = (uint)pbVar2[1];
      }
      pbVar6 = (byte *)((int)uVar9 >> 4);
      if (pbVar6 == (byte *)0x0) {
        pbVar6 = (byte *)(uint)*pbVar3;
        pbVar3 = pbVar3 + 1;
      }
      while (uVar7 = uVar7 - 1, uVar7 != 0) {
        *pbVar4 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      }
      if ((int)(uVar9 << 0x1c) < 0) {
        pbVar2 = pbVar3 + 1;
        pbVar6 = pbVar6 + 2;
        pbVar3 = pbVar4 + -(uint)*pbVar3;
        while (pbVar6 = pbVar6 + -1, -1 < (int)pbVar6) {
          *pbVar4 = *pbVar3;
          pbVar4 = pbVar4 + 1;
          pbVar3 = pbVar3 + 1;
        }
      }
      else {
        while (pbVar6 = pbVar6 + -1, pbVar2 = pbVar3, -1 < (int)pbVar6) {
          *pbVar4 = 0;
          pbVar4 = pbVar4 + 1;
        }
      }
    } while (pbVar4 < pbVar5);
    pbVar2 = (byte *)0x0;
    pbVar5 = pbVar6;
  } while( true );
}


/* 08004edc FUN_08004edc */

undefined4 FUN_08004edc(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  char local_54;
  byte local_53;
  byte local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  
  iVar2 = FUN_080058d0(0,0x12,2,&local_58);
  bVar14 = iVar2 == -1;
  do {
    if (bVar14) {
      return 0xffffffff;
    }
    FUN_0800abaa(0,0x90,0,&local_58);
    FUN_080058d0(0,0x12,2,&local_58);
    pbVar1 = DAT_08005314;
    uVar11 = DAT_08005310;
    bVar14 = true;
  } while ((local_58 & 1) == 0);
  uVar4 = 1;
  *(undefined4 *)DAT_08005314 = *(undefined4 *)(DAT_08005310 + 0x40);
  local_58 = *pbVar1;
  local_57 = pbVar1[1];
  local_56 = pbVar1[2];
  local_55 = pbVar1[3];
  uVar5 = 2;
  uVar8 = 3;
  iVar2 = FUN_0800ac34(0,0x91a8,4,&local_58);
  if (iVar2 == 0) goto LAB_08004f6e;
  FUN_0800abaa(0,0x91a8,4,&local_58);
  iVar2 = FUN_0800ac34(0,0x91a8,4,&local_58);
  bVar14 = iVar2 == 0;
  do {
    do {
      do {
        do {
          if (!bVar14) {
            return 0xffffffff;
          }
LAB_08004f6e:
          bVar7 = (byte)uVar8;
          local_58 = 0x82;
          local_57 = 0x2c;
          iVar2 = FUN_0800ac34(0,0x9234,uVar5,&local_58);
          uVar9 = uVar5;
          if (iVar2 == 0) break;
          FUN_0800abaa(0,0x9234,2,&local_58);
          iVar2 = FUN_0800ac34(0,0x9234,2,&local_58);
          bVar15 = iVar2 == 0;
LAB_08004fa6:
          bVar7 = (byte)uVar8;
          bVar14 = false;
          uVar9 = uVar5;
        } while (!bVar15);
        local_58 = 0xe8;
        uVar5 = 0x9231;
        local_57 = bVar7;
        iVar2 = FUN_0800ac34(0,0x9231,uVar9,&local_58);
        uVar6 = uVar11;
        if (iVar2 == 0) break;
        FUN_0800abaa(0,0x9231,2,&local_58);
        iVar2 = FUN_0800ac34(0,0x9231,2,&local_58);
        bVar15 = iVar2 == 0;
LAB_08004fe0:
        bVar14 = false;
        uVar8 = uVar9;
        uVar6 = uVar11;
      } while (!bVar15);
      uVar5 = 0x86;
      local_58 = 0x86;
      iVar2 = FUN_0800ac34(0,0x92fa,uVar4,&local_58);
      uVar8 = uVar9;
      uVar11 = uVar6;
      if (iVar2 == 0) break;
      FUN_0800abaa(0,0x92fa,1,&local_58);
      iVar2 = FUN_0800ac34(0,0x92fa,1,&local_58);
      bVar15 = iVar2 == 0;
LAB_08005018:
      bVar14 = false;
      uVar8 = uVar9;
      uVar11 = uVar6;
    } while (!bVar15);
    local_58 = (byte)uVar5;
    uVar5 = 0x92fb;
    iVar2 = FUN_0800ac34(0,0x92fb,uVar4,&local_58);
    uVar9 = uVar8;
    if (iVar2 == 0) break;
    FUN_0800abaa(0,0x92fb,1,&local_58);
    iVar2 = FUN_0800ac34(0,0x92fb,1,&local_58);
    bVar15 = iVar2 == 0;
LAB_0800504a:
    bVar14 = false;
    uVar9 = uVar8;
  } while (!bVar15);
  uVar5 = 0x3b;
  local_58 = 0x3b;
  iVar2 = FUN_0800ac34(0,0x92ff,uVar4,&local_58);
  if (iVar2 != 0) {
    FUN_0800abaa(0,0x92ff,1,&local_58);
    iVar2 = FUN_0800ac34(0,0x92ff,1,&local_58);
    bVar15 = iVar2 == 0;
    uVar8 = uVar9;
    if (!bVar15) goto LAB_08004fa6;
  }
  local_58 = 0x3b;
  uVar5 = 0x9300;
  iVar2 = FUN_0800ac34(0,0x9300,uVar4,&local_58);
  uVar6 = uVar11;
  if (iVar2 == 0) goto LAB_080050b2;
  FUN_0800abaa(0,0x9300,1,&local_58);
  iVar2 = FUN_0800ac34(0,0x9300,1,&local_58);
  bVar14 = iVar2 == 0;
LAB_080050b0:
  bVar15 = false;
  uVar6 = uVar11;
  if (bVar14) {
LAB_080050b2:
    uVar5 = 0;
    local_58 = 0;
    uVar13 = 0;
    local_57 = 0;
    iVar2 = FUN_0800ac34(0,0x926d,uVar9,&local_58);
    uVar8 = uVar9;
    uVar11 = uVar6;
    if (iVar2 == 0) goto LAB_080050ec;
    FUN_0800abaa(0,0x926d,2,&local_58);
    iVar2 = FUN_0800ac34(0,0x926d,2,&local_58);
    bVar14 = iVar2 == 0;
LAB_080050ea:
    bVar15 = false;
    uVar8 = uVar9;
    uVar11 = uVar6;
    if (bVar14) {
LAB_080050ec:
      local_58 = 6;
      iVar2 = FUN_0800ac34(0,0x9303,uVar4,&local_58);
      if (iVar2 == 0) goto LAB_08005124;
      FUN_0800abaa(0,0x9303,1,&local_58);
      iVar2 = FUN_0800ac34(0,0x9303,1,&local_58);
      bVar14 = iVar2 == 0;
LAB_08005122:
      bVar15 = false;
      if (bVar14) {
LAB_08005124:
        uVar4 = uVar8;
        for (uVar8 = 0; (int)uVar8 < (int)(*(byte *)(uVar11 + 0x55) - 1); uVar8 = uVar8 + 1 & 0xffff
            ) {
          uVar5 = (int)(short)(uVar5 << 1) | 1;
        }
        local_57 = (byte)(uVar5 >> 8) | 0x80;
        local_58 = (byte)uVar5;
        uVar5 = 0x9304;
        iVar2 = FUN_0800ac34(0,0x9304,uVar4,&local_58);
        uVar6 = uVar11;
        if (iVar2 == 0) goto LAB_0800517c;
        FUN_0800abaa(0,0x9304,2,&local_58);
        iVar2 = FUN_0800ac34(0,0x9304,2,&local_58);
        bVar14 = iVar2 == 0;
        uVar9 = uVar4;
        do {
          uVar6 = uVar11;
          if (!bVar14) goto LAB_080050b0;
LAB_0800517c:
          uVar5 = uVar13;
          local_58 = (byte)uVar4;
          local_57 = (byte)uVar5;
          local_56 = 0xfc;
          local_55 = 0xb3;
          local_54 = -0x20;
          uVar9 = 1;
          iVar2 = FUN_0800ac34(0,0x925f,5,&local_58);
          uVar8 = uVar9;
          uVar11 = uVar6;
          uVar13 = uVar5;
          if (iVar2 == 0) goto LAB_080051ca;
          FUN_0800abaa(0,0x925f,5,&local_58);
          iVar2 = FUN_0800ac34(0,0x925f,5,&local_58);
          bVar14 = iVar2 == 0;
LAB_080051c8:
          uVar8 = uVar9;
          uVar11 = uVar6;
          if (!bVar14) goto LAB_080050ea;
LAB_080051ca:
          local_58 = 0xe;
          iVar2 = FUN_0800ac34(0,0x9308,uVar8,&local_58);
          if (iVar2 != 0) {
            FUN_0800abaa(0,0x9308,1,&local_58);
            iVar2 = FUN_0800ac34(0,0x9308,1,&local_58);
            bVar14 = iVar2 == 0;
            if (!bVar14) goto LAB_08005122;
          }
          uVar13 = 0x14;
          local_58 = 0x14;
          iVar2 = FUN_0800ac34(0,0x9314,uVar8,&local_58);
          uVar6 = uVar5;
          if (iVar2 == 0) goto LAB_08005236;
          FUN_0800abaa(0,0x9314,1,&local_58);
          iVar2 = FUN_0800ac34(0,0x9314,1,&local_58);
          bVar15 = iVar2 == 0;
          uVar9 = uVar8;
          while (bVar14 = false, uVar6 = uVar5, bVar15) {
LAB_08005236:
            local_58 = 0x50;
            local_57 = (byte)uVar6;
            uVar5 = 0x9343;
            iVar2 = FUN_0800ac34(0,0x9343,uVar4,&local_58);
            uVar9 = uVar6;
            uVar6 = uVar11;
            if (iVar2 == 0) goto LAB_08005270;
            FUN_0800abaa(0,0x9343,2,&local_58);
            iVar2 = FUN_0800ac34(0,0x9343,2,&local_58);
            bVar14 = iVar2 == 0;
LAB_0800526e:
            uVar6 = uVar11;
            if (!bVar14) break;
LAB_08005270:
            uVar5 = 7;
            local_58 = 7;
            iVar2 = FUN_0800ac34(0,0x9335,uVar8,&local_58);
            if (iVar2 != 0) {
              FUN_0800abaa(0,0x9335,1,&local_58);
              iVar2 = FUN_0800ac34(0,0x9335,1,&local_58);
              bVar14 = iVar2 == 0;
              if (!bVar14) goto LAB_080051c8;
            }
            if (*(short *)(uVar6 + 0x5a) == 3) {
              local_58 = 7;
              uVar12 = 0x9302;
              uVar3 = 0x9302;
              goto LAB_08005304;
            }
            if (*(short *)(uVar6 + 0x5a) != 4) goto LAB_08005332;
            uVar11 = 0x9302;
            local_58 = 7;
            iVar2 = FUN_0800ac34(0,0x9302,uVar8,&local_58);
            if (iVar2 == 0) goto LAB_080052f6;
            FUN_0800abaa(0,0x9302,1,&local_58);
            iVar2 = FUN_0800ac34(0,0x9302,1,&local_58);
            bVar14 = iVar2 == 0;
            while (bVar15 = false, bVar14) {
LAB_080052f6:
              uVar12 = 0x92fc;
              local_58 = (byte)uVar5;
              uVar3 = 0x92fc;
LAB_08005304:
              iVar2 = FUN_0800ac34(0,uVar3,uVar8,&local_58);
              if (iVar2 == 0) goto LAB_08005332;
              FUN_0800abaa(0,uVar12,1,&local_58);
              iVar2 = FUN_0800ac34(0,uVar12,1,&local_58);
              bVar14 = iVar2 == 0;
LAB_08005330:
              uVar11 = uVar12;
              if (!bVar14) goto LAB_0800526e;
LAB_08005332:
              uVar11 = 0x9339;
              local_58 = (byte)uVar4;
              iVar2 = FUN_0800ac34(0,0x9339,uVar8,&local_58);
              if (iVar2 != 0) {
                FUN_0800abaa(0,0x9339,1,&local_58);
                iVar2 = FUN_0800ac34(0,0x9339,1,&local_58);
                bVar14 = iVar2 == 0;
                if (!bVar14) goto LAB_0800526e;
              }
              local_58 = 8;
              local_57 = (byte)*(undefined2 *)(uVar6 + 0x5e);
              local_56 = (byte)((ushort)*(undefined2 *)(uVar6 + 0x5e) >> 8);
              uVar8 = 10;
              local_55 = *(byte *)(DAT_08005774 + 0x60);
              local_54 = '\n';
              local_51 = *(undefined1 *)(DAT_08005774 + 0x60);
              local_50 = 10;
              local_53 = local_57;
              local_52 = local_56;
              iVar2 = FUN_0800ac34(0,0x933a,9,&local_58);
              uVar10 = uVar4;
              uVar12 = uVar11;
              if (iVar2 == 0) goto LAB_080053cc;
              FUN_0800abaa(0,0x933a,9,&local_58);
              iVar2 = FUN_0800ac34(0,0x933a,9,&local_58);
              bVar15 = iVar2 == 0;
LAB_080053ca:
              bVar14 = false;
              uVar10 = uVar4;
              uVar12 = uVar11;
              if (bVar15) {
LAB_080053cc:
                local_58 = 0xd0;
                local_57 = (byte)uVar5;
                iVar2 = (short)(ushort)*(byte *)(uVar6 + 0x55) * 0xdc;
                local_56 = (byte)iVar2;
                local_55 = (byte)((uint)iVar2 >> 8);
                local_54 = '<';
                uVar4 = 5;
                uVar5 = 0x923f;
                iVar2 = FUN_0800ac34(0,0x923f,5,&local_58);
                uVar11 = uVar12;
                if (iVar2 == 0) goto LAB_08005422;
                FUN_0800abaa(0,0x923f,5,&local_58);
                iVar2 = FUN_0800ac34(0,0x923f,5,&local_58);
                bVar14 = iVar2 == 0;
LAB_08005420:
                uVar11 = uVar12;
                if (!bVar14) goto LAB_08005330;
LAB_08005422:
                uVar5 = uVar10;
                local_58 = 0x32;
                uVar10 = 0x9248;
                local_57 = (byte)uVar9;
                iVar2 = FUN_0800ac34(0,0x9248,uVar5,&local_58);
                if (iVar2 != 0) {
                  FUN_0800abaa(0,0x9248,2,&local_58);
                  iVar2 = FUN_0800ac34(0,0x9248,2,&local_58);
                  bVar15 = iVar2 == 0;
                  if (!bVar15) goto LAB_080053ca;
                }
                iVar2 = (uint)*(byte *)(uVar6 + 0x55) * ((*(ushort *)(uVar6 + 0x9c) + 0x32) / uVar8)
                ;
                local_58 = (byte)iVar2;
                local_57 = (byte)((uint)iVar2 >> 8);
                iVar2 = FUN_0800ac34(0,0x924e,uVar5,&local_58);
                uVar12 = uVar8;
                if (iVar2 == 0) goto LAB_080054a4;
                FUN_0800abaa(0,0x924e,2,&local_58);
                iVar2 = FUN_0800ac34(0,0x924e,2,&local_58);
                bVar15 = iVar2 == 0;
                uVar11 = 0x924e;
                do {
                  uVar12 = uVar8;
                  if (!bVar15) goto LAB_080053ca;
LAB_080054a4:
                  bVar7 = (byte)uVar12;
                  uVar8 = 0x9250;
                  local_57 = (byte)uVar9;
                  local_58 = bVar7;
                  iVar2 = FUN_0800ac34(0,0x9250,uVar5,&local_58);
                  if (iVar2 != 0) {
                    FUN_0800abaa(0,0x9250,2,&local_58);
                    iVar2 = FUN_0800ac34(0,0x9250,2,&local_58);
                    bVar14 = iVar2 == 0;
                    if (!bVar14) goto LAB_08005420;
                  }
                  local_58 = *(byte *)(uVar6 + 0xba);
                  uVar8 = 8;
                  local_57 = *(byte *)(uVar6 + 0xb4) * '\n';
                  local_56 = (byte)((uint)*(byte *)(uVar6 + 0xb4) * 5 >> 7);
                  local_55 = *(byte *)(uVar6 + 0xb6);
                  uVar9 = 0x9275;
                  local_54 = *(byte *)(uVar6 + 0xb3) * '\n';
                  local_53 = (byte)((uint)*(byte *)(uVar6 + 0xb3) * 5 >> 7);
                  local_52 = *(byte *)(uVar6 + 0xbb);
                  local_51 = *(undefined1 *)(uVar6 + 0xb8);
                  iVar2 = FUN_0800ac34(0,0x9275,8,&local_58);
                  if (iVar2 == 0) goto LAB_08005554;
                  FUN_0800abaa(0,0x9275,8,&local_58);
                  iVar2 = FUN_0800ac34(0,0x9275,8,&local_58);
                  bVar15 = false;
                  uVar11 = uVar12;
                  if (iVar2 == 0) {
LAB_08005554:
                    local_58 = *(byte *)(uVar6 + 0xc6);
                    local_57 = *(undefined1 *)(uVar6 + 199);
                    local_56 = *(undefined1 *)(uVar6 + 0xc0);
                    local_55 = *(undefined1 *)(uVar6 + 0xc1);
                    local_54 = *(undefined1 *)(uVar6 + 0xc2);
                    local_53 = *(undefined1 *)(uVar6 + 0xc3);
                    local_52 = *(undefined1 *)(uVar6 + 0xc4);
                    local_51 = *(undefined1 *)(uVar6 + 0xc5);
                    iVar2 = FUN_0800ac34(0,0x9280,8,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x9280,8,&local_58);
                      iVar2 = FUN_0800ac34(0,0x9280,8,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = (byte)-(uint)*(ushort *)(uVar6 + 0xae);
                    local_57 = (byte)(-(uint)*(ushort *)(uVar6 + 0xae) >> 8);
                    local_56 = 5;
                    local_55 = 0x38;
                    local_54 = 0xff;
                    iVar2 = FUN_0800ac34(0,0x928a,5,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x928a,5,&local_58);
                      iVar2 = FUN_0800ac34(0,0x928a,5,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = 1;
                    local_57 = 0x1e;
                    local_56 = 0xf;
                    iVar2 = FUN_0800ac34(0,0x928f,3,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x928f,3,&local_58);
                      iVar2 = FUN_0800ac34(0,0x928f,3,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = 1;
                    local_56 = 0xf;
                    local_57 = bVar7;
                    iVar2 = FUN_0800ac34(0,0x9295,3,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x9295,3,&local_58);
                      iVar2 = FUN_0800ac34(0,0x9295,3,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = (byte)((*(short *)(uVar6 + 0xcc) + -0xaab) / (int)uVar12);
                    local_57 = 5;
                    local_56 = (byte)((*(short *)(DAT_08005774 + 0xce) + -0xaab) / (int)uVar12);
                    local_55 = (byte)((*(short *)(DAT_08005774 + 0xd4) + -0xaab) / (int)uVar12);
                    local_54 = 5;
                    local_53 = (byte)((*(short *)(DAT_08005774 + 0xd6) + -0xaab) / (int)uVar12);
                    iVar2 = FUN_0800ac34(0,0x929a,6,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x929a,6,&local_58);
                      iVar2 = FUN_0800ac34(0,0x929a,6,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = (byte)((*(short *)(uVar6 + 0xd0) + -0xaab) / (int)uVar12);
                    local_57 = 5;
                    local_56 = (byte)((*(short *)(uVar6 + 0xd2) + -0xaab) / (int)uVar12);
                    local_54 = 5;
                    local_55 = (byte)((*(short *)(uVar6 + 0xd8) + -0xaab) / (int)uVar12);
                    local_53 = (byte)((*(short *)(uVar6 + 0xda) + -0xaab) / (int)uVar12);
                    local_52 = 0xec;
                    local_51 = 2;
                    local_50 = 0xf1;
                    local_4f = 5;
                    iVar2 = FUN_0800ac34(0,0x92a6,uVar12,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x92a6,10,&local_58);
                      iVar2 = FUN_0800ac34(0,0x92a6,10,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_56 = 0xff;
                    local_55 = 0xff;
                    local_58 = bVar7;
                    local_57 = bVar7;
                    iVar2 = FUN_0800ac34(0,0x92b4,4,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x92b4,4,&local_58);
                      iVar2 = FUN_0800ac34(0,0x92b4,4,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    local_58 = 0xf0;
                    local_57 = 0xd3;
                    local_56 = 0xe0;
                    local_55 = 0x27;
                    local_54 = 0xe8;
                    local_53 = 0xfd;
                    local_52 = 0xd9;
                    local_51 = 0x51;
                    local_50 = 0xbd;
                    local_4f = 0xf;
                    local_4e = 0xf;
                    local_4d = 0xd5;
                    local_4c = 0x7b;
                    local_4b = 0x2c;
                    local_4a = 0x89;
                    local_49 = 0xea;
                    local_48 = 0x94;
                    local_47 = 0x10;
                    local_46 = 0xb7;
                    local_45 = 0x2d;
                    iVar2 = FUN_0800ac34(0,0x91ea,0x14,&local_58);
                    if (iVar2 != 0) {
                      FUN_0800abaa(0,0x91ea,0x14,&local_58);
                      iVar2 = FUN_0800ac34(0,0x91ea,0x14,&local_58);
                      if (iVar2 != 0) {
                        return 0xffffffff;
                      }
                    }
                    FUN_0800abaa(0,0x92,0,&local_58);
                    FUN_080058d0(0,0x12,2,&local_58);
                    if ((local_58 & 1) == 0) {
                      FUN_0800abaa(0,0x96,0,&local_58);
                      return 0;
                    }
                    return 0xffffffff;
                  }
                } while( true );
              }
            }
          }
        } while( true );
      }
      goto LAB_0800504a;
    }
    goto LAB_08005018;
  }
  goto LAB_08004fe0;
}


/* 080058d0 FUN_080058d0 */

int FUN_080058d0(undefined4 param_1,undefined4 param_2,uint param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  byte local_95 [97];
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  byte *local_28;
  
  piVar1 = DAT_08005ae8;
  uVar4 = (param_3 & 0x7f) << 1;
  local_98 = 0x10;
  local_97 = (undefined1)param_2;
  local_96 = 0x11;
  local_95[0] = 0;
  uVar6 = 0;
  uStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  do {
    iVar3 = FUN_0800e25c(piVar1,0x601);
    if (iVar3 == 0) {
      FUN_0800e2a8(piVar1);
      uVar6 = 0;
      do {
        iVar3 = FUN_0800e25c(piVar1,0x500);
        if (iVar3 != 0) {
          FUN_0800e280(piVar1,local_98,0xfffffffe);
          uVar6 = 0;
          do {
            iVar3 = FUN_0800e25c(piVar1,0x501);
            if (iVar3 != 0) {
              FUN_0800e23a(DAT_08005ae8,0x501);
              uVar6 = 0;
              do {
                iVar3 = FUN_0800e25c(DAT_08005ae8,0x507);
                piVar1 = DAT_08005ae8;
                if (iVar3 == 1) {
                  FUN_0800e230(DAT_08005ae8);
                  FUN_0800e1fa(piVar1,local_97);
                  uVar6 = 0;
                  do {
                    iVar3 = FUN_0800e25c(piVar1,0x507);
                    if (iVar3 != 0) {
                      FUN_0800e2a8(piVar1);
                      uVar6 = 0;
                      do {
                        iVar3 = FUN_0800e25c(piVar1,0x500);
                        if (iVar3 != 0) {
                          FUN_0800e280(piVar1,local_96,1);
                          uVar6 = 0;
                          do {
                            iVar3 = FUN_0800e25c(piVar1,0x501);
                            if (iVar3 != 0) {
                              FUN_0800e23a(piVar1,0x501);
                              pbVar5 = local_95;
                              while (uVar4 != 0) {
                                if (uVar4 == 3) {
                                  uVar6 = 0;
                                  while (iVar3 = FUN_0800e25c(piVar1,0x502), iVar3 == 0) {
                                    uVar6 = uVar6 + 1;
                                    if (40000 < uVar6) {
                                      return -1;
                                    }
                                  }
                                  FUN_0800e090(piVar1,0);
                                }
                                else if (uVar4 == 2) {
                                  uVar6 = 0;
                                  while (iVar3 = FUN_0800e25c(piVar1,0x502), iVar3 == 0) {
                                    uVar6 = uVar6 + 1;
                                    if (40000 < uVar6) {
                                      return -1;
                                    }
                                  }
                                  FUN_0800e2b2(piVar1);
                                }
                                iVar3 = FUN_0800e25c(piVar1,0x506);
                                if (iVar3 != 0) {
                                  bVar2 = FUN_0800e1f4(piVar1);
                                  *pbVar5 = bVar2;
                                  uVar4 = uVar4 - 1 & 0xff;
                                  pbVar5 = pbVar5 + 1;
                                }
                              }
                              uVar4 = 0;
                              do {
                                if (-1 < *piVar1 << 0x16) {
                                  FUN_0800e090(piVar1,1);
                                  FUN_0800e0a4(piVar1,1);
                                  FUN_08005ccc(&local_98,4);
                                  *local_28 = local_95[0];
                                  for (uVar4 = 0; uVar4 < param_3 - 1; uVar4 = uVar4 + 1) {
                                    iVar3 = uVar4 * 2;
                                    uVar6 = FUN_08005ccc(local_95 + iVar3 + 2,1);
                                    if (uVar6 == local_95[iVar3 + 3]) {
                                      local_28[uVar4 + 1] = local_95[iVar3 + 2];
                                    }
                                  }
                                  return (int)(char)param_3;
                                }
                                uVar4 = uVar4 + 1;
                              } while (uVar4 < 0x9c41);
                              return -1;
                            }
                            uVar6 = uVar6 + 1;
                          } while (uVar6 < 0x9c41);
                          return -1;
                        }
                        uVar6 = uVar6 + 1;
                      } while (uVar6 < 0x9c41);
                      return -1;
                    }
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < 0x9c41);
                  return -1;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < 0x9c41);
              return -1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x9c41);
          return -1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x9c41);
      return -1;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x3e9);
  return -1;
}


/* 08005aec FUN_08005aec */

void FUN_08005aec(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  do {
    iVar1 = FUN_0800abaa(0,0xf,0,&uStack_8);
  } while (iVar1 != 0);
  do {
    iVar1 = FUN_0800abaa(0,0xf,0,&uStack_8);
  } while (iVar1 != 0);
  return;
}


/* 08005b10 FUN_08005b10 */

int FUN_08005b10(undefined4 param_1,undefined4 param_2,uint param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined1 *local_2c;
  
  local_38._3_1_ = (undefined1)((uint)param_1 >> 0x18);
  local_38._0_3_ = CONCAT12(*param_4,CONCAT11((char)param_2,0x10));
  uStack_34 = param_2;
  local_30 = param_3;
  local_2c = param_4;
  uVar2 = FUN_08005ccc(&local_38,3);
  piVar1 = DAT_08005c8c;
  local_38 = CONCAT13(uVar2,(undefined3)local_38);
  uVar4 = 0;
  do {
    iVar3 = FUN_0800e25c(piVar1,0x601);
    if (iVar3 == 0) {
      FUN_0800e2a8(piVar1);
      uVar4 = 0;
      do {
        iVar3 = FUN_0800e25c(piVar1,0x500);
        if (iVar3 != 0) {
          FUN_0800e280(piVar1,local_38 & 0xff,0xfffffffe);
          uVar4 = 0;
          do {
            iVar3 = FUN_0800e25c(piVar1,0x501);
            if (iVar3 != 0) {
              FUN_0800e23a(piVar1,0x501);
              uVar4 = 0;
              do {
                iVar3 = FUN_0800e25c(piVar1,0x507);
                if (iVar3 == 1) {
                  uVar4 = 0;
                  do {
                    FUN_0800e1fa(piVar1,*(undefined1 *)((int)&local_38 + uVar4 + 1));
                    uVar5 = 0;
                    while (iVar3 = FUN_0800e25c(piVar1,0x502), iVar3 == 0) {
                      uVar5 = uVar5 + 1;
                      if (40000 < uVar5) {
                        return -1;
                      }
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < 3);
                  for (uVar4 = 0; piVar1 = DAT_08005c8c, uVar4 < param_3 - 1; uVar4 = uVar4 + 1) {
                    local_30 = CONCAT31(local_30._1_3_,param_4[uVar4 + 1]);
                    local_2c = (undefined1 *)FUN_08005ccc(&local_30,1);
                    FUN_0800e1fa(DAT_08005c8c,local_30 & 0xff);
                    uVar5 = 0;
                    while (iVar3 = FUN_0800e25c(DAT_08005c8c,0x502), iVar3 == 0) {
                      uVar5 = uVar5 + 1;
                      if (40000 < uVar5) {
                        return -1;
                      }
                    }
                    FUN_0800e1fa(DAT_08005c8c,local_2c);
                    piVar1 = DAT_08005c8c;
                    uVar5 = 0;
                    while (iVar3 = FUN_0800e25c(piVar1,0x502), iVar3 == 0) {
                      uVar5 = uVar5 + 1;
                      if (40000 < uVar5) {
                        return -1;
                      }
                    }
                  }
                  FUN_0800e2b2(DAT_08005c8c);
                  uVar4 = 0;
                  do {
                    if (-1 < *piVar1 << 0x16) {
                      FUN_0800d60c(1);
                      return (int)(char)param_3;
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < 0x9c41);
                  return -1;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < 0x9c41);
              return -1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x9c41);
          return -1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x9c41);
      return -1;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x3e9);
  return -1;
}


/* 08005c90 vec05_08005c90 */

void vec05_08005c90(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_08005cc4;
  puVar1 = (uint *)(DAT_08005cc4 + 0xe8);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_080095e0();
  *puVar1 = *puVar1 | 1;
  *(undefined1 *)(iVar2 + 0x2a5) = 7;
  *(undefined1 *)(iVar2 + 0x2a6) = 3;
  FUN_080095e0();
  FUN_08009aa8();
  FUN_08007884();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08005cc8 thunk_FUN_0800ada8 */

void thunk_FUN_0800ada8(void)

{
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined4 auStack_1c [2];
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  
  FUN_08010134(0);
  FUN_0800c084(DAT_0800ae2c,1,auStack_1c);
  uStack_28 = 0;
  uStack_1e = uStack_13;
  uStack_2c = auStack_1c[0];
  uStack_27 = uStack_12;
  uStack_26 = uStack_11;
  uStack_25 = uStack_10;
  uStack_24 = uStack_f;
  uStack_23 = uStack_e;
  uStack_22 = uStack_d;
  uStack_21 = uStack_c;
  uStack_20 = uStack_b;
  uStack_1f = uStack_a;
  FUN_0800b0de(auStack_30,DAT_0800ae30);
  FUN_0800a2f4();
  FUN_08010118(1);
  return;
}


/* 08005ccc FUN_08005ccc */

void FUN_08005ccc(undefined4 param_1,uint param_2)

{
  for (; param_2 != 0; param_2 = param_2 - 1 & 0xff) {
  }
  return;
}


/* 08005cf0 FUN_08005cf0 */

uint FUN_08005cf0(uint param_1)

{
  return param_1 + (param_1 / 10) * 6 & 0xff;
}


/* 08005d04 vec30_08005d04 */

void vec30_08005d04(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  uVar1 = DAT_08005d2c;
  iVar4 = FUN_0800d77a(DAT_08005d2c,3,2);
  if (iVar4 == 0) {
    return;
  }
  FUN_0800d76e(uVar1,3,1);
  iVar4 = DAT_08010fd0;
  puVar2 = DAT_08010fcc;
  uVar5 = 0;
  uVar6 = 300;
  puVar7 = DAT_08010fcc + 2;
  do {
    if (*(short *)(iVar4 + 4) == 0) {
      uVar6 = uVar5;
      if (uVar5 == 0) {
        *puVar2 = 0;
        return;
      }
      break;
    }
    uVar3 = FUN_0800ac78(DAT_08010fd0);
    puVar7[uVar5] = uVar3;
    uVar5 = uVar5 + 1 & 0xffff;
  } while (uVar5 < 300);
  *puVar2 = 1;
  uVar1 = DAT_08010fd4;
  FUN_0800d6a0(DAT_08010fd4,3);
  FUN_0800d7fc(&local_38);
  local_1e = 1;
  local_38 = DAT_08010fd8;
  local_1f = 1;
  local_2c = 0;
  local_20 = 0;
  local_24 = 0x3000;
  local_34 = 0;
  local_30 = puVar7;
  uStack_28 = uVar6;
  FUN_0800d6d6(uVar1,3,&local_38);
  FUN_0800d680(uVar1,3);
  FUN_0800d7c4(uVar1,3);
  FUN_0800d74e(uVar1,3,2);
  FUN_0800d660(uVar1,3);
  return;
}


/* 08005d30 FUN_08005d30 */

void FUN_08005d30(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  
  uVar1 = DAT_08005d58;
  iVar2 = FUN_0800d77a(DAT_08005d58,4,2);
  if (iVar2 == 0) {
    return;
  }
  FUN_0800d76e(uVar1,4,1);
  uVar1 = DAT_08010e48;
  iVar3 = FUN_0800d816(DAT_08010e48,4);
  FUN_0800d6a0(uVar1,4);
  FUN_0800d7fc(aiStack_30);
  iVar2 = DAT_08010e4c;
  uStack_16 = 0;
  iStack_28 = DAT_08010e4c;
  uStack_17 = 1;
  uStack_24 = 0;
  uStack_20 = 300;
  aiStack_30[0] = DAT_08010e50;
  uStack_18 = 0;
  uStack_1c = 0x3000;
  FUN_0800d6d6(uVar1,4,aiStack_30);
  FUN_0800d680(uVar1,4);
  FUN_0800d7c4(uVar1,4);
  FUN_08011280(DAT_08010e50 + -4,0x40);
  FUN_0800d74e(uVar1,4,2);
  FUN_0800d660(uVar1,4);
  *(undefined1 *)(DAT_08010e54 + 1) = 1;
  for (uVar4 = 0; uVar4 < 300U - iVar3; uVar4 = uVar4 + 1) {
    FUN_0800ace8(DAT_08010e58,*(undefined1 *)(iVar2 + uVar4));
  }
  FUN_0800a314();
  return;
}


/* 08005d5c vec12_08005d5c */

void vec12_08005d5c(void)

{
  return;
}


/* 08005d5e vec22_08005d5e */

void vec22_08005d5e(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d944(1);
  if (iVar1 == 0) {
    return;
  }
  FUN_080062ac();
  FUN_0800d938(1);
  return;
}


/* 08005d7a vec56_08005d7a */

void vec56_08005d7a(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d944(0x400);
  if (iVar1 != 0) {
    FUN_080111d0();
    FUN_0800d938(0x400);
  }
  iVar1 = FUN_0800d944(0x800);
  if (iVar1 == 0) {
    return;
  }
  FUN_0800c7e8();
  FUN_0800d938(0x800);
  return;
}


/* 08005db0 vec23_08005db0 */

void vec23_08005db0(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d944(2);
  if (iVar1 == 0) {
    return;
  }
  FUN_0800e51c();
  FUN_0800d938(2);
  return;
}


/* 08005dcc vec39_08005dcc */

void vec39_08005dcc(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d944(0x100);
  if (iVar1 == 0) {
    return;
  }
  FUN_0800cd04();
  FUN_0800cd44();
  FUN_0800d938(0x100);
  return;
}


/* 08005df0 vec03_08005df0 */

void vec03_08005df0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_08005e24;
  puVar1 = (uint *)(DAT_08005e24 + 0xe8);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_080095e0();
  *puVar1 = *puVar1 | 1;
  *(undefined1 *)(iVar2 + 0x2a5) = 7;
  *(undefined1 *)(iVar2 + 0x2a6) = 1;
  FUN_080095e0();
  FUN_08009aa8();
  FUN_08007884();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08005e28 vec04_08005e28 */

void vec04_08005e28(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_08005e5c;
  puVar1 = (uint *)(DAT_08005e5c + 0xe8);
  *puVar1 = *puVar1 & 0xfffffffe;
  FUN_080095e0();
  *puVar1 = *puVar1 | 1;
  *(undefined1 *)(iVar2 + 0x2a5) = 7;
  *(undefined1 *)(iVar2 + 0x2a6) = 2;
  FUN_080095e0();
  FUN_08009aa8();
  FUN_08007884();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08005e60 vec02_08005e60 */

void vec02_08005e60(void)

{
  return;
}


/* 08005e62 FUN_08005e62 */

void FUN_08005e62(uint param_1,char param_2)

{
  if ((int)param_1 < 0) {
    *(char *)((param_1 & 0xf) + 0xe000ed14) = param_2 << 4;
    return;
  }
  *(char *)(param_1 + 0xe000e400) = param_2 << 4;
  return;
}


/* 08005e82 vec14_08005e82 */

void vec14_08005e82(void)

{
  return;
}


/* 08005e84 vec57_08005e84 */

void vec57_08005e84(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_0800d944(0x20000);
  if (iVar1 == 0) {
    return;
  }
  FUN_0800fdb0(2);
  FUN_0800d938(0x20000);
  iVar1 = FUN_08006e70(10);
  if (iVar1 == 0x3344) {
    return;
  }
  iVar1 = FUN_0800fd7c();
  FUN_0800fdd0();
  iVar2 = FUN_08006e70(4);
  uVar3 = FUN_08006e70(5);
  uVar3 = (uVar3 | iVar2 << 0x10) + 0x7fff;
  if (0xfff8 < (uVar3 - iVar1) - 6) {
    uVar3 = iVar1 + 0x7fff;
  }
  FUN_0800fbf4(uVar3);
  FUN_0800fdd0();
  *DAT_0800fc88 = *DAT_0800fc88 + 1;
  FUN_08006e9c(4,uVar3 >> 0x10);
  FUN_08006e9c(5,uVar3 & 0xffff);
  iVar1 = FUN_08010088();
  FUN_080100b0(iVar1 + 1);
  return;
}


/* 08005eaa vec19_08005eaa */

void vec19_08005eaa(void)

{
  int iVar1;
  
  iVar1 = FUN_0800d944(0x20000);
  if (iVar1 == 0) {
    return;
  }
  FUN_0800d938(0x20000);
  return;
}


/* 08005ec6 vec11_08005ec6 */

void vec11_08005ec6(void)

{
  return;
}


/* 08005ec8 vec15_08005ec8 */

void vec15_08005ec8(void)

{
  FUN_08010c60();
  if (*DAT_0800d608 < 0xffff) {
    *DAT_0800d608 = *DAT_0800d608 + 1;
  }
  return;
}


/* 08005ed8 FUN_08005ed8 */

void FUN_08005ed8(void)

{
  uint *puVar1;
  uint local_8;
  
  *DAT_08005f34 = *DAT_08005f34 | 0xf00000;
  puVar1 = DAT_08005f38;
  *DAT_08005f38 = *DAT_08005f38 | 1;
  puVar1[1] = puVar1[1] | 0x80;
  local_8 = 0;
  do {
    local_8 = local_8 + 1;
  } while (local_8 < 20000);
  puVar1[1] = 0;
  puVar1[0xb] = 0;
  *puVar1 = *puVar1 & DAT_08005f3c;
  puVar1[2] = 0x9f0000;
  *puVar1 = *puVar1 & 0xfffbffff;
  FUN_08010334();
  *DAT_0800f468 = DAT_08005f40 & DAT_0800f464 | 0x8000000;
  return;
}


/* 08005f44 FUN_08005f44 */

void FUN_08005f44(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  
  uVar2 = DAT_08005f6c;
  uVar1 = DAT_08005f68;
  iVar3 = FUN_080112ac(DAT_08005f6c,DAT_08005f68);
  if (iVar3 == 0) {
    return;
  }
  FUN_08011298(uVar2,uVar1);
  uVar1 = DAT_08010e48;
  iVar4 = FUN_0800d816(DAT_08010e48,4);
  FUN_0800d6a0(uVar1,4);
  FUN_0800d7fc(local_30);
  iVar3 = DAT_08010e4c;
  local_16 = 0;
  local_28 = DAT_08010e4c;
  local_17 = 1;
  local_24 = 0;
  uStack_20 = 300;
  local_30[0] = DAT_08010e50;
  local_18 = 0;
  local_1c = 0x3000;
  FUN_0800d6d6(uVar1,4,local_30);
  FUN_0800d680(uVar1,4);
  FUN_0800d7c4(uVar1,4);
  FUN_08011280(DAT_08010e50 + -4,0x40);
  FUN_0800d74e(uVar1,4,2);
  FUN_0800d660(uVar1,4);
  *(undefined1 *)(DAT_08010e54 + 1) = 1;
  for (uVar5 = 0; uVar5 < 300U - iVar4; uVar5 = uVar5 + 1) {
    FUN_0800ace8(DAT_08010e58,*(undefined1 *)(iVar3 + uVar5));
  }
  FUN_0800a314();
  return;
}


/* 08005f70 vec35_08005f70 */

void vec35_08005f70(void)

{
  FUN_0800aee0();
  *(undefined4 *)(DAT_08005f84 + 8) = 1;
  return;
}


/* 08005f88 thunk_FUN_0800ad1c */

void thunk_FUN_0800ad1c(void)

{
  FUN_0800ad1c();
  return;
}


/* 08005f8c vec06_08005f8c */

void vec06_08005f8c(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08005f8e thunk_FUN_08005f96 */

void thunk_FUN_08005f96(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -4) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  }
  return;
}


/* 08005f96 FUN_08005f96 */

void FUN_08005f96(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -4) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_2 = uVar1;
    param_2 = param_2 + 1;
  }
  return;
}


/* 08005fca FUN_08005fca */

void FUN_08005fca(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 * 0x100000 - 0x100000;
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xff0fffff;
    *(uint *)(param_1 + 0x2c) = uVar1 & 0xf00000 | *(uint *)(param_1 + 0x2c);
    return;
  }
  if (param_2 == 2) {
    *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffcfffff;
    *(uint *)(param_1 + 0x38) = uVar1 & 0x300000 | *(uint *)(param_1 + 0x38);
  }
  return;
}


/* 08006000 FUN_08006000 */

void FUN_08006000(void)

{
  int iVar1;
  ushort uVar2;
  
  FUN_0800fb5c(0x609);
  FUN_0800f7e0(5);
  iVar1 = DAT_080060a4;
  FUN_08006238(DAT_080060a4,0x100);
  FUN_080060a8(iVar1,0);
  FUN_080061f4(0);
  FUN_08005fca(iVar1,2,3);
  FUN_0800617e(iVar1,0,4,7);
  FUN_0800617e(iVar1,1,7);
  FUN_0800617e(iVar1,2,8,7);
  FUN_08006148(iVar1,2,0x7000);
  FUN_08006112(iVar1,2,1);
  FUN_0800620c(iVar1,0);
  FUN_08006102(iVar1);
  for (uVar2 = 0; uVar2 < 2000; uVar2 = uVar2 + 1) {
  }
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 8;
  do {
  } while (*(int *)(iVar1 + 8) << 0x1c < 0);
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 4;
  do {
  } while (*(int *)(iVar1 + 8) << 0x1d < 0);
  return;
}


/* 080060a8 FUN_080060a8 */

void FUN_080060a8(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xfffff7ff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8) | 0x800;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}


/* 080060bc FUN_080060bc */

void FUN_080060bc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  param_1 = param_1 + DAT_080060f4;
  if (param_1 == 0) {
    uVar2 = 0x309;
  }
  else if (param_1 == 0x400) {
    uVar2 = 0x30a;
  }
  else {
    if (param_1 != 0x1800) {
      return;
    }
    uVar2 = 0x30f;
  }
  FUN_0800fb94(uVar2);
  puVar1 = (uint *)(DAT_0800fb90 + (uVar2 >> 6));
  *puVar1 = *puVar1 & ~(1 << (uVar2 & 0x1f));
  return;
}


/* 080060f8 FUN_080060f8 */

void FUN_080060f8(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  return;
}


/* 08006102 FUN_08006102 */

void FUN_08006102(int param_1)

{
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  return;
}


/* 08006112 FUN_08006112 */

void FUN_08006112(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    if (param_2 << 0x1f != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffefffff;
    }
    if (-1 < param_2 << 0x1e) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8) & 0xffff7fff;
  }
  else {
    if (param_2 << 0x1f != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100000;
    }
    if (-1 < param_2 << 0x1e) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8) | 0x8000;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}


/* 08006148 FUN_08006148 */

void FUN_08006148(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *(uint *)(param_1 + 8) & 0xfff1ffff;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8) & 0xffff8fff;
  }
  *(uint *)(param_1 + 8) = uVar1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_3;
  return;
}


/* 08006168 FUN_08006168 */

void FUN_08006168(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & ~param_2;
  return;
}


/* 08006170 FUN_08006170 */

bool FUN_08006170(uint *param_1,uint param_2)

{
  return (*param_1 & param_2) != 0;
}


/* 0800617e FUN_0800617e */

void FUN_0800617e(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = ((param_2 - ((*(uint *)(param_1 + 0x38) & 0x3fffff) >> 0x14)) + 3) * 5;
  *(uint *)(param_1 + 0x38) =
       param_3 << (uVar1 & 0xff) | *(uint *)(param_1 + 0x38) & ~(0x1f << (uVar1 & 0xff));
  if (param_3 < 10) {
    *(uint *)(param_1 + 0x10) =
         param_4 << (param_3 * 3 & 0xff) | *(uint *)(param_1 + 0x10) & ~(7 << (param_3 * 3 & 0xff));
  }
  else if (param_3 < 0x12) {
    uVar1 = (param_3 - 10) * 3;
    *(uint *)(param_1 + 0xc) =
         param_4 << (uVar1 & 0xff) | *(uint *)(param_1 + 0xc) & ~(7 << (uVar1 & 0xff));
    return;
  }
  return;
}


/* 080061ce FUN_080061ce */

undefined2 FUN_080061ce(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x3c);
  }
  else if (param_2 == 1) {
    uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x40);
  }
  else if (param_2 == 2) {
    uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x44);
  }
  else if (param_2 == 3) {
    uVar1 = (undefined2)*(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* 080061f4 FUN_080061f4 */

void FUN_080061f4(uint param_1)

{
  uint *puVar1;
  
  puVar1 = DAT_08006208;
  *DAT_08006208 = *DAT_08006208 & 0xfff0ffff;
  *puVar1 = *puVar1 | param_1;
  return;
}


/* 0800620c FUN_0800620c */

void FUN_0800620c(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x80);
  *puVar1 = *puVar1 & 0xffffcfff;
  *puVar1 = *puVar1 | param_2;
  return;
}


/* 0800621e FUN_0800621e */

void FUN_0800621e(int param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x400000;
  }
  if ((int)(param_2 << 0x1e) < 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x200000;
  }
  return;
}


/* 08006238 FUN_08006238 */

void FUN_08006238(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    if (param_2 * 0x800000 < 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
    }
    if (param_2 << 0x15 < 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffbff;
    }
    if (-1 < param_2 << 0x1e) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8) & 0xfffffffd;
  }
  else {
    if (param_2 * 0x800000 < 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
    }
    if (param_2 << 0x15 < 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
    }
    if (-1 < param_2 << 0x1e) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 8) | 2;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}


/* 0800628c FUN_0800628c */

void FUN_0800628c(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  
  *(uint *)(DAT_0800629c + 0xf4) = *(uint *)(DAT_0800629c + 0xf4) & 0xfffffffc;
  pbVar1 = (byte *)(DAT_0800f2dc + 0xf4);
  FUN_0800d628((*pbVar1 & 3) >> 1);
  bVar2 = *pbVar1;
  FUN_0800fb5c(0x603);
  uVar3 = DAT_0800cc34;
  FUN_0800df68(DAT_0800cc34,0x10,3,2,unaff_r4);
  if ((bVar2 & 1) == 0) {
    FUN_0800ded8(uVar3,2);
    return;
  }
  FUN_0800dedc();
  return;
}


/* 080062a0 FUN_080062a0 */

void FUN_080062a0(void)

{
  *DAT_080062a8 = 0;
  return;
}


/* 080062ac FUN_080062ac */

void FUN_080062ac(void)

{
  *DAT_080062c8 = 1;
  FUN_08010134(0);
  FUN_0800d918(1);
  *(int *)(DAT_0800a310 + 0x24) = *(int *)(DAT_0800a310 + 0x24) + 1;
  return;
}


/* 080062cc FUN_080062cc */

void FUN_080062cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800abaa(0,0x9b,0,&uStack_10);
  return;
}


/* 080062dc FUN_080062dc */

void FUN_080062dc(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_08006304;
  FUN_0800df68(DAT_08006304,4,3,0x800);
  FUN_0800e00e(uVar1,0x800);
  return;
}


/* 08006308 FUN_08006308 */

void FUN_08006308(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_0800e200(DAT_08006320);
  FUN_0800e2bc();
  FUN_0800dee0();
  FUN_0800fb5c(0x715);
  uVar1 = DAT_0800e1f0;
  FUN_0800e0b8(DAT_0800e1f0,DAT_0800e1ec,0);
  FUN_0800e292(uVar1,0,0,8,unaff_r4,unaff_lr);
  FUN_0800e230(uVar1);
  FUN_0800e090(uVar1,1);
  return;
}


/* 08006324 FUN_08006324 */

void FUN_08006324(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_0800abaa(0,0x9c,0,&uStack_10);
  return;
}


/* 08006334 FUN_08006334 */

void FUN_08006334(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_8;
  
  if ((*(byte *)(DAT_0800635c + 0xe8) & 3) >> 1 == 0 && -1 < (char)*(byte *)(DAT_0800635c + 0xe8)) {
    if (param_1 == 0) {
      uVar1 = 0x9a;
    }
    else {
      uVar1 = 0x99;
    }
    uStack_8 = param_4;
    FUN_0800abaa(0,uVar1,0,&uStack_8);
  }
  return;
}


/* 08006360 FUN_08006360 */

void FUN_08006360(void)

{
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_080063b0,4,3,1);
  FUN_0800fb5c(0x600);
  FUN_0800f3b0(6,2,0);
  FUN_0800df10(0);
  FUN_0800d8b0(1,0);
  FUN_0800d938(1);
  FUN_0800f4b8(0);
  FUN_0800f4b8(1);
  return;
}


/* 080063b4 FUN_080063b4 */

void FUN_080063b4(void)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = DAT_080063d8;
  if (*(char *)(DAT_080063d8 + 1) == '\x02') {
    uVar2 = *(short *)(DAT_080063d8 + 10) + 1;
    *(ushort *)(DAT_080063d8 + 10) = uVar2;
    if (6000 < uVar2) {
      *(undefined1 *)(iVar1 + 1) = 0;
      return;
    }
  }
  else {
    *(undefined2 *)(DAT_080063d8 + 10) = 0;
  }
  return;
}


/* 080063dc FUN_080063dc */

void FUN_080063dc(void)

{
  undefined1 auStack_30 [20];
  undefined1 auStack_1c [24];
  
  if (*(char *)(DAT_08006404 + 2) != '\0') {
    FUN_0800afd6(auStack_1c,DAT_08006404);
    FUN_08004dfe(auStack_30,auStack_1c,0x14);
    FUN_0800c964(auStack_30);
  }
  return;
}


/* 08006408 FUN_08006408 */

void FUN_08006408(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined4 local_28;
  undefined1 local_1f;
  undefined1 local_1e [10];
  
  sVar3 = 0;
  local_28._2_2_ =
       (ushort)(local_28 >> 0x10) & 0xe007 | (ushort)(((*param_1 >> 0x18 & 0x1f) << 0x13) >> 0x10) |
       (ushort)(((*param_1 >> 0x13 & 0x1f) << 0x18) >> 0x10);
  local_28 = CONCAT22(local_28._2_2_,(short)*param_1);
  if (param_3 < 9) {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
      local_1e[uVar1] = *(undefined1 *)(param_2 + uVar1);
    }
    local_28 = (local_28 & 0xfff8ffff) + 0x20000;
    local_1f = (char)param_3;
    FUN_0800c964(&local_28);
  }
  else {
    local_1f = 1;
    local_28 = (local_28 & 0xfff8ffff) + 0x40000;
    local_1e[0] = (char)param_3;
    FUN_0800c964(&local_28);
    while (param_3 != 0) {
      uVar1 = 0;
      if (param_3 < 9) {
        for (; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
          local_1e[uVar1] = *(undefined1 *)(param_2 + uVar1);
        }
        local_1f = (undefined1)param_3;
        local_28._2_2_ = (ushort)((local_28 & 0xfff8ffff) + 0x60000 >> 0x10);
        param_3 = 0;
      }
      else {
        do {
          uVar2 = uVar1 + 1 & 0xffff;
          local_1e[uVar1] = *(undefined1 *)(param_2 + uVar1);
          uVar1 = uVar2;
        } while (uVar2 < 8);
        local_28._2_2_ = (ushort)((local_28 & 0xfff8ffff) + 0x50000 >> 0x10);
        local_1f = 8;
        param_3 = param_3 - 8 & 0xffff;
        param_2 = param_2 + 8;
      }
      local_28 = CONCAT22(local_28._2_2_,sVar3);
      sVar3 = sVar3 + 1;
      FUN_0800b0de(&local_28,DAT_080064e8);
    }
  }
  return;
}


/* 080064ec FUN_080064ec */

void FUN_080064ec(short *param_1)

{
  short sVar1;
  char *pcVar2;
  
  if ((char)param_1[4] == '\x01') {
    sVar1 = *param_1;
    if (sVar1 == 0x3005) {
      if ((char)param_1[5] == '\x01') {
        DAT_08006568[1] = '\0';
        return;
      }
      if ((char)param_1[5] == '\0') {
        DAT_08006568[1] = '\x02';
        return;
      }
    }
    else {
      if (sVar1 == 0x3e03) {
        *DAT_08006568 = '\x03';
        return;
      }
      if (sVar1 == 0x3e04) {
        if (*DAT_08006568 == '\x02') {
          *DAT_0800656c = 0;
          *(uint *)(DAT_08006570 + 0xe4) = *(uint *)(DAT_08006570 + 0xe4) | 8;
          return;
        }
        if (*DAT_08006568 == '\0') {
          *DAT_08006568 = '\x01';
          pcVar2 = DAT_08006568;
          *(uint *)(DAT_08006568 + 0x10) =
               *(uint *)(param_1 + 5) & 0xffffff | (uint)*(byte *)((int)param_1 + 0xd) << 0x18;
          *(uint *)(pcVar2 + 0x14) =
               *(uint *)(param_1 + 7) & 0xffffff | (uint)*(byte *)((int)param_1 + 0x11) << 0x18;
        }
      }
    }
  }
  return;
}


/* 08006574 FUN_08006574 */

void FUN_08006574(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 local_20;
  undefined1 local_17;
  undefined1 local_16 [10];
  
  uVar1 = local_20 >> 0x10;
  local_20 = CONCAT22((ushort)uVar1 & 0xe007 | (ushort)(((*param_1 >> 0x18 & 0x1f) << 0x13) >> 0x10)
                      | (ushort)(((*param_1 >> 0x13 & 0x1f) << 0x18) >> 0x10),(short)*param_1);
  if (param_3 < 9) {
    for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
      local_16[uVar1] = *(undefined1 *)(param_2 + uVar1);
    }
    local_17 = (undefined1)param_3;
    local_20 = (local_20 & 0xfff8ffff) + 0x30000;
    FUN_0800c964(&local_20);
  }
  return;
}


/* 080065c8 FUN_080065c8 */

void FUN_080065c8(ushort *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  char local_160 [100];
  char local_fc [104];
  undefined1 local_94 [112];
  
  puVar1 = DAT_08006a28;
  uVar4 = 0;
  pcVar9 = local_160;
  if ((char)param_1[4] != '\x01') {
    return;
  }
  do {
    local_160[uVar4] = '\0';
    local_94[uVar4] = 0;
    local_fc[uVar4] = '\0';
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 0x50);
  iVar5 = FUN_08007b88(*DAT_08006a28);
  puVar2 = DAT_08006a2c;
  iVar6 = FUN_08007b88(*DAT_08006a2c);
  if (iVar5 != 0) {
    FUN_08007d2c(*puVar1,local_160,0);
  }
  if (iVar6 != 0) {
    FUN_08007d2c(*puVar2,local_94,0);
  }
  uVar10 = (uint)*param_1;
  cVar7 = '0';
  uVar4 = 8;
  if (uVar10 == 0x6011) {
    iVar5 = (uint)*(ushort *)(DAT_08006a30 + 0xb6) * 5;
    uVar4 = (int)((uint)*(byte *)(DAT_08006a30 + 0x55) * (iVar5 + -0x32)) / 1000;
    if (uVar4 < 0x31) {
      if (uVar4 < 0x2d) {
        cVar7 = '$';
      }
      else {
        cVar7 = '+';
      }
    }
    local_fc[1] = '\x14';
    local_fc[2] = (char)(((uint)*(byte *)(DAT_08006a30 + 0x55) * (iVar5 + 0x32)) / 1000);
    local_fc[3] = *(byte *)(DAT_08006a30 + 0xba) * '\x14';
    local_fc[4] = (char)((uint)*(byte *)(DAT_08006a30 + 0xba) * 5 >> 6);
    local_fc[5] = 0xb2;
    local_fc[6] = 0xc;
    local_fc[7] = *(byte *)(DAT_08006a30 + 0xbb) * '\x14';
    local_fc[8] = (char)((uint)*(byte *)(DAT_08006a30 + 0xbb) * 5 >> 6);
    builtin_strncpy(local_fc + 0xb,"\x05\x05\x05",4);
    local_fc[9] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x6c) >> 8);
    local_fc[10] = (char)*(undefined2 *)(DAT_08006a30 + 0x6c);
    uVar4 = 0xf;
    local_fc[0] = cVar7;
  }
  else if (uVar10 < 0x6012) {
    if (uVar10 == 0x6004) {
      uVar4 = 0;
      uVar10 = 0;
      if (iVar5 == 0) {
        do {
          local_160[uVar4] = (&DAT_08006a38)[uVar10];
          uVar10 = uVar10 + 1 & 0xff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 0xf);
        local_160[uVar4] = ' ';
        uVar4 = uVar4 + 1 & 0xffff;
        uVar10 = 0;
        do {
          local_160[uVar4] = s_BAFANG_08006a48[uVar10];
          uVar10 = uVar10 + 1 & 0xff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 7);
      }
      else {
        do {
          if (local_160[uVar10 + 0xc] != '\0') {
            local_160[uVar10] = local_160[uVar10 + 0xc];
            uVar4 = uVar4 + 1 & 0xffff;
          }
          uVar10 = uVar10 + 1 & 0xffff;
        } while (uVar10 < 0xc);
        cVar7 = '\0';
        uVar10 = 0;
        do {
          if (local_160[uVar10] == '\0') break;
          cVar7 = cVar7 + '\x01';
          uVar10 = uVar10 + 1 & 0xff;
        } while (uVar10 < 0xc);
        if (cVar7 == '\0') {
          uVar4 = 0;
          do {
            local_160[uVar4] = '\0';
            uVar4 = uVar4 + 1 & 0xffff;
          } while (uVar4 < 0x50);
          uVar10 = 0;
          do {
            local_160[uVar4] = (&DAT_08006a38)[uVar10];
            uVar10 = uVar10 + 1 & 0xff;
            uVar4 = uVar4 + 1 & 0xffff;
          } while (uVar10 < 0xf);
          local_160[uVar4] = ' ';
          uVar4 = uVar4 + 1 & 0xffff;
          uVar10 = 0;
          do {
            local_160[uVar4] = s_BAFANG_08006a48[uVar10];
            uVar10 = uVar10 + 1 & 0xff;
            uVar4 = uVar4 + 1 & 0xffff;
          } while (uVar10 < 7);
        }
      }
      goto LAB_08006816;
    }
    if (uVar10 < 0x6005) {
      if (uVar10 == 0x6001) {
        uVar4 = 0;
        uVar10 = 0;
        do {
          local_fc[uVar4] = (&DAT_08006a38)[uVar10];
          uVar10 = uVar10 + 1 & 0xff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 0xe);
        local_fc[uVar4] = ' ';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = 'F';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = 'V';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = '4';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = '.';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = '2';
        uVar4 = uVar4 + 1 & 0xffff;
      }
      else {
        if (0x6001 < uVar10) {
          if (uVar10 == 0x6002) {
            uVar4 = 0;
            uVar10 = 0;
            do {
              local_160[uVar4] = (&DAT_08006a38)[uVar10];
              uVar10 = uVar10 + 1 & 0xff;
              uVar4 = uVar4 + 1 & 0xffff;
            } while (uVar10 < 0xf);
          }
          else {
            if (uVar10 != 0x6003) {
              return;
            }
            uVar4 = 0;
            uVar10 = 0;
            if (iVar5 == 0) {
              do {
                local_160[uVar4] = (&DAT_08006a38)[uVar10];
                uVar10 = uVar10 + 1 & 0xff;
                uVar4 = uVar4 + 1 & 0xffff;
              } while (uVar10 < 0xf);
            }
            else {
              do {
                if (local_160[uVar10 + 0x18] != '\0') {
                  local_160[uVar10] = local_160[uVar10 + 0x18];
                  uVar4 = uVar4 + 1 & 0xffff;
                }
                uVar10 = uVar10 + 1 & 0xffff;
              } while (uVar10 < 0x18);
              cVar7 = '\0';
              uVar10 = 0;
              do {
                if (local_160[uVar10] == '\0') break;
                cVar7 = cVar7 + '\x01';
                uVar10 = uVar10 + 1 & 0xff;
              } while (uVar10 < 0x18);
              if (cVar7 == '\0') {
                uVar4 = 0;
                do {
                  local_160[uVar4] = '\0';
                  uVar4 = uVar4 + 1 & 0xffff;
                } while (uVar4 < 0x50);
                uVar10 = 0;
                do {
                  local_160[uVar4] = (&DAT_08006a38)[uVar10];
                  uVar10 = uVar10 + 1 & 0xff;
                  uVar4 = uVar4 + 1 & 0xffff;
                } while (uVar10 < 0xf);
              }
            }
          }
          goto LAB_08006816;
        }
        if (uVar10 == 0x4000) {
          if ((((char)param_1[5] == '\x01') && (*(char *)((int)param_1 + 0xb) == 'B')) &&
             ((char)param_1[6] == '\x04')) {
            *(undefined1 *)(DAT_08006a30 + 0x2a8) = 1;
            FUN_0800deac();
            return;
          }
          local_fc[0] = '\0';
          FUN_08006574(param_1,local_fc,1);
          return;
        }
        if (uVar10 != 0x6000) {
          return;
        }
        uVar4 = 0;
        uVar10 = 0;
        do {
          local_fc[uVar4] = (&DAT_08006a38)[uVar10];
          uVar10 = uVar10 + 1 & 0xff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 0xe);
        local_fc[uVar4] = ' ';
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = 'V';
        pbVar8 = (byte *)*DAT_08006a34;
        uVar4 = uVar4 + 1 & 0xffff;
        if (9 < *pbVar8) {
          local_fc[uVar4] = *pbVar8 / 10 + 0x30;
          uVar4 = uVar4 + 1 & 0xffff;
        }
        local_fc[uVar4] = *pbVar8 % 10 + 0x30;
        uVar4 = uVar4 + 1 & 0xffff;
        local_fc[uVar4] = '.';
        uVar4 = uVar4 + 1 & 0xffff;
        if (9 < pbVar8[1]) {
          local_fc[uVar4] = pbVar8[1] / 10 + 0x30;
          uVar4 = uVar4 + 1 & 0xffff;
        }
        cVar7 = pbVar8[1] % 10 + 0x30;
      }
      local_fc[uVar4] = cVar7;
      uVar4 = uVar4 + 1 & 0xffff;
    }
    else {
      if (uVar10 == 0x6005) {
        uVar4 = 0;
        uVar10 = 0;
        do {
          local_160[uVar4] = s_D_POWER_CORE_08006a50[uVar10];
          uVar10 = uVar10 + 1 & 0xff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 0xd);
        goto LAB_08006816;
      }
      if (uVar10 == 0x6006) {
        uVar4 = 0;
        uVar10 = 0;
        if (iVar5 == 0) {
          do {
            local_160[uVar4] = (&DAT_08006a60)[uVar10];
            uVar10 = uVar10 + 1 & 0xffff;
            uVar4 = uVar4 + 1 & 0xffff;
          } while (uVar10 < 0x11);
        }
        else {
          do {
            if (local_160[uVar10 + 0x38] != '\0') {
              local_160[uVar4] = local_160[uVar10 + 0x38];
              uVar4 = uVar4 + 1 & 0xffff;
            }
            uVar10 = uVar10 + 1 & 0xffff;
          } while (uVar10 < 0x18);
        }
        goto LAB_08006816;
      }
      if (uVar10 == 0x6007) {
        builtin_strncpy(local_fc + 2,"00000000",8);
        local_fc[1] = (*DAT_08006a74 & 0xf) + 0x30;
        uVar4 = 10;
        local_fc[0] = (*DAT_08006a74 >> 4) + 0x30;
      }
      else {
        if (uVar10 != 0x6008) {
          return;
        }
        uVar4 = 0;
        iVar5 = *DAT_08006a34;
        uVar10 = 0;
        do {
          local_fc[uVar4] = *(char *)(iVar5 + uVar10 + 4);
          uVar10 = uVar10 + 1 & 0xffff;
          uVar4 = uVar4 + 1 & 0xffff;
        } while (uVar10 < 3);
      }
    }
  }
  else {
    if (uVar10 - 0x6011 == 0x3f3) {
      local_fc[0] = (char)*(undefined2 *)(DAT_08006a30 + 0x13c);
      local_fc[1] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x13c) >> 8);
      local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x13e);
      local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x13e) >> 8);
      local_fc[4] = (char)*(undefined2 *)(DAT_08006a30 + 0x140);
      local_fc[5] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x140) >> 8);
      uVar3 = *(undefined2 *)(DAT_08006a30 + 0x142);
LAB_080067c8:
      local_fc[6] = (char)uVar3;
      local_fc[7] = (char)((ushort)uVar3 >> 8);
    }
    else {
      if ((int)(uVar10 - 0x6011) < 0x3f4) {
        if (uVar10 == 0x6400) {
          local_fc[1] = '\x04';
          local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x6c);
          uVar4 = 4;
          local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x6c) >> 8);
          local_fc[0] = *(char *)(DAT_08006a30 + 0x55);
        }
        else {
          if (uVar10 != 0x6401) {
            if (uVar10 == 0x6402) {
              local_fc[0] = (char)*(undefined2 *)(DAT_08006a30 + 300);
              local_fc[1] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 300) >> 8);
              local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x12e);
              local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x12e) >> 8);
              local_fc[4] = (char)*(undefined2 *)(DAT_08006a30 + 0x130);
              local_fc[5] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x130) >> 8);
              uVar3 = *(undefined2 *)(DAT_08006a30 + 0x132);
            }
            else {
              if (uVar10 != 0x6403) {
                return;
              }
              local_fc[0] = (char)*(undefined2 *)(DAT_08006a30 + 0x134);
              local_fc[1] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x134) >> 8);
              local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x136);
              local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x136) >> 8);
              local_fc[4] = (char)*(undefined2 *)(DAT_08006a30 + 0x138);
              local_fc[5] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x138) >> 8);
              uVar3 = *(undefined2 *)(DAT_08006a30 + 0x13a);
            }
            goto LAB_080067c8;
          }
          local_fc[1] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x304) >> 8);
          local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x298);
          local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x298) >> 8);
          local_fc[4] = (char)*(undefined2 *)(DAT_08006a30 + 0x294);
          local_fc[5] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x294) >> 8);
          uVar4 = 6;
          local_fc[0] = (char)*(undefined2 *)(DAT_08006a30 + 0x304);
        }
        goto LAB_08006814;
      }
      if (uVar10 == 0x6405) {
        local_fc[0] = (char)*(undefined2 *)(DAT_08006a30 + 0x144);
        local_fc[1] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x144) >> 8);
        local_fc[2] = (char)*(undefined2 *)(DAT_08006a30 + 0x146);
        local_fc[3] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x146) >> 8);
        local_fc[4] = (char)*(undefined2 *)(DAT_08006a30 + 0x148);
        local_fc[5] = (char)((ushort)*(undefined2 *)(DAT_08006a30 + 0x148) >> 8);
        uVar3 = *(undefined2 *)(DAT_08006a30 + 0x14a);
        goto LAB_080067c8;
      }
      if (uVar10 != 0x640b) {
        if (uVar10 != 0x6415) {
          return;
        }
        builtin_strncpy(local_fc,"DONGXIN",7);
        uVar4 = 7;
        goto LAB_08006814;
      }
      local_fc[0] = 'T';
      local_fc[1] = '\x15';
      local_fc[4] = 0xf4;
      local_fc[2] = 0;
      local_fc[5] = 1;
      local_fc[7] = '\0';
      local_fc[3] = '\0';
      local_fc[6] = 0;
    }
  }
LAB_08006814:
  pcVar9 = local_fc;
LAB_08006816:
  FUN_08006408(param_1,pcVar9,uVar4);
  return;
}


/* 08006c10 FUN_08006c10 */

void FUN_08006c10(uint *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  char local_88 [104];
  
  uVar8 = 0;
  if ((char)param_1[2] == '\x01') {
    if (((*param_1 & 0x70000) == 0) &&
       (((uVar5 = *param_1 & 0xffff, uVar5 == 0x6003 || (uVar5 == 0x6004)) || (uVar5 == 0x6005)))) {
      FUN_08006408(param_1,local_88,0);
    }
    iVar3 = DAT_08006e00;
    iVar2 = DAT_08006dfc;
    uVar5 = *param_1;
    if ((uVar5 & 0x7ffff) >> 0x10 == 4) {
      *(undefined2 *)(DAT_08006dfc + 8) = 0;
      *(short *)(iVar2 + 4) = (short)uVar5;
      *(undefined2 *)(iVar2 + 6) = 0;
      for (; uVar8 < *(byte *)((int)param_1 + 9); uVar8 = uVar8 + 1 & 0xffff) {
        uVar7 = *(ushort *)(iVar2 + 8);
        *(undefined1 *)(iVar3 + (uint)uVar7) = *(undefined1 *)((int)param_1 + uVar8 + 10);
        *(ushort *)(iVar2 + 8) = uVar7 + 1;
      }
      FUN_08006408(param_1,local_88,0);
    }
    uVar8 = 0;
    if ((*param_1 & 0x7ffff) >> 0x10 == 5) {
      uVar7 = *(ushort *)(iVar2 + 6);
      if ((*param_1 & 0xffff) == (uint)uVar7) {
        for (; uVar8 < *(byte *)((int)param_1 + 9); uVar8 = uVar8 + 1 & 0xffff) {
          uVar1 = *(ushort *)(iVar2 + 8);
          *(undefined1 *)(iVar3 + (uint)uVar1) = *(undefined1 *)((int)param_1 + uVar8 + 10);
          if (uVar1 < 0x32) {
            *(ushort *)(iVar2 + 8) = uVar1 + 1;
          }
        }
        *(ushort *)(iVar2 + 6) = uVar7 + 1;
        FUN_08006408(param_1,local_88,0);
      }
      else {
        FUN_08006574(param_1,local_88,0);
      }
    }
    uVar8 = 0;
    if ((*param_1 & 0x7ffff) >> 0x10 == 6) {
      uVar7 = *(ushort *)(iVar2 + 6);
      if ((*param_1 & 0xffff) == (uint)uVar7) {
        for (; uVar8 < *(byte *)((int)param_1 + 9); uVar8 = uVar8 + 1 & 0xffff) {
          uVar1 = *(ushort *)(iVar2 + 8);
          *(undefined1 *)(iVar3 + (uint)uVar1) = *(undefined1 *)((int)param_1 + uVar8 + 10);
          if (uVar1 < 0x32) {
            *(ushort *)(iVar2 + 8) = uVar1 + 1;
          }
        }
        *(ushort *)(iVar2 + 6) = uVar7 + 1;
        FUN_08006408(param_1,local_88,uVar8);
      }
      else {
        FUN_08006574(param_1,local_88,0);
      }
      puVar4 = DAT_08006e04;
      if (*(short *)(iVar2 + 4) == 0x6003) {
        uVar8 = 0;
        do {
          local_88[uVar8] = '\0';
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 0x50);
        iVar6 = FUN_08007b88(*DAT_08006e04);
        if (iVar6 != 0) {
          FUN_08007d2c(*puVar4,local_88,0);
        }
        uVar7 = *(ushort *)(iVar2 + 8);
        if (0x18 < uVar7) {
          uVar7 = 0x18;
          *(undefined2 *)(iVar2 + 8) = 0x18;
        }
        *(char *)(DAT_08006e08 + 0x242) = (char)uVar7;
        uVar8 = 0;
        do {
          if (uVar8 < uVar7) {
            local_88[uVar8 + 0x18] = *(char *)(iVar3 + uVar8);
          }
          else {
            local_88[uVar8 + 0x18] = '\0';
          }
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 0x18);
        FUN_08007dcc(*puVar4,local_88);
      }
      else {
        if (*(short *)(iVar2 + 4) != 0x6004) {
          return;
        }
        uVar8 = 0;
        do {
          local_88[uVar8] = '\0';
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < 0x50);
        iVar6 = FUN_08007b88(*DAT_08006e04);
        if (iVar6 != 0) {
          FUN_08007d2c(*puVar4,local_88,0);
        }
        if (0xc < *(ushort *)(iVar2 + 8)) {
          *(undefined2 *)(iVar2 + 8) = 0xc;
        }
        uVar7 = *(ushort *)(iVar2 + 8);
        for (uVar8 = 0; uVar8 < uVar7; uVar8 = uVar8 + 1 & 0xffff) {
          if (*(char *)(iVar3 + uVar8) != '\0') {
            local_88[uVar8 + 0xc] = *(char *)(iVar3 + uVar8);
          }
        }
        FUN_08007dcc(*puVar4,local_88);
      }
      FUN_08006408(param_1,local_88,0);
    }
  }
  return;
}


/* 08006e0c FUN_08006e0c */

void FUN_08006e0c(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = DAT_08006e5c;
  pbVar4 = DAT_08006e58;
  bVar1 = *DAT_08006e58;
  *DAT_08006e58 = bVar1 + 1;
  uVar2 = *(ushort *)(iVar5 + 0x1b4);
  uVar8 = (uint)uVar2;
  if (10 < (byte)(bVar1 + 1)) {
    *pbVar4 = 0;
    uVar3 = *(ushort *)(iVar5 + 0x1e4);
    uVar7 = (uint)uVar3;
    if ((uVar8 < uVar7) && (10 < (int)(uVar7 - uVar8))) {
      sVar6 = uVar3 - 1;
    }
    else {
      if ((uVar8 <= uVar7) || ((int)(uVar8 - uVar7) < 0xb)) goto LAB_08006e48;
      sVar6 = uVar3 + 1;
    }
    *(short *)(iVar5 + 0x1e4) = sVar6;
  }
LAB_08006e48:
  if (pbVar4[1] < 6) {
    pbVar4[1] = pbVar4[1] + 1;
    *(ushort *)(iVar5 + 0x1e4) = uVar2;
  }
  return;
}


/* 08006e60 FUN_08006e60 */

void FUN_08006e60(void)

{
  FUN_0800f854();
  *(uint *)(DAT_0800f850 + 0x20) = *(uint *)(DAT_0800f850 + 0x20) & 0xfffeffff;
  return;
}


/* 08006e70 FUN_08006e70 */

undefined2 FUN_08006e70(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = DAT_08006e98 + param_1 * 4;
  if (param_1 - 0xbU < 0x20) {
    uVar1 = *(undefined2 *)(iVar2 + 0xc14);
  }
  else if (param_1 - 1U < 10) {
    uVar1 = *(undefined2 *)(iVar2 + 0xc00);
  }
  return uVar1;
}


/* 08006e9c FUN_08006e9c */

void FUN_08006e9c(int param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = DAT_08006ec0 + param_1 * 4;
  if (param_1 - 0xbU < 0x20) {
    *(undefined2 *)(iVar1 + 0xc14) = param_2;
  }
  else if (param_1 - 1U < 10) {
    *(undefined2 *)(iVar1 + 0xc00) = param_2;
    return;
  }
  return;
}


/* 08006ec4 FUN_08006ec4 */

void FUN_08006ec4(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  byte local_48 [2];
  undefined2 local_46 [8];
  byte local_36;
  byte local_35;
  
  uVar7 = 0;
  uVar6 = 0;
  do {
    FUN_08009234(0x2c,uVar6 * 0x14,local_48,0x14);
    iVar3 = DAT_08007008;
    iVar2 = DAT_08007004;
    puVar1 = DAT_08007000;
    if ((local_48[0] != 0x55) || (local_48[1] != 'f')) break;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0xcc);
  if (uVar6 == 0) {
    *DAT_08007000 = 0x55;
    FUN_080091d4(0x2c);
    *puVar1 = 0x55;
    FUN_080091d4(0x2d);
    *puVar1 = 0x55;
    FUN_080091d4(0x2e);
    uVar7 = 0;
    do {
      *(undefined2 *)(iVar2 + uVar7 * 2) = 0;
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < 8);
  }
  else {
    *(ushort *)(DAT_08007008 + 2) = uVar6;
    FUN_08009234(0x2c,(uVar6 - 1) * 0x14,local_48,0x14);
    uVar4 = 0;
    do {
      uVar5 = local_48[uVar4] + uVar7;
      uVar4 = uVar4 + 1 & 0xffff;
      uVar7 = uVar5 & 0xffff;
    } while (uVar4 < 0x12);
    if (((uint)local_36 == uVar7 >> 8) || ((uint)local_35 == (uVar5 & 0xff))) {
      uVar7 = 0;
      do {
        *(undefined2 *)(iVar2 + uVar7 * 2) = local_46[uVar7];
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < 8);
      if (0xcb < *(ushort *)(iVar3 + 2)) {
        *(undefined2 *)(iVar3 + 2) = 0;
        *puVar1 = 0x55;
        FUN_080091d4(0x2c);
        *puVar1 = 0x55;
        FUN_080091d4(0x2d);
        FUN_0800700c();
      }
    }
    else {
      *puVar1 = 0x55;
      FUN_080091d4(0x2c);
      *puVar1 = 0x55;
      FUN_080091d4(0x2d);
      *puVar1 = 0x55;
      FUN_080091d4(0x2e);
      uVar7 = 0;
      do {
        *(undefined2 *)(iVar2 + uVar7 * 2) = 0;
        uVar7 = uVar7 + 1 & 0xffff;
      } while (uVar7 < 8);
    }
  }
  return;
}


/* 0800700c FUN_0800700c */

void FUN_0800700c(void)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte local_38 [19];
  undefined1 uStack_25;
  
  iVar4 = DAT_080070c0;
  puVar3 = DAT_080070bc;
  uVar8 = 0;
  local_38[0] = 0x55;
  local_38[1] = 0x66;
  uVar7 = 0;
  do {
    uVar2 = *(undefined2 *)(DAT_080070b8 + uVar7 * 2);
    iVar6 = uVar7 * 2;
    local_38[iVar6 + 2] = (byte)uVar2;
    uVar7 = uVar7 + 1 & 0xffff;
    local_38[iVar6 + 3] = (byte)((ushort)uVar2 >> 8);
  } while (uVar7 < 8);
  uVar7 = 0;
  do {
    pbVar1 = local_38 + uVar7;
    uVar7 = uVar7 + 1 & 0xff;
    uVar8 = uVar8 + *pbVar1 & 0xffff;
  } while (uVar7 < 0x12);
  local_38[0x12] = (byte)(uVar8 >> 8);
  uStack_25 = (undefined1)uVar8;
  *DAT_080070bc = 0x55;
  iVar6 = FUN_08009250(0x2c,*(short *)(iVar4 + 2) * 0x14,local_38,5);
  puVar5 = DAT_080070c4;
  if ((iVar6 != 0) || (0xca < *(ushort *)(iVar4 + 2))) {
    *(undefined2 *)(iVar4 + 2) = 0;
    *puVar5 = 0x55;
    FUN_080091d4(0x2c);
    *puVar5 = 0x55;
    FUN_080091d4(0x2d);
    *puVar3 = 0x55;
    FUN_08009250(0x2c,*(short *)(iVar4 + 2) * 0x14,local_38,5);
  }
  *(short *)(iVar4 + 2) = *(short *)(iVar4 + 2) + 1;
  return;
}


/* 080070c8 FUN_080070c8 */

void FUN_080070c8(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar1 = DAT_08007124;
  FUN_0800621e(DAT_08007124,2);
  do {
    iVar3 = FUN_08006170(uVar1,4);
  } while (iVar3 == 0);
  uVar2 = FUN_080061ce(uVar1,0);
  iVar3 = DAT_08007128;
  *(undefined2 *)(DAT_08007128 + 6) = uVar2;
  uVar2 = FUN_080061ce(uVar1,1);
  *(undefined2 *)(iVar3 + 8) = uVar2;
  FUN_08006168(uVar1,4);
  FUN_080060f8(uVar1);
  FUN_0800fb40(0x609);
  uVar1 = DAT_0800712c;
  FUN_0800ded8(DAT_0800712c,0x20);
  FUN_0800ded8(uVar1,0x40);
  return;
}


/* 08007130 FUN_08007130 */

void FUN_08007130(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x602);
  uVar1 = DAT_08007190;
  FUN_0800df68(DAT_08007190,0x10,3,0x20);
  FUN_0800dedc(uVar1,0x20);
  FUN_0800df68(uVar1,0,3,0x10);
  FUN_0800df68(uVar1,0x10,3,0x40);
  FUN_0800df68(uVar1,0,3,0x80);
  FUN_0800dedc(uVar1,0x40);
  FUN_0800fb5c(0x609);
  FUN_08006102(DAT_08007194);
  return;
}


/* 08007198 FUN_08007198 */

undefined4 FUN_08007198(void)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = 0;
  do {
    iVar1 = FUN_08004edc();
    if (iVar1 != -1) {
      FUN_08006334(0);
      return 0;
    }
    bVar2 = bVar2 + 1;
    thunk_FUN_0800dce0();
    FUN_0800d968();
  } while (bVar2 < 4);
  return 0xffffffff;
}


/* 080071c8 FUN_080071c8 */

void FUN_080071c8(void)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_26;
  undefined2 local_24;
  short local_22;
  undefined2 local_20;
  byte local_1b;
  
  iVar8 = FUN_080062dc();
  iVar7 = DAT_08007440;
  if (iVar8 == 0) {
    uVar9 = *(uint *)(DAT_08007440 + 0x114) | 0x10;
  }
  else {
    uVar9 = *(uint *)(DAT_08007440 + 0x114) & 0xffffffef;
  }
  *(uint *)(DAT_08007440 + 0x114) = uVar9;
  if ((*(byte *)(iVar7 + 0xe8) & 3) >> 1 != 0 || (char)*(byte *)(iVar7 + 0xe8) < '\0') {
    return;
  }
  iVar8 = FUN_080058d0(0,0,0x14,&local_38);
  if (iVar8 != 0x14) goto LAB_080072d0;
  uVar10 = *(uint *)(iVar7 + 0x100);
  uVar9 = (local_32._1_1_ >> 5 & 1) << 4;
  uVar3 = (local_32._1_1_ >> 6 & 1) << 5;
  uVar15 = uVar10 & 0xffffffcf | uVar9;
  uVar11 = uVar15 | uVar3;
  *(uint *)(iVar7 + 0x100) = uVar11;
  if (local_32 < 0) {
    uVar12 = *(uint *)(iVar7 + 0xfc) | 4;
LAB_08007238:
    *(uint *)(iVar7 + 0xfc) = uVar12;
  }
  else if (-1 < (int)(uVar15 << 0x1b)) {
    uVar12 = *(uint *)(iVar7 + 0xfc) & 0xfffffffb;
    goto LAB_08007238;
  }
  uVar13 = *(uint *)(iVar7 + 0xfc);
  uVar4 = (local_36._1_1_ >> 2 & 1) << 1;
  uVar12 = local_36._1_1_ >> 3 & 1;
  uVar5 = (local_36._1_1_ >> 4 & 1) << 4;
  uVar14 = uVar13 & 0xffffffec | uVar4 | uVar12 | uVar5;
  *(uint *)(iVar7 + 0xfc) = uVar14;
  if (((local_36._1_1_ >> 5 & 1) == 0) && ((local_36._1_1_ >> 6 & 1) == 0)) {
    if (-1 < (int)(uVar15 << 0x1b)) {
      uVar14 = uVar13 & 0xffffffe4 | uVar4 | uVar12 | uVar5;
      goto LAB_08007274;
    }
  }
  else {
    uVar14 = uVar14 | 8;
LAB_08007274:
    *(uint *)(iVar7 + 0xfc) = uVar14;
  }
  if ((short)local_36 < 0) {
    uVar15 = *(uint *)(iVar7 + 0xfc) | 0x20;
LAB_08007292:
    *(uint *)(iVar7 + 0xfc) = uVar15;
  }
  else if (-1 < (int)(uVar11 << 0x1a)) {
    uVar15 = *(uint *)(iVar7 + 0xfc) & 0xffffffdf;
    goto LAB_08007292;
  }
  *(uint *)(iVar7 + 0x100) =
       uVar10 & 0xffffffc0 | uVar9 | uVar3 | local_34._1_1_ & 1 | (local_34._1_1_ >> 1 & 1) << 2 |
       (local_34._1_1_ >> 4 & 1) << 1 | (local_34._1_1_ >> 5 & 1) << 3;
  *(uint *)(iVar7 + 0x114) =
       *(uint *)(iVar7 + 0x114) & 0xffffff9f | (uint)(local_26._1_1_ >> 7) << 6 |
       ((byte)local_26 >> 2 & 1) << 5;
LAB_080072d0:
  iVar8 = FUN_080058d0(0,0x14,0x20,&local_38);
  if (iVar8 == 0x20) {
    uVar9 = 0;
    do {
      iVar8 = uVar9 * 2;
      puVar1 = &local_38 + uVar9;
      iVar2 = uVar9 * 2;
      uVar9 = uVar9 + 1 & 0xff;
      *(ushort *)(iVar7 + iVar2 + 0x168) =
           CONCAT11(*(undefined1 *)((int)&local_38 + iVar8 + 1),*(undefined1 *)puVar1);
    } while (uVar9 < 0x10);
  }
  iVar8 = FUN_080058d0(0,0x34,8,&local_38);
  if (iVar8 == 8) {
    *(uint *)(iVar7 + 0x15c) = (uint)local_38 * 10;
    *(uint *)(iVar7 + 0x160) = ((uint)local_36 * 0x3d) / 6;
    *(uint *)(iVar7 + 0x164) = (uint)local_34 * 10;
    *(short *)(iVar7 + 0x1b0) = local_32;
  }
  iVar8 = FUN_080058d0(0,0x62,0x1f,&local_38);
  if (iVar8 == 0x1f) {
    if ((int)((uint)(byte)local_38 << 0x1e) < 0) {
      local_38 = 2;
      FUN_08005b10(0,0x62,2,&local_38);
    }
    uVar6 = *(ushort *)(iVar7 + 0x5a);
    if (3 < uVar6) {
      *(undefined2 *)(iVar7 + 0x1be) = local_2c;
    }
    if (1 < uVar6) {
      *(undefined2 *)(iVar7 + 0x1ba) = local_2a;
    }
    *(undefined2 *)(iVar7 + 0x1d0) = local_26;
    *(undefined2 *)(iVar7 + 0x1d4) = local_24;
    if (2 < uVar6) {
      *(undefined2 *)(iVar7 + 0x1bc) = local_20;
    }
    *(uint *)(iVar7 + 0x104) =
         *(uint *)(iVar7 + 0x104) & 0xfffffffc | (local_1b & 1) << 1 | local_1b >> 2 & 1;
  }
  iVar8 = FUN_0800aad4(0,0x75,&local_38);
  if (iVar8 == 0x24) {
    *(int *)(iVar7 + 0x1a8) = local_22 * 10;
  }
  return;
}


/* 08007444 FUN_08007444 */

void FUN_08007444(void)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = DAT_0800746c;
  if (((*(byte *)(DAT_0800746c + 0x120) & 1) != 0) &&
     (bVar2 = *(char *)(DAT_08007470 + 0x13) + 1, *(byte *)(DAT_08007470 + 0x13) = bVar2, 5 < bVar2)
     ) {
    *(uint *)(iVar1 + 0xe4) = *(uint *)(iVar1 + 0xe4) & 0xfffffffd | 1;
  }
  return;
}


/* 08007474 FUN_08007474 */

void FUN_08007474(void)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte local_40 [52];
  
  uVar4 = 0;
  cVar2 = *DAT_08007608;
  if (cVar2 != -1) {
    uVar3 = 0;
    do {
      local_40[uVar3] = 0;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x34);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x234);
    local_40[4] = (char)uVar5;
    local_40[1] = (char)((uint)uVar5 >> 0x18);
    local_40[2] = (char)((uint)uVar5 >> 0x10);
    local_40[3] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x238);
    local_40[8] = (char)uVar5;
    local_40[5] = (char)((uint)uVar5 >> 0x18);
    local_40[6] = (char)((uint)uVar5 >> 0x10);
    local_40[7] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x22c);
    local_40[0xc] = (char)uVar5;
    local_40[9] = (char)((uint)uVar5 >> 0x18);
    local_40[10] = (char)((uint)uVar5 >> 0x10);
    local_40[0xb] = (char)((uint)uVar5 >> 8);
    local_40[0xd] = *(undefined1 *)(DAT_0800760c + 0x23c);
    local_40[0xe] = (char)((ushort)*(undefined2 *)(DAT_0800760c + 0x23e) >> 8);
    local_40[0xf] = (char)*(undefined2 *)(DAT_0800760c + 0x23e);
    local_40[0x10] = (char)((ushort)*(undefined2 *)(DAT_0800760c + 0x240) >> 8);
    local_40[0x11] = (char)*(undefined2 *)(DAT_0800760c + 0x240);
    local_40[0x12] = *(undefined1 *)(DAT_0800760c + 0x242);
    local_40[0x14] = (char)*(undefined2 *)(DAT_0800760c + 0x22a);
    local_40[0x13] = (char)((ushort)*(undefined2 *)(DAT_0800760c + 0x22a) >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 600);
    local_40[0x18] = (char)uVar5;
    local_40[0x15] = (char)((uint)uVar5 >> 0x18);
    local_40[0x16] = (char)((uint)uVar5 >> 0x10);
    local_40[0x17] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x25c);
    local_40[0x1c] = (char)uVar5;
    local_40[0x19] = (char)((uint)uVar5 >> 0x18);
    local_40[0x1a] = (char)((uint)uVar5 >> 0x10);
    local_40[0x1b] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x260);
    local_40[0x20] = (char)uVar5;
    local_40[0x1d] = (char)((uint)uVar5 >> 0x18);
    local_40[0x1e] = (char)((uint)uVar5 >> 0x10);
    local_40[0x1f] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x264);
    local_40[0x21] = (char)((uint)uVar5 >> 0x18);
    local_40[0x22] = (char)((uint)uVar5 >> 0x10);
    local_40[0x23] = (char)((uint)uVar5 >> 8);
    local_40[0x24] = (char)uVar5;
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x268);
    local_40[0x28] = (char)uVar5;
    local_40[0x25] = (char)((uint)uVar5 >> 0x18);
    local_40[0x26] = (char)((uint)uVar5 >> 0x10);
    local_40[0x27] = (char)((uint)uVar5 >> 8);
    uVar5 = *(undefined4 *)(DAT_0800760c + 0x26c);
    local_40[0x2c] = (char)uVar5;
    local_40[0x29] = (char)((uint)uVar5 >> 0x18);
    local_40[0x2a] = (char)((uint)uVar5 >> 0x10);
    local_40[0x2b] = (char)((uint)uVar5 >> 8);
    local_40[0x2d] = (char)((ushort)*(undefined2 *)(DAT_0800760c + 0x270) >> 8);
    local_40[0x2e] = (char)*(undefined2 *)(DAT_0800760c + 0x270);
    local_40[0x30] = (char)*(undefined2 *)(DAT_0800760c + 0x272);
    local_40[0x2f] = (char)((ushort)*(undefined2 *)(DAT_0800760c + 0x272) >> 8);
    local_40[0] = 0x33;
    uVar3 = 0;
    do {
      pbVar1 = local_40 + uVar3;
      uVar3 = uVar3 + 1 & 0xff;
      uVar4 = uVar4 + *pbVar1 & 0xffff;
    } while (uVar3 < 0x31);
    local_40[0x31] = (byte)(uVar4 >> 8);
    local_40[0x32] = (byte)uVar4;
    FUN_08007dcc(cVar2,local_40);
  }
  return;
}


/* 08007610 FUN_08007610 */

void FUN_08007610(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08007bec(0x34,2,0x5566);
  *(undefined1 *)(DAT_08007624 + 0xb) = uVar1;
  return;
}


/* 08007628 FUN_08007628 */

void FUN_08007628(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  ushort uStack_4a;
  byte local_48;
  ushort local_47;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  byte local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  ushort local_34;
  ushort local_32;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  ushort local_1b;
  ushort local_19;
  
  iVar7 = DAT_0800787c;
  iVar2 = DAT_08007878;
  uVar9 = 0;
  uVar8 = 0;
  if (param_1 == 0) {
    iVar5 = FUN_08007b88(*(undefined1 *)(DAT_0800787c + 0xb));
    if (iVar5 != 0) {
      FUN_08007d2c(*(undefined1 *)(iVar7 + 0xb),&local_48,0);
      for (; (int)uVar9 < (char)local_48 + -2; uVar9 = uVar9 + 1 & 0xff) {
        uVar8 = (&local_48)[uVar9] + uVar8;
      }
      uVar1 = *(ushort *)((int)&uStack_4a + (int)(char)local_48);
      if ((ushort)(uVar1 << 8 | uVar1 >> 8) != uVar8) {
        *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) | 1;
        *(undefined1 *)(iVar2 + 0x2a5) = 0xfe;
        return;
      }
      *(ushort *)(iVar2 + 0x220) = local_47 << 8 | local_47 >> 8;
      uVar9 = CONCAT31(CONCAT21(CONCAT11(local_45,local_44),local_43),local_42);
      *(uint *)(iVar2 + 0x1e8) = uVar9;
      iVar7 = CONCAT31(CONCAT21(CONCAT11(local_41,local_40),local_3f),local_3e);
      *(int *)(iVar2 + 0x1f0) = iVar7;
      uVar9 = (uint)(iVar7 * 1000) / uVar9;
      uVar6 = uVar9 & 0xffff;
      *(short *)(iVar2 + 0x1f8) = (short)uVar9;
      cVar4 = (char)(uVar6 / 10);
      if (4 < uVar6 % 10) {
        cVar4 = cVar4 + '\x01';
      }
      *(char *)(iVar2 + 0x1fc) = cVar4;
      fVar10 = (float)VectorUnsignedToFloat((uint)local_3d,(byte)(in_fpscr >> 0x16) & 3);
      *(float *)(iVar2 + 0x200) = fVar10 * 10.0;
      *(uint *)(iVar2 + 0x20c) = CONCAT31(CONCAT21(CONCAT11(local_3c,local_3b),local_3a),local_39);
      *(uint *)(iVar2 + 0x210) = CONCAT31(CONCAT21(CONCAT11(local_38,local_37),local_36),local_35);
      *(ushort *)(iVar2 + 0x214) = local_34 << 8 | local_34 >> 8;
      *(ushort *)(iVar2 + 0x216) = local_32 << 8 | local_32 >> 8;
      *(uint *)(iVar2 + 0x224) = CONCAT31(CONCAT21(CONCAT11(local_30,local_2f),local_2e),local_2d);
      *(uint *)(iVar2 + 0x27c) = CONCAT31(CONCAT21(CONCAT11(local_2c,local_2b),local_2a),local_29);
      uVar3 = DAT_08007880;
      iVar7 = FUN_08010cfc(DAT_08007880);
      uVar9 = iVar7 - CONCAT31(CONCAT21(CONCAT11(local_28,local_27),local_26),local_25);
      *(uint *)(iVar2 + 0x300) = uVar9;
      *(uint *)(iVar2 + 0x294) = uVar9 / 0x3c;
      iVar7 = FUN_08010cfc(uVar3);
      *(int *)(iVar2 + 0x218) =
           iVar7 - CONCAT31(CONCAT21(CONCAT11(local_24,local_23),local_22),local_21);
      *(uint *)(iVar2 + 0x1dc) = (uint)local_20;
      *(uint *)(iVar2 + 0x1e0) = (uint)local_1f;
      *(uint *)(iVar2 + 0xe8) = (uint)local_1e;
      *(uint *)(iVar2 + 0x10c) = (uint)local_1d;
      *(uint *)(iVar2 + 0x114) = (uint)local_1c;
      *(uint *)(iVar2 + 0x298) = (local_1b & 0xff) << 8 | (uint)(local_1b >> 8);
      *(ushort *)(iVar2 + 0x304) = local_19 << 8 | local_19 >> 8;
      return;
    }
    *(uint *)(iVar2 + 0x1e0) = *(uint *)(iVar2 + 0x1e0) | 0x10;
    *(undefined4 *)(iVar2 + 0x1e8) = *(undefined4 *)(iVar2 + 0x6c);
  }
  else {
    *(uint *)(DAT_08007878 + 0x1e0) = *(uint *)(DAT_08007878 + 0x1e0) | 0x10;
    *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) | 1;
    *(undefined4 *)(iVar2 + 0x1e8) = *(undefined4 *)(iVar2 + 0x6c);
  }
  FUN_08007884();
  return;
}


/* 08007884 FUN_08007884 */

void FUN_08007884(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte local_48 [49];
  undefined1 uStack_17;
  undefined1 uStack_16;
  
  iVar2 = DAT_08007a44;
  uVar6 = 0;
  local_48[0] = 0;
  local_48[1] = (byte)((ushort)*(undefined2 *)(DAT_08007a44 + 0x220) >> 8);
  local_48[2] = (byte)*(undefined2 *)(DAT_08007a44 + 0x220);
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x1e8);
  local_48[3] = (byte)((uint)uVar3 >> 0x18);
  local_48[4] = (byte)((uint)uVar3 >> 0x10);
  local_48[5] = (byte)((uint)uVar3 >> 8);
  local_48[6] = (byte)uVar3;
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x1f0);
  local_48[7] = (byte)((uint)uVar3 >> 0x18);
  local_48[8] = (byte)((uint)uVar3 >> 0x10);
  local_48[9] = (byte)((uint)uVar3 >> 8);
  local_48[10] = (byte)uVar3;
  uVar3 = VectorFloatToUnsigned(*(float *)(DAT_08007a44 + 0x200) / 10.0,3);
  local_48[0xb] = (byte)uVar3;
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x20c);
  local_48[0xc] = (byte)((uint)uVar3 >> 0x18);
  local_48[0xd] = (byte)((uint)uVar3 >> 0x10);
  local_48[0xe] = (byte)((uint)uVar3 >> 8);
  local_48[0xf] = (byte)uVar3;
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x210);
  local_48[0x10] = (byte)((uint)uVar3 >> 0x18);
  local_48[0x11] = (byte)((uint)uVar3 >> 0x10);
  local_48[0x12] = (byte)((uint)uVar3 >> 8);
  local_48[0x13] = (byte)uVar3;
  local_48[0x14] = (byte)((ushort)*(undefined2 *)(DAT_08007a44 + 0x214) >> 8);
  local_48[0x15] = (byte)*(undefined2 *)(DAT_08007a44 + 0x214);
  local_48[0x16] = (byte)((ushort)*(undefined2 *)(DAT_08007a44 + 0x216) >> 8);
  local_48[0x17] = (byte)*(undefined2 *)(DAT_08007a44 + 0x216);
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x224);
  local_48[0x18] = (byte)((uint)uVar3 >> 0x18);
  local_48[0x19] = (byte)((uint)uVar3 >> 0x10);
  local_48[0x1a] = (byte)((uint)uVar3 >> 8);
  local_48[0x1b] = (byte)uVar3;
  uVar3 = *(undefined4 *)(DAT_08007a44 + 0x27c);
  local_48[0x1c] = (byte)((uint)uVar3 >> 0x18);
  local_48[0x1d] = (byte)((uint)uVar3 >> 0x10);
  local_48[0x1e] = (byte)((uint)uVar3 >> 8);
  local_48[0x1f] = (byte)uVar3;
  iVar4 = DAT_08007a44 + 0x288;
  uVar5 = FUN_08010cfc(iVar4);
  if (*(uint *)(iVar2 + 0x300) < uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar2 + 0x300);
  }
  local_48[0x20] = (byte)(uVar5 >> 0x18);
  local_48[0x21] = (byte)(uVar5 >> 0x10);
  local_48[0x22] = (byte)(uVar5 >> 8);
  local_48[0x23] = (byte)uVar5;
  uVar5 = FUN_08010cfc(iVar4);
  if (*(uint *)(DAT_08007a44 + 0x218) < uVar5) {
    uVar5 = uVar5 - *(uint *)(DAT_08007a44 + 0x218);
  }
  local_48[0x24] = (char)(uVar5 >> 0x18);
  local_48[0x25] = (char)(uVar5 >> 0x10);
  local_48[0x26] = (char)(uVar5 >> 8);
  local_48[0x27] = (char)uVar5;
  local_48[0x28] = *(undefined1 *)(DAT_08007a44 + 0x1dc);
  local_48[0x29] = *(undefined1 *)(DAT_08007a44 + 0x1e0);
  local_48[0x2a] = *(undefined1 *)(DAT_08007a44 + 0xe8);
  local_48[0x2b] = *(undefined1 *)(DAT_08007a44 + 0x10c);
  local_48[0x2c] = *(undefined1 *)(DAT_08007a44 + 0x114);
  local_48[0x2d] = (char)((ushort)*(undefined2 *)(DAT_08007a44 + 0x298) >> 8);
  local_48[0x2e] = (char)*(undefined2 *)(DAT_08007a44 + 0x298);
  local_48[0x30] = (char)*(undefined2 *)(DAT_08007a44 + 0x304);
  local_48[0x2f] = (char)((ushort)*(undefined2 *)(DAT_08007a44 + 0x304) >> 8);
  local_48[0] = 0x33;
  uVar5 = 0;
  do {
    pbVar1 = local_48 + uVar5;
    uVar5 = uVar5 + 1 & 0xff;
    uVar6 = *pbVar1 + uVar6 & 0xffff;
  } while (uVar5 < 0x31);
  uStack_17 = (undefined1)(uVar6 >> 8);
  uStack_16 = (undefined1)uVar6;
  FUN_08007dcc(*(undefined1 *)(DAT_08007a48 + 0xb),local_48);
  return;
}


/* 08007a4c FUN_08007a4c */

void FUN_08007a4c(void)

{
  int iVar1;
  int iVar2;
  ushort local_40 [28];
  
  iVar1 = DAT_08007a8c;
  if ((-1 < (int)((uint)*(byte *)(DAT_08007a8c + 0xe8) << 0x1e)) &&
     (iVar2 = FUN_0800aad4(0,0x83,local_40), 0 < iVar2)) {
    *(ushort *)(iVar1 + 0x1d8) = local_40[0];
    if ((int)((uint)local_40[0] << 0x10) < 0) {
      *(ushort *)(iVar1 + 0x1d8) =
           (local_40[0] | (ushort)(1 << (*(byte *)(iVar1 + 0x55) - 1 & 0xff))) & 0x7fff;
    }
  }
  return;
}


/* 08007a90 FUN_08007a90 */

int FUN_08007a90(int param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte local_28 [4];
  undefined1 local_24;
  undefined1 local_23;
  byte local_20;
  
  FUN_08009234(0x2e,param_1 * 8 + 8,local_28,0xc);
  uVar1 = 0x800 / (ulonglong)(uint)CONCAT11(local_24,local_23);
  iVar2 = (int)uVar1;
  uVar3 = (uint)*(ushort *)(DAT_08007b24 + param_1 * 2);
  uVar4 = uVar3 & 0xfff;
  if (param_2 < uVar4) {
    uVar4 = (uVar4 - param_2 & 0xffff) - 1;
    iVar5 = (int)uVar4 / iVar2;
    uVar3 = uVar4;
  }
  else {
    if (-1 < (int)(uVar3 << 0x10)) {
      return 0;
    }
    uVar4 = iVar2 * ((uint)local_20 - (uint)local_28[0] & 0xff) + (uVar4 - param_2) + -1 & 0xffff;
    uVar3 = uVar4 - 1;
    iVar5 = (int)(uVar4 / uVar1);
  }
  return (uint)CONCAT11(local_24,local_23) * (uVar4 - iVar2 * iVar5) +
         ((uint)local_28[0] + ((int)uVar3 / iVar2 & 0xffU)) * 0x800;
}


/* 08007b28 FUN_08007b28 */

void FUN_08007b28(int param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char local_30 [8];
  char local_28;
  
  FUN_08009234(0x2e,param_1 * 8 + 8,local_30,0xc);
  puVar1 = DAT_08007b80;
  for (bVar2 = 0; bVar2 < (byte)(local_28 - local_30[0]); bVar2 = bVar2 + 1) {
    *puVar1 = 0x55;
    FUN_080091d4(local_30[0] + bVar2);
  }
  *(undefined2 *)(DAT_08007b84 + param_1 * 2) = 0;
  FUN_0800700c();
  return;
}


/* 08007b88 FUN_08007b88 */

uint FUN_08007b88(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte local_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  byte local_18;
  
  FUN_08009234(0x2e,param_1 * 8 + 8,local_20,0xc);
  uVar1 = 0x800 / (ulonglong)CONCAT11(local_1c,local_1b);
  iVar4 = (int)uVar1;
  uVar2 = (uint)*(ushort *)(DAT_08007be8 + param_1 * 2);
  uVar3 = uVar2 & 0xfff;
  if ((int)(uVar2 << 0x10) < 0) {
    uVar3 = iVar4 * (((uint)local_18 - (uint)local_20[0] & 0xff) - 1) +
            (uVar3 - iVar4 * (int)(uVar3 / uVar1)) & 0xffff;
  }
  return uVar3;
}


/* 08007bec FUN_08007bec */

byte FUN_08007bec(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_38 [24];
  
  FUN_08009234(0x2e,0,local_38,4);
  puVar3 = DAT_08007d14;
  puVar2 = DAT_08007d10;
  if (param_3 + (uint)local_38[0] * -0x100 != (uint)local_38[1]) {
    *DAT_08007d14 = 0x55;
    FUN_080091d4(0x2e);
    local_38[0] = (byte)((uint)param_3 >> 8);
    local_38[1] = (byte)param_3;
    *puVar2 = 0x55;
    FUN_08009250(0x2e,0,local_38,1);
    local_38[0] = 0x2f;
    local_38[1] = 0xff;
    local_38[2] = 0xff;
    local_38[3] = 0xff;
    *puVar2 = 0x55;
    FUN_08009250(0x2e,8,local_38,1);
  }
  pbVar4 = DAT_08007d18;
  FUN_08009234(0x2e,(uint)*DAT_08007d18 * 8 + 8,local_38,8);
  if (CONCAT11(local_38[4],local_38[5]) == -1) {
    uVar5 = 0;
    do {
      local_38[uVar5] = 0xff;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 8);
    local_38[4] = local_38[0] + (char)param_2;
    local_38[0] = (byte)((uint)param_1 >> 8);
    local_38[1] = (byte)param_1;
    *puVar2 = 0x55;
    FUN_08009250(0x2e,(uint)*pbVar4 * 8 + 0xc,local_38,2);
    for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1 & 0xff) {
      *puVar3 = 0x55;
      FUN_080091d4((local_38[4] - param_2) + uVar5 & 0xff);
    }
    *(undefined2 *)(DAT_08007d1c + (uint)*pbVar4 * 2) = 0;
    FUN_0800700c();
  }
  bVar1 = *pbVar4;
  *pbVar4 = bVar1 + 1;
  return bVar1;
}


/* 08007d20 FUN_08007d20 */

void FUN_08007d20(void)

{
  *DAT_08007d28 = 0;
  return;
}


/* 08007d2c FUN_08007d2c */

void FUN_08007d2c(int param_1,undefined4 param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte local_28 [4];
  undefined1 local_24;
  undefined1 local_23;
  byte local_20;
  
  FUN_08009234(0x2e,param_1 * 8 + 8,local_28,0xc);
  uVar1 = 0x800 / (ulonglong)(uint)CONCAT11(local_24,local_23);
  iVar2 = (int)uVar1;
  uVar3 = (uint)*(ushort *)(DAT_08007dc8 + param_1 * 2);
  uVar4 = uVar3 & 0xfff;
  if (param_3 < uVar4) {
    uVar4 = (uVar4 - param_3 & 0xffff) - 1;
    iVar5 = (int)uVar4 / iVar2;
    uVar3 = uVar4;
  }
  else {
    if (-1 < (int)(uVar3 << 0x10)) {
      return;
    }
    uVar4 = iVar2 * ((uint)local_20 - (uint)local_28[0] & 0xff) + (uVar4 - param_3) + -1 & 0xffff;
    uVar3 = uVar4 - 1;
    iVar5 = (int)(uVar4 / uVar1);
  }
  FUN_08009234((uint)local_28[0] + ((int)uVar3 / iVar2 & 0xffU) & 0xff,
               (uint)CONCAT11(local_24,local_23) * (uVar4 - iVar2 * iVar5) & 0xffff,param_2);
  return;
}


/* 08007dcc FUN_08007dcc */

void FUN_08007dcc(int param_1,undefined4 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte local_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  byte local_38;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_0800d968();
  FUN_08009234(0x2e,param_1 * 8 + 8,local_40,0xc);
  uVar7 = (uint)local_40[0];
  uVar3 = CONCAT11(local_3c,local_3b);
  uVar2 = 0x800 / (ulonglong)(uint)uVar3;
  uVar4 = (uint)*(ushort *)(DAT_08007e94 + param_1 * 2);
  uVar6 = uVar4 & 0xfff;
  uVar5 = (uint)(uVar6 / uVar2);
  *DAT_08007e98 = 0x55;
  FUN_08009250(uVar7 + (uVar5 & 0xff) & 0xff,
               (uint)uVar3 * (uVar6 - (int)uVar2 * (int)(uVar6 / uVar2)) & 0xffff,local_28,
               uVar3 >> 2);
  uVar6 = uVar6 + 1;
  bVar1 = (int)uVar2 * (local_38 - uVar7 & 0xff) <= uVar6;
  if (bVar1) {
    uVar6 = 0;
  }
  if ((uint)(uVar6 / uVar2) != (uVar5 & 0xff)) {
    *DAT_08007e9c = 0x55;
    FUN_080091d4((int)(uVar6 / uVar2) + uVar7 & 0xff);
  }
  if (bVar1 || (int)(uVar4 << 0x10) < 0) {
    uVar6 = uVar6 | 0x8000;
  }
  *(short *)(DAT_08007e94 + param_1 * 2) = (short)uVar6;
  FUN_0800700c();
  FUN_0800d968();
  return;
}


/* 08007ea0 FUN_08007ea0 */

void FUN_08007ea0(uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_58 [2];
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  
  pbVar2 = DAT_08008058;
  uVar6 = *param_1;
  uVar4 = (uint)*DAT_08008058;
  uVar5 = (uVar6 & 0x3ffff) >> 0xc;
  if ((uVar5 != uVar4) && (uVar5 != 0x3f)) {
    return;
  }
  if (uVar5 == uVar4) {
    pbVar2[4] = 0;
    pbVar2[5] = 0;
  }
  puVar3 = DAT_08008060;
  uVar5 = (uVar6 & 0x1fffffff) >> 0x19;
  switch(uVar5) {
  case 0:
    FUN_08007d2c(*DAT_0800805c,&local_3c,0);
    if (CONCAT31(CONCAT21(CONCAT11(local_3c,local_3b),local_3a),local_39) !=
        CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((int)param_1 + 10),
                                   *(undefined1 *)((int)param_1 + 0xb)),(char)param_1[3]),
                 *(undefined1 *)((int)param_1 + 0xd))) {
      return;
    }
    pbVar2[1] = 0;
    bVar1 = *(byte *)((int)param_1 + 0xe);
    *pbVar2 = bVar1;
    local_4c = local_3a;
    local_4b = local_39;
    local_58[0] = local_58[0] & 0xe1000000 | (*param_1 >> 0x19 & 0xf) << 0x19 | 0x1000000 |
                  (bVar1 & 0x3f) << 0x12 | (*param_1 >> 0x12 & 0x3f) << 0xc;
    local_4f = 5;
    local_4e = local_3c;
    local_4d = local_3b;
    local_4a = *(undefined1 *)((int)param_1 + 0xe);
    goto LAB_08008050;
  case 3:
    FUN_0800bcd8(param_1);
    break;
  case 4:
    FUN_0800c9f8(param_1);
    break;
  case 5:
    FUN_0800c2cc(param_1,0);
    break;
  case 8:
    *DAT_08008060 = 1;
    uVar5 = (*param_1 & 0xffffff) >> 0x12;
    puVar3[1] = (char)uVar5;
    local_4f = 0;
    local_58[0] = local_58[0] & 0xe1000000 | (*param_1 >> 0x19 & 0xf) << 0x19 | 0x1000000 |
                  (uVar4 & 0x3f) << 0x12 | uVar5 << 0xc;
    goto LAB_08008050;
  case 9:
    local_4f = 0;
    local_58[0] = local_58[0] & 0xe1000000 | uVar5 << 0x19 | 0x1000000 | (uVar4 & 0x3f) << 0x12 |
                  ((byte)DAT_08008060[1] & 0x3f) << 0xc;
    FUN_0800c964(local_58);
    *puVar3 = 0;
    puVar3[1] = 0;
    break;
  case 10:
    local_4f = 4;
    local_58[0] = local_58[0] & 0xe1000000 | uVar5 << 0x19 | 0x1000000 | (uVar4 & 0x3f) << 0x12 |
                  (*param_1 >> 0x12 & 0x3f) << 0xc;
    FUN_08007d2c(*DAT_0800805c,&local_3c,0);
    local_4e = local_3c;
    local_4d = local_3b;
    local_4c = local_3a;
    local_4b = local_39;
    pbVar2[4] = 0;
    pbVar2[5] = 0;
LAB_08008050:
    FUN_0800c964(local_58);
  }
  return;
}


/* 08008064 FUN_08008064 */

void FUN_08008064(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}


/* 08008084 FUN_08008084 */

void FUN_08008084(void)

{
  FUN_0800afcc(DAT_080080ac);
  FUN_0800afcc(DAT_080080b0);
  FUN_0800afcc(DAT_080080b4);
  FUN_0800afcc(DAT_080080b8);
  FUN_0800c1f8();
  *DAT_080080bc = 0;
  return;
}


/* 080080c0 FUN_080080c0 */

void FUN_080080c0(void)

{
  short sVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint in_fpscr;
  float extraout_s0;
  float extraout_s0_00;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  FUN_080101cc();
  FUN_08006e0c();
  iVar4 = DAT_080084c8;
  uVar11 = *(uint *)(DAT_080084c8 + 0x1a4);
  if (*(ushort *)(DAT_080084c8 + 0x2ac) < uVar11) {
    *(undefined4 *)(DAT_080084c8 + 0x218) = 1;
  }
  iVar5 = DAT_080084cc;
  uVar6 = ((*(ushort *)(iVar4 + 0xaa) + 100) * 1000) / 100;
  uVar7 = uVar6 & 0xffff;
  *(short *)(DAT_080084cc + 6) = (short)uVar6;
  if (uVar7 != 0) {
    uVar6 = (*(ushort *)(iVar4 + 0xa8) * uVar7) / 10;
    if (*(char *)(iVar4 + 0x194) == '\0') {
      *(uint *)(iVar4 + 0x208) = uVar11 * uVar7 + *(int *)(iVar4 + 0x208) + uVar6;
    }
    else {
      *(uint *)(iVar4 + 0x204) = (uVar7 * uVar11 - uVar6) + *(int *)(iVar4 + 0x204);
    }
    *(undefined2 *)(iVar5 + 6) = 0;
  }
  uVar11 = *(uint *)(iVar4 + 0x1e0);
  if (((((int)(uVar11 << 0x19) < 0) && (-1 < (int)((uint)*(byte *)(iVar4 + 0x1dc) << 0x1b))) ||
      (((int)(uVar11 << 0x1a) < 0 && (-1 < (int)((uint)*(byte *)(iVar4 + 0x1dc) << 0x18))))) ||
     (bVar3 = false, (uVar11 & 1) != 0)) {
    bVar3 = true;
  }
  if ((-1 < (int)(uVar11 << 0x19)) && (-1 < (int)(uVar11 << 0x1a))) {
    *(uint *)(iVar4 + 0x1dc) =
         *(uint *)(iVar4 + 0x1dc) & 0xffffff6f | (uVar11 >> 5 & 1) << 7 | (uVar11 >> 6 & 1) << 4;
  }
  uVar6 = DAT_080089c8;
  uVar21 = DAT_080084d0;
  if (((((int)(uVar11 << 0x1b) < 0) ||
       (*(uint *)(iVar4 + 0x218) ==
        *(uint *)(iVar4 + 0x2b0) * (*(uint *)(iVar4 + 0x218) / *(uint *)(iVar4 + 0x2b0)))) ||
      (bVar3)) && (-1 < (int)((uint)*(byte *)(iVar4 + 0xe4) << 0x1d))) {
    uVar7 = 0;
    uVar11 = FUN_0801029c(DAT_080084d0);
    uVar6 = (uint)*(ushort *)(iVar4 + 0x154);
    uVar10 = *(ushort *)(iVar4 + 0x9c);
    if (uVar6 < uVar10) {
      if (*(ushort *)(iVar4 + 0x74) < uVar6) {
        uVar20 = 0;
        do {
          if (uVar6 < *(ushort *)(iVar4 + uVar20 * 2 + 0x74)) {
            iVar14 = iVar4 + uVar20 * 2;
            uVar8 = (uint)*(ushort *)(iVar14 + 0x72);
            *(short *)(iVar5 + 0x16) =
                 (short)((int)((uVar6 - uVar8) * 0x32) / (int)(*(ushort *)(iVar14 + 0x74) - uVar8))
                 + (short)uVar20 * 0x32 + -0x32;
            break;
          }
          uVar20 = uVar20 + 1 & 0xff;
        } while (uVar20 < 0x15);
      }
      else {
        *(undefined2 *)(iVar5 + 0x16) = 0;
      }
    }
    else {
      *(undefined2 *)(iVar5 + 0x16) = 1000;
    }
    uVar15 = *(ushort *)(iVar5 + 0x16);
    uVar6 = (uint)uVar15;
    if (uVar6 / 10 == *(ushort *)(iVar5 + 0x18) / 10) {
      bVar9 = *(char *)(iVar5 + 3) + 1;
      *(byte *)(iVar5 + 3) = bVar9;
      if (3 < bVar9) {
        uVar12 = *(uint *)(iVar4 + 0x1e0);
        uVar17 = *(uint *)(iVar4 + 0x1dc);
        uVar20 = (uVar12 >> 5 & 1) << 7;
        uVar8 = (uVar12 >> 6 & 1) << 4;
        uVar18 = uVar17 & 0xffffff6f | uVar20 | uVar8;
        *(uint *)(iVar4 + 0x1dc) = uVar18;
        uVar19 = (uint)*(ushort *)(iVar4 + 0x158);
        if (uVar19 < uVar10) {
          if (*(ushort *)(iVar4 + 0x74) < uVar19) {
            uVar13 = 0;
            do {
              if (uVar19 < *(ushort *)(iVar4 + uVar13 * 2 + 0x74)) {
                iVar14 = iVar4 + uVar13 * 2;
                uVar7 = (uint)*(ushort *)(iVar14 + 0x72);
                uVar7 = ((int)((uVar19 - uVar7) * 0x32) / (int)(*(ushort *)(iVar14 + 0x74) - uVar7)
                        + uVar13 * 0x32) - 0x32 & 0xffff;
                break;
              }
              uVar13 = uVar13 + 1 & 0xff;
            } while (uVar13 < 0x15);
          }
          else {
            uVar7 = 0;
          }
        }
        else {
          uVar7 = 1000;
        }
        if ((((int)(uVar12 << 0x19) < 0) || ((int)(uVar18 << 0x1b) < 0)) || ((uVar12 & 1) != 0)) {
          uVar7 = 1000;
        }
        if (((int)(uVar12 << 0x1a) < 0) || ((int)(uVar18 << 0x18) < 0)) {
          uVar7 = 0;
        }
        uVar2 = (undefined2)uVar7;
        if (*(ushort *)(iVar4 + 0x216) < uVar7) {
          *(uint *)(iVar4 + 0x1dc) = uVar17 & 0xffffff2f | uVar20 | uVar8;
          *(undefined4 *)(iVar4 + 0x210) = 0;
          *(undefined2 *)(iVar4 + 0x216) = uVar2;
        }
        if (uVar6 < *(ushort *)(iVar4 + 0x214)) {
          *(uint *)(iVar4 + 0x1dc) = *(uint *)(iVar4 + 0x1dc) & 0xffffffdf;
          *(undefined4 *)(iVar4 + 0x20c) = 0;
          *(ushort *)(iVar4 + 0x214) = uVar15;
        }
        if (uVar6 <= *(ushort *)(iVar4 + 0x1f8)) {
          if (((int)(uVar12 << 0x1b) < 0) || (bVar3)) {
            if (((int)(uVar12 << 0x19) < 0) ||
               (((int)((uint)*(byte *)(iVar4 + 0x1dc) << 0x1b) < 0 || ((uVar12 & 1) != 0)))) {
              *(undefined2 *)(iVar4 + 0x1f8) = uVar2;
            }
            else {
              *(ushort *)(iVar4 + 0x1f8) = uVar15;
            }
            *(uint *)(iVar4 + 0x1f0) =
                 (*(int *)(iVar4 + 0x1e8) * (uint)*(ushort *)(iVar4 + 0x1f8)) / 1000;
            if ((int)(uVar12 << 0x1b) < 0) {
              uVar20 = (uVar6 * 1000) / uVar11;
              *(short *)(iVar4 + 0x1f8) = (short)uVar20;
              uVar21 = VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
              *(undefined4 *)(iVar4 + 0x200) = uVar21;
            }
          }
          else if (((int)(uint)*(ushort *)(iVar4 + 0x2b4) <
                    (int)(*(ushort *)(iVar4 + 0x1f8) - uVar6)) || (uVar6 < 0x47)) {
            *(ushort *)(iVar4 + 0x1f8) = uVar15;
            *(uint *)(iVar4 + 0x1f0) = (*(int *)(iVar4 + 0x1e8) * uVar6) / 1000;
          }
        }
        if (*(ushort *)(iVar4 + 0x1f8) < uVar6) {
          if (((int)(uVar12 << 0x1b) < 0) || (bVar3)) {
            if (((int)(uVar12 << 0x19) < 0) ||
               (((int)((uint)*(byte *)(iVar4 + 0x1dc) << 0x1b) < 0 || ((uVar12 & 1) != 0)))) {
              *(undefined2 *)(iVar4 + 0x1f8) = uVar2;
            }
            else {
              *(ushort *)(iVar4 + 0x1f8) = uVar15;
            }
            *(uint *)(iVar4 + 0x1f0) =
                 (*(int *)(iVar4 + 0x1e8) * (uint)*(ushort *)(iVar4 + 0x1f8)) / 1000;
            if ((int)(uVar12 << 0x1b) < 0) {
              uVar20 = (uVar6 * 1000) / uVar11;
              *(short *)(iVar4 + 0x1f8) = (short)uVar20;
              uVar21 = VectorUnsignedToFloat(uVar20 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
              *(undefined4 *)(iVar4 + 0x200) = uVar21;
            }
          }
          else if (((int)(uint)*(ushort *)(iVar4 + 0x2b4) <
                    (int)(uVar6 - *(ushort *)(iVar4 + 0x1f8))) || (0x3d3 < uVar6)) {
            *(ushort *)(iVar4 + 0x1f8) = uVar15;
            *(uint *)(iVar4 + 0x1f0) = (*(int *)(iVar4 + 0x1e8) * uVar6) / 1000;
          }
        }
        if ((uVar6 < *(ushort *)(iVar4 + 0x216)) &&
           (iVar14 = *(ushort *)(iVar4 + 0x216) - uVar6, 800 < iVar14)) {
          iVar16 = *(int *)(iVar4 + 0x1e8);
          fVar22 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x210),
                                              (byte)(in_fpscr >> 0x16) & 3);
          uVar6 = iVar16 * 99;
          fVar23 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
          fVar24 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
          uVar20 = VectorFloatToUnsigned(((fVar22 * extraout_s0 * extraout_s0) / fVar23) / fVar24,3)
          ;
          if ((uVar20 < uVar6 / 100) || (uVar6 = iVar16 * 0x65, uVar6 / 100 < uVar20)) {
            uVar20 = uVar6 / 100;
          }
          *(short *)(iVar4 + 0x2fe) = (short)((uint)(iVar16 * 1000) / *(uint *)(iVar4 + 0x6c));
          *(uint *)(iVar4 + 0x1e0) = uVar12 | 0x80;
          *(uint *)(iVar4 + 0x1e8) = uVar20;
          *(undefined4 *)(iVar4 + 0x210) = 0;
          *(uint *)(iVar4 + 0x1f0) = (*(ushort *)(iVar4 + 0x1f8) * uVar20) / 1000;
          *(ushort *)(iVar4 + 0x216) = uVar15;
        }
        if ((*(ushort *)(iVar4 + 0x214) < uVar7) &&
           (iVar14 = uVar7 - *(ushort *)(iVar4 + 0x214), 800 < iVar14)) {
          iVar16 = *(int *)(iVar4 + 0x1e8);
          fVar24 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x20c),
                                              (byte)(in_fpscr >> 0x16) & 3);
          uVar6 = iVar16 * 0x5f;
          fVar22 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
          fVar23 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
          uVar11 = VectorFloatToUnsigned(((fVar24 * extraout_s0 * extraout_s0) / fVar22) / fVar23,3)
          ;
          if ((uVar11 < uVar6 / 100) || (uVar6 = iVar16 * 0x69, uVar6 / 100 < uVar11)) {
            uVar11 = uVar6 / 100;
          }
          *(short *)(iVar4 + 0x2fe) = (short)((uint)(iVar16 * 1000) / *(uint *)(iVar4 + 0x6c));
          *(uint *)(iVar4 + 0x1e0) = *(uint *)(iVar4 + 0x1e0) | 0x80;
          *(uint *)(iVar4 + 0x1e8) = uVar11;
          *(undefined4 *)(iVar4 + 0x20c) = 0;
          *(uint *)(iVar4 + 0x1f0) = (*(ushort *)(iVar4 + 0x1f8) * uVar11) / 1000;
          *(ushort *)(iVar4 + 0x214) = uVar15;
        }
        uVar11 = *(uint *)(iVar4 + 0x1e0);
        *(uint *)(iVar4 + 0x1e0) = uVar11 & 0xffffffef;
        *(undefined1 *)(iVar5 + 3) = 0;
        *(undefined2 *)(iVar5 + 0x16) = 0;
        *(undefined2 *)(iVar5 + 0x18) = 0;
        uVar6 = *(uint *)(iVar4 + 0x218);
        if (uVar6 == *(uint *)(iVar4 + 0x2b0) * (uVar6 / *(uint *)(iVar4 + 0x2b0))) {
          *(uint *)(iVar4 + 0x218) = uVar6 + 1;
          *(short *)(iVar5 + 0x14) = *(short *)(iVar5 + 0x14) + 1;
        }
        *(uint *)(iVar4 + 0x1e0) = uVar11 & 0xffffffee;
      }
    }
    else {
      *(undefined1 *)(iVar5 + 3) = 0;
      *(ushort *)(iVar5 + 0x18) = uVar15;
    }
  }
  else {
    uVar11 = *(uint *)(iVar4 + 0x204);
    if (DAT_080089c8 < uVar11) {
      uVar7 = uVar11 / DAT_080089c8;
      *(uint *)(iVar4 + 0x204) = uVar11 - DAT_080089c8 * (uVar11 / DAT_080089c8);
      *(uint *)(iVar4 + 0x20c) = *(int *)(iVar4 + 0x20c) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x278) = *(int *)(iVar4 + 0x278) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x234) = *(int *)(iVar4 + 0x234) + (uVar7 & 0xffff);
      uVar11 = *(int *)(iVar4 + 0x1f0) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x1f0) = uVar11;
      *(uint *)(iVar4 + 0x210) = *(int *)(iVar4 + 0x210) - (uVar7 & 0xffff);
      if (*(uint *)(iVar4 + 0x1e8) <= uVar11) {
        *(uint *)(iVar4 + 0x1f0) = *(uint *)(iVar4 + 0x1e8) - 1;
      }
    }
    uVar11 = *(uint *)(iVar4 + 0x208);
    if (uVar6 < uVar11) {
      uVar7 = uVar11 / uVar6;
      *(uint *)(iVar4 + 0x208) = uVar11 - uVar6 * (uVar11 / uVar6);
      uVar11 = uVar7 & 0xffff;
      *(uint *)(iVar4 + 0x224) = *(int *)(iVar4 + 0x224) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x210) = *(int *)(iVar4 + 0x210) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x27c) = *(int *)(iVar4 + 0x27c) + (uVar7 & 0xffff);
      *(uint *)(iVar4 + 0x238) = *(int *)(iVar4 + 0x238) + (uVar7 & 0xffff);
      if (uVar11 < *(uint *)(iVar4 + 0x1f0)) {
        *(uint *)(iVar4 + 0x1f0) = *(uint *)(iVar4 + 0x1f0) - uVar11;
      }
      else {
        *(undefined4 *)(iVar4 + 0x1f0) = 0;
      }
      *(uint *)(iVar4 + 0x20c) = *(int *)(iVar4 + 0x20c) - uVar11;
    }
    uVar21 = FUN_0801029c(uVar21);
    uVar11 = *(uint *)(iVar4 + 0x1e8);
    fVar23 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
    fVar22 = (float)VectorUnsignedToFloat(uVar21,(byte)(in_fpscr >> 0x16) & 3);
    uVar7 = VectorFloatToUnsigned((fVar23 * fVar22) / extraout_s0_00,3);
    *(uint *)(iVar4 + 0x1ec) = uVar7;
    uVar6 = *(int *)(iVar4 + 0x1f0) + uVar7;
    if (uVar11 < uVar6) {
      *(uint *)(iVar4 + 500) = uVar6 - uVar11;
    }
    else {
      *(undefined4 *)(iVar4 + 500) = 0;
      if (100 < *(int *)(iVar4 + 0x19c)) {
        *(uint *)(iVar4 + 0x1f0) = uVar11 - uVar7;
      }
    }
    if (uVar7 != 0) {
      *(short *)(iVar4 + 0x1fa) = (short)((uint)(*(int *)(iVar4 + 500) * 1000) / uVar7);
      *(short *)(iVar4 + 0x1f8) = (short)((uint)(*(int *)(iVar4 + 0x1f0) * 1000) / uVar11);
    }
  }
  uVar11 = *(uint *)(iVar4 + 0x6c);
  if ((*(uint *)(iVar4 + 0x1e8) < uVar11 >> 1) || (uVar11 * 3 >> 1 < *(uint *)(iVar4 + 0x1e8))) {
    *(uint *)(iVar4 + 0x1e8) = uVar11;
  }
  fVar22 = DAT_080089cc;
  uVar10 = *(ushort *)(iVar4 + 0x1fa);
  uVar11 = (uint)uVar10;
  if (uVar11 - 1 < 999) {
    sVar1 = *(short *)(iVar5 + 0x10);
    uVar15 = uVar10;
  }
  else {
    uVar15 = *(ushort *)(iVar4 + 0x1f8);
    sVar1 = *(short *)(iVar5 + 0x12);
  }
  uVar6 = (uint)(short)(sVar1 - uVar15);
  if (uVar6 - 1 < 10) {
    if (-0x1a < *(int *)(iVar4 + 0x198)) goto LAB_08008824;
    fVar23 = *(float *)(iVar4 + 0x200);
    if (uVar11 != 0) {
      fVar24 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar24 = fVar23 * fVar24;
      fVar25 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
LAB_080087c6:
      *(float *)(iVar4 + 0x200) = fVar23 - fVar24 / fVar25;
      goto LAB_08008824;
    }
    if (0.0 < fVar23) {
      *(float *)(iVar4 + 0x200) = fVar23 - 1.0;
    }
  }
  else {
    if (uVar6 < 0xfffffff6) {
      fVar23 = *(float *)(iVar4 + 0x200);
      fVar24 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
      uVar6 = in_fpscr & 0xfffffff | (uint)(fVar23 < fVar24) << 0x1f |
              (uint)(fVar23 == fVar24) << 0x1e;
      bVar9 = (byte)(uVar6 >> 0x18);
      if ((!(bool)(bVar9 >> 6 & 1) && (bool)(bVar9 >> 7) == (NAN(fVar23) || NAN(fVar24))) &&
         (1 < *(ushort *)(iVar5 + 0x14))) {
        fVar24 = (float)VectorUnsignedToFloat(uVar11,(byte)(uVar6 >> 0x16) & 3);
        if (DAT_080089d0 < (int)(fVar23 - fVar24)) {
          fVar24 = 10.0;
LAB_0800881a:
          *(float *)(iVar4 + 0x200) = fVar23 - fVar24;
        }
        else if (DAT_080089d4 < (int)fVar23) {
          fVar24 = 5.0;
          goto LAB_0800881a;
        }
        *(undefined2 *)(iVar5 + 0x14) = 0;
      }
    }
    else if ((0x32 < *(int *)(iVar4 + 0x198)) && (uVar11 < 1000)) {
      fVar23 = *(float *)(iVar4 + 0x200);
      fVar24 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      fVar24 = (DAT_080089cc - fVar23) * fVar24;
      fVar25 = (float)VectorSignedToFloat(-(uVar11 - 0x3f2),(byte)(in_fpscr >> 0x16) & 3);
      goto LAB_080087c6;
    }
LAB_08008824:
    if (((0x3e6 < uVar11) && (*(int *)(iVar4 + 0x200) < DAT_080089d8)) &&
       (*(int *)(iVar4 + 0x19c) < 0xfa)) {
      *(float *)(iVar4 + 0x200) = fVar22;
    }
  }
  uVar15 = *(ushort *)(iVar4 + 0x1f8);
  if ((0x3e2 < uVar15) && (500 < *(int *)(iVar4 + 0x19c))) {
    *(uint *)(iVar4 + 0x1f0) = *(int *)(iVar4 + 0x1f0) - *(uint *)(iVar4 + 0x1e8) / 1000;
  }
  if (((uint)(*(int *)(iVar4 + 0x200) + DAT_080089dc) < 0xffff) && (500 < *(int *)(iVar4 + 0x19c)))
  {
    *(undefined4 *)(iVar4 + 0x200) = DAT_080089e0;
  }
  if (DAT_080089e4 < *(int *)(iVar4 + 0x200)) {
    *(float *)(iVar4 + 0x200) = fVar22;
  }
  fVar23 = *(float *)(iVar4 + 0x200);
  if (((int)fVar23 < DAT_080089e8) && (*(int *)(iVar4 + 0x19c) < 0)) {
    if ((int)((uint)*(byte *)(iVar4 + 0x1e0) << 0x1a) < 0) {
LAB_080088c2:
      if (fVar23 <= 0.0) goto LAB_080088d4;
      fVar23 = fVar23 - 1.0;
    }
    else {
      fVar23 = 11.0;
    }
    *(float *)(iVar4 + 0x200) = fVar23;
  }
  else if ((int)((uint)*(byte *)(iVar4 + 0x1e0) << 0x1a) < 0) goto LAB_080088c2;
LAB_080088d4:
  uVar11 = VectorFloatToUnsigned(fVar23,3);
  uVar11 = (uVar11 & 0xffff) / 10;
  *(char *)(iVar4 + 0x1fc) = (char)uVar11;
  if (100 < (uVar11 & 0xff)) {
    *(undefined1 *)(iVar4 + 0x1fc) = 100;
  }
  *(ushort *)(iVar5 + 0x10) = uVar10;
  *(ushort *)(iVar5 + 0x12) = uVar15;
  if (*(char *)(iVar4 + 0x194) != '\0') {
    if (*(uint *)(iVar4 + 0x1a4) < 0xc9) {
      uVar11 = *(uint *)(iVar4 + 0x1dc);
      if ((int)(uVar11 << 0x1c) < 0) {
        *DAT_080089ec = *(undefined4 *)(iVar4 + 0x278);
        *(uint *)(iVar4 + 0x1dc) = uVar11 | 4;
        if (*(ushort *)(iVar4 + 0x9c) <= *(ushort *)(iVar4 + 0x158)) {
          *(uint *)(iVar4 + 0x1e0) = *(uint *)(iVar4 + 0x1e0) | 1;
          *(float *)(iVar4 + 0x200) = fVar22;
        }
      }
      *(undefined4 *)(iVar4 + 0x278) = 0;
      *(uint *)(iVar4 + 0x1dc) = *(uint *)(iVar4 + 0x1dc) & 0xfffffff7;
      *(undefined2 *)(iVar5 + 8) = 0;
      return;
    }
    uVar11 = *(uint *)(iVar4 + 0x1dc);
    if ((-1 < (int)(uVar11 << 0x1c)) &&
       (uVar10 = *(short *)(iVar5 + 8) + 1, *(ushort *)(iVar5 + 8) = uVar10, 10 < uVar10)) {
      *(undefined2 *)(iVar5 + 8) = 0x32;
      *(uint *)(iVar4 + 0x1dc) = uVar11 | 0x48;
    }
    uVar11 = *(uint *)(iVar4 + 0x1dc);
    if (-1 < (int)(uVar11 << 0x1e)) {
      return;
    }
    if (-1 < (int)(uVar11 << 0x1c)) {
      return;
    }
    if ((uVar11 & 1) == 0) {
      *(uint *)(iVar4 + 0x1dc) = uVar11 | 1;
      *(undefined4 *)(iVar4 + 0x280) = *(undefined4 *)(iVar4 + 0x27c);
      *(undefined4 *)(iVar4 + 0x27c) = 0;
      return;
    }
    return;
  }
  uVar11 = *(uint *)(iVar4 + 0x1dc);
  if ((int)(uVar11 << 0x1c) < 0) {
    *DAT_080089ec = *(undefined4 *)(iVar4 + 0x278);
    *(uint *)(iVar4 + 0x1dc) = uVar11 | 4;
    if (*(ushort *)(iVar4 + 0x9c) <= *(ushort *)(iVar4 + 0x158)) {
      *(uint *)(iVar4 + 0x1e0) = *(uint *)(iVar4 + 0x1e0) | 1;
      *(float *)(iVar4 + 0x200) = fVar22;
    }
  }
  *(undefined4 *)(iVar4 + 0x278) = 0;
  uVar11 = *(uint *)(iVar4 + 0x1dc);
  uVar6 = uVar11 & 0xfffffff7;
  *(uint *)(iVar4 + 0x1dc) = uVar6;
  *(undefined2 *)(iVar5 + 8) = 0;
  uVar7 = *(uint *)(iVar4 + 0x1a4);
  if (uVar7 < 0xc9) {
LAB_08008a2c:
    if (-1 < (int)((uint)*(byte *)(iVar4 + 0x1dc) << 0x1e)) goto LAB_08008a5e;
  }
  else if (-1 < (int)(uVar11 << 0x1e)) {
    uVar10 = *(short *)(iVar5 + 10) + 1;
    *(ushort *)(iVar5 + 10) = uVar10;
    if (uVar10 < 0x29) goto LAB_08008a5e;
    *(undefined2 *)(iVar5 + 10) = 0x32;
    *(uint *)(iVar4 + 0x1dc) = uVar6 | 0x22;
    goto LAB_08008a2c;
  }
  if (uVar7 < 100) {
    uVar11 = *(int *)(iVar5 + 0x1c) + 1;
    *(uint *)(iVar5 + 0x1c) = uVar11;
    if (uVar11 < 0x65) {
      return;
    }
    if ((*(uint *)(iVar4 + 0x1dc) & 1) != 0) {
      return;
    }
    *(uint *)(iVar4 + 0x1dc) = *(uint *)(iVar4 + 0x1dc) | 1;
    *(undefined4 *)(iVar4 + 0x280) = *(undefined4 *)(iVar4 + 0x27c);
    *(undefined4 *)(iVar4 + 0x27c) = 0;
  }
LAB_08008a5e:
  *(undefined4 *)(iVar5 + 0x1c) = 0;
  return;
}


/* 08008a64 FUN_08008a64 */

void FUN_08008a64(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_08008aa0;
  uVar2 = 0;
  if (*(int *)(DAT_08008a9c + 0x1e0) << 0x1a < 0) {
    if (*(char *)(DAT_08008aa0 + 2) == '\0') {
      return;
    }
    *(undefined4 *)(DAT_08008a9c + 0x1f0) = 0;
  }
  else if (*(int *)(DAT_08008a9c + 0x1e0) << 0x19 < 0) {
    if (*(char *)(DAT_08008aa0 + 2) == '\0') {
      return;
    }
    *(undefined4 *)(DAT_08008a9c + 0x1f0) = *(undefined4 *)(DAT_08008a9c + 0x1e8);
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 2) = uVar2;
  return;
}


/* 08008aa4 FUN_08008aa4 */

void FUN_08008aa4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_0800fdd0();
  if (param_1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_0800fd7c();
    uVar2 = param_1 + iVar1;
  }
  FUN_08006e9c(8,uVar2 & 0xffff);
  FUN_08006e9c(9,uVar2 >> 0x10);
  FUN_0800fbf4(uVar2);
  FUN_0800fdd0();
  return;
}


/* 08008adc FUN_08008adc */

void FUN_08008adc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08008ce4;
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 4;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar2 + iVar1) = 0x3f800000;
  } while (uVar3 < 0x10);
  *(undefined4 *)(iVar2 + 0x40) = DAT_08008ce8;
  *(undefined2 *)(iVar2 + 0x44) = 0;
  *(undefined2 *)(iVar2 + 0x46) = 0x32;
  uVar3 = 0;
  do {
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 1;
    *(undefined2 *)(iVar2 + iVar1 + 0x48) = 0;
  } while (uVar3 < 5);
  *(undefined2 *)(iVar2 + 0x52) = 0xcf9;
  *(undefined1 *)(iVar2 + 0x54) = 3;
  *(undefined1 *)(iVar2 + 0x55) = 0xd;
  *(undefined2 *)(iVar2 + 0x56) = 0xffff;
  *(undefined2 *)(iVar2 + 0x58) = 200;
  *(undefined2 *)(iVar2 + 0x5a) = 2;
  *(undefined1 *)(iVar2 + 0x5c) = 0xd;
  *(undefined1 *)(iVar2 + 0x5d) = 0;
  *(undefined2 *)(iVar2 + 0x5e) = 0xf3c;
  *(undefined2 *)(iVar2 + 0x60) = 0x1e;
  *(undefined2 *)(iVar2 + 0x62) = 100;
  *(undefined2 *)(iVar2 + 100) = 1000;
  *(undefined2 *)(iVar2 + 0x66) = 0xdac;
  *(undefined2 *)(iVar2 + 0x68) = 1;
  *(undefined1 *)(iVar2 + 0x6a) = 0x1f;
  *(undefined1 *)(iVar2 + 0x6b) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 20000;
  *(undefined4 *)(iVar2 + 0x70) = 20000;
  *(undefined2 *)(iVar2 + 0x74) = 0xc42;
  *(undefined2 *)(iVar2 + 0x76) = 0xccd;
  *(undefined2 *)(iVar2 + 0x78) = 0xd3c;
  *(undefined2 *)(iVar2 + 0x7a) = 0xd6d;
  *(undefined2 *)(iVar2 + 0x7c) = 0xd9c;
  *(undefined2 *)(iVar2 + 0x7e) = 0xdd1;
  *(undefined2 *)(iVar2 + 0x80) = 0xdfd;
  *(undefined2 *)(iVar2 + 0x82) = 0xe1e;
  *(undefined2 *)(iVar2 + 0x84) = 0xe3d;
  *(undefined2 *)(iVar2 + 0x86) = 0xe5e;
  *(undefined2 *)(iVar2 + 0x88) = 0xe89;
  *(undefined2 *)(iVar2 + 0x8a) = 0xeb8;
  *(undefined2 *)(iVar2 + 0x8c) = 0xeee;
  *(undefined2 *)(iVar2 + 0x8e) = 0xf23;
  *(undefined2 *)(iVar2 + 0x90) = 0xf46;
  *(undefined2 *)(iVar2 + 0x92) = 0xf6d;
  *(undefined2 *)(iVar2 + 0x94) = 0xfa3;
  *(undefined2 *)(iVar2 + 0x96) = 0xfd4;
  *(undefined2 *)(iVar2 + 0x98) = 0xfeb;
  *(undefined2 *)(iVar2 + 0x9a) = 0xff9;
  *(undefined2 *)(iVar2 + 0x9c) = 0x1029;
  *(undefined2 *)(iVar2 + 0x9e) = 900;
  *(undefined2 *)(iVar2 + 0xa0) = 0x3a2;
  *(undefined2 *)(iVar2 + 0xa2) = 0x3b6;
  *(undefined2 *)(iVar2 + 0xa4) = 0x3e6;
  *(undefined2 *)(iVar2 + 0xa6) = 1000;
  *(undefined2 *)(iVar2 + 0xa8) = 5;
  *(undefined2 *)(iVar2 + 0xaa) = 10;
  *(undefined2 *)(iVar2 + 0xac) = 700;
  *(undefined2 *)(iVar2 + 0xae) = 0x1194;
  *(undefined1 *)(iVar2 + 0xb0) = 0x1a;
  *(undefined1 *)(iVar2 + 0xb1) = 0x10;
  *(undefined1 *)(iVar2 + 0xb2) = 3;
  *(undefined1 *)(iVar2 + 0xb3) = 0x1e;
  *(undefined1 *)(iVar2 + 0xb4) = 0x1e;
  *(undefined2 *)(iVar2 + 0xb6) = 0x54;
  *(undefined2 *)(iVar2 + 0xb8) = 2;
  *(undefined1 *)(iVar2 + 0xba) = 0x35;
  *(undefined1 *)(iVar2 + 0xbb) = 6;
  *(undefined1 *)(iVar2 + 0xbc) = 0xd2;
  *(undefined1 *)(iVar2 + 0xbd) = 0x7d;
  *(undefined1 *)(iVar2 + 0xbe) = 100;
  *(undefined1 *)(iVar2 + 0xbf) = 0xdc;
  *(undefined1 *)(iVar2 + 0xc0) = 0x14;
  *(undefined1 *)(iVar2 + 0xc1) = 0x77;
  *(undefined1 *)(iVar2 + 0xc2) = 0x14;
  *(undefined1 *)(iVar2 + 0xc3) = 0x77;
  *(undefined1 *)(iVar2 + 0xc4) = 5;
  *(undefined1 *)(iVar2 + 0xc5) = 0xf;
  *(undefined1 *)(iVar2 + 0xc6) = 4;
  *(undefined1 *)(iVar2 + 199) = 10;
  *(undefined1 *)(iVar2 + 200) = 0;
  *(undefined1 *)(iVar2 + 0xc9) = 0;
  *(undefined1 *)(iVar2 + 0xca) = 1;
  *(undefined1 *)(iVar2 + 0xcb) = 0;
  *(undefined2 *)(iVar2 + 0xcc) = 0xcd1;
  *(undefined2 *)(iVar2 + 0xce) = 0xc9f;
  *(undefined2 *)(iVar2 + 0xd0) = 0xaab;
  *(undefined2 *)(iVar2 + 0xd2) = 0xadd;
  *(undefined2 *)(iVar2 + 0xd4) = 0xd35;
  *(undefined2 *)(iVar2 + 0xd6) = 0xd03;
  *(undefined2 *)(iVar2 + 0xd8) = 0x9e3;
  *(undefined2 *)(iVar2 + 0xda) = 0xa15;
  return;
}


/* 08008cec FUN_08008cec */

void FUN_08008cec(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  puVar2 = DAT_08008e2c;
  iVar4 = FUN_08007b88(*DAT_08008e2c);
  iVar3 = DAT_08008e30;
  if (iVar4 == 0) {
    FUN_08008adc();
    *(undefined1 *)(iVar3 + 0x284) = 0x5f;
    FUN_08008e34();
  }
  else {
    FUN_08007d2c(*puVar2,DAT_08008e30,0);
    sVar6 = 0;
    uVar5 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar5);
      uVar5 = uVar5 + 1;
      sVar6 = sVar6 + (ushort)*pbVar1;
    } while (uVar5 < 0xdc);
    if (*(short *)(iVar3 + 0xdc) != sVar6) {
      FUN_08008adc();
    }
  }
  *(undefined2 *)(iVar3 + 0x46) = 100;
  *(undefined2 *)(iVar3 + 0x2ac) = 100;
  *(undefined4 *)(iVar3 + 0x2b0) = 0xf;
  *(undefined2 *)(iVar3 + 0x2b4) = 0x32;
  *(undefined2 *)(iVar3 + 0x306) = *(undefined2 *)(iVar3 + 0x56);
  *(undefined2 *)(iVar3 + 0x2b6) = 2;
  *(undefined2 *)(iVar3 + 0x2b8) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2ba) = 1000;
  *(undefined2 *)(iVar3 + 700) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2be) = 5000;
  *(undefined2 *)(iVar3 + 0x2c0) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2c2) = 300;
  *(undefined2 *)(iVar3 + 0x2c4) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2c6) = 0x1130;
  *(undefined2 *)(iVar3 + 0x2c8) = 0x14;
  *(undefined2 *)(iVar3 + 0x2ca) = 0x1068;
  *(undefined2 *)(iVar3 + 0x2cc) = 10;
  *(undefined2 *)(iVar3 + 0x2ce) = 0xdfd;
  *(undefined2 *)(iVar3 + 0x2d0) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2d2) = 0xdcb;
  *(undefined2 *)(iVar3 + 0x2d4) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2d6) = 15000;
  *(undefined2 *)(iVar3 + 0x2d8) = 5;
  *(undefined2 *)(iVar3 + 0x2da) = 5000;
  *(undefined2 *)(iVar3 + 0x2dc) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2de) = 50000;
  *(undefined2 *)(iVar3 + 0x2e0) = 5;
  *(undefined2 *)(iVar3 + 0x2e2) = 5000;
  *(undefined2 *)(iVar3 + 0x2e4) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2e6) = 1000;
  *(undefined2 *)(iVar3 + 0x2e8) = 7;
  *(undefined2 *)(iVar3 + 0x2ea) = 500;
  *(undefined2 *)(iVar3 + 0x2ec) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2ee) = 200;
  *(undefined2 *)(iVar3 + 0x2f0) = 10;
  *(undefined2 *)(iVar3 + 0x2f2) = 100;
  *(undefined2 *)(iVar3 + 0x2f4) = 0x1e;
  *(undefined2 *)(iVar3 + 0x2f6) = 0xff9c;
  *(undefined2 *)(iVar3 + 0x2f8) = 600;
  *(undefined2 *)(iVar3 + 0x2fa) = 0;
  *(undefined2 *)(iVar3 + 0x2fc) = 0x1c2;
  return;
}


/* 08008e34 FUN_08008e34 */

void FUN_08008e34(void)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_08008e6c;
  if (*(char *)(DAT_08008e6c + 0x284) == '_') {
    *(undefined2 *)(DAT_08008e6c + 0xdc) = 0;
    uVar3 = 0;
    do {
      pbVar1 = (byte *)(iVar2 + uVar3);
      uVar3 = uVar3 + 1;
      *(ushort *)(iVar2 + 0xdc) = *(short *)(iVar2 + 0xdc) + (ushort)*pbVar1;
    } while (uVar3 < 0xdc);
    FUN_08007dcc(*DAT_08008e70,DAT_08008e6c);
    *(undefined1 *)(iVar2 + 0x284) = 0;
  }
  return;
}


/* 08008e74 FUN_08008e74 */

void FUN_08008e74(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08007bec(0xe0,2,0x5566);
  *DAT_08008e88 = uVar1;
  return;
}


/* 08008e8c FUN_08008e8c */

void FUN_08008e8c(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  piVar4 = DAT_08008f28;
  iVar3 = DAT_08008f24;
  pbVar2 = DAT_08008f20;
  if (DAT_08008f20[1] == 0) {
    DAT_08008f20[1] = 1;
    puVar5 = DAT_0800cffc;
    *DAT_0800cffc = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    return;
  }
  bVar1 = *DAT_08008f20;
  iVar7 = *(int *)(DAT_08008f24 + 0x1a8);
  DAT_08008f28[bVar1] = iVar7;
  uVar8 = bVar1 + 1;
  *pbVar2 = (byte)uVar8;
  if (4 < (uVar8 & 0xff)) {
    *pbVar2 = 0;
  }
  iVar6 = (*piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4]) / 5;
  *(int *)(iVar3 + 0x198) = iVar7;
  *(int *)(iVar3 + 0x19c) = iVar6;
  if ((iVar6 < *(short *)(iVar3 + 0x46) + 0x14) && (-(int)*(short *)(iVar3 + 0x46) < iVar6)) {
    *(undefined4 *)(iVar3 + 0x19c) = 0;
  }
  else if (0 < iVar6) {
    *(int *)(iVar3 + 0x1a4) = iVar6;
    *(undefined1 *)(iVar3 + 0x194) = 1;
    goto LAB_08008f0a;
  }
  *(int *)(iVar3 + 0x1a4) = -*(int *)(iVar3 + 0x19c);
  *(undefined1 *)(iVar3 + 0x194) = 0;
LAB_08008f0a:
  if (iVar7 < 1) {
    *(int *)(iVar3 + 0x1a0) = -iVar7;
  }
  else {
    *(int *)(iVar3 + 0x1a0) = iVar7;
  }
  return;
}


/* 08008f2c FUN_08008f2c */

void FUN_08008f2c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  iVar1 = DAT_08009004;
  uVar3 = *(int *)(DAT_08009004 + 0x1e8) * 0x53;
  if (uVar3 / 100 <= *(uint *)(DAT_08009004 + 0x224)) {
    *(uint *)(DAT_08009004 + 0x224) = *(uint *)(DAT_08009004 + 0x224) - uVar3 / 100;
    *(short *)(iVar1 + 0x220) = *(short *)(iVar1 + 0x220) + 1;
    FUN_08007884();
    if (*(ushort *)(iVar1 + 0x220) < 0x400) {
      if (*(ushort *)(iVar1 + 0x220) == 2) {
        *(ushort *)(iVar1 + 0x22a) =
             (ushort)*(byte *)(iVar1 + 0x288) << 9 | (*(byte *)(iVar1 + 0x289) & 0xf) << 5 |
             *(byte *)(iVar1 + 0x28a) & 0x1f;
      }
    }
    else {
      *(undefined2 *)(iVar1 + 0x220) = 0x3ff;
    }
  }
  iVar2 = DAT_08009008;
  if (*(char *)(iVar1 + 0x194) != '\0') {
    bVar4 = *(char *)(DAT_08009008 + 4) + 1;
    *(byte *)(DAT_08009008 + 4) = bVar4;
    if (100 < *(uint *)(iVar1 + 0x1a4)) {
      if (10 < bVar4) {
        *(undefined1 *)(iVar1 + 0x28e) = *(undefined1 *)(iVar1 + 0x288);
        *(undefined1 *)(iVar1 + 0x28f) = *(undefined1 *)(iVar1 + 0x289);
        *(undefined1 *)(iVar1 + 0x290) = *(undefined1 *)(iVar1 + 0x28a);
        *(undefined1 *)(iVar1 + 0x291) = *(undefined1 *)(iVar1 + 0x28b);
        *(undefined4 *)(iVar1 + 0x300) = 0;
        *(undefined4 *)(iVar1 + 0x294) = 0;
      }
      goto LAB_08008fdc;
    }
  }
  *(undefined1 *)(iVar2 + 4) = 0;
LAB_08008fdc:
  uVar3 = (uint)(*(int *)(iVar1 + 0x1e8) * 1000) / *(uint *)(iVar1 + 0x6c) + 0x32;
  *(short *)(iVar1 + 0x228) = (short)uVar3;
  if (1000 < (uVar3 & 0xffff)) {
    *(undefined2 *)(iVar1 + 0x228) = 1000;
  }
  return;
}


/* 0800900c FUN_0800900c */

void FUN_0800900c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_080091d0;
  *(undefined4 *)(DAT_080091d0 + 0x1e0) = 0;
  *(undefined4 *)(iVar2 + 0xe8) = 0;
  *(undefined1 *)(iVar2 + 0xf0) = 0;
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0x100) = 0;
  *(undefined4 *)(iVar2 + 0x104) = 0;
  *(undefined4 *)(iVar2 + 0x108) = 0;
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  *(undefined4 *)(iVar2 + 0x110) = 0;
  *(undefined4 *)(iVar2 + 0x114) = 0;
  *(undefined4 *)(iVar2 + 0x11c) = 0;
  *(uint *)(iVar2 + 0x120) = *(byte *)(iVar2 + 0x120) & 1;
  *(undefined4 *)(iVar2 + 0x1dc) = 0x60;
  *(undefined4 *)(iVar2 + 0x1ec) = 0;
  *(undefined4 *)(iVar2 + 0x1f0) = 0;
  *(undefined4 *)(iVar2 + 0xe4) = 2;
  *(undefined4 *)(iVar2 + 500) = 0;
  *(undefined2 *)(iVar2 + 0x1f8) = 0;
  *(undefined2 *)(iVar2 + 0x1fa) = 0;
  *(undefined1 *)(iVar2 + 0x1fc) = 0;
  *(undefined1 *)(iVar2 + 0x1fd) = 0;
  *(undefined4 *)(iVar2 + 0x204) = 0;
  *(undefined4 *)(iVar2 + 0x208) = 0;
  *(undefined4 *)(iVar2 + 0x20c) = 0;
  *(undefined4 *)(iVar2 + 0x210) = 0;
  *(undefined2 *)(iVar2 + 0x214) = 1000;
  *(undefined2 *)(iVar2 + 0x216) = 0;
  *(undefined4 *)(iVar2 + 0x218) = 0;
  *(undefined1 *)(iVar2 + 0x21c) = 0;
  *(undefined1 *)(iVar2 + 0x21d) = 0;
  *(undefined1 *)(iVar2 + 0x21e) = 0;
  *(undefined1 *)(iVar2 + 0x21f) = 0;
  *(undefined2 *)(iVar2 + 0x220) = 0;
  *(undefined4 *)(iVar2 + 0x224) = 0;
  *(undefined4 *)(iVar2 + 0x278) = 0;
  *(undefined4 *)(iVar2 + 0x27c) = 0;
  *(undefined4 *)(iVar2 + 0x280) = 0;
  *(undefined4 *)(iVar2 + 0x248) = 0;
  *(undefined4 *)(iVar2 + 0x24c) = 0;
  *(undefined4 *)(iVar2 + 0x250) = 0;
  *(undefined4 *)(iVar2 + 0x254) = 0;
  *(undefined2 *)(iVar2 + 0x22a) = 0;
  *(undefined4 *)(iVar2 + 600) = 0;
  *(undefined4 *)(iVar2 + 0x25c) = 0;
  *(undefined4 *)(iVar2 + 0x260) = 0;
  *(undefined4 *)(iVar2 + 0x264) = 0;
  *(undefined4 *)(iVar2 + 0x268) = 0;
  *(undefined4 *)(iVar2 + 0x26c) = 0;
  *(undefined2 *)(iVar2 + 0x270) = 0;
  *(undefined2 *)(iVar2 + 0x272) = 0;
  *(undefined2 *)(iVar2 + 0x274) = 0;
  *(undefined1 *)(iVar2 + 0x285) = 0;
  *(undefined4 *)(iVar2 + 0x300) = 0;
  *(undefined4 *)(iVar2 + 0x298) = 0;
  *(undefined4 *)(iVar2 + 0x294) = 0;
  *(undefined2 *)(iVar2 + 0x304) = 0;
  *(undefined4 *)(iVar2 + 0x234) = 0;
  *(undefined4 *)(iVar2 + 0x238) = 0;
  *(undefined4 *)(iVar2 + 0x22c) = 0;
  *(undefined1 *)(iVar2 + 0x23c) = 0;
  *(undefined2 *)(iVar2 + 0x23e) = 0;
  *(undefined2 *)(iVar2 + 0x240) = 0;
  *(undefined1 *)(iVar2 + 0x242) = 0;
  *(undefined1 *)(iVar2 + 0x194) = 0;
  *(undefined4 *)(iVar2 + 0x198) = 0;
  *(undefined4 *)(iVar2 + 0x19c) = 0;
  *(undefined4 *)(iVar2 + 0x1a0) = 0;
  *(undefined4 *)(iVar2 + 0x1a4) = 0;
  *(undefined4 *)(iVar2 + 0x1a8) = 0;
  *(undefined4 *)(iVar2 + 0x18c) = 0;
  *(undefined2 *)(iVar2 + 400) = 0;
  *(undefined2 *)(iVar2 + 0x1d8) = 0;
  *(undefined1 *)(iVar2 + 0x1da) = 0;
  *(undefined1 *)(iVar2 + 0x284) = 0;
  *(undefined2 *)(iVar2 + 0x286) = 0;
  *(undefined2 *)(iVar2 + 0x29c) = 0;
  *(undefined1 *)(iVar2 + 0x29e) = 0;
  *(undefined2 *)(iVar2 + 0x2a0) = 0;
  *(undefined1 *)(iVar2 + 0x2a7) = 1;
  *(undefined1 *)(iVar2 + 0x2a8) = 0;
  *(undefined4 *)(iVar2 + 0x1e8) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined1 *)(iVar2 + 0xec) = 0xff;
  *(undefined4 *)(iVar2 + 0x308) = 0;
  if (param_1 != 0) {
    *(undefined4 *)(iVar2 + 0x1e0) = 0x10;
    *(uint *)(iVar2 + 0xec) = *(uint *)(iVar2 + 0xec) & 0xffffffef;
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 2;
      uVar3 = uVar3 + 1 & 0xffff;
      *(undefined2 *)(iVar2 + iVar1 + 300) = 0;
    } while (uVar3 < 0x10);
    *(undefined1 *)(iVar2 + 0x28e) = 0xe;
    *(undefined1 *)(iVar2 + 0x28f) = 2;
    *(undefined1 *)(iVar2 + 0x290) = 4;
    *(undefined1 *)(iVar2 + 0x291) = 0;
    *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) & 0xfffffffb;
  }
  *(undefined4 *)(iVar2 + 0x298) = 0;
  return;
}


/* 080091d4 FUN_080091d4 */

void FUN_080091d4(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_08009230;
  if (0x2b < param_1) {
    if (*(char *)(DAT_08009230 + 1) == 'U') {
      FUN_0800db04();
      FUN_0800da18(0x305);
      FUN_0800da18(0x304);
      FUN_0800da18(0x302);
      FUN_0800da7c(param_1 * 0x800 + 0x8000000);
      FUN_0800da18(0x305);
      FUN_0800da18(0x304);
      FUN_0800da18(0x302);
      FUN_0800da54();
      *(undefined1 *)(iVar1 + 1) = 0;
    }
  }
  return;
}


/* 08009234 FUN_08009234 */

void FUN_08009234(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < param_4; uVar1 = uVar1 + 1 & 0xffff) {
    *(undefined1 *)(param_3 + uVar1) =
         *(undefined1 *)(param_2 + param_1 * 0x800 + 0x8000000 + uVar1);
  }
  return;
}


/* 08009250 FUN_08009250 */

undefined4 FUN_08009250(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  pcVar1 = DAT_080092ec;
  uVar3 = 0;
  uVar4 = 0;
  if (*DAT_080092ec == 'U') {
    FUN_0800db04();
    FUN_0800da18(0x305);
    FUN_0800da18(0x304);
    FUN_0800da18(0x302);
    while (uVar3 < (uint)(param_4 << 2)) {
      FUN_0800db3c(param_2 + param_1 * 0x800 + uVar3 + 0x8000000,
                   *(uint *)(param_3 + uVar3) & 0xffffff |
                   (uint)*(byte *)((int)(param_3 + uVar3) + 3) << 0x18);
      uVar3 = uVar3 + 4 & 0xffff;
      iVar2 = FUN_0800da34(0x304);
      if ((iVar2 != 0) || (iVar2 = FUN_0800da34(0x302), iVar2 != 0)) {
        uVar4 = 1;
      }
      FUN_0800da18(0x305);
      FUN_0800da18(0x304);
      FUN_0800da18(0x302);
    }
    FUN_0800da54();
    *pcVar1 = '\0';
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


/* 080092f0 FUN_080092f0 */

int FUN_080092f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0x1c;
  uVar3 = 0;
  if (param_1 == DAT_0800936c) {
    return DAT_08009370;
  }
  iVar2 = DAT_08009374 + -0xe8 + param_2 * 0x74;
  while (uVar5 = ((uVar4 - uVar3) - ((int)(uVar4 - uVar3) >> 0x1f) & 0x1ff) >> 1, uVar5 != 0) {
    uVar5 = uVar5 + uVar3;
    if (param_1 < *(int *)(iVar2 + uVar5 * 4)) {
      uVar4 = uVar5 & 0xff;
    }
    else {
      uVar3 = uVar5 & 0xff;
    }
  }
  if (*(int *)(iVar2 + 0x70) < param_1) {
    return DAT_08009370 + 100;
  }
  if (param_1 < *(int *)(DAT_08009374 + -0xe8 + param_2 * 0x74)) {
    return 1000;
  }
  iVar1 = *(int *)(iVar2 + uVar3 * 4);
  return (int)(short)(*(short *)(DAT_08009374 + uVar3 * 2) -
                     (short)(((param_1 - iVar1) * 0x32) / (*(int *)(iVar2 + uVar4 * 4) - iVar1)));
}


/* 08009378 FUN_08009378 */

void FUN_08009378(void)

{
  FUN_080111e4();
  FUN_0800dc68();
  FUN_0800e272();
  FUN_0800fc8c();
  FUN_080112dc();
  FUN_08006000();
  FUN_0800f0e4();
  FUN_0800d87c();
  FUN_0800d5c8();
  FUN_0800f294();
  FUN_0800c1b4();
  FUN_0800c794();
  FUN_0801117c();
  FUN_08008084();
  FUN_0800dc40();
  FUN_0800cf50();
  FUN_08006360();
  return;
}


/* 080093c4 FUN_080093c4 */

void FUN_080093c4(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08007bec(0x50,2,0x5566);
  *(undefined1 *)(DAT_080093d8 + 0xe) = uVar1;
  return;
}


/* 080093dc FUN_080093dc */

void FUN_080093dc(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  byte bVar7;
  undefined4 unaff_lr;
  
  pbVar3 = DAT_080094cc;
  iVar2 = DAT_080094c8;
  iVar5 = DAT_080094c8 + 0x14;
  *(int *)(DAT_080094cc + 4) = DAT_080094c8;
  *(int *)(pbVar3 + 8) = iVar5;
  *pbVar3 = 0;
  do {
    cVar1 = *(char *)(iVar2 + (uint)*pbVar3);
    if ((cVar1 == '\0') || (cVar1 == -1)) break;
    uVar6 = *pbVar3 + 1;
    *pbVar3 = (byte)uVar6;
  } while ((uVar6 & 0xff) < 0x20);
  FUN_0800d60c(0x1e);
  FUN_08009378();
  iVar5 = FUN_0800ddfc();
  FUN_0800900c();
  FUN_08006ec4();
  FUN_08007d20();
  FUN_08009d20();
  FUN_08008e74();
  FUN_08007610();
  FUN_080095c4();
  FUN_080093c4();
  FUN_08008cec();
  iVar2 = DAT_080094d0;
  *(uint *)(DAT_080094d0 + 0xec) = *(uint *)(DAT_080094d0 + 0xec) & 0xffffffbf;
  *(undefined2 *)(iVar2 + 0x306) = *(undefined2 *)(iVar2 + 0x56);
  FUN_0800f0ac();
  *(undefined1 *)(iVar2 + 0x2a7) = 0;
  FUN_0800a934();
  FUN_08007628(iVar5);
  if (iVar5 != 0) {
    *(undefined1 *)(iVar2 + 0x5d) = 0;
    FUN_0800d60c(500);
  }
  bVar7 = 0;
  do {
    iVar5 = FUN_08007198();
    if (iVar5 == 0) goto LAB_0800948e;
    bVar7 = bVar7 + 1;
  } while (bVar7 < 4);
  *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) | 0x84;
LAB_0800948e:
  if ((*(byte *)(iVar2 + 0x120) & 1) == 0) {
    uVar6 = *(uint *)(iVar2 + 0xe8) | 1;
  }
  else {
    uVar6 = *(uint *)(iVar2 + 0xe8) & 0xfffffffe;
  }
  *(uint *)(iVar2 + 0xe8) = uVar6;
  puVar4 = DAT_080094d4;
  *DAT_080094d4 = *(undefined1 *)(iVar2 + 0x288);
  puVar4[1] = *(undefined1 *)(iVar2 + 0x289);
  puVar4[2] = *(undefined1 *)(iVar2 + 0x28a);
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_0800ccf8,4,3,0x100,unaff_r4,unaff_lr);
  FUN_0800fb5c(0x600);
  FUN_0800f3b0(0x17,2,0);
  FUN_0800df10(0,8);
  FUN_0800d8b0(0x100,0);
  FUN_0800d938(0x100);
  FUN_0800fb5c(0x603);
  FUN_0800df68(DAT_0800ccfc,4,3,0x4000);
  return;
}


/* 0800953c FUN_0800953c */

void FUN_0800953c(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  iVar2 = DAT_08009594;
  iVar1 = DAT_08009590;
  if (*(char *)(DAT_08009590 + 2) != 'U') {
    *(uint *)(DAT_08009594 + 0xf8) = *(uint *)(DAT_08009594 + 0xf8) & 0xfffffffe;
    return;
  }
  if ((*(uint *)(DAT_08009594 + 0xf8) & 1) != 0) {
    local_10 = in_r3;
    FUN_08007b28(*(undefined1 *)(DAT_08009590 + 0xc));
    local_10 = CONCAT22(local_10._2_2_,0x7777);
    FUN_080110ac(0,6,0x73,0x5555,&local_10,2);
  }
  *(uint *)(iVar2 + 0xf8) = *(uint *)(iVar2 + 0xf8) & 0xfffffffe;
  *(undefined1 *)(iVar1 + 2) = 0;
  return;
}


/* 08009598 FUN_08009598 */

void FUN_08009598(char param_1)

{
  int iVar1;
  
  iVar1 = DAT_080095c0;
  *(uint *)(DAT_080095c0 + 0xe8) = *(uint *)(DAT_080095c0 + 0xe8) | 1;
  *(char *)(iVar1 + 0x2a5) = param_1 + '\n';
  FUN_080095e0();
  FUN_08009aa8();
  FUN_08007884();
  FUN_08007474();
  return;
}


/* 080095c4 FUN_080095c4 */

void FUN_080095c4(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = FUN_08007bec(8,10,0x5566);
  iVar1 = DAT_080095dc;
  *(undefined1 *)(DAT_080095dc + 0xc) = uVar2;
  *(undefined1 *)(iVar1 + 3) = 1;
  return;
}


/* 080095e0 FUN_080095e0 */

void FUN_080095e0(void)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  iVar6 = DAT_080099c4;
  if (*(byte *)(DAT_080099c4 + 7) < 0xfa) {
    *(byte *)(DAT_080099c4 + 7) = *(byte *)(DAT_080099c4 + 7) + 1;
  }
  iVar7 = DAT_080099c8;
  uVar22 = *(uint *)(DAT_080099c8 + 0xe8);
  uVar11 = (uVar22 & 0x3f) >> 5;
  uVar17 = (uVar22 & 0x1f) >> 4;
  uVar12 = uVar11 | uVar17;
  uVar21 = *(uint *)(DAT_080099c8 + 0x108);
  uVar13 = *(uint *)(DAT_080099c8 + 0x1e0);
  uVar18 = *(uint *)(DAT_080099c8 + 0x100);
  uVar14 = *(uint *)(DAT_080099c8 + 0x1dc);
  uVar20 = *(uint *)(DAT_080099c8 + 0x10c);
  uVar15 = uVar18 & 1 | ((uVar18 & 7) >> 2) << 1 | uVar14 & 4 | (uVar14 & 1) << 3 |
           ((uVar22 & 0xff) >> 7) << 4 | (uVar22 & 1) << 5 | ((uVar21 & 0x3f) >> 5) << 6 |
           (uVar12 | ((uVar21 & 0xff) >> 7) << 1 | ((uVar13 & 0xff) >> 7) << 2) << 8;
  if ((uVar20 != 0) || (uVar12 != 0 || (int)(uVar22 << 0x1e) < 0)) {
    uVar15 = uVar15 | 0x80;
  }
  uVar16 = (uint)*(byte *)(DAT_080099c8 + 0xfc);
  uVar15 = (uVar16 & 3) >> 1 | (uVar16 & 1) << 1 | ((uVar16 & 0x1f) >> 4) << 2 |
           ((uVar21 & 0x7f) >> 6) << 2 | ((uVar16 & 7) >> 2) << 3 | ((uVar16 & 0xf) >> 3) << 4 |
           uVar16 & 0x20 | ((uVar18 & 3) >> 1) << 6 | ((uVar18 & 0xf) >> 3) << 7 | uVar15 << 8;
  if (*(uint *)(iVar6 + 0x14) == uVar15) {
    return;
  }
  uVar18 = *(uint *)(iVar6 + 0x14) & uVar15;
  *(uint *)(iVar6 + 0x14) = uVar18;
  iVar8 = DAT_080099c8;
  uVar15 = uVar15 & ~uVar18;
  if (uVar15 == 0) {
    return;
  }
  uVar21 = *(uint *)(iVar7 + 0xf8);
  *(uint *)(iVar7 + 0xf8) = uVar21 | 0x10;
  uVar10 = *(undefined1 *)(iVar8 + 0x156);
  sVar19 = *(short *)(iVar8 + 0x240) + 1;
  if ((uVar15 & 1) != 0) {
    *(undefined1 *)(iVar6 + 4) = 0x12;
    sVar1 = *(short *)(DAT_080099c4 + 0x22);
    *(short *)(iVar6 + 0x10) = sVar1;
    if (sVar1 == 0) {
      *(uint *)(iVar7 + 0xf8) = uVar21 & 0xffffffef;
    }
    *(undefined1 *)(iVar6 + 5) = uVar10;
    uVar18 = uVar18 | 1;
LAB_0800973e:
    *(uint *)(iVar6 + 0x14) = uVar18;
    *(short *)(iVar7 + 0x240) = sVar19;
    return;
  }
  bVar3 = *(byte *)(DAT_080099c8 + 0x15a);
  if ((int)(uVar15 << 0x1e) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x11;
    sVar1 = *(short *)(DAT_080099c4 + 0x1c);
    *(short *)(iVar6 + 0x10) = sVar1;
    if (sVar1 == 0) {
      *(uint *)(iVar7 + 0xf8) = uVar21 & 0xffffffef;
    }
    *(byte *)(iVar6 + 5) = bVar3;
    uVar18 = uVar18 | 2;
    goto LAB_0800973e;
  }
  uVar9 = *(undefined2 *)(DAT_080099c4 + 0x28);
  if ((int)(uVar15 << 0x1d) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x13;
    *(undefined2 *)(iVar6 + 0x10) = uVar9;
    uVar18 = uVar18 | 4;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0x1c) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x14;
    *(undefined2 *)(iVar6 + 0x10) = uVar9;
    uVar18 = uVar18 | 8;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0x1b) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x15;
    *(undefined2 *)(iVar6 + 0x10) = 0;
    uVar18 = uVar18 | 0x10;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0x1a) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x17;
    *(undefined2 *)(iVar6 + 0x10) = 0;
    uVar18 = uVar18 | 0x20;
    goto LAB_0800973e;
  }
  uVar5 = *(ushort *)(DAT_080099c8 + 0x1b2);
  uVar4 = *(undefined1 *)(DAT_080099c8 + 0x1b8);
  if ((int)(uVar15 << 0x19) < 0) {
    if (*(byte *)(iVar6 + 7) < 3) {
LAB_080097c4:
      *(uint *)(iVar7 + 0xf8) = uVar21 & 0xffffffef;
      return;
    }
    *(undefined1 *)(iVar6 + 4) = 0x18;
    *(ushort *)(iVar6 + 0x10) = uVar5;
    *(undefined1 *)(iVar6 + 5) = uVar4;
    uVar18 = uVar18 | 0x40;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0x18) < 0) {
    if (*(byte *)(iVar6 + 7) < 3) goto LAB_080097c4;
    *(undefined1 *)(iVar6 + 4) = 0x19;
    *(ushort *)(iVar6 + 0x10) = uVar5;
    *(undefined1 *)(iVar6 + 5) = uVar4;
    uVar18 = uVar18 | 0x80;
    goto LAB_0800973e;
  }
  uVar9 = *(undefined2 *)(DAT_080099c8 + 0x1b4);
  uVar4 = *(undefined1 *)(DAT_080099c8 + 0x1b9);
  if ((int)(uVar15 << 0x17) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1e;
    *(undefined2 *)(iVar6 + 0x10) = uVar9;
    *(undefined1 *)(iVar6 + 5) = uVar4;
    uVar18 = uVar18 | 0x100;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0x16) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1f;
    *(undefined2 *)(iVar6 + 0x10) = uVar9;
    *(undefined1 *)(iVar6 + 5) = uVar4;
    uVar18 = uVar18 | 0x200;
    goto LAB_0800973e;
  }
  uVar2 = *(ushort *)(DAT_080099c4 + 0x12);
  if ((int)(uVar15 << 0x15) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1a;
    uVar11 = *(uint *)(iVar6 + 0x18) / 10;
    *(short *)(iVar6 + 0x10) = (short)uVar11;
    if (uVar2 < 0x100) {
      *(char *)(iVar6 + 5) = (char)uVar2;
    }
    else {
      *(undefined1 *)(iVar6 + 5) = 0xff;
    }
    *(undefined2 *)(iVar6 + 0x12) = 0;
    *(uint *)(iVar7 + 0x1dc) = uVar14 & 0xfffffffb;
    if ((uVar11 & 0xffff) == 0) {
      *(uint *)(iVar7 + 0xf8) = uVar21 & 0xffffffef;
    }
    *(uint *)(iVar6 + 0x14) = uVar18 | 0x400;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    return;
  }
  if ((int)(uVar15 << 0x14) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1b;
    uVar11 = *(uint *)(iVar7 + 0x280) / 10;
    *(short *)(iVar6 + 0x10) = (short)uVar11;
    if (uVar2 < 0x100) {
      *(char *)(iVar6 + 5) = (char)uVar2;
    }
    else {
      *(undefined1 *)(iVar6 + 5) = 0xff;
    }
    *(undefined2 *)(iVar6 + 0x12) = 0;
    if ((uVar11 & 0xffff) == 0) {
      *(uint *)(iVar7 + 0xf8) = uVar21 & 0xffffffef;
    }
    *(uint *)(iVar7 + 0x1dc) = uVar14 & 0xfffffffc;
    *DAT_080099cc = 0;
    uVar18 = uVar18 | 0x800;
    goto LAB_080098ca;
  }
  if ((int)(uVar15 << 0x13) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1c;
    *(undefined2 *)(iVar6 + 0x10) = 0;
    uVar18 = uVar18 | 0x1000;
    goto LAB_080098ca;
  }
  if ((int)(uVar15 << 0x12) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x1d;
    *(ushort *)(iVar6 + 0x10) = (ushort)*(byte *)(iVar7 + 0x2a5);
    *(undefined1 *)(iVar6 + 5) = *(undefined1 *)(iVar7 + 0x2a6);
    *(uint *)(iVar7 + 0xe8) = uVar22 & 0xfffffffe;
    uVar18 = uVar18 | 0x2000;
    goto LAB_080098ca;
  }
  if ((int)(uVar15 << 0x11) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x20;
    *(undefined2 *)(iVar6 + 0x10) = *(undefined2 *)(iVar7 + 0x1ce);
    uVar18 = uVar18 | 0x4000;
    goto LAB_0800973e;
  }
  if ((int)(uVar15 << 0xf) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x24;
    *(ushort *)(iVar6 + 0x10) = (ushort)uVar11 | (ushort)(uVar17 << 1);
    uVar18 = uVar18 | 0x10000;
    goto LAB_080098ca;
  }
  if ((int)(uVar15 << 0xe) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x26;
    *(ushort *)(iVar6 + 0x10) = (ushort)bVar3;
    *(undefined1 *)(iVar6 + 5) = uVar10;
    uVar18 = uVar18 | 0x20000;
    goto LAB_080098ca;
  }
  if ((int)(uVar15 << 0xd) < 0) {
    *(undefined1 *)(iVar6 + 4) = 0x27;
    *(uint *)(iVar7 + 0x1e0) = uVar13 & 0xffffff7f;
    *(short *)(iVar6 + 0x10) =
         (short)((uint)(*(int *)(iVar7 + 0x1e8) * 100) / *(uint *)(iVar7 + 0x6c));
    *(char *)(iVar6 + 5) = (char)(*(ushort *)(iVar7 + 0x2fe) / 10);
    uVar18 = uVar18 | 0x40000;
    goto LAB_080098ca;
  }
  if (-1 < (int)(uVar15 << 0x10)) {
    return;
  }
  *(undefined1 *)(iVar6 + 4) = 0x25;
  if ((uVar20 & 1) == 0) {
    if ((int)(uVar20 << 0x1c) < 0) {
      *(undefined2 *)(iVar6 + 0x10) = 2;
      uVar10 = (undefined1)((int)(uVar5 - 0xaab) / 10);
LAB_080099bc:
      *(undefined1 *)(iVar6 + 5) = uVar10;
      *(short *)(iVar7 + 0x240) = sVar19;
    }
    else {
      if (uVar12 == 0) {
        if (((int)(uVar20 << 0x1e) < 0) || ((int)(uVar20 << 0x1d) < 0)) {
          uVar10 = (undefined1)(*(uint *)(DAT_080099c8 + 0x1a0) / 1000);
          *(undefined2 *)(iVar6 + 0x10) = 4;
          goto LAB_080099bc;
        }
        if ((int)(uVar22 << 0x1e) < 0) {
          uVar9 = 5;
        }
        else if ((int)(uVar20 << 0x1a) < 0) {
          uVar9 = 6;
        }
        else if ((int)(uVar20 << 0x18) < 0) {
          uVar9 = 7;
        }
        else if ((int)(uVar20 << 0x19) < 0) {
          uVar9 = 8;
        }
        else {
          uVar9 = 0xff;
        }
      }
      else {
        uVar9 = 3;
      }
      *(undefined2 *)(iVar6 + 0x10) = uVar9;
    }
  }
  else {
    *(undefined2 *)(iVar6 + 0x10) = 1;
    *(byte *)(iVar6 + 5) = bVar3 / 100;
  }
  uVar18 = uVar18 | 0x8000;
LAB_080098ca:
  *(uint *)(iVar6 + 0x14) = uVar18;
  return;
}


/* 080099fc FUN_080099fc */

void FUN_080099fc(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_08009a40;
  if ((*(byte *)(DAT_08009a40 + 0x120) & 1) == 0) {
    uVar2 = *(uint *)(DAT_08009a40 + 0xe8) | 1;
  }
  else {
    uVar2 = *(uint *)(DAT_08009a40 + 0xe8) & 0xfffffffe;
  }
  *(uint *)(DAT_08009a40 + 0xe8) = uVar2;
  *(undefined1 *)(iVar1 + 0x2a5) = 0;
  *(undefined1 *)(iVar1 + 0x2a6) = 2;
  FUN_080095e0();
  FUN_08009aa8();
  FUN_08007884();
  FUN_08007474();
  return;
}


/* 08009a44 FUN_08009a44 */

void FUN_08009a44(void)

{
  char cVar1;
  ushort uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  puVar3 = DAT_08009aa0;
  *DAT_08009aa0 = DAT_08009aa0[1];
  puVar3[1] = puVar3[2];
  iVar4 = DAT_08009aa4;
  puVar3[2] = *(undefined2 *)(DAT_08009aa4 + 0x158);
  puVar3[3] = puVar3[4];
  puVar3[4] = puVar3[5];
  puVar3[5] = *(undefined2 *)(iVar4 + 0x154);
  puVar3[6] = puVar3[7];
  puVar3[7] = puVar3[8];
  puVar3[8] = (short)(*(uint *)(iVar4 + 0x1a0) / 10);
  puVar3 = DAT_08009aa0;
  uVar2 = *(ushort *)(iVar4 + 0x192);
  if (uVar2 <= (ushort)DAT_08009aa0[-5]) {
    *(undefined1 *)(DAT_08009aa0 + -0xb) = 0;
    return;
  }
  cVar1 = *(char *)(DAT_08009aa0 + -0xb);
  *(byte *)(DAT_08009aa0 + -0xb) = cVar1 + 1U;
  if (10 < (byte)(cVar1 + 1U)) {
    puVar3[-5] = uVar2;
  }
  return;
}


/* 08009aa8 FUN_08009aa8 */

void FUN_08009aa8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_08009b18;
  iVar1 = DAT_08009b14;
  if (*(char *)(DAT_08009b14 + 3) == '\x01') {
    if ((int)((uint)*(byte *)(DAT_08009b18 + 0xf8) << 0x1b) < 0) {
      local_18 = param_3;
      local_14 = param_4;
      FUN_0800a894();
      local_18 = *(undefined4 *)(iVar2 + 0x288);
      puVar3 = (uint *)(iVar2 + 0xf8);
      local_14 = CONCAT13((char)*(undefined2 *)(iVar1 + 0x10),
                          CONCAT12((char)((ushort)*(undefined2 *)(iVar1 + 0x10) >> 8),
                                   *(undefined2 *)(iVar1 + 4)));
      FUN_08007dcc(*(undefined1 *)(iVar1 + 0xc),&local_18);
      *(undefined1 *)(iVar1 + 4) = 0;
      *(undefined1 *)(iVar1 + 5) = 0;
      *(undefined2 *)(iVar1 + 0x10) = 0;
      *puVar3 = *puVar3 & 0xffffffef;
    }
  }
  return;
}


/* 08009b1c FUN_08009b1c */

void FUN_08009b1c(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar11;
  undefined4 unaff_r6;
  uint uVar12;
  uint uVar13;
  undefined4 unaff_lr;
  uint uVar14;
  
  iVar2 = DAT_08009d18;
  bVar4 = *(byte *)(DAT_08009d18 + 0x108);
  uVar9 = (uint)bVar4;
  iVar10 = *(int *)(DAT_08009d18 + 0xec);
  uVar14 = *(uint *)(DAT_08009d18 + 0xe4);
  uVar7 = (uVar9 & 0x3f) >> 5;
  uVar12 = uVar14 & 1;
  uVar11 = (*(byte *)(DAT_08009d18 + 0x10c) & 0x1f) >> 4;
  uVar13 = (*(byte *)(DAT_08009d18 + 0x114) & 7) >> 2;
  if (((((((((iVar10 << 0x1f < 0 && uVar7 == 0) && uVar12 == 0) && (bVar4 & 1) == 0) &&
          -1 < (char)bVar4) && uVar11 == 0) && (uVar9 & 7) >> 2 == 0) && (uVar9 & 0x7f) >> 6 == 0)
      && uVar13 == 0) && -1 < (int)(uVar9 << 0x1e)) {
    uVar9 = *(uint *)(DAT_08009d18 + 0xf4) | 1;
  }
  else {
    uVar9 = *(uint *)(DAT_08009d18 + 0xf4) & 0xfffffffe;
  }
  *(uint *)(DAT_08009d18 + 0xf4) = uVar9;
  uVar9 = *(uint *)(iVar2 + 0xf4);
  if ((((((uVar7 == 0 && iVar10 << 0x1e < 0) && iVar10 << 0x19 < 0) && uVar11 == 0) && uVar13 == 0)
      && -1 < (char)bVar4) && uVar12 == 0) {
    uVar9 = uVar9 | 2;
LAB_08009bc0:
    *(uint *)(iVar2 + 0xf4) = uVar9;
  }
  else {
    *(uint *)(iVar2 + 0xf4) = uVar9 & 0xfffffffd;
    if ((uVar14 & 1) != 0) {
      uVar9 = uVar9 & 0xfffffffd;
      goto LAB_08009bc0;
    }
  }
  iVar10 = DAT_08009d1c;
  if (((((*(int *)(iVar2 + 0x15c) - 500U < *(uint *)(iVar2 + 0x160)) &&
        (-1 < (int)((uint)*(byte *)(iVar2 + 0x104) << 0x1e))) || (99 < *(int *)(iVar2 + 0x198))) ||
      ((iVar8 = FUN_0800dd00(2), iVar8 != 0 && (uVar7 = FUN_0800dd00(3), uVar7 < 0xb)))) &&
     ((*(ushort *)(iVar2 + 0x158) < *(ushort *)(iVar2 + 0x9c) || (*(ushort *)(iVar2 + 0x1f8) < 1000)
      ))) {
    *(undefined1 *)(iVar10 + 0xb) = 0;
    if (*(byte *)(iVar10 + 10) < 100) {
      *(byte *)(iVar10 + 10) = *(byte *)(iVar10 + 10) + 1;
    }
    if ((*(uint *)(iVar2 + 0x160) <= *(int *)(iVar2 + 0x15c) - 500U) && (*(byte *)(iVar10 + 10) < 3)
       ) {
      *(uint *)(iVar2 + 0xf4) = *(uint *)(iVar2 + 0xf4) & 0xfffffffe;
    }
  }
  else {
    uVar7 = *(uint *)(iVar2 + 0xf4) & 0xfffffffe;
    *(uint *)(iVar2 + 0xf4) = uVar7 | *(byte *)(iVar10 + 0xc) & 1;
    bVar4 = *(byte *)(iVar10 + 0xb);
    if (bVar4 < 100) {
      bVar4 = bVar4 + 1;
      *(byte *)(iVar10 + 0xb) = bVar4;
    }
    if (2 < bVar4) {
      *(uint *)(iVar2 + 0xf4) = uVar7;
    }
    *(undefined1 *)(iVar10 + 10) = 0;
  }
  *(byte *)(iVar10 + 0xc) = *(byte *)(iVar2 + 0xf4) & 1;
  if (((uint)((int)(short)(ushort)*(byte *)(iVar2 + 0xba) *
              (int)(short)(ushort)*(byte *)(iVar2 + 0x55) * 0x32) < *(uint *)(iVar2 + 0x160)) ||
     ((uVar7 = FUN_0800dd00(3), 1 < uVar7 && (uVar7 = FUN_0800dd00(3), uVar7 < 0xb)))) {
    uVar5 = *(short *)(iVar10 + 0x1a) + 1;
    *(ushort *)(iVar10 + 0x1a) = uVar5;
    if ((5 < uVar5) && (*(undefined2 *)(iVar10 + 0x1a) = 5, *(char *)(iVar2 + 0x5d) == 'U')) {
      *(uint *)(iVar2 + 0xf4) = *(uint *)(iVar2 + 0xf4) & 0xfffffffd;
    }
  }
  else {
    *(undefined2 *)(iVar10 + 0x1a) = 0;
  }
  uVar5 = *(ushort *)(iVar10 + 0x1c);
  if (*(uint *)(iVar2 + 0x14c) < (uint)*(byte *)(iVar2 + 0x55) * 2000) {
    if (999 < uVar5) goto LAB_08009cf2;
    sVar6 = uVar5 + 1;
  }
  else {
    if (uVar5 == 0) goto LAB_08009cf2;
    sVar6 = uVar5 - 1;
  }
  *(short *)(iVar10 + 0x1c) = sVar6;
LAB_08009cf2:
  if (((int)((uint)*(byte *)(iVar2 + 0x114) << 0x1e) < 0) || (0x78 < *(ushort *)(iVar10 + 0x1c))) {
    FUN_0800d5a8();
  }
  else if (*(ushort *)(iVar10 + 0x1c) < 2) {
    FUN_0800d5b8();
  }
  pbVar1 = (byte *)(DAT_0800f2dc + 0xf4);
  FUN_0800d628((*pbVar1 & 3) >> 1);
  bVar4 = *pbVar1;
  FUN_0800fb5c(0x603);
  uVar3 = DAT_0800cc34;
  FUN_0800df68(DAT_0800cc34,0x10,3,2,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  if ((bVar4 & 1) == 0) {
    FUN_0800ded8(uVar3,2);
    return;
  }
  FUN_0800dedc();
  return;
}


/* 08009d20 FUN_08009d20 */

void FUN_08009d20(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_08007bec(0x14,2,0x5566);
  *(undefined1 *)(DAT_08009d34 + 0xd) = uVar1;
  return;
}


/* 08009d38 FUN_08009d38 */

void FUN_08009d38(void)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = DAT_08009d5c;
  uVar2 = *(short *)(DAT_08009d5c + 0x2a0) + 1;
  *(ushort *)(DAT_08009d5c + 0x2a0) = uVar2;
  if (0x3b < uVar2) {
    *(short *)(iVar1 + 0x29c) = *(short *)(iVar1 + 0x29c) + 1;
    *(undefined2 *)(iVar1 + 0x2a0) = 0;
  }
  return;
}


/* 08009d60 FUN_08009d60 */

void FUN_08009d60(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  iVar3 = DAT_08009e38;
  iVar2 = DAT_08009e34;
  if ((*(char *)(DAT_08009e34 + 0x194) != '\0') &&
     ((uint)*(ushort *)(DAT_08009e34 + 0xac) * 10 <= *(uint *)(DAT_08009e34 + 0x1a0))) {
    cVar1 = *(char *)(DAT_08009e38 + 4);
    bVar4 = cVar1 + 1;
    *(byte *)(DAT_08009e38 + 4) = bVar4;
    if (*(ushort *)(iVar2 + 0x2b6) <= (ushort)bVar4) {
      *(char *)(iVar3 + 4) = cVar1;
      *(uint *)(iVar2 + 0x108) = *(uint *)(iVar2 + 0x108) | 0x40;
    }
  }
  if ((((int)((uint)*(byte *)(iVar2 + 0x100) << 0x1b) < 0) && (iVar5 = FUN_0800e320(), iVar5 != 0))
     && (*(char *)(iVar3 + 6) == '\0')) {
    bVar4 = *(char *)(iVar3 + 5) + 1;
    *(byte *)(iVar3 + 5) = bVar4;
    if (9 < bVar4) {
      FUN_080062cc();
      *(undefined1 *)(iVar3 + 5) = 0;
      *(undefined1 *)(iVar3 + 6) = 1;
    }
  }
  else if (*(char *)(iVar3 + 5) != '\0') {
    *(char *)(iVar3 + 5) = *(char *)(iVar3 + 5) + -1;
  }
  if ((((int)((uint)*(byte *)(iVar2 + 0x100) << 0x1a) < 0) && (iVar5 = FUN_0800e320(), iVar5 != 0))
     && (*(char *)(iVar3 + 8) == '\0')) {
    bVar4 = *(char *)(iVar3 + 7) + 1;
    *(byte *)(iVar3 + 7) = bVar4;
    if (9 < bVar4) {
      FUN_08006324();
      *(undefined1 *)(iVar3 + 7) = 0;
      *(undefined1 *)(iVar3 + 8) = 1;
    }
  }
  else if (*(char *)(iVar3 + 7) != '\0') {
    *(char *)(iVar3 + 7) = *(char *)(iVar3 + 7) + -1;
  }
  iVar5 = FUN_0800e320();
  if (iVar5 == 0) {
    bVar4 = *(char *)(iVar3 + 9) + 1;
    *(byte *)(iVar3 + 9) = bVar4;
    if (0x1e < bVar4) {
      *(undefined1 *)(iVar3 + 6) = 0;
      *(undefined1 *)(iVar3 + 8) = 0;
      *(uint *)(iVar2 + 0x108) = *(uint *)(iVar2 + 0x108) & 0xffffffbf;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 9) = 0;
  }
  return;
}


/* 08009e3c FUN_08009e3c */

void FUN_08009e3c(void)

{
  FUN_0800d60c(0x32);
  DataSynchronizationBarrier(0xf);
  *DAT_08009e5c = *DAT_08009e5c & 0x700 | DAT_08009e60;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 08009e64 thunk_FUN_0800fc8c */

void thunk_FUN_0800fc8c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800f4a8();
  uVar2 = FUN_0800e360();
  *(uint *)(DAT_0800fd54 + 0x120) = *(uint *)(DAT_0800fd54 + 0x120) & 0xfffffffe | uVar2 & 1;
  iVar3 = FUN_08006e70(1);
  if (iVar3 != 0xabcd) {
    FUN_08006e60();
    FUN_0800fa50(0x800);
    FUN_0800fa6c(0x800);
    FUN_0800fbb0(0x100);
    FUN_0800fb5c(0x80f);
    FUN_0800ff34();
    FUN_0800fdd0();
    FUN_0800fdc0(2);
    FUN_0800fdd0();
    FUN_0800fde0(0);
    FUN_0800fdd0();
    FUN_08006e9c(1,0xabcd);
    FUN_080100b0(DAT_0800fd58);
    FUN_0800fdd0();
  }
  FUN_0800fb5c(0x80f);
  FUN_0800fdc0(2);
  FUN_0800f3b0(0x29,2,0);
  FUN_0800fdb0(2);
  FUN_0800d8b0(0x20000,0);
  FUN_0800d938(0x20000);
  FUN_0800d928(0x20000);
  iVar3 = FUN_08006e70(10);
  if (iVar3 == 0x3344) {
    return;
  }
  iVar3 = FUN_0800fd7c();
  FUN_0800fdd0();
  iVar1 = FUN_08006e70(4);
  uVar2 = FUN_08006e70(5);
  uVar2 = (uVar2 | iVar1 << 0x10) + 0x7fff;
  if (0xfff8 < (uVar2 - iVar3) - 6) {
    uVar2 = iVar3 + 0x7fff;
  }
  FUN_0800fbf4(uVar2);
  FUN_0800fdd0();
  *DAT_0800fc88 = *DAT_0800fc88 + 1;
  FUN_08006e9c(4,uVar2 >> 0x10);
  FUN_08006e9c(5,uVar2 & 0xffff);
  iVar3 = FUN_08010088();
  FUN_080100b0(iVar3 + 1);
  return;
}


/* 08009e68 thunk_FUN_0800fe04 */

void thunk_FUN_0800fe04(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar3 = FUN_08010088();
  iVar2 = DAT_0800ff28;
  *(undefined4 *)(DAT_0800ff28 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  FUN_08004d9c(uVar3,0,0x3c,0);
  uVar12 = FUN_08004d9c(uVar3,0,0x3c,0);
  FUN_08004d9c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x3c,0);
  uVar12 = FUN_08004d9c(uVar3,0,0xe10,0);
  FUN_08004d9c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x18,0);
  uVar4 = FUN_08004d9c(uVar3,0,DAT_0800ff2c,0);
  iVar2 = DAT_0800ff28;
  uVar6 = uVar4 / 0x16d;
  uVar10 = uVar6 + 1 >> 2;
  uVar8 = uVar6 + 0x7b2;
  if (((uVar6 + 0x7b1) / 100 != uVar8 / 100) && (uVar8 % 400 != 0)) {
    uVar10 = uVar10 + 1;
  }
  uVar4 = uVar4 % 0x16d;
  uVar10 = uVar8 / 400 + (uVar10 - uVar8 / 100) + 0xf;
  uVar8 = uVar4;
  if (uVar4 < uVar10) {
    uVar8 = uVar4 + 0x16d;
    uVar6 = uVar6 - 1;
  }
  uVar11 = uVar6 + 0x7b2;
  iVar9 = DAT_0800ff28 + 0x10;
  uVar5 = (uVar8 - uVar10) + 1;
  *(undefined4 *)(DAT_0800ff28 + 0x14) = 0x1c;
  if (((uVar6 & 3) == 2) &&
     (((uVar11 % 100 != 0 || (uVar11 % 400 == 0)) &&
      (*(undefined4 *)(iVar2 + 0x14) = 0x1d, uVar4 < uVar10)))) {
    uVar5 = (uVar8 - uVar10) + 2;
  }
  iVar2 = DAT_0800ff30;
  iVar7 = 1;
  uVar4 = *(uint *)(DAT_0800ff28 + 0x10);
  while (uVar4 < uVar5) {
    uVar5 = uVar5 - uVar4;
    iVar1 = iVar7 * 4;
    iVar7 = iVar7 + 1;
    uVar4 = *(uint *)(iVar9 + iVar1);
  }
  *(undefined1 *)(DAT_0800ff30 + 0x28d) = extraout_r2;
  *(undefined1 *)(iVar2 + 0x28c) = extraout_r2_00;
  *(undefined1 *)(iVar2 + 0x28b) = extraout_r2_01;
  *(char *)(iVar2 + 0x28a) = (char)uVar5;
  *(char *)(iVar2 + 0x289) = (char)iVar7;
  *(char *)(iVar2 + 0x288) = (char)uVar11 + '0';
  return;
}


/* 08009e6c thunk_FUN_0800ff4c */

void thunk_FUN_0800ff4c(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[1] - 2;
  uVar4 = *param_1 + 2000;
  if (iVar5 < 1) {
    uVar4 = *param_1 + 1999;
    iVar5 = param_1[1] + 10;
  }
  bVar1 = param_1[5];
  lVar2 = (ulonglong)
          ((((uint)((short)iVar5 * 0x16f) / 0xc + uVar4 / 400 +
             ((uVar4 >> 2) - uVar4 / 100) + (uint)param_1[2] + (short)uVar4 * 0x16d + DAT_0800ffd0)
            * 0x18 + (uint)param_1[3]) * 0x3c + (uint)param_1[4]) * 0x3c;
  iVar5 = (int)lVar2;
  FUN_0800fdd0((uint)bVar1,iVar5,(int)((ulonglong)lVar2 >> 0x20));
  FUN_080100b0(iVar5 + (uint)bVar1);
  FUN_0800fdd0();
  iVar5 = FUN_08006e70(10);
  if (iVar5 == 0x3344) {
    return;
  }
  iVar5 = FUN_0800fd7c();
  FUN_0800fdd0();
  iVar3 = FUN_08006e70(4);
  uVar4 = FUN_08006e70(5);
  uVar4 = (uVar4 | iVar3 << 0x10) + 0x7fff;
  if (0xfff8 < (uVar4 - iVar5) - 6) {
    uVar4 = iVar5 + 0x7fff;
  }
  FUN_0800fbf4(uVar4);
  FUN_0800fdd0();
  *DAT_0800fc88 = *DAT_0800fc88 + 1;
  FUN_08006e9c(4,uVar4 >> 0x10);
  FUN_08006e9c(5,uVar4 & 0xffff);
  iVar5 = FUN_08010088();
  FUN_080100b0(iVar5 + 1);
  return;
}


/* 08009e70 FUN_08009e70 */

void FUN_08009e70(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar2 = DAT_08009f64;
  if ((int)((uint)*(ushort *)(DAT_08009f64 + 0xb6) * 0x33 + -0x32) <
      (int)(uint)*(ushort *)(DAT_08009f64 + 0x158)) {
    uVar4 = *(uint *)(DAT_08009f64 + 0x110) | 1;
  }
  else {
    uVar4 = *(uint *)(DAT_08009f64 + 0x110) & 0xfffffffe;
  }
  *(uint *)(DAT_08009f64 + 0x110) = uVar4;
  iVar3 = DAT_08009f68;
  if (*(ushort *)(iVar2 + 0x154) < (ushort)((ushort)*(byte *)(iVar2 + 0xba) * 0x33 + 100)) {
    *(uint *)(iVar2 + 0x110) = *(uint *)(iVar2 + 0x110) | 2;
    *(undefined2 *)(iVar3 + 0x18) = 0;
  }
  else if (*(ushort *)(iVar2 + 0x74) < *(ushort *)(iVar2 + 0x154)) {
    sVar1 = *(short *)(DAT_08009f68 + 0x18);
    uVar5 = sVar1 + 1;
    *(ushort *)(DAT_08009f68 + 0x18) = uVar5;
    if (5 < uVar5) {
      *(short *)(iVar3 + 0x18) = sVar1;
      *(uint *)(iVar2 + 0x110) = *(uint *)(iVar2 + 0x110) & 0xfffffffd;
    }
  }
  if ((int)(*(ushort *)(iVar2 + 0xcc) - 0x32) < (int)(uint)*(ushort *)(iVar2 + 0x1b2)) {
    uVar4 = *(uint *)(iVar2 + 0x110) | 0x20;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x110) & 0xffffffdf;
  }
  *(uint *)(iVar2 + 0x110) = uVar4;
  if ((int)(*(ushort *)(iVar2 + 0xd4) - 0x32) < (int)(uint)*(ushort *)(iVar2 + 0x1b2)) {
    uVar4 = *(uint *)(iVar2 + 0x110) | 0x80;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x110) & 0xffffff7f;
  }
  *(uint *)(iVar2 + 0x110) = uVar4;
  if ((uint)*(ushort *)(iVar2 + 0x1b4) < *(ushort *)(iVar2 + 0xd8) + 0x1e) {
    uVar4 = *(uint *)(iVar2 + 0x110) | 0x40;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x110) & 0xffffffbf;
  }
  *(uint *)(iVar2 + 0x110) = uVar4;
  if ((uint)*(ushort *)(iVar2 + 0x1b4) < *(ushort *)(iVar2 + 0xd0) + 0x1e) {
    uVar4 = *(uint *)(iVar2 + 0x110) | 0x10;
  }
  else {
    uVar4 = *(uint *)(iVar2 + 0x110) & 0xffffffef;
  }
  *(uint *)(iVar2 + 0x110) = uVar4;
  return;
}


/* 08009f6c FUN_08009f6c */

void FUN_08009f6c(void)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = DAT_08009fe0;
  if (*(byte *)(DAT_08009fdc + 2) < 2) {
    *(byte *)(DAT_08009fdc + 2) = *(byte *)(DAT_08009fdc + 2) + 1;
    *(undefined2 *)(iVar2 + 0x1b2) = 0xba5;
    *(undefined2 *)(iVar2 + 0x1b4) = 0xba5;
    sVar4 = 0;
  }
  else {
    uVar6 = 0;
    uVar8 = 0;
    uVar3 = 0xffff;
    uVar7 = 0;
    for (uVar5 = 0; uVar5 < *(ushort *)(DAT_08009fe0 + 0x5a); uVar5 = uVar5 + 1 & 0xff) {
      uVar1 = *(ushort *)(DAT_08009fe0 + uVar5 * 2 + 0x1ba);
      if (uVar1 < uVar3) {
        uVar7 = uVar5 + 1 & 0xff;
        uVar3 = uVar1;
      }
      if (uVar6 < uVar1) {
        uVar8 = uVar5 + 1 & 0xff;
        uVar6 = uVar1;
      }
    }
    *(char *)(DAT_08009fe0 + 0x1b8) = (char)uVar8;
    *(char *)(iVar2 + 0x1b9) = (char)uVar7;
    *(ushort *)(iVar2 + 0x1b2) = uVar6;
    *(ushort *)(iVar2 + 0x1b4) = uVar3;
    sVar4 = uVar6 - uVar3;
  }
  *(short *)(iVar2 + 0x1b6) = sVar4;
  return;
}


/* 08009fe4 FUN_08009fe4 */

void FUN_08009fe4(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  
  pbVar3 = DAT_0800a084;
  iVar2 = DAT_0800a080;
  uVar5 = *(uint *)(DAT_0800a080 + 0x108);
  if (*(ushort *)(DAT_0800a080 + 0x1ce) < 0xe30) {
    if (0xd66 < *(ushort *)(DAT_0800a080 + 0x1ce)) goto LAB_0800a036;
    bVar1 = DAT_0800a084[1];
    bVar4 = bVar1 + 1;
    DAT_0800a084[1] = bVar4;
    *pbVar3 = 0;
    if (bVar4 < 0x15) goto LAB_0800a036;
    pbVar3[1] = bVar1;
    uVar5 = uVar5 & 0xffffffdf;
  }
  else {
    bVar1 = *DAT_0800a084;
    bVar4 = bVar1 + 1;
    *DAT_0800a084 = bVar4;
    pbVar3[1] = 0;
    if (bVar4 < 0x15) goto LAB_0800a036;
    *pbVar3 = bVar1;
    uVar5 = uVar5 | 0x20;
  }
  *(uint *)(iVar2 + 0x108) = uVar5;
LAB_0800a036:
  uVar5 = *(uint *)(DAT_0800a080 + 0x114);
  if (*(ushort *)(iVar2 + 0x1d2) < 0xdcc) {
    if (0xd66 < *(ushort *)(iVar2 + 0x1d2)) {
      return;
    }
    bVar1 = pbVar3[3];
    bVar4 = bVar1 + 1;
    pbVar3[3] = bVar4;
    pbVar3[2] = 0;
    if (bVar4 < 0x15) {
      return;
    }
    pbVar3[3] = bVar1;
    uVar5 = uVar5 & 0xfffffffd;
  }
  else {
    bVar1 = pbVar3[2];
    bVar4 = bVar1 + 1;
    pbVar3[2] = bVar4;
    pbVar3[3] = 0;
    if (bVar4 < 0x15) {
      return;
    }
    pbVar3[2] = bVar1;
    uVar5 = uVar5 | 2;
  }
  *(uint *)(iVar2 + 0x114) = uVar5;
  return;
}


/* 0800a088 FUN_0800a088 */

void FUN_0800a088(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_0800e2ec();
  pbVar1 = DAT_0800a0c0;
  bVar2 = *DAT_0800a0c0;
  if (iVar3 == 0) {
    bVar2 = bVar2 + 1;
  }
  *DAT_0800a0c0 = bVar2;
  iVar3 = DAT_0800a0c4;
  if (bVar2 < 0x1f) {
    uVar4 = *(uint *)(DAT_0800a0c4 + 0x108) & 0xfffffffb;
  }
  else {
    *pbVar1 = bVar2 - 1;
    uVar4 = *(uint *)(iVar3 + 0x108) | 4;
  }
  *(uint *)(iVar3 + 0x108) = uVar4;
  return;
}


/* 0800a0c8 FUN_0800a0c8 */

void FUN_0800a0c8(void)

{
  char cVar1;
  int iVar2;
  
  FUN_0800fb5c(0x609);
  FUN_08006102(DAT_0800a0f8);
  FUN_080070c8();
  iVar2 = FUN_0800e300();
  cVar1 = *DAT_0800a0fc;
  if (iVar2 == 0) {
    cVar1 = cVar1 + '\x01';
  }
  else {
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = cVar1 + -1;
  }
  *DAT_0800a0fc = cVar1;
  return;
}


/* 0800a100 FUN_0800a100 */

void FUN_0800a100(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  iVar3 = FUN_080058d0(0,0,2,&uStack_10);
  iVar2 = DAT_0800a1a8;
  iVar1 = DAT_0800a1a4;
  if (iVar3 == 2) {
    *(undefined1 *)(DAT_0800a1a4 + 3) = 0;
    uVar4 = *(uint *)(iVar2 + 0xe8);
    *(uint *)(iVar2 + 0xe8) = uVar4 & 0xffffff7f;
    bVar5 = *(char *)(iVar1 + 4) + 1;
    *(byte *)(iVar1 + 4) = bVar5;
    if (((int)(uVar4 << 0x1d) < 0) && (10 < bVar5)) {
      *(undefined1 *)(iVar2 + 0x2a8) = 1;
      *(uint *)(iVar2 + 0xe8) = uVar4 & 0xffffff7b;
      FUN_08007884();
      goto LAB_0800a168;
    }
  }
  else {
    bVar5 = *(byte *)(DAT_0800a1a4 + 3);
    if (bVar5 < 0x3c) {
      bVar5 = bVar5 + 1;
      *(byte *)(DAT_0800a1a4 + 3) = bVar5;
    }
    if (bVar5 != 0) {
      *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) | 0x80;
    }
    *(undefined1 *)(iVar1 + 4) = 0;
LAB_0800a168:
    if (5 < *(byte *)(iVar1 + 3)) {
      FUN_08006308();
      FUN_080058d0(0,0,2,&uStack_10);
      if (0x3b < *(byte *)(iVar1 + 3)) {
        if ((int)((uint)*(byte *)(iVar2 + 0x114) << 0x1b) < 0) {
          return;
        }
        uVar4 = *(uint *)(iVar2 + 0xe8) | 2;
        goto LAB_0800a194;
      }
    }
  }
  uVar4 = *(uint *)(iVar2 + 0xe8) & 0xfffffffd;
LAB_0800a194:
  *(uint *)(iVar2 + 0xe8) = uVar4;
  return;
}


/* 0800a1ac FUN_0800a1ac */

void FUN_0800a1ac(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  FUN_0800a438();
  FUN_0800a100();
  FUN_0800a644();
  FUN_0800a5d4();
  FUN_0800a4b4();
  FUN_0800a324();
  FUN_0800a29c();
  FUN_0800a1ec();
  FUN_0800a7e4();
  FUN_0800a724();
  FUN_0800a774();
  FUN_0800a378();
  FUN_0800a6b4();
  iVar3 = DAT_08009538;
  iVar2 = DAT_08009534;
  uVar1 = *(ushort *)(DAT_08009534 + 0x2e6);
  uVar4 = (uint)*(ushort *)(DAT_08009534 + 0x192);
  if ((int)(uVar1 - 200) < (int)uVar4) {
    if (*(ushort *)(DAT_08009538 + 0x1c) < 2000) {
      *(ushort *)(DAT_08009538 + 0x1c) = *(ushort *)(DAT_08009538 + 0x1c) + 1;
    }
    sVar5 = *(short *)(iVar3 + 0x1e) + 1;
  }
  else {
    sVar5 = 0;
    *(undefined2 *)(DAT_08009538 + 0x1c) = 0;
  }
  *(short *)(iVar3 + 0x1e) = sVar5;
  if ((uVar1 < uVar4) && (*(ushort *)(iVar3 + 0x1c) < 0x28)) {
    if (*(ushort *)(iVar3 + 0x1e) < 0xb) {
      return;
    }
    uVar4 = *(uint *)(DAT_08009534 + 0x108) | 0x80;
  }
  else {
    if (*(ushort *)(iVar2 + 0x2ea) <= uVar4) {
      return;
    }
    uVar4 = *(uint *)(DAT_08009534 + 0x108) & 0xffffff7f;
  }
  *(uint *)(iVar2 + 0x108) = uVar4;
  return;
}


/* 0800a1ec FUN_0800a1ec */

void FUN_0800a1ec(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_0800a298;
  if ((int)((uint)*(byte *)(DAT_0800a298 + 0x108) << 0x18) < 0) {
    *(uint *)(DAT_0800a298 + 0x10c) = *(uint *)(DAT_0800a298 + 0x10c) & 0xfffffffe;
  }
  uVar4 = *(uint *)(iVar2 + 0xec) & 0xffffffef | (*(byte *)(iVar2 + 0x5d) & 1) << 4;
  *(uint *)(iVar2 + 0xec) = uVar4;
  bVar1 = *(byte *)(iVar2 + 0x10c);
  uVar3 = (uint)bVar1;
  if (((((((((bVar1 & 1) == 0 && (uVar3 & 0xf) >> 3 == 0) && (uVar3 & 7) >> 2 == 0) &&
          (uVar3 & 3) >> 1 == 0) && (uVar3 & 0x7f) >> 6 == 0) && -1 < (char)bVar1) &&
       (uVar3 & 0x3f) >> 5 == 0) && (*(byte *)(iVar2 + 0xe8) & 3) >> 1 == 0) &&
      (*(byte *)(iVar2 + 0xe8) & 0x1f) >> 4 == 0) {
    FUN_0800dc28();
  }
  else {
    if ((int)(uVar4 << 0x1b) < 0) {
      FUN_0800dc34();
    }
    *(uint *)(iVar2 + 0x10c) = *(uint *)(iVar2 + 0x10c) | 0x10;
  }
  if ((int)((uint)*(byte *)(iVar2 + 0x108) << 0x1b) < 0) {
    *(undefined1 *)(iVar2 + 0x2a8) = 1;
    *(uint *)(iVar2 + 0xe8) = *(uint *)(iVar2 + 0xe8) | 1;
    *(undefined1 *)(iVar2 + 0x2a5) = 5;
    FUN_080095e0();
    FUN_08009aa8();
    return;
  }
  return;
}


/* 0800a29c FUN_0800a29c */

void FUN_0800a29c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0800a2ec;
  if (((*(uint *)(DAT_0800a2ec + 0x24) < 0x7d1) && (*(uint *)(DAT_0800a2ec + 0x28) < 0x7d1)) &&
     (*(uint *)(DAT_0800a2ec + 0x20) < 0x1195)) {
    *(undefined1 *)(DAT_0800a2ec + 0xe) = 0;
  }
  else {
    *(char *)(DAT_0800a2ec + 0xe) = *(char *)(DAT_0800a2ec + 0xe) + '\x01';
  }
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(byte *)(iVar1 + 0xe) < 0xb) {
    uVar2 = *(uint *)(DAT_0800a2f0 + 0x108) & 0xffffffef;
  }
  else {
    uVar2 = *(uint *)(DAT_0800a2f0 + 0x108) | 0x10;
  }
  *(uint *)(DAT_0800a2f0 + 0x108) = uVar2;
  return;
}


/* 0800a2f4 FUN_0800a2f4 */

void FUN_0800a2f4(void)

{
  *(int *)(DAT_0800a300 + 0x20) = *(int *)(DAT_0800a300 + 0x20) + 1;
  return;
}


/* 0800a314 FUN_0800a314 */

void FUN_0800a314(void)

{
  *(int *)(DAT_0800a320 + 0x28) = *(int *)(DAT_0800a320 + 0x28) + 1;
  return;
}


/* 0800a324 FUN_0800a324 */

void FUN_0800a324(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = DAT_0800a36c;
  iVar5 = FUN_0800e02c(DAT_0800a36c,4);
  iVar6 = FUN_0800e00e(uVar2,4);
  iVar3 = DAT_0800a370;
  cVar1 = *(char *)(DAT_0800a374 + 0xd);
  if (iVar5 == iVar6) {
    if (cVar1 != '\0') {
      bVar4 = cVar1 - 1;
      goto LAB_0800a34c;
    }
  }
  else {
    bVar4 = cVar1 + 1;
LAB_0800a34c:
    *(byte *)(DAT_0800a374 + 0xd) = bVar4;
    if (0x1e < bVar4) {
      uVar7 = *(uint *)(iVar3 + 0x108) | 8;
      goto LAB_0800a366;
    }
  }
  uVar7 = *(uint *)(iVar3 + 0x108) & 0xfffffff7;
LAB_0800a366:
  *(uint *)(iVar3 + 0x108) = uVar7;
  return;
}


/* 0800a378 FUN_0800a378 */

void FUN_0800a378(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = DAT_0800a430;
  if (*(byte *)(DAT_0800a430 + 0x12) < 0xfa) {
    *(byte *)(DAT_0800a430 + 0x12) = *(byte *)(DAT_0800a430 + 0x12) + 1;
  }
  if (*(char *)(iVar1 + 0x11) != '\0') {
    *(char *)(iVar1 + 0x11) = *(char *)(iVar1 + 0x11) + -1;
  }
  iVar2 = DAT_0800a434;
  if ((((*(ushort *)(DAT_0800a434 + 0x154) < (ushort)((ushort)*(byte *)(DAT_0800a434 + 0xbe) * 0x14)
        ) && ((int)((uint)*(byte *)(DAT_0800a434 + 0xb1) << 0x18) < 0)) &&
      (*(char *)(iVar1 + 0x11) == '\0')) &&
     ((0xb4 < *(byte *)(iVar1 + 0x12) && (*(char *)(DAT_0800a434 + 0x5d) == 'U')))) {
    bVar3 = *(char *)(iVar1 + 0x10) + 1;
    *(byte *)(iVar1 + 0x10) = bVar3;
    if (5 < bVar3) {
      *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) | 4;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x10) = 0;
  }
  if ((int)((uint)*(byte *)(iVar2 + 0x114) << 0x1d) < 0) {
    uVar7 = FUN_0800e390();
    if (*(ushort *)(iVar1 + 0x18) < uVar7) {
      iVar8 = FUN_0800e390();
      if (5 < (int)(iVar8 - (uint)*(ushort *)(iVar1 + 0x18))) {
        uVar4 = FUN_0800e390();
        *(undefined2 *)(iVar1 + 0x18) = uVar4;
      }
      sVar5 = FUN_0800e390();
      uVar6 = (sVar5 - *(short *)(iVar1 + 0x18)) + *(short *)(iVar1 + 0x1a);
      *(ushort *)(iVar1 + 0x1a) = uVar6;
      if (4 < uVar6) {
        *(uint *)(iVar2 + 0x114) = *(uint *)(iVar2 + 0x114) & 0xfffffffb;
        *(undefined1 *)(iVar1 + 0x11) = 0x3c;
      }
      goto LAB_0800a426;
    }
  }
  *(undefined2 *)(iVar1 + 0x1a) = 0;
LAB_0800a426:
  uVar4 = FUN_0800e390();
  *(undefined2 *)(iVar1 + 0x18) = uVar4;
  return;
}


/* 0800a438 FUN_0800a438 */

void FUN_0800a438(void)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  
  iVar5 = DAT_0800a4b0;
  iVar4 = DAT_0800a4ac;
  uVar7 = *(uint *)(DAT_0800a4ac + 0x104);
  sVar3 = *(short *)(DAT_0800a4ac + 0x2ba);
  uVar2 = *(ushort *)(DAT_0800a4ac + 700);
  if (((int)(uVar7 << 0x1e) < 0) || (*(int *)(DAT_0800a4ac + 0x19c) <= (int)sVar3)) {
    *(undefined1 *)(DAT_0800a4b0 + 1) = 0;
  }
  else {
    cVar1 = *(char *)(DAT_0800a4b0 + 1);
    bVar6 = cVar1 + 1;
    *(byte *)(DAT_0800a4b0 + 1) = bVar6;
    if (uVar2 <= bVar6) {
      *(char *)(iVar5 + 1) = cVar1;
      *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 0x20;
    }
  }
  if (((uVar7 & 1) != 0) || (-(int)sVar3 <= *(int *)(iVar4 + 0x198))) {
    *(undefined1 *)(iVar5 + 2) = 0;
    return;
  }
  cVar1 = *(char *)(iVar5 + 2);
  bVar6 = cVar1 + 1;
  *(byte *)(iVar5 + 2) = bVar6;
  if (uVar2 <= bVar6) {
    *(char *)(iVar5 + 2) = cVar1;
    *(uint *)(iVar4 + 0xe8) = *(uint *)(iVar4 + 0xe8) | 0x10;
  }
  return;
}


/* 0800a4b4 FUN_0800a4b4 */

void FUN_0800a4b4(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar7 = DAT_0800a5d0;
  iVar6 = DAT_0800a5cc;
  cVar1 = *(char *)(DAT_0800a5d0 + 10);
  bVar8 = cVar1 + 1;
  cVar2 = *(char *)(DAT_0800a5d0 + 0xc);
  uVar4 = *(ushort *)(DAT_0800a5cc + 0x2dc);
  bVar9 = cVar2 + 1;
  uVar5 = *(ushort *)(DAT_0800a5cc + 0x2e4);
  iVar13 = *(int *)(DAT_0800a5cc + 0xe8);
  uVar11 = *(uint *)(DAT_0800a5cc + 0x1a0);
  uVar12 = *(uint *)(DAT_0800a5cc + 0x10c);
  if (*(char *)(DAT_0800a5cc + 0x194) == '\0') {
    *(byte *)(DAT_0800a5d0 + 10) = bVar8;
    if (uVar4 <= bVar8) {
      *(char *)(iVar7 + 10) = cVar1;
      *(uint *)(iVar6 + 0x10c) = uVar12 & 0xfffffffd;
    }
    if (*(ushort *)(iVar6 + 0x2de) < uVar11) {
      cVar1 = *(char *)(iVar7 + 0xb);
      bVar8 = cVar1 + 1;
      *(byte *)(iVar7 + 0xb) = bVar8;
      if ((*(ushort *)(iVar6 + 0x2e0) <= (ushort)bVar8) &&
         (*(char *)(iVar7 + 0xb) = cVar1, iVar13 << 0x1b < 0)) {
        *(uint *)(iVar6 + 0x10c) = *(uint *)(iVar6 + 0x10c) | 4;
      }
    }
    else {
      *(undefined1 *)(iVar7 + 0xb) = 0;
    }
    if (uVar11 < *(ushort *)(iVar6 + 0x2e2)) {
      *(byte *)(iVar7 + 0xc) = bVar9;
      if (uVar5 <= bVar9) {
        *(char *)(iVar7 + 0xc) = cVar2;
        *(uint *)(iVar6 + 0x10c) = *(uint *)(iVar6 + 0x10c) & 0xfffffffb;
      }
    }
    else {
      *(undefined1 *)(iVar7 + 0xc) = 0;
    }
  }
  else {
    if (*(ushort *)(DAT_0800a5cc + 0x2d6) < uVar11) {
      cVar3 = *(char *)(DAT_0800a5d0 + 9);
      bVar10 = cVar3 + 1;
      *(byte *)(DAT_0800a5d0 + 9) = bVar10;
      if ((*(ushort *)(iVar6 + 0x2d8) <= (ushort)bVar10) &&
         (*(char *)(iVar7 + 9) = cVar3, iVar13 << 0x1a < 0)) {
        *(uint *)(iVar6 + 0x10c) = uVar12 | 2;
      }
    }
    else {
      *(undefined1 *)(DAT_0800a5d0 + 9) = 0;
    }
    if (uVar11 < *(ushort *)(iVar6 + 0x2da)) {
      *(byte *)(iVar7 + 10) = bVar8;
      if (uVar4 <= bVar8) {
        *(char *)(iVar7 + 10) = cVar1;
        *(uint *)(iVar6 + 0x10c) = *(uint *)(iVar6 + 0x10c) & 0xfffffffd;
      }
    }
    else {
      *(undefined1 *)(iVar7 + 10) = 0;
    }
    *(byte *)(iVar7 + 0xc) = bVar9;
    if (uVar5 <= bVar9) {
      *(char *)(iVar7 + 0xc) = cVar2;
      *(uint *)(iVar6 + 0x10c) = *(uint *)(iVar6 + 0x10c) & 0xfffffffb;
    }
  }
  return;
}


/* 0800a5d4 FUN_0800a5d4 */

void FUN_0800a5d4(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = DAT_0800a640;
  iVar3 = DAT_0800a63c;
  uVar2 = *(ushort *)(DAT_0800a63c + 0x1b2);
  if (*(ushort *)(DAT_0800a63c + 0x2ce) < uVar2) {
    cVar1 = *(char *)(DAT_0800a640 + 7);
    bVar5 = cVar1 + 1;
    *(byte *)(DAT_0800a640 + 7) = bVar5;
    if (*(ushort *)(iVar3 + 0x2d0) <= (ushort)bVar5) {
      *(char *)(iVar4 + 7) = cVar1;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 8;
    }
  }
  else {
    *(undefined1 *)(DAT_0800a640 + 7) = 0;
  }
  if (*(ushort *)(iVar3 + 0x2d2) <= uVar2) {
    *(undefined1 *)(iVar4 + 8) = 0;
    return;
  }
  cVar1 = *(char *)(iVar4 + 8);
  bVar5 = cVar1 + 1;
  *(byte *)(iVar4 + 8) = bVar5;
  if (*(ushort *)(iVar3 + 0x2d4) <= (ushort)bVar5) {
    *(char *)(iVar4 + 8) = cVar1;
    *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffff7;
  }
  return;
}


/* 0800a644 FUN_0800a644 */

void FUN_0800a644(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = DAT_0800a6b0;
  iVar3 = DAT_0800a6ac;
  uVar2 = *(ushort *)(DAT_0800a6ac + 0x158);
  if (*(ushort *)(DAT_0800a6ac + 0x2c6) < uVar2) {
    cVar1 = *(char *)(DAT_0800a6b0 + 5);
    bVar5 = cVar1 + 1;
    *(byte *)(DAT_0800a6b0 + 5) = bVar5;
    if (*(ushort *)(iVar3 + 0x2c8) <= (ushort)bVar5) {
      *(char *)(iVar4 + 5) = cVar1;
      *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) | 1;
    }
  }
  else {
    *(undefined1 *)(DAT_0800a6b0 + 5) = 0;
  }
  if (*(ushort *)(iVar3 + 0x2ca) <= uVar2) {
    *(undefined1 *)(iVar4 + 6) = 0;
    return;
  }
  cVar1 = *(char *)(iVar4 + 6);
  bVar5 = cVar1 + 1;
  *(byte *)(iVar4 + 6) = bVar5;
  if (*(ushort *)(iVar3 + 0x2cc) <= (ushort)bVar5) {
    *(char *)(iVar4 + 6) = cVar1;
    *(uint *)(iVar3 + 0x10c) = *(uint *)(iVar3 + 0x10c) & 0xfffffffe;
  }
  return;
}


/* 0800a6b4 FUN_0800a6b4 */

void FUN_0800a6b4(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = DAT_0800a720;
  iVar3 = DAT_0800a71c;
  uVar2 = *(ushort *)(DAT_0800a71c + 0x1b6);
  if (*(ushort *)(DAT_0800a71c + 0x2ee) < uVar2) {
    cVar1 = *(char *)(DAT_0800a720 + 0x16);
    bVar5 = cVar1 + 1;
    *(byte *)(DAT_0800a720 + 0x16) = bVar5;
    if (*(ushort *)(iVar3 + 0x2f0) <= (ushort)bVar5) {
      *(char *)(iVar4 + 0x16) = cVar1;
      *(uint *)(iVar3 + 0x108) = *(uint *)(iVar3 + 0x108) | 2;
    }
  }
  else {
    *(undefined1 *)(DAT_0800a720 + 0x16) = 0;
  }
  if (*(ushort *)(iVar3 + 0x2f2) <= uVar2) {
    *(undefined1 *)(iVar4 + 0x17) = 0;
    return;
  }
  cVar1 = *(char *)(iVar4 + 0x17);
  bVar5 = cVar1 + 1;
  *(byte *)(iVar4 + 0x17) = bVar5;
  if (*(ushort *)(iVar3 + 0x2f4) <= (ushort)bVar5) {
    *(char *)(iVar4 + 0x17) = cVar1;
    *(uint *)(iVar3 + 0x108) = *(uint *)(iVar3 + 0x108) & 0xfffffffd;
  }
  return;
}


/* 0800a724 FUN_0800a724 */

void FUN_0800a724(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = DAT_0800a76c;
  bVar2 = *(byte *)(DAT_0800a770 + 0x13);
  if ((int)(uint)*(ushort *)(DAT_0800a76c + 0x2c2) <
      (int)((uint)*(ushort *)(DAT_0800a76c + 0x1b2) - (uint)*(ushort *)(DAT_0800a76c + 0x1b4))) {
    if (199 < bVar2) goto LAB_0800a74c;
    bVar2 = bVar2 + 1;
  }
  else {
    if (bVar2 == 0) goto LAB_0800a74c;
    bVar2 = bVar2 - 1;
  }
  *(byte *)(DAT_0800a770 + 0x13) = bVar2;
LAB_0800a74c:
  if (*(ushort *)(iVar1 + 0x2c4) < (ushort)bVar2) {
    uVar3 = *(uint *)(DAT_0800a76c + 0x10c) | 0x80;
  }
  else {
    uVar3 = *(uint *)(DAT_0800a76c + 0x10c) & 0xffffff7f;
  }
  *(uint *)(iVar1 + 0x10c) = uVar3;
  return;
}


/* 0800a774 FUN_0800a774 */

void FUN_0800a774(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = DAT_0800a7e0;
  iVar3 = DAT_0800a7dc;
  uVar2 = *(ushort *)(DAT_0800a7dc + 0x192);
  if (*(ushort *)(DAT_0800a7dc + 0x2e6) < uVar2) {
    cVar1 = *(char *)(DAT_0800a7e0 + 0x14);
    bVar5 = cVar1 + 1;
    *(byte *)(DAT_0800a7e0 + 0x14) = bVar5;
    if (*(ushort *)(iVar3 + 0x2e8) <= (ushort)bVar5) {
      *(char *)(iVar4 + 0x14) = cVar1;
      *(uint *)(iVar3 + 0x108) = *(uint *)(iVar3 + 0x108) | 1;
    }
  }
  else {
    *(undefined1 *)(DAT_0800a7e0 + 0x14) = 0;
  }
  if (*(ushort *)(iVar3 + 0x2ea) <= uVar2) {
    *(undefined1 *)(iVar4 + 0x15) = 0;
    return;
  }
  cVar1 = *(char *)(iVar4 + 0x15);
  bVar5 = cVar1 + 1;
  *(byte *)(iVar4 + 0x15) = bVar5;
  if (*(ushort *)(iVar3 + 0x2ec) <= (ushort)bVar5) {
    *(char *)(iVar4 + 0x15) = cVar1;
    *(uint *)(iVar3 + 0x108) = *(uint *)(iVar3 + 0x108) & 0xfffffffe;
  }
  return;
}


/* 0800a7e4 FUN_0800a7e4 */

void FUN_0800a7e4(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = DAT_0800a86c;
  iVar3 = DAT_0800a868;
  cVar1 = *(char *)(DAT_0800a86c + 0xf);
  uVar7 = *(uint *)(DAT_0800a868 + 0x14c);
  uVar6 = *(uint *)(DAT_0800a868 + 0x150);
  uVar5 = *(uint *)(DAT_0800a868 + 0x11c);
  if (uVar7 < uVar6) {
    uVar7 = uVar6 - uVar7;
  }
  else {
    uVar7 = uVar7 - uVar6;
  }
  if (*(ushort *)(DAT_0800a868 + 0x2be) < uVar7) {
    *(char *)(DAT_0800a86c + 0xf) = cVar1 + '\x01';
  }
  else if (cVar1 != '\0') {
    *(char *)(DAT_0800a86c + 0xf) = cVar1 + -1;
  }
  if (uVar7 < 0x7d1) {
    *(uint *)(iVar3 + 0x11c) = uVar5 & 0xfffffffe;
  }
  else {
    *(uint *)(iVar3 + 0x11c) = uVar5 | 1;
  }
  bVar2 = *(byte *)(iVar4 + 0xf);
  uVar5 = *(uint *)(DAT_0800a868 + 0x10c);
  if (*(ushort *)(iVar3 + 0x2c0) < (ushort)bVar2) {
    *(byte *)(iVar4 + 0xf) = bVar2 - 1;
    uVar5 = uVar5 | 0x20;
  }
  else {
    uVar5 = uVar5 & 0xffffffdf;
  }
  *(uint *)(iVar3 + 0x10c) = uVar5;
  return;
}


/* 0800a870 FUN_0800a870 */

undefined4 FUN_0800a870(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 == 0) {
    FUN_08010e5c(param_2,param_3);
  }
  else if (param_1 == 1) {
    FUN_08010fdc(param_2,param_3);
  }
  return 0;
}


/* 0800a894 FUN_0800a894 */

void FUN_0800a894(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  thunk_FUN_0800fe04(DAT_0800a928);
  iVar4 = DAT_0800a930;
  iVar3 = DAT_0800a92c;
  bVar2 = *(byte *)(DAT_0800a92c + 0x28b);
  if ((uint)bVar2 != (int)*(char *)(DAT_0800a930 + 8)) {
    if ((int)*(char *)(DAT_0800a930 + 8) == 0xffffffff) {
      *(byte *)(DAT_0800a930 + 8) = bVar2;
    }
    else {
      bVar1 = *(char *)(DAT_0800a930 + 10) == '\0';
      if (!bVar1) {
        *(byte *)(DAT_0800a930 + 8) = bVar2;
      }
      *(bool *)(iVar4 + 10) = bVar1;
      FUN_08007884();
      FUN_08007474();
    }
  }
  if ((uint)*(byte *)(iVar3 + 0x28c) != (int)*(char *)(iVar4 + 9)) {
    if ((int)*(char *)(iVar4 + 9) != 0xffffffff) {
      *(int *)(iVar3 + 0x218) = *(int *)(iVar3 + 0x218) + 1;
      *(int *)(iVar3 + 0x308) = *(int *)(iVar3 + 0x308) + 1;
      uVar5 = *(int *)(iVar3 + 0x300) + 1;
      *(uint *)(iVar3 + 0x300) = uVar5;
      uVar5 = uVar5 / 0x3c;
      *(uint *)(iVar3 + 0x294) = uVar5;
      if (*(uint *)(iVar3 + 0x298) < uVar5) {
        if (uVar5 < 0xffff) {
          *(uint *)(iVar3 + 0x298) = uVar5;
        }
        else {
          *(undefined4 *)(iVar3 + 0x298) = 0xffff;
        }
      }
      FUN_0800cc38();
    }
    *(undefined1 *)(iVar4 + 9) = *(undefined1 *)(iVar3 + 0x28c);
  }
  return;
}


/* 0800a934 FUN_0800a934 */

void FUN_0800a934(void)

{
  thunk_FUN_0800fe04(DAT_0800a93c);
  return;
}


/* 0800a940 FUN_0800a940 */

void FUN_0800a940(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort uVar10;
  uint in_fpscr;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = DAT_0800aacc;
  uVar5 = 0;
  uVar4 = 5000;
  uVar7 = 0;
  uVar6 = 0;
  uVar2 = 0;
  *(undefined4 *)(DAT_0800aacc + 0x188) = 0;
  do {
    iVar3 = uVar2 * 2;
    uVar2 = uVar2 + 1 & 0xff;
    *(undefined2 *)(iVar1 + iVar3 + 300) = 0;
    iVar3 = DAT_0800aad0;
  } while (uVar2 < 0x10);
  for (uVar2 = 0; (int)uVar2 < (int)(*(byte *)(iVar1 + 0x55) - 1); uVar2 = uVar2 + 1 & 0xff) {
    iVar9 = iVar1 + uVar2 * 2;
    fVar12 = (float)VectorUnsignedToFloat
                              ((uint)*(ushort *)(iVar9 + 0x168),(byte)(in_fpscr >> 0x16) & 3);
    fVar12 = fVar12 * *(float *)(iVar1 + uVar2 * 4);
    if ((int)fVar12 < iVar3) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 400),(byte)(in_fpscr >> 0x16) & 3)
      ;
      uVar11 = VectorFloatToUnsigned(fVar13 + fVar12,3);
      *(short *)(iVar9 + 300) = (short)uVar11;
    }
    *(uint *)(iVar1 + 0x188) = (uint)*(ushort *)(iVar9 + 300) + *(int *)(iVar1 + 0x188);
  }
  fVar12 = (float)VectorUnsignedToFloat
                            ((uint)*(ushort *)(iVar1 + 0x186),(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = fVar12 * *(float *)(iVar1 + 0x3c);
  if ((int)fVar12 < iVar3) {
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar1 + 400),(byte)(in_fpscr >> 0x16) & 3);
    uVar11 = VectorFloatToUnsigned(fVar13 + fVar12,3);
    *(short *)(iVar1 + uVar2 * 2 + 300) = (short)uVar11;
  }
  iVar3 = (uint)*(ushort *)(iVar1 + uVar2 * 2 + 300) + *(int *)(iVar1 + 0x188);
  *(int *)(iVar1 + 0x188) = iVar3;
  for (uVar2 = 0; uVar2 < *(byte *)(iVar1 + 0x55); uVar2 = uVar2 + 1 & 0xff) {
    iVar9 = iVar1 + uVar2 * 2;
    uVar10 = (ushort)(1 << uVar2);
    if (*(ushort *)(iVar9 + 300) - 0x7d1 < 0x95f) {
      uVar10 = *(ushort *)(iVar1 + 0x286) & ~uVar10;
    }
    else {
      uVar10 = *(ushort *)(iVar1 + 0x286) | uVar10;
    }
    *(ushort *)(iVar1 + 0x286) = uVar10;
    if (uVar10 == 0) {
      uVar8 = *(uint *)(iVar1 + 0xe4) & 0xfffffffb;
    }
    else {
      uVar8 = *(uint *)(iVar1 + 0xe4) | 4;
    }
    *(uint *)(iVar1 + 0xe4) = uVar8;
    uVar8 = (uint)*(ushort *)(iVar9 + 300);
    if (uVar5 < uVar8) {
      uVar7 = uVar2 + 1 & 0xff;
      uVar5 = uVar8;
    }
    if (uVar8 < uVar4) {
      uVar6 = uVar2 + 1 & 0xff;
      uVar4 = uVar8;
    }
  }
  *(int *)(iVar1 + 0x14c) = iVar3;
  *(short *)(iVar1 + 0x158) = (short)uVar5;
  if ((int)(short)(*(short *)(iVar1 + 0x154) - (short)uVar4) + 4U < 9) {
    *(short *)(iVar1 + 0x154) = (short)(*(ushort *)(iVar1 + 0x154) + uVar4 >> 1);
  }
  else {
    *(short *)(iVar1 + 0x154) = (short)uVar4;
  }
  *(short *)(iVar1 + 0x192) = (short)uVar5 - *(short *)(iVar1 + 0x154);
  *(char *)(iVar1 + 0x15a) = (char)uVar7;
  *(char *)(iVar1 + 0x156) = (char)uVar6;
  return;
}


/* 0800aad4 FUN_0800aad4 */

int FUN_0800aad4(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined2 local_50;
  char local_4e [32];
  byte local_2e;
  byte local_2d;
  
  uVar5 = 0;
  local_50 = (ushort)param_2;
  while (iVar3 = FUN_08005b10(0,0x3e,2,&local_50), iVar3 != 2) {
    uVar5 = uVar5 + 1;
    if (2 < uVar5) {
      return -1;
    }
  }
  local_50 = 0;
  uVar5 = 0;
  while (FUN_080058d0(0,0x3e,2,&local_50), local_50 != param_2) {
    uVar5 = uVar5 + 1;
    if (0x14 < uVar5) {
      return -1;
    }
  }
  while (iVar3 = FUN_080058d0(0,0x3e,0x24,&local_50), iVar3 != 0x24) {
    uVar5 = uVar5 + 1;
    if (2 < uVar5) {
      return -1;
    }
  }
  bVar2 = (char)local_50 + local_50._1_1_;
  if (0x28 < local_2d) {
    local_2d = 0x28;
  }
  for (uVar4 = 0; (int)uVar4 < (int)(local_2d - 4); uVar4 = uVar4 + 1 & 0xffff) {
    cVar1 = local_4e[uVar4];
    *(char *)(param_3 + uVar4) = cVar1;
    bVar2 = bVar2 + cVar1;
  }
  if (local_2e == (byte)~bVar2) {
    return (int)(char)local_2d;
  }
  return -1;
}


/* 0800abaa FUN_0800abaa */

int FUN_0800abaa(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  byte local_50;
  char local_4f;
  undefined1 local_4e [54];
  
  local_50 = (byte)param_2;
  local_4f = (char)(param_2 >> 8);
  param_2 = (param_2 >> 8) + param_2;
  for (uVar1 = 0; uVar1 < param_3; uVar1 = uVar1 + 1 & 0xffff) {
    local_4e[uVar1] = *(undefined1 *)(param_4 + uVar1);
    param_2 = (param_2 & 0xff) + (uint)*(byte *)(param_4 + uVar1);
  }
  uVar3 = 0;
  while (uVar1 = FUN_08005b10(0,0x3e,param_3 + 2 & 0xff,&local_50), uVar1 != param_3 + 2) {
    uVar3 = uVar3 + 1;
    if (2 < uVar3) {
      return -1;
    }
  }
  if (param_3 != 0) {
    local_4f = (char)param_3 + '\x04';
    uVar3 = 0;
    local_50 = ~(byte)param_2;
    while (iVar2 = FUN_08005b10(0,0x60,2,&local_50), iVar2 != 2) {
      uVar3 = uVar3 + 1;
      if (2 < uVar3) {
        return -1;
      }
    }
  }
  return (int)(char)param_3;
}


/* 0800ac34 FUN_0800ac34 */

undefined4 FUN_0800ac34(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  char local_40 [52];
  
  FUN_0800aad4(param_1,param_2,local_40);
  uVar1 = 0;
  while( true ) {
    if (param_3 <= uVar1) {
      return 0;
    }
    if (local_40[uVar1] != *(char *)(param_4 + uVar1)) break;
    uVar1 = uVar1 + 1 & 0xff;
  }
  return 0xffffffff;
}


/* 0800ac64 FUN_0800ac64 */

void FUN_0800ac64(char *param_1)

{
  if (*param_1 == '\x12') {
    disableIRQinterrupts();
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    enableIRQinterrupts();
  }
  return;
}


/* 0800ac78 FUN_0800ac78 */

undefined1 FUN_0800ac78(char *param_1)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  if (*param_1 != '\x12') {
    return 0;
  }
  disableIRQinterrupts();
  if (*(short *)(param_1 + 4) != 0) {
    uVar1 = *(ushort *)(param_1 + 6);
    uVar3 = *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)uVar1);
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    if ((int)(uint)uVar1 < (int)(*(ushort *)(param_1 + 2) - 1)) {
      sVar2 = uVar1 + 1;
    }
    else {
      sVar2 = 0;
    }
    *(short *)(param_1 + 6) = sVar2;
  }
  enableIRQinterrupts();
  return uVar3;
}


/* 0800acaa FUN_0800acaa */

undefined4 FUN_0800acaa(char *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  short sVar2;
  
  if (*param_1 != '\x12') {
    return 0;
  }
  disableIRQinterrupts();
  if ((int)((uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(param_1 + 4)) < 1) {
    uVar1 = 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8)) = param_2;
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    if ((int)(uint)*(ushort *)(param_1 + 8) < (int)(*(ushort *)(param_1 + 2) - 1)) {
      sVar2 = *(ushort *)(param_1 + 8) + 1;
    }
    else {
      sVar2 = 0;
    }
    *(short *)(param_1 + 8) = sVar2;
    uVar1 = 0;
  }
  enableIRQinterrupts();
  return uVar1;
}


/* 0800ace8 FUN_0800ace8 */

void FUN_0800ace8(char *param_1,undefined1 param_2)

{
  short sVar1;
  
  if (*param_1 == '\x12') {
    disableIRQinterrupts();
    if (0 < (int)((uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)(param_1 + 4))) {
      *(undefined1 *)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8)) = param_2;
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
      if ((int)(uint)*(ushort *)(param_1 + 8) < (int)(*(ushort *)(param_1 + 2) - 1)) {
        sVar1 = *(ushort *)(param_1 + 8) + 1;
      }
      else {
        sVar1 = 0;
      }
      *(short *)(param_1 + 8) = sVar1;
    }
    enableIRQinterrupts();
  }
  return;
}


/* 0800ad1c FUN_0800ad1c */

void FUN_0800ad1c(void)

{
  undefined4 local_30 [2];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 auStack_1c [4];
  undefined4 local_18;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  FUN_08010134(0);
  FUN_0800c084(DAT_0800ada0,0,auStack_1c);
  local_28 = 1;
  local_1e = local_13;
  local_30[0] = local_18;
  local_27 = local_12;
  local_26 = local_11;
  local_25 = local_10;
  local_24 = local_f;
  local_23 = local_e;
  local_22 = local_d;
  local_21 = local_c;
  local_20 = local_b;
  local_1f = local_a;
  FUN_0800b0de(local_30,DAT_0800ada4);
  FUN_0800a2f4();
  FUN_08010118(1);
  return;
}


/* 0800ada8 FUN_0800ada8 */

void FUN_0800ada8(void)

{
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined4 local_1c [2];
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  
  FUN_08010134(0);
  FUN_0800c084(DAT_0800ae2c,1,local_1c);
  local_28 = 0;
  local_1e = local_13;
  local_2c = local_1c[0];
  local_27 = local_12;
  local_26 = local_11;
  local_25 = local_10;
  local_24 = local_f;
  local_23 = local_e;
  local_22 = local_d;
  local_21 = local_c;
  local_20 = local_b;
  local_1f = local_a;
  FUN_0800b0de(auStack_30,DAT_0800ae30);
  FUN_0800a2f4();
  FUN_08010118(1);
  return;
}


/* 0800aee0 FUN_0800aee0 */

void FUN_0800aee0(void)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 local_30;
  char local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 auStack_20 [24];
  
  if (*(char *)(DAT_0800af8c + 2) == '\0') {
    *(undefined1 *)(DAT_0800af90 + 1) = 0;
  }
  else {
    *(undefined1 *)(DAT_0800af90 + 1) = 1;
    FUN_0800afd6(auStack_20,DAT_0800af8c);
    FUN_08004dfe(&local_34,auStack_20,0x14);
    FUN_0800c97c(2,&local_48);
    local_44 = local_34;
    local_48 = local_30;
    local_3f = 0;
    if (local_2c == '\0') {
      local_40 = 0;
    }
    else {
      local_40 = 4;
    }
    local_3e = local_2b;
    local_3d = local_2a;
    local_3c = local_29;
    local_3b = local_28;
    local_3a = local_27;
    local_39 = local_26;
    local_38 = local_25;
    local_37 = local_24;
    local_36 = local_23;
    FUN_0800c114(DAT_0800af94,&local_48);
  }
  FUN_0800a2f4();
  return;
}


/* 0800af98 FUN_0800af98 */

void FUN_0800af98(void)

{
  int iVar1;
  
  if (*(char *)(DAT_0800afc4 + 1) == '\x02') {
    if (299 < *(uint *)(DAT_0800afc4 + 0xc)) {
      *(uint *)(DAT_0800afc8 + 0xe4) = *(uint *)(DAT_0800afc8 + 0xe4) & 0xfffffffd | 1;
      return;
    }
    iVar1 = *(uint *)(DAT_0800afc4 + 0xc) + 1;
  }
  else {
    iVar1 = 0;
  }
  *(int *)(DAT_0800afc4 + 0xc) = iVar1;
  return;
}


/* 0800afcc FUN_0800afcc */

void FUN_0800afcc(undefined1 *param_1)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* 0800afd6 FUN_0800afd6 */

void FUN_0800afd6(undefined4 param_1,undefined4 param_2)

{
  int extraout_r2;
  undefined4 extraout_r3;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  FUN_08008064(&local_18,param_2,param_2,param_1);
  disableIRQinterrupts();
  if (*(char *)(extraout_r2 + 2) != '\0') {
    local_10 = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0xc);
    local_6 = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x16);
    local_18 = *(undefined4 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 4);
    local_14 = *(undefined4 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 8);
    local_f = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0xd);
    local_e = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0xe);
    local_d = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0xf);
    local_c = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x10);
    local_b = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x11);
    local_a = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x12);
    local_9 = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x13);
    local_8 = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x14);
    local_7 = *(undefined1 *)(extraout_r2 + (uint)*(byte *)(extraout_r2 + 1) * 0x14 + 0x15);
    *(char *)(extraout_r2 + 2) = *(char *)(extraout_r2 + 2) + -1;
    if (*(byte *)(extraout_r2 + 1) < 99) {
      *(byte *)(extraout_r2 + 1) = *(byte *)(extraout_r2 + 1) + 1;
    }
    else {
      *(undefined1 *)(extraout_r2 + 1) = 0;
    }
  }
  enableIRQinterrupts();
  FUN_08004dfe(extraout_r3,&local_18,0x14);
  return;
}


/* 0800b0de FUN_0800b0de */

void FUN_0800b0de(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  
  disableIRQinterrupts();
  if (0 < (int)(100 - (uint)param_2[2])) {
    param_2[(uint)*param_2 * 0x14 + 0xc] = *(byte *)(param_1 + 2);
    param_2[(uint)*param_2 * 0x14 + 0x16] = *(byte *)((int)param_1 + 0x12);
    *(undefined4 *)(param_2 + (uint)*param_2 * 0x14 + 4) = *param_1;
    *(undefined4 *)(param_2 + (uint)*param_2 * 0x14 + 8) = param_1[1];
    param_2[(uint)*param_2 * 0x14 + 0xd] = *(byte *)((int)param_1 + 9);
    param_2[(uint)*param_2 * 0x14 + 0xe] = *(byte *)((int)param_1 + 10);
    param_2[(uint)*param_2 * 0x14 + 0xf] = *(byte *)((int)param_1 + 0xb);
    param_2[(uint)*param_2 * 0x14 + 0x10] = *(byte *)(param_1 + 3);
    param_2[(uint)*param_2 * 0x14 + 0x11] = *(byte *)((int)param_1 + 0xd);
    param_2[(uint)*param_2 * 0x14 + 0x12] = *(byte *)((int)param_1 + 0xe);
    param_2[(uint)*param_2 * 0x14 + 0x13] = *(byte *)((int)param_1 + 0xf);
    param_2[(uint)*param_2 * 0x14 + 0x14] = *(byte *)(param_1 + 4);
    param_2[(uint)*param_2 * 0x14 + 0x15] = *(byte *)((int)param_1 + 0x11);
    param_2[2] = param_2[2] + 1;
    if (*param_2 < 99) {
      bVar1 = *param_2 + 1;
    }
    else {
      bVar1 = 0;
    }
    *param_2 = bVar1;
  }
  enableIRQinterrupts();
  return;
}


/* 0800b1b8 FUN_0800b1b8 */

void FUN_0800b1b8(int param_1)

{
  if (param_1 == DAT_0800b1d8) {
    FUN_0800fb94(0x419);
    *(uint *)(DAT_0800fb90 + 0x10) = *(uint *)(DAT_0800fb90 + 0x10) & 0xfdffffff;
    return;
  }
  return;
}


/* 0800b1dc FUN_0800b1dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800b1dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined2 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  short sVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint in_fpscr;
  float fVar26;
  float fVar27;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  puVar10 = DAT_0800ba18;
  pbVar9 = DAT_0800ba10;
  puVar20 = DAT_0800b5e0;
  iVar24 = DAT_0800b5dc;
  puVar18 = DAT_0800b5d0;
  pbVar8 = DAT_0800b5cc;
  iVar7 = DAT_0800b5c8;
  iVar16 = DAT_0800b5c4;
  sVar17 = 0;
  pbVar21 = (byte *)(DAT_0800b5c4 + 5);
  bVar11 = *pbVar21;
  uVar22 = (uint)CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 6),*(undefined1 *)(DAT_0800b5c4 + 7));
  for (uVar13 = 0; uVar13 < uVar22 + 3; uVar13 = uVar13 + 1 & 0xffff) {
    sVar17 = sVar17 + (ushort)pbVar21[uVar13];
  }
  pbVar19 = (byte *)(DAT_0800b5c4 + 8);
  if ((ushort)(sVar17 + (ushort)pbVar21[uVar22 + 3] * -0x100) != (ushort)pbVar21[uVar22 + 4]) {
    return;
  }
  uVar13 = 0;
  uVar25 = *(uint *)(DAT_0800b5c8 + 0xe4);
  uVar23 = *(uint *)(DAT_0800b5c8 + 0x114);
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (bVar11 == 0x73) {
    bVar11 = *pbVar19;
    bVar3 = *(byte *)(DAT_0800b5c4 + 9);
    if (CONCAT11(bVar11,bVar3) != 0x7777) {
      return;
    }
    *DAT_0800b5d8 = 0x55;
    pbVar21 = DAT_0800b5cc;
    *(uint *)(iVar7 + 0xf8) = *(uint *)(iVar7 + 0xf8) | 1;
    *pbVar8 = bVar11;
    pbVar8[1] = bVar3;
    uVar13 = 2;
    bVar11 = 0x73;
    goto LAB_0800b8ae;
  }
  if (bVar11 < 0x74) {
    if (bVar11 == 0x24) {
      FUN_08007d2c(*pbVar19,DAT_0800b5cc,
                   CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 9),*(undefined1 *)(DAT_0800b5c4 + 10)));
      uVar13 = 8;
      bVar11 = 0x24;
      pbVar21 = DAT_0800b5cc;
      goto LAB_0800b8ae;
    }
    if (bVar11 < 0x25) {
      if (bVar11 == 0x14) {
        bVar11 = *pbVar19;
        bVar3 = *(byte *)(DAT_0800b5c4 + 0xb);
        bVar4 = *(byte *)(DAT_0800b5c4 + 9);
        bVar5 = *(byte *)(DAT_0800b5c4 + 10);
        uVar22 = CONCAT31(CONCAT21(CONCAT11(bVar11,bVar4),bVar5),bVar3);
        uVar13 = (uint)CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 0xc),
                                *(undefined1 *)(DAT_0800b5c4 + 0xd));
        if (100 < uVar13) {
          return;
        }
        FUN_08009234((uVar22 & 0x7ffff) >> 0xb,uVar22 & 0x7ff,DAT_0800b5cc + 4,uVar13);
        *pbVar8 = bVar11;
        pbVar8[1] = bVar4;
        pbVar8[2] = bVar5;
        pbVar8[3] = bVar3;
        uVar13 = uVar13 + 4 & 0xffff;
        bVar11 = 0x15;
        pbVar21 = DAT_0800b5cc;
        goto LAB_0800b8ae;
      }
      if (bVar11 < 0x15) {
        if (bVar11 == 1) {
          if (uVar22 < 3) {
            if (uVar22 != 0) {
              if (*pbVar19 == 2) {
                *(undefined1 *)(DAT_0800b5c8 + 0x2a8) = 1;
                FUN_0800deac();
              }
              *pbVar8 = 2;
              uVar13 = 1;
            }
          }
          else {
            if (((*pbVar19 == *DAT_0800ba10) && (*(byte *)(DAT_0800b5c4 + 9) == DAT_0800ba10[1])) &&
               (*(byte *)(DAT_0800b5c4 + 10) == DAT_0800ba10[2])) {
              *(undefined1 *)(DAT_0800b5c8 + 0x2a8) = 1;
              FUN_0800deac();
            }
            *pbVar8 = *pbVar9;
            pbVar8[1] = pbVar9[1];
            pbVar8[2] = pbVar9[2];
            uVar13 = 3;
          }
        }
        else {
          if (bVar11 != 0x10) {
            if (bVar11 == 0x12) {
              bVar11 = *pbVar19;
              bVar3 = *(byte *)(DAT_0800b5c4 + 9);
              uVar22 = (uint)CONCAT11(bVar11,bVar3);
              if (0x30c < uVar22) {
                return;
              }
              bVar4 = *(byte *)(DAT_0800b5c4 + 10);
              bVar5 = *(byte *)(DAT_0800b5c4 + 0xb);
              puVar18 = (undefined1 *)(DAT_0800b5c8 + uVar22);
              puVar20 = (undefined1 *)(DAT_0800b5c4 + 0xc);
              for (; uVar13 < CONCAT11(bVar4,bVar5); uVar13 = uVar13 + 1 & 0xffff) {
                *puVar18 = *puVar20;
                puVar18 = puVar18 + 1;
                puVar20 = puVar20 + 1;
              }
              *pbVar8 = bVar11;
              pbVar8[1] = bVar3;
              pbVar8[2] = bVar4;
              pbVar8[3] = bVar5;
              uVar13 = 4;
              bVar11 = 0x13;
              pbVar21 = DAT_0800b5cc;
              goto LAB_0800b8ae;
            }
            goto switchD_0800b2b2_default;
          }
          bVar11 = *pbVar19;
          bVar3 = *(byte *)(DAT_0800b5c4 + 9);
          bVar4 = *(byte *)(DAT_0800b5c4 + 10);
          bVar5 = *(byte *)(DAT_0800b5c4 + 0xb);
          uVar22 = (uint)CONCAT11(bVar4,bVar5);
          *DAT_0800b5cc = bVar11;
          pbVar8[1] = bVar3;
          pbVar8[2] = bVar4;
          pbVar8[3] = bVar5;
          pbVar21 = (byte *)(iVar7 + (uint)CONCAT11(bVar11,bVar3));
          for (; uVar13 < uVar22; uVar13 = uVar13 + 1 & 0xffff) {
            pbVar8[uVar13 + 4] = *pbVar21;
            pbVar21 = pbVar21 + 1;
          }
          uVar13 = uVar22 + 4 & 0xffff;
        }
        bVar11 = 0x11;
        pbVar21 = DAT_0800ba00;
        goto LAB_0800b8ae;
      }
      if (bVar11 == 0x16) {
        bVar11 = *pbVar19;
        bVar3 = *(byte *)(DAT_0800b5c4 + 9);
        bVar4 = *(byte *)(DAT_0800b5c4 + 10);
        bVar5 = *(byte *)(DAT_0800b5c4 + 0xb);
        uVar23 = CONCAT31(CONCAT21(CONCAT11(bVar11,bVar3),bVar4),bVar5);
        uVar22 = (uint)CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 0xc),
                                *(undefined1 *)(DAT_0800b5c4 + 0xd));
        pbVar21 = (byte *)(DAT_0800b5c4 + 0xf);
        if (*(char *)(DAT_0800b5c4 + 0xe) != 'U') {
          return;
        }
        if (100 < uVar22) {
          return;
        }
        for (; pbVar9 = DAT_0800b5cc, uVar13 < uVar22; uVar13 = uVar13 + 1 & 0xffff) {
          pbVar8[uVar13] = *pbVar21;
          pbVar21 = pbVar21 + 1;
        }
        *DAT_0800b5d4 = 0x55;
        FUN_08009250((uVar23 & 0x7ffff) >> 0xb,uVar23 & 0x7ff,pbVar9);
        *pbVar8 = bVar11;
        pbVar8[1] = bVar3;
        pbVar8[2] = bVar4;
        uVar13 = 4;
        pbVar8[3] = bVar5;
        bVar11 = 0x17;
        pbVar21 = DAT_0800b5cc;
        goto LAB_0800b8ae;
      }
      if (bVar11 == 0x22) {
        uVar15 = FUN_08007a90(*pbVar19,CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 9),
                                                *(undefined1 *)(DAT_0800b5c4 + 10)));
        pbVar8[3] = (byte)uVar15;
        pbVar8[2] = (byte)((uint)uVar15 >> 8);
        pbVar8[1] = (byte)((uint)uVar15 >> 0x10);
        *pbVar8 = (byte)((uint)uVar15 >> 0x18);
        uVar13 = 4;
        bVar11 = 0x22;
        pbVar21 = DAT_0800b5cc;
        goto LAB_0800b8ae;
      }
      if (bVar11 == 0x23) {
        uVar12 = FUN_08007b88(*pbVar19);
        pbVar8[1] = (byte)uVar12;
        *pbVar8 = (byte)((ushort)uVar12 >> 8);
        uVar13 = 2;
        bVar11 = 0x23;
        pbVar21 = DAT_0800b5cc;
        goto LAB_0800b8ae;
      }
    }
    else {
      if (bVar11 == 0x6a) {
        pbVar21 = (byte *)*DAT_0800b5e4;
        *DAT_0800b5cc = *pbVar21;
        pbVar8[1] = pbVar21[1];
        pbVar8[2] = 4;
        pbVar8[3] = 0x14;
        pbVar8[4] = 0x13;
        uVar13 = 6;
        pbVar8[5] = 0;
        uVar22 = 0;
        do {
          pbVar8[uVar13] = (&DAT_0800b5e8)[uVar22];
          uVar22 = uVar22 + 1 & 0xffff;
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar22 < 0xb);
        pbVar8[uVar13] = 0;
        iVar16 = *DAT_0800b5f4;
        bVar3 = *DAT_0800b5f8;
        for (uVar22 = 0; uVar13 = uVar13 + 1 & 0xffff, uVar22 < bVar3; uVar22 = uVar22 + 1 & 0xffff)
        {
          pbVar8[uVar13] = *(byte *)(iVar16 + uVar22);
        }
        pbVar8[uVar13] = 0;
        uVar13 = uVar13 + 1 & 0xffff;
        goto LAB_0800b8aa;
      }
      if (bVar11 < 0x6b) {
        if (bVar11 == 0x3e) {
          FUN_0800c7fc(0x2e,0,DAT_0800ba00);
          *DAT_0800ba04 = 0x55;
          FUN_08007b28(*DAT_0800ba08);
          if (*DAT_0800ba0c != -1) {
            FUN_08007b28();
          }
LAB_0800b628:
          *(undefined1 *)(iVar7 + 0x2a8) = 1;
          return;
        }
        if (bVar11 == 0x65) {
          uVar6 = CONCAT11(*pbVar19,*(undefined1 *)(DAT_0800b5c4 + 9));
          if (uVar6 == 1) {
            iVar16 = FUN_08007b88(*DAT_0800b5e0);
            *(short *)(iVar24 + 6) = (short)iVar16;
            if (iVar16 == 0) goto LAB_0800b526;
          }
          else if ((*(ushort *)(DAT_0800b5dc + 6) < uVar6) || (uVar6 == 0)) {
LAB_0800b526:
            uVar13 = 0;
            pbVar21 = DAT_0800b5cc;
            goto LAB_0800bafe;
          }
          FUN_08007d2c(*puVar20,DAT_0800b5cc,uVar6 - 1);
          uVar13 = 8;
          pbVar21 = DAT_0800b5cc;
          goto LAB_0800bafe;
        }
        if (bVar11 == 0x66) {
          *(uint *)(DAT_0800b5c8 + 0xe4) = uVar25 & 0xfffffffd | 1;
          *(uint *)(iVar7 + 0x114) = uVar23 | 0x80;
          goto LAB_0800b682;
        }
      }
      else {
        if (bVar11 == 0x6f) {
          bVar11 = *(byte *)(DAT_0800b5c4 + 9);
          uVar1 = *(undefined1 *)(DAT_0800b5c4 + 0xc);
          uVar2 = *(undefined1 *)(DAT_0800b5c4 + 0xd);
          *DAT_0800b5cc = *pbVar19;
          pbVar8[1] = bVar11;
          pbVar8[2] = 0x77;
          FUN_0800c7fc(0x6f,3,DAT_0800ba00);
          if (CONCAT11(uVar1,uVar2) == 0xcf9) {
            *(uint *)(iVar7 + 0xe4) = *(uint *)(iVar7 + 0xe4) & 0xfffffffd | 1;
            return;
          }
          return;
        }
        if (bVar11 == 0x71) {
          bVar3 = *pbVar19;
          bVar4 = *(byte *)(DAT_0800b5c4 + 9);
          if (*(short *)(DAT_0800b5c8 + 0x52) ==
              CONCAT11(*(undefined1 *)(DAT_0800b5c4 + 0xc),*(undefined1 *)(DAT_0800b5c4 + 0xd))) {
            *(undefined1 *)(DAT_0800b5c8 + 0x284) = 0x5f;
            pbVar8[2] = 0x77;
          }
          else {
            DAT_0800b5cc[2] = 0;
          }
          *pbVar8 = bVar3;
          pbVar8[1] = bVar4;
          uVar13 = 3;
          pbVar21 = DAT_0800b5cc;
          goto LAB_0800bafe;
        }
        if (bVar11 == 0x72) {
          bVar11 = *(byte *)(DAT_0800b5c4 + 9);
          uVar1 = *(undefined1 *)(DAT_0800b5c4 + 0xc);
          uVar2 = *(undefined1 *)(DAT_0800b5c4 + 0xd);
          *DAT_0800b5cc = *pbVar19;
          pbVar8[1] = bVar11;
          pbVar8[2] = 0x77;
          FUN_0800c7fc(0x72,3,DAT_0800ba00);
          if (CONCAT11(uVar1,uVar2) != 0xcf9) {
            return;
          }
          goto LAB_0800b628;
        }
      }
    }
    goto switchD_0800b2b2_default;
  }
  uVar14 = *(uint *)(DAT_0800b5c8 + 0xe8);
  if (bVar11 == 0xa7) {
    bVar11 = *(byte *)(DAT_0800b5c4 + 9);
    if (-1 < (int)(uVar14 << 0x1e)) {
      uVar13 = FUN_080058d0(0,*pbVar19,(uint)bVar11,DAT_0800b5cc + 1);
      if (uVar13 == bVar11) {
        *pbVar8 = bVar11;
      }
      else {
        *pbVar8 = 0;
      }
    }
    bVar11 = 0x2d;
    uVar13 = *pbVar8 + 1;
    pbVar21 = _DAT_0800bca8;
    goto LAB_0800b8ae;
  }
  if (0xa7 < bVar11) {
    uVar1 = *DAT_0800b5d0;
    if (bVar11 == 0xab) {
      do {
        pbVar8[uVar13] = 0;
        uVar13 = uVar13 + 1 & 0xffff;
      } while (uVar13 < 0x50);
      iVar16 = FUN_08007b88(uVar1);
      if (iVar16 != 0) {
        FUN_08007d2c(*puVar18,_DAT_0800bca8,0);
      }
      if (uVar22 != 0) {
        uVar13 = 0;
        do {
          uVar23 = uVar13 + 1 & 0xffff;
          pbVar8[uVar13 + 0x30] = 0;
          uVar13 = uVar23;
        } while (uVar23 < 8);
        if (8 < uVar22) {
          uVar22 = 8;
        }
        uVar13 = 0;
        if (uVar22 != 0) {
          while (uVar23 = uVar13, pbVar21 = pbVar19, *pbVar19 != 0) {
            do {
              pbVar19 = pbVar21 + 1;
              uVar13 = uVar23 + 1 & 0xffff;
              pbVar8[uVar23 + 0x30] = *pbVar21;
              if (uVar22 <= uVar13) goto LAB_0800bbf4;
              uVar23 = uVar13;
              pbVar21 = pbVar19;
            } while (uVar13 != 0);
          }
        }
LAB_0800bbf4:
        FUN_08007dcc(*puVar18,_DAT_0800bca8);
      }
      pbVar21 = _DAT_0800bca8 + 0x30;
      uVar13 = 8;
      goto LAB_0800b8ae;
    }
    if (bVar11 < 0xac) {
      if (bVar11 == 0xa8) {
        bVar3 = *pbVar19;
        bVar4 = *(byte *)(DAT_0800b5c4 + 9);
        uVar22 = (uint)bVar4;
        pbVar21 = (byte *)(DAT_0800b5c4 + 10);
        for (; uVar13 < uVar22; uVar13 = uVar13 + 1 & 0xffff) {
          pbVar8[uVar13] = *pbVar21;
          pbVar21 = pbVar21 + 1;
        }
        uVar13 = FUN_08005b10(0,bVar3,uVar22,_DAT_0800bca8);
        if (uVar13 == uVar22) {
          *pbVar8 = bVar4;
        }
        else {
          *pbVar8 = 0;
        }
        goto LAB_0800b874;
      }
      if (bVar11 == 0xa9) {
        do {
          pbVar8[uVar13] = 0;
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < 0x50);
        uVar13 = 0;
        do {
          pbVar8[uVar13] = s_BAFANG_0800bcab[uVar13 + 1];
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < 7);
        iVar16 = FUN_08007b88(uVar1);
        if (iVar16 != 0) {
          FUN_08007d2c(*puVar18,_DAT_0800bca8,0);
          uVar13 = 0;
          if (*pbVar8 == 0) {
            do {
              pbVar8[uVar13] = s_BAFANG_0800bcab[uVar13 + 1];
              uVar13 = uVar13 + 1 & 0xffff;
            } while (uVar13 < 7);
          }
        }
        if (uVar22 != 0) {
          uVar13 = 0;
          do {
            pbVar8[uVar13] = 0;
            uVar13 = uVar13 + 1 & 0xffff;
          } while (uVar13 < 0x18);
          if (0x18 < uVar22) {
            uVar22 = 0x18;
          }
          uVar13 = 0;
          if (uVar22 != 0) {
            while (pbVar21 = pbVar19, *pbVar19 != 0) {
              do {
                pbVar19 = pbVar21 + 1;
                pbVar8[uVar13] = *pbVar21;
                uVar13 = uVar13 + 1 & 0xffff;
                if (uVar22 <= uVar13) goto LAB_0800baf0;
                pbVar21 = pbVar19;
              } while (uVar13 != 0);
            }
          }
LAB_0800baf0:
          FUN_08007dcc(*puVar18,_DAT_0800bca8);
        }
        uVar13 = 0x18;
        pbVar21 = _DAT_0800bca8;
        goto LAB_0800bafe;
      }
      if (bVar11 == 0xaa) {
        do {
          pbVar8[uVar13] = 0;
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < 0x50);
        uVar13 = 0;
        do {
          uVar23 = uVar13 + 1 & 0xffff;
          pbVar8[uVar13 + 0x18] = (&DAT_0800bcb4)[uVar13];
          uVar13 = uVar23;
        } while (uVar23 < 0xf);
        iVar16 = FUN_08007b88(uVar1);
        if (iVar16 != 0) {
          FUN_08007d2c(*puVar18,_DAT_0800bca8,0);
          uVar13 = 0;
          if (pbVar8[0x18] == 0) {
            do {
              uVar23 = uVar13 + 1 & 0xffff;
              pbVar8[uVar13 + 0x18] = (&DAT_0800bcb4)[uVar13];
              uVar13 = uVar23;
            } while (uVar23 < 0xf);
          }
        }
        if (uVar22 != 0) {
          uVar13 = 0;
          do {
            uVar23 = uVar13 + 1 & 0xffff;
            pbVar8[uVar13 + 0x18] = 0;
            uVar13 = uVar23;
          } while (uVar23 < 0x18);
          if (0x18 < uVar22) {
            uVar22 = 0x18;
          }
          uVar13 = 0;
          if (uVar22 != 0) {
            while (uVar23 = uVar13, pbVar21 = pbVar19, *pbVar19 != 0) {
              do {
                pbVar19 = pbVar21 + 1;
                uVar13 = uVar23 + 1 & 0xffff;
                pbVar8[uVar23 + 0x18] = *pbVar21;
                if (uVar22 <= uVar13) goto LAB_0800bb82;
                uVar23 = uVar13;
                pbVar21 = pbVar19;
              } while (uVar13 != 0);
            }
          }
LAB_0800bb82:
          FUN_08007dcc(*puVar18,_DAT_0800bca8);
        }
        pbVar21 = _DAT_0800bca8 + 0x18;
        uVar13 = 0x18;
        goto LAB_0800b8ae;
      }
    }
    else {
      if (bVar11 == 0xac) {
        do {
          pbVar8[uVar13] = 0;
          uVar13 = uVar13 + 1 & 0xffff;
        } while (uVar13 < 0x50);
        iVar16 = FUN_08007b88(uVar1);
        if (iVar16 != 0) {
          FUN_08007d2c(*puVar18,_DAT_0800bca8,0);
        }
        uVar13 = 0;
        do {
          uVar23 = uVar13 + 1 & 0xffff;
          pbVar8[uVar13 + 0x38] = 0;
          uVar13 = uVar23;
        } while (uVar23 < 0x18);
        uVar13 = 0;
        do {
          uVar23 = uVar13 + 1 & 0xffff;
          pbVar8[uVar13 + 0x38] = (&DAT_0800bcc4)[uVar13];
          uVar13 = uVar23;
        } while (uVar23 < 0x11);
        if (uVar22 != 0) {
          if (0x18 < uVar22) {
            uVar22 = 0x18;
          }
          uVar13 = 0;
          if (uVar22 != 0) {
            while (uVar23 = uVar13, pbVar21 = pbVar19, *pbVar19 != 0) {
              do {
                pbVar19 = pbVar21 + 1;
                uVar13 = uVar23 + 1 & 0xffff;
                pbVar8[uVar23 + 0x38] = *pbVar21;
                if (uVar22 <= uVar13) goto LAB_0800bc74;
                uVar23 = uVar13;
                pbVar21 = pbVar19;
              } while (uVar13 != 0);
            }
          }
LAB_0800bc74:
          FUN_08007dcc(*puVar18,_DAT_0800bca8);
        }
        pbVar21 = _DAT_0800bca8 + 0x38;
        uVar13 = 0x18;
        goto LAB_0800b8ae;
      }
      if (bVar11 == 0xb0) {
        *DAT_0800b5cc = *pbVar19;
        pbVar8[1] = *(byte *)(iVar16 + 9);
        pbVar8[2] = *(byte *)(iVar16 + 10);
        bVar3 = *(byte *)(iVar16 + 0xb);
        pbVar8[3] = bVar3;
        *(byte *)(iVar7 + 0x5d) = bVar3;
        uVar13 = 4;
        *(undefined1 *)(iVar7 + 0x284) = 0x5f;
        goto LAB_0800b8aa;
      }
      if (bVar11 == 0xf1) {
        *(uint *)(DAT_0800b5c8 + 0xe4) = uVar25 & 0xfffffffd | 1;
LAB_0800b682:
        uVar13 = 0;
        pbVar21 = DAT_0800ba00;
        goto LAB_0800b8ae;
      }
    }
switchD_0800b2b2_default:
    uVar13 = 0;
    bVar11 = 0x2d;
    pbVar21 = DAT_0800b5cc;
    goto LAB_0800b8ae;
  }
  iVar24 = *(int *)(DAT_0800b5c8 + 0x198);
  switch(bVar11) {
  case 0xa0:
    uVar15 = *(undefined4 *)(DAT_0800b5c8 + 0x14c);
    *DAT_0800b5cc = (byte)((uint)uVar15 >> 0x18);
    pbVar8[1] = (byte)((uint)uVar15 >> 0x10);
    pbVar8[2] = (byte)((uint)uVar15 >> 8);
    pbVar8[3] = (byte)uVar15;
    pbVar8[4] = (byte)((uint)iVar24 >> 0x18);
    pbVar8[5] = (byte)((uint)iVar24 >> 0x10);
    pbVar8[6] = (byte)((uint)iVar24 >> 8);
    pbVar8[7] = (byte)iVar24;
    uVar22 = (uint)*(byte *)(iVar7 + 0x10c);
    bVar3 = *(byte *)(iVar7 + 0x11c);
    pbVar8[8] = *(byte *)(iVar7 + 0x104) & 7 | (byte)(((uVar22 & 0xf) >> 3 | (bVar3 & 3) >> 1) << 3)
                | (byte)((uVar22 & 1) << 4);
    uVar13 = (uint)*(byte *)(iVar7 + 0x108);
    pbVar8[9] = (byte)uVar14 & 0x7e | (byte)(((uVar14 & 0xff) >> 7) << 1) |
                (byte)((uVar13 & 0x3f) >> 5);
    pbVar8[10] = *(byte *)(iVar7 + 0x100) & 0xf | (byte)((bVar3 & 1) << 6) |
                 (byte)((uVar13 & 1) << 6);
    pbVar8[0xb] = *(byte *)(iVar7 + 0xfc) & 0x3f | (byte)(((uVar23 & 7) >> 2) << 1) |
                  (byte)(((uVar13 & 0x7f) >> 6) << 4) | (byte)(((uVar22 & 0x1f) >> 4) << 6);
    pbVar8[0xc] = *(byte *)(iVar7 + 0x1fc);
    uVar15 = *(undefined4 *)(iVar7 + 0x1f0);
    pbVar8[0xd] = (byte)((uint)uVar15 >> 0x18);
    pbVar8[0xe] = (byte)((uint)uVar15 >> 0x10);
    pbVar8[0xf] = (byte)((uint)uVar15 >> 8);
    pbVar8[0x10] = (byte)uVar15;
    uVar15 = *(undefined4 *)(iVar7 + 0x1e8);
    pbVar8[0x11] = (byte)((uint)uVar15 >> 0x18);
    pbVar8[0x12] = (byte)((uint)uVar15 >> 0x10);
    pbVar8[0x13] = (byte)((uint)uVar15 >> 8);
    pbVar8[0x14] = (byte)uVar15;
    uVar15 = *(undefined4 *)(iVar7 + 0x6c);
    pbVar8[0x15] = (byte)((uint)uVar15 >> 0x18);
    pbVar8[0x16] = (byte)((uint)uVar15 >> 0x10);
    pbVar8[0x17] = (byte)((uint)uVar15 >> 8);
    pbVar8[0x18] = (byte)uVar15;
    pbVar21 = DAT_0800ba00;
    uVar12 = *(undefined2 *)(iVar7 + 0x1b2);
    pbVar8[0x19] = (byte)((ushort)uVar12 >> 8);
    pbVar8[0x1a] = (byte)uVar12;
    uVar12 = *(undefined2 *)(iVar7 + 0x1b4);
    pbVar8[0x1b] = (byte)((ushort)uVar12 >> 8);
    pbVar8[0x1c] = (byte)uVar12;
    uVar12 = *(undefined2 *)(iVar7 + 0x1ce);
    pbVar8[0x1d] = (byte)((ushort)uVar12 >> 8);
    pbVar8[0x1e] = (byte)uVar12;
    uVar12 = *(undefined2 *)(iVar7 + 0x220);
    pbVar8[0x1f] = (byte)((ushort)uVar12 >> 8);
    pbVar8[0x20] = (byte)uVar12;
    uVar12 = *(undefined2 *)(iVar7 + 0x298);
    pbVar8[0x21] = (byte)((ushort)uVar12 >> 8);
    pbVar8[0x22] = (byte)uVar12;
    pbVar8[0x23] = 0;
    pbVar8[0x24] = 0;
    pbVar8[0x25] = 0;
    pbVar8[0x26] = 0;
    uVar13 = 0x27;
    goto LAB_0800bafe;
  case 0xa1:
    if (3 < uVar22) {
      *DAT_0800b5cc = 0;
      for (uVar13 = 0; uVar13 < *(byte *)(iVar7 + 0x55); uVar13 = uVar13 + 1 & 0xffff) {
        pbVar21 = pbVar19 + 1;
        bVar3 = *pbVar19;
        pbVar19 = pbVar19 + 2;
        uVar22 = (uint)*(ushort *)(iVar7 + uVar13 * 2 + 0x168);
        if (uVar22 == 0) {
          *pbVar8 = 1;
          break;
        }
        fVar27 = (float)VectorUnsignedToFloat(uVar22,(byte)(in_fpscr >> 0x16) & 3);
        fVar26 = (float)VectorUnsignedToFloat
                                  ((uint)CONCAT11(bVar3,*pbVar21),(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar7 + uVar13 * 4) = fVar26 / fVar27;
      }
      goto LAB_0800b874;
    }
    bVar3 = *(byte *)(DAT_0800b5c8 + 0x55);
    uVar13 = 1;
    *DAT_0800b5cc = bVar3;
    for (uVar22 = 0; uVar22 < bVar3; uVar22 = uVar22 + 1 & 0xffff) {
      uVar12 = *(undefined2 *)(iVar7 + uVar22 * 2 + 300);
      pbVar8[uVar13] = (byte)((ushort)uVar12 >> 8);
      uVar13 = uVar13 + 1 & 0xffff;
      pbVar8[uVar13] = (byte)uVar12;
      uVar13 = uVar13 + 1 & 0xffff;
    }
    break;
  case 0xa2:
    uVar6 = *(ushort *)(DAT_0800b5c8 + 0x5a);
    uVar13 = 1;
    *DAT_0800b5cc = (byte)uVar6;
    for (uVar22 = 0; uVar22 < uVar6; uVar22 = uVar22 + 1 & 0xffff) {
      uVar12 = *(undefined2 *)(iVar7 + uVar22 * 2 + 0x1ba);
      pbVar8[uVar13] = (byte)((ushort)uVar12 >> 8);
      uVar13 = uVar13 + 1 & 0xffff;
      pbVar8[uVar13] = (byte)uVar12;
      uVar13 = uVar13 + 1 & 0xffff;
    }
    break;
  case 0xa3:
    *DAT_0800b5cc = 0;
    iVar16 = CONCAT31(CONCAT21(CONCAT11(*pbVar19,*(undefined1 *)(iVar16 + 9)),
                               *(undefined1 *)(iVar16 + 10)),*(undefined1 *)(iVar16 + 0xb));
    if (iVar16 != 0) {
      if (iVar24 == 0) {
        *pbVar8 = 1;
      }
      else {
        fVar26 = (float)VectorUnsignedToFloat
                                  (*(undefined4 *)(iVar7 + 0x1a0),(byte)(in_fpscr >> 0x16) & 3);
        fVar27 = (float)VectorSignedToFloat(iVar16,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar7 + 0x40) = fVar27 / (fVar26 / *(float *)(iVar7 + 0x40));
        FUN_0801122c();
      }
    }
LAB_0800b874:
    uVar13 = 1;
    pbVar21 = DAT_0800ba00;
    goto LAB_0800bafe;
  case 0xa4:
    if (5 < uVar22) {
      uStack_2c = *(undefined4 *)pbVar19;
      uStack_28 = CONCAT22((short)((uint)param_4 >> 0x10),*(undefined2 *)(DAT_0800b5c4 + 0xc));
      thunk_FUN_0800ff4c(&uStack_2c);
    }
    thunk_FUN_0800fe04(DAT_0800ba14);
    *pbVar8 = *(byte *)(iVar7 + 0x288);
    pbVar8[1] = *(byte *)(iVar7 + 0x289);
    pbVar8[2] = *(byte *)(iVar7 + 0x28a);
    pbVar8[3] = *(byte *)(iVar7 + 0x28b);
    pbVar8[4] = *(byte *)(iVar7 + 0x28c);
    pbVar8[5] = *(byte *)(iVar7 + 0x28d);
    uVar13 = 6;
    break;
  case 0xa5:
    *DAT_0800b5cc =
         (byte)((*(byte *)(DAT_0800b5c8 + 0xec) & 3) >> 1) |
         (byte)((*(byte *)(DAT_0800b5c8 + 0xec) & 1) << 1) | (byte)((uVar25 & 1) << 4);
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    uVar12 = *(undefined2 *)(iVar7 + 0x1d8);
    pbVar8[7] = (byte)((ushort)uVar12 >> 8);
    pbVar8[8] = (byte)uVar12;
    uVar13 = 9;
    break;
  case 0xa6:
    if (5 < uVar22) {
      do {
        pbVar8[uVar13] = *pbVar19;
        uVar13 = uVar13 + 1 & 0xffff;
        pbVar19 = pbVar19 + 1;
      } while (uVar13 < 0x14);
      FUN_08007dcc(*puVar10,DAT_0800ba00);
    }
    iVar16 = FUN_08007b88(*puVar10);
    if (iVar16 != 0) {
      FUN_08007d2c(*puVar10,DAT_0800ba00,0);
    }
    uVar13 = 0x14;
    pbVar21 = DAT_0800ba00;
    goto LAB_0800bafe;
  default:
    goto switchD_0800b2b2_default;
  }
LAB_0800b8aa:
  pbVar21 = DAT_0800ba00;
LAB_0800bafe:
LAB_0800b8ae:
  FUN_0800c7fc(bVar11,uVar13,pbVar21);
  return;
}


/* 0800bcd8 FUN_0800bcd8 */

void FUN_0800bcd8(uint *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar1 = DAT_0800bd90;
  if (*DAT_0800bd90 == '\0') {
    return;
  }
  uVar3 = *param_1;
  uVar2 = (uint)(byte)DAT_0800bd90[1];
  uVar4 = (uVar3 & 0xfff) >> 10;
  if (uVar4 == 1) {
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = (char)*param_1;
    if ((*param_1 & 0xffffff) >> 0x12 != uVar2) {
      return;
    }
    for (uVar2 = 0; uVar2 < *(byte *)((int)param_1 + 9); uVar2 = uVar2 + 1 & 0xffff) {
      pcVar1[*(ushort *)(pcVar1 + 2) + 5] = *(char *)((int)param_1 + uVar2 + 10);
      *(short *)(pcVar1 + 2) = *(short *)(pcVar1 + 2) + 1;
    }
    return;
  }
  if (uVar4 == 2) {
    if ((uVar3 & 0xffffff) >> 0x12 != uVar2) {
      return;
    }
    for (uVar2 = 0; uVar2 < *(byte *)((int)param_1 + 9); uVar2 = uVar2 + 1 & 0xffff) {
      pcVar1[*(ushort *)(pcVar1 + 2) + 5] = *(char *)((int)param_1 + uVar2 + 10);
      *(short *)(pcVar1 + 2) = *(short *)(pcVar1 + 2) + 1;
    }
    return;
  }
  if (uVar4 == 3) {
    if ((uVar3 & 0xc00) != 0) goto LAB_0800bd5c;
  }
  else if ((uVar3 & 0xc00) != 0) {
    return;
  }
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
LAB_0800bd5c:
  pcVar1[4] = (char)*param_1;
  if ((*param_1 & 0xffffff) >> 0x12 == uVar2) {
    for (uVar2 = 0; uVar2 < *(byte *)((int)param_1 + 9); uVar2 = uVar2 + 1 & 0xffff) {
      pcVar1[*(ushort *)(pcVar1 + 2) + 5] = *(char *)((int)param_1 + uVar2 + 10);
      *(short *)(pcVar1 + 2) = *(short *)(pcVar1 + 2) + 1;
    }
  }
  FUN_0800b1dc();
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  return;
}


/* 0800bd94 FUN_0800bd94 */

void FUN_0800bd94(undefined2 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar1 = DAT_0800be5c;
  uVar3 = 1 << *(sbyte *)(param_1 + 5);
  *DAT_0800be5c = *DAT_0800be5c | 1;
  puVar4 = DAT_0800be5c + 7;
  *puVar4 = *puVar4 & ~uVar3;
  iVar2 = DAT_0800be60;
  puVar5 = DAT_0800be5c + 3;
  if (param_1[7] == 0) {
    *puVar5 = *puVar5 & ~uVar3;
    *(uint *)(iVar2 + (uint)(ushort)param_1[5] * 8 + 0x640) = CONCAT22(param_1[3],param_1[1]);
    *(uint *)(iVar2 + (uint)(ushort)param_1[5] * 8 + 0x644) = CONCAT22(param_1[2],*param_1);
  }
  if (param_1[7] == 1) {
    *puVar5 = *puVar5 | uVar3;
    *(uint *)(iVar2 + (uint)(ushort)param_1[5] * 8 + 0x640) = CONCAT22(*param_1,param_1[1]);
    *(uint *)(iVar2 + (uint)(ushort)param_1[5] * 8 + 0x644) = CONCAT22(param_1[2],param_1[3]);
  }
  uVar6 = DAT_0800be5c[1];
  if (param_1[6] == 0) {
    uVar6 = uVar6 & ~uVar3;
  }
  else {
    uVar6 = uVar6 | uVar3;
  }
  DAT_0800be5c[1] = uVar6;
  uVar6 = DAT_0800be5c[5];
  if (param_1[4] == 0) {
    uVar6 = uVar6 & ~uVar3;
  }
  else {
    uVar6 = uVar6 | uVar3;
  }
  DAT_0800be5c[5] = uVar6;
  if (*(char *)(param_1 + 8) == '\x01') {
    *puVar4 = *puVar4 | uVar3;
  }
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}


/* 0800be64 FUN_0800be64 */

void FUN_0800be64(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  ushort uVar6;
  uint local_38 [5];
  
  iVar2 = DAT_0800bf1c;
  pcVar1 = DAT_0800bf18;
  if ((*DAT_0800bf14 == '\0') && (*DAT_0800bf18 == '\x03')) {
    *DAT_0800bf18 = *(char *)(DAT_0800bf1c + 0x54);
  }
  puVar4 = DAT_0800bf24;
  iVar3 = DAT_0800bf20;
  uVar6 = 0;
  while ((iVar5 = DAT_0800bf28, *(char *)(iVar3 + 2) != '\0' && (uVar6 = uVar6 + 1, uVar6 < 0x3d)))
  {
    FUN_0800afd6(local_38,DAT_0800bf20);
    *(uint *)(iVar2 + 0xf8) = *(uint *)(iVar2 + 0xf8) | 0x80;
    *puVar4 = 0;
    if ((local_38[0] & 0xffffff) >> 0xc == 0x183) {
      *pcVar1 = '\x03';
      FUN_08007ea0(local_38);
    }
    else {
      FUN_0800d000(local_38);
    }
  }
  uVar6 = 0;
  while ((iVar3 = DAT_0800bf28, *(char *)(iVar5 + 2) != '\0' && (uVar6 = uVar6 + 1, uVar6 < 0x3d)))
  {
    *(uint *)(iVar2 + 0xf8) = *(uint *)(iVar2 + 0xf8) | 0x80;
    *puVar4 = 0;
    FUN_0800afd6(local_38,iVar3);
    FUN_0800d000(local_38);
  }
  return;
}


/* 0800bf2c FUN_0800bf2c */

void FUN_0800bf2c(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x602);
  uVar1 = DAT_0800bf68;
  FUN_0800df68(DAT_0800bf68,0x18,3,0x1000);
  FUN_0800df68(uVar1,0x48,3,0x800);
  FUN_0800dedc(uVar1,0x1000);
  FUN_0800fb5c(0x602);
  return;
}


/* 0800bf6c FUN_0800bf6c */

undefined4 FUN_0800bf6c(uint *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = 0xffff;
  uVar4 = 0;
  *param_1 = *param_1 & 0xfffffffd;
  *param_1 = *param_1 | 1;
  for (iVar2 = 0xffff; ((param_1[1] & 1) == 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
  }
  if ((param_1[1] & 1) == 0) {
    uVar4 = 0;
  }
  else {
    param_1[7] = (param_2[1] & 3) << 0x18 | (uint)*param_2 << 0x1e | (param_2[2] & 0xf) << 0x10 |
                 (param_2[3] & 7) << 0x14 | *(ushort *)(param_2 + 10) - 1 & 0x3ff;
    if (param_2[4] == 1) {
      uVar3 = *param_1 | 0x80;
    }
    else {
      uVar3 = *param_1 & 0xffffff7f;
    }
    *param_1 = uVar3;
    if (param_2[5] == 1) {
      uVar3 = *param_1 | 0x40;
    }
    else {
      uVar3 = *param_1 & 0xffffffbf;
    }
    *param_1 = uVar3;
    if (param_2[6] == 1) {
      uVar3 = *param_1 | 0x20;
    }
    else {
      uVar3 = *param_1 & 0xffffffdf;
    }
    *param_1 = uVar3;
    if (param_2[7] == 1) {
      uVar3 = *param_1 | 0x10;
    }
    else {
      uVar3 = *param_1 & 0xffffffef;
    }
    *param_1 = uVar3;
    if (param_2[8] == 1) {
      uVar3 = *param_1 | 8;
    }
    else {
      uVar3 = *param_1 & 0xfffffff7;
    }
    *param_1 = uVar3;
    if (param_2[9] == 1) {
      uVar3 = *param_1 | 4;
    }
    else {
      uVar3 = *param_1 & 0xfffffffb;
    }
    *param_1 = uVar3;
    *param_1 = *param_1 & 0xfffffffe;
    while ((param_1[1] & 1) != 0) {
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = iVar1 + -1;
    }
    if (iVar1 != 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


/* 0800c06a FUN_0800c06a */

void FUN_0800c06a(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}


/* 0800c084 FUN_0800c084 */

void FUN_0800c084(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + param_2 * 0x10;
  uVar2 = *(uint *)(iVar1 + 0x1b0) & 4;
  *(char *)(param_3 + 2) = (char)uVar2;
  if (uVar2 == 0) {
    *param_3 = *(uint *)(iVar1 + 0x1b0) >> 0x15;
  }
  else {
    param_3[1] = *(uint *)(iVar1 + 0x1b0) >> 3;
  }
  *(byte *)((int)param_3 + 9) = (byte)*(undefined4 *)(iVar1 + 0x1b0) & 2;
  *(char *)((int)param_3 + 0x13) = (char)((uint)*(undefined4 *)(iVar1 + 0x1b4) >> 8);
  *(byte *)((int)param_3 + 10) = (byte)*(undefined4 *)(iVar1 + 0x1b4) & 0xf;
  *(char *)((int)param_3 + 0xb) = (char)*(undefined4 *)(iVar1 + 0x1b8);
  *(char *)(param_3 + 3) = (char)((uint)*(undefined4 *)(iVar1 + 0x1b8) >> 8);
  *(char *)((int)param_3 + 0xd) = (char)((uint)*(undefined4 *)(iVar1 + 0x1b8) >> 0x10);
  *(char *)((int)param_3 + 0xe) = (char)((uint)*(undefined4 *)(iVar1 + 0x1b8) >> 0x18);
  *(char *)((int)param_3 + 0xf) = (char)*(undefined4 *)(iVar1 + 0x1bc);
  *(char *)(param_3 + 4) = (char)((uint)*(undefined4 *)(iVar1 + 0x1bc) >> 8);
  *(char *)((int)param_3 + 0x11) = (char)((uint)*(undefined4 *)(iVar1 + 0x1bc) >> 0x10);
  *(char *)((int)param_3 + 0x12) = (char)((uint)*(undefined4 *)(iVar1 + 0x1bc) >> 0x18);
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  return;
}


/* 0800c114 FUN_0800c114 */

int FUN_0800c114(int param_1,ushort *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 8) << 5) {
    if (*(int *)(param_1 + 8) << 4 < 0) {
      iVar1 = 1;
    }
    else {
      if (-1 < *(int *)(param_1 + 8) << 3) {
        return 3;
      }
      iVar1 = 2;
    }
  }
  param_1 = param_1 + iVar1 * 0x10;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) & 1;
  if ((byte)param_2[4] == 0) {
    *(uint *)(param_1 + 0x180) =
         *(uint *)(param_1 + 0x180) | (uint)*(byte *)((int)param_2 + 9) | (uint)*param_2 << 0x15;
  }
  else {
    *(uint *)(param_1 + 0x180) =
         *(uint *)(param_1 + 0x180) | (uint)(byte)param_2[4] |
         (uint)*(byte *)((int)param_2 + 9) | *(int *)(param_2 + 2) << 3;
  }
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) & 0xfffffff0;
  *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) | (uint)(byte)param_2[5];
  *(uint *)(param_1 + 0x188) = (uint)*(byte *)((int)param_2 + 0xb) | *(int *)(param_2 + 6) << 8;
  *(uint *)(param_1 + 0x18c) = (uint)*(byte *)((int)param_2 + 0xf) | *(int *)(param_2 + 8) << 8;
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 1;
  return iVar1;
}


/* 0800c1b4 FUN_0800c1b4 */

void FUN_0800c1b4(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800c1dc;
  FUN_0800df68(DAT_0800c1dc,0x10,3,0x1000);
  FUN_0800dedc(uVar1,0x1000);
  return;
}


/* 0800c1e0 FUN_0800c1e0 */

void FUN_0800c1e0(int param_1)

{
  if (param_1 == 0) {
    FUN_0800dedc(DAT_0800c1f4,0x1000);
    return;
  }
  FUN_0800ded8();
  return;
}


/* 0800c1f8 FUN_0800c1f8 */

void FUN_0800c1f8(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined1 local_18;
  
  FUN_0800c97c(0,DAT_0800c2c4);
  FUN_0800bf2c();
  FUN_0800fb5c(0x719);
  uVar2 = DAT_0800c2c8;
  FUN_0800b1b8(DAT_0800c2c8);
  puVar1 = DAT_0800c2c4;
  DAT_0800c2c4[4] = 0;
  puVar1[5] = 1;
  puVar1[6] = 0;
  puVar1[7] = 1;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 10;
  puVar1[3] = 3;
  *(undefined2 *)(puVar1 + 10) = 2;
  FUN_0800bf6c(uVar2);
  local_28 = 0;
  local_24 = 0;
  local_1e = 0;
  local_1c = 0;
  local_26 = 4;
  local_22 = 4;
  local_1a = 1;
  local_20 = 0;
  local_18 = 1;
  FUN_0800bd94(&local_28);
  local_1e = 1;
  local_28 = 0;
  local_24 = 0;
  local_20 = 1;
  local_26 = 0;
  local_22 = 0;
  FUN_0800bd94(&local_28);
  FUN_0800f3b0(0x14,0);
  FUN_0800f3b0(0x15,0);
  FUN_0800c06a(uVar2,2);
  FUN_0800c06a(uVar2,0x10);
  FUN_0800f3b0(0x13,0);
  FUN_0800c06a(uVar2,1);
  return;
}


/* 0800c2cc FUN_0800c2cc */

void FUN_0800c2cc(uint *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  bool bVar14;
  uint local_40 [2];
  undefined1 local_37;
  byte local_36 [10];
  byte local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  undefined1 local_25;
  
  puVar3 = DAT_0800c6d8;
  iVar4 = DAT_0800c6cc;
  pbVar6 = DAT_0800c6c8;
  uVar13 = SUB41(local_40,0);
  uVar11 = 0;
  if (param_2 == 0) {
    if (*DAT_0800c6c4 == '\0') {
      return;
    }
  }
  else if (*DAT_0800c6c4 != '\0') {
    return;
  }
  local_37 = 0;
  local_40[0] = local_40[0] & 0xe1000000 | (*param_1 >> 0x19 & 0xf) << 0x19 | 0x1000000 |
                (*DAT_0800c6c8 & 0x3f) << 0x12 | (*param_1 >> 0x12 & 0x3f) << 0xc |
                (ushort)*param_1 & 0x3ff;
  uVar7 = (ushort)*param_1 & 0x3ff;
  if (uVar7 == 0x43) {
    uVar5 = *(undefined4 *)(DAT_0800c6cc + 0x6c);
    local_36[0] = (byte)uVar5;
    local_36[1] = (byte)((uint)uVar5 >> 8);
    local_36[2] = (byte)((uint)uVar5 >> 0x10);
    local_36[3] = (byte)((uint)uVar5 >> 0x18);
    local_36[4] = *(byte *)(DAT_0800c6cc + 0x194);
    local_36[6] = (byte)*(undefined2 *)(DAT_0800c6cc + 0x1a0);
    local_36[5] = (byte)((ushort)*(undefined2 *)(DAT_0800c6cc + 0x1a0) >> 8);
LAB_0800c646:
    local_37 = 7;
    goto LAB_0800c66e;
  }
  if (0x43 < uVar7) {
    if (uVar7 == 0x48) {
      pbVar6 = DAT_0800c758;
      do {
        uVar8 = uVar11 + 1 & 0xff;
        local_36[uVar11] = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar11 = uVar8;
      } while (uVar8 < 8);
    }
    else if (uVar7 < 0x49) {
      if (uVar7 == 0x44) {
        pbVar6 = DAT_0800c6dc;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
      else if (uVar7 == 0x45) {
        pbVar6 = DAT_0800c6dc + 8;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
      else if (uVar7 == 0x46) {
        pbVar6 = DAT_0800c6dc + 0x10;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
      else {
        bVar14 = uVar7 == 0x47;
        uVar13 = (char)local_40;
        if (!bVar14) goto LAB_0800c34e;
        pbVar6 = DAT_0800c6dc + 0x18;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
    }
    else {
      if (uVar7 == 0x52) {
        local_36[0] = *(byte *)(DAT_0800c6cc + 0x5a);
        local_36[1] = (byte)*(undefined2 *)(DAT_0800c6cc + 0x1b2);
        local_36[2] = (byte)((ushort)*(undefined2 *)(DAT_0800c6cc + 0x1b2) >> 8);
        local_36[3] = (byte)*(undefined2 *)(DAT_0800c6cc + 0x1b4);
        local_36[4] = (byte)((ushort)*(undefined2 *)(DAT_0800c6cc + 0x1b4) >> 8);
        local_36[5] = (byte)*(undefined2 *)(DAT_0800c6cc + 0x1ce);
        local_36[6] = (byte)((ushort)*(undefined2 *)(DAT_0800c6cc + 0x1ce) >> 8);
        goto LAB_0800c646;
      }
      if (uVar7 == 0x53) {
        pbVar6 = DAT_0800c758 + 0x6e;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
      else {
        bVar14 = uVar7 == 0x54;
        if (!bVar14) goto LAB_0800c34e;
        pbVar6 = DAT_0800c758 + 0x76;
        do {
          uVar8 = uVar11 + 1 & 0xff;
          local_36[uVar11] = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar11 = uVar8;
        } while (uVar8 < 8);
      }
    }
    local_37 = (undefined1)uVar8;
    goto LAB_0800c66e;
  }
  uVar12 = 8;
  if (uVar7 == 0x30) {
    uVar7 = *(ushort *)((int)param_1 + 10);
    if (uVar7 == 1) {
      iVar4 = FUN_08007b88(*DAT_0800c6d8);
      *(short *)(pbVar6 + 6) = (short)iVar4;
      if (iVar4 != 0) goto LAB_0800c41e;
    }
    else if ((uVar7 <= *(ushort *)(DAT_0800c6c8 + 6)) && (uVar7 != 0)) {
LAB_0800c41e:
      sVar10 = uVar7 - 1;
      uVar13 = *puVar3;
LAB_0800c428:
      FUN_08007d2c(uVar13,&local_2c,sVar10);
      local_36[0] = local_2c;
      local_36[1] = local_2b;
      local_36[2] = local_2a;
      local_36[3] = local_29;
      local_36[4] = local_28;
      local_36[5] = local_27;
      local_36[6] = local_26;
      goto LAB_0800c616;
    }
    local_37 = 0;
  }
  else {
    uVar13 = 8;
    if (uVar7 < 0x31) {
      if (uVar7 == 1) {
        local_36[0] = 5;
        local_36[1] = 0;
        local_36[2] = 0;
        local_36[3] = 0;
        local_37 = 4;
        goto LAB_0800c66e;
      }
      if (uVar7 == 2) {
        local_36[0] = 5;
        local_36[1] = 0x33;
        local_36[2] = 0;
        local_36[3] = 0;
        local_36[4] = 0x14;
        local_36[5] = 4;
        uVar12 = 8;
      }
      else {
        if (uVar7 == 3) {
          sVar10 = 0;
          uVar13 = *DAT_0800c6d0;
          goto LAB_0800c428;
        }
        bVar14 = uVar7 == 5;
LAB_0800c34e:
        if (!bVar14) goto LAB_0800c66e;
        thunk_FUN_0800fe04(DAT_0800c6d4);
        local_36[0] = *(byte *)(iVar4 + 0x288);
        local_36[1] = *(undefined1 *)(iVar4 + 0x289);
        local_36[2] = *(undefined1 *)(iVar4 + 0x28a);
        local_36[3] = *(byte *)(iVar4 + 0x28b);
        local_36[4] = *(byte *)(iVar4 + 0x28c);
        local_36[5] = *(byte *)(iVar4 + 0x28d);
        uVar12 = uVar13;
      }
      local_36[6] = 0;
      local_36[7] = 0;
    }
    else {
      if (uVar7 == 0x40) {
        uVar5 = *(undefined4 *)(DAT_0800c6cc + 0x14c);
        local_36[0] = (byte)uVar5;
        local_36[1] = (byte)((uint)uVar5 >> 8);
        local_36[2] = (byte)((uint)uVar5 >> 0x10);
        local_36[3] = (byte)((uint)uVar5 >> 0x18);
        uVar5 = *(undefined4 *)(DAT_0800c6cc + 0x19c);
        local_36[4] = (byte)uVar5;
        local_36[5] = (byte)((uint)uVar5 >> 8);
        local_36[6] = (byte)((uint)uVar5 >> 0x10);
        local_25 = (undefined1)((uint)uVar5 >> 0x18);
      }
      else {
        if (uVar7 == 0x41) {
          local_36[0] = *(byte *)(DAT_0800c6cc + 0x55);
          local_36[1] = 0;
          local_36[2] = *(undefined1 *)(DAT_0800c6cc + 0x1fc);
          uVar11 = (uint)*(byte *)(DAT_0800c6cc + 0xfc);
          uVar8 = (uVar11 & 0x3f) >> 5;
          uVar9 = (uint)*(byte *)(DAT_0800c6cc + 0x100);
          local_36[3] = (byte)((uVar11 & 0x1f) >> 4) | (byte)(((uVar11 & 7) >> 2) << 1) |
                        (byte)(uVar8 << 2) | (byte)(uVar8 << 3) | (byte)(((uVar9 & 3) >> 1) << 4) |
                        (byte)(((uVar9 & 0xf) >> 3) << 4) | (byte)(((uVar11 & 0xf) >> 3) << 5) |
                        (byte)((uVar11 & 1) << 6) | (*(byte *)(DAT_0800c6cc + 0xfc) >> 1) << 7;
          bVar1 = *(byte *)(DAT_0800c6cc + 0xf0);
          bVar2 = *(byte *)(DAT_0800c6cc + 0x118);
          uVar11 = (uint)bVar2;
          local_36[4] = bVar1 & 1 | *(byte *)(DAT_0800c6cc + 0xec) & 2 |
                        (byte)(((bVar1 & 3) >> 1) << 2) | (*(byte *)(DAT_0800c6cc + 0xec) & 1) << 3
                        | (byte)(((*(byte *)(DAT_0800c6cc + 0x104) & 3) >> 1) << 4) |
                        (byte)((*(byte *)(DAT_0800c6cc + 0x104) & 1) << 5) |
                        (byte)(((uVar11 & 7) >> 2) << 6) | (bVar2 >> 3) << 7;
          local_36[5] = (byte)((uVar11 & 0x1f) >> 4) | (byte)((uVar11 & 1) << 1) |
                        (byte)(((uVar11 & 3) >> 1) << 2) | (byte)(((uVar11 & 0x7f) >> 6) << 3) |
                        (bVar2 >> 7) << 4 | bVar2 & 0x20 | (byte)(((bVar1 & 7) >> 2) << 6);
          bVar1 = *(byte *)(DAT_0800c6cc + 0x108);
          local_36[6] = (byte)((*(byte *)(DAT_0800c6cc + 0x10c) & 0x1f) >> 4) |
                        (byte)(((uVar9 & 7) >> 2) << 1) | (byte)((uVar9 & 1) << 2) |
                        (byte)((bVar1 & 1) << 3) | (byte)(((bVar1 & 3) >> 1) << 4) | bVar1 & 0x20;
          goto LAB_0800c646;
        }
        bVar14 = uVar7 == 0x42;
        if (!bVar14) goto LAB_0800c34e;
        uVar5 = *(undefined4 *)(DAT_0800c6cc + 0x1f0);
        local_36[0] = (byte)uVar5;
        local_36[1] = (byte)((uint)uVar5 >> 8);
        local_36[2] = (byte)((uint)uVar5 >> 0x10);
        local_36[3] = (byte)((uint)uVar5 >> 0x18);
        uVar5 = *(undefined4 *)(DAT_0800c6cc + 0x1e8);
        local_36[4] = (byte)uVar5;
        local_36[5] = (byte)((uint)uVar5 >> 8);
        local_36[6] = (byte)((uint)uVar5 >> 0x10);
        local_25 = (undefined1)((uint)uVar5 >> 0x18);
      }
LAB_0800c616:
      local_36[7] = local_25;
    }
    local_37 = uVar12;
  }
LAB_0800c66e:
  FUN_0800c964(local_40);
  return;
}


/* 0800c75c FUN_0800c75c */

void FUN_0800c75c(void)

{
  FUN_0800d938(0x800);
  FUN_0800d918(0x800);
  return;
}


/* 0800c772 FUN_0800c772 */

void FUN_0800c772(void)

{
  FUN_0800d938(0x800);
  FUN_0800d928(0x800);
  FUN_0800d60c(1);
  FUN_08010134(1);
  return;
}


/* 0800c794 FUN_0800c794 */

void FUN_0800c794(void)

{
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_0800c7e4,0x48,3,0x800);
  FUN_0800fb5c(0x600);
  FUN_0800f3b0(0x28,2,0);
  FUN_0800df10(0,0xb);
  FUN_0800d938(0x800);
  FUN_0800d8b0(0x800,0,1);
  FUN_0800d918(0x800);
  return;
}


/* 0800c7e8 FUN_0800c7e8 */

void FUN_0800c7e8(void)

{
  FUN_08010134(0);
  FUN_0800c75c();
  *(int *)(DAT_0800a310 + 0x24) = *(int *)(DAT_0800a310 + 0x24) + 1;
  return;
}


/* 0800c7fc FUN_0800c7fc */

void FUN_0800c7fc(int param_1,uint param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint local_38 [2];
  undefined1 local_2f;
  undefined1 local_2e [10];
  
  sVar7 = 0;
  local_38[0] = (local_38[0] & 0xe1fc0fff | 0x1000000 | (*(byte *)(DAT_0800c95c + 1) & 0x3f) << 0xc)
                + 0x6000000 & 0xff03fc00 | (*DAT_0800c960 & 0x3f) << 0x12 |
                (uint)*(byte *)(DAT_0800c95c + 4);
  uVar3 = param_1 + (param_2 >> 8) + (param_2 & 0xff);
  for (uVar4 = 0; uVar3 = uVar3 & 0xffff, uVar4 < param_2; uVar4 = uVar4 + 1 & 0xffff) {
    uVar3 = (byte)param_3[uVar4] + uVar3;
  }
  uVar4 = param_2 + 5 & 0xffff;
  while (uVar4 != 0) {
    local_38[0] = (local_38[0] & 0xfffff3ff) + 0x800;
    uVar2 = (undefined1)(param_2 >> 8);
    uVar1 = (undefined1)(uVar3 >> 8);
    if (uVar4 < 9) {
      local_38[0] = local_38[0] | 0xc00;
      uVar5 = uVar4;
      for (uVar6 = 0; uVar6 < uVar4; uVar6 = uVar6 + 1 & 0xffff) {
        if (sVar7 == 0) {
          local_38[0] = local_38[0] & 0xfffff3ff;
          local_2e[uVar6] = (char)param_1;
        }
        else if (sVar7 == 1) {
          local_2e[uVar6] = uVar2;
        }
        else if (sVar7 == 2) {
          local_2e[uVar6] = (char)param_2;
        }
        else if (uVar5 == 2) {
          local_2e[uVar6] = uVar1;
        }
        else if (uVar5 == 1) {
          local_2e[uVar6] = (char)uVar3;
        }
        else {
          local_2e[uVar6] = *param_3;
          param_3 = param_3 + 1;
        }
        sVar7 = sVar7 + 1;
        uVar5 = uVar5 - 1 & 0xffff;
      }
      local_2f = (undefined1)uVar6;
      uVar4 = uVar5;
    }
    else {
      local_2f = 8;
      uVar5 = 0;
      do {
        if (sVar7 == 0) {
          local_38[0] = (local_38[0] & 0xfffff3ff) + 0x400;
          local_2e[uVar5] = (char)param_1;
        }
        else if (sVar7 == 1) {
          local_2e[uVar5] = uVar2;
        }
        else if (sVar7 == 2) {
          local_2e[uVar5] = (char)param_2;
        }
        else if (uVar4 == 2) {
          local_2e[uVar5] = uVar1;
        }
        else if (uVar4 == 1) {
          local_2e[uVar5] = (char)uVar3;
        }
        else {
          local_2e[uVar5] = *param_3;
          param_3 = param_3 + 1;
        }
        sVar7 = sVar7 + 1;
        uVar5 = uVar5 + 1 & 0xffff;
        uVar4 = uVar4 - 1 & 0xffff;
      } while (uVar5 < 8);
    }
    FUN_0800c964(local_38);
  }
  return;
}


/* 0800c964 FUN_0800c964 */

undefined4 FUN_0800c964(int param_1)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  char local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 auStack_18 [16];
  
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_0800b0de(param_1,DAT_0800c978);
  if (*(char *)(DAT_0800aed4 + 1) == '\0') {
    *(undefined1 *)(DAT_0800aed4 + 1) = 1;
    FUN_0800afd6(auStack_18,DAT_0800aed8);
    FUN_08004dfe(&local_2c,auStack_18,0x14);
    FUN_0800c97c(2,&local_40);
    local_3c = local_2c;
    local_40 = local_28;
    local_38 = 0;
    local_37 = 0;
    if (local_24 != '\0') {
      local_38 = 4;
    }
    local_36 = local_23;
    local_35 = local_22;
    local_34 = local_21;
    local_33 = local_20;
    local_32 = local_1f;
    local_31 = local_1e;
    local_30 = local_1d;
    local_2f = local_1c;
    local_2e = local_1b;
    FUN_0800c114(DAT_0800aedc,&local_40);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


/* 0800c97c FUN_0800c97c */

void FUN_0800c97c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (param_1 == 0) {
    *(undefined1 *)((int)param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0x3ff;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 2) = 2;
    *(undefined1 *)((int)param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 9) = 0;
    *(undefined1 *)param_2 = 0;
    return;
  }
  if (param_1 == 1) {
    *(undefined2 *)((int)param_2 + 0xe) = 1;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined2 *)param_2 = 0;
    *(undefined2 *)((int)param_2 + 2) = 0;
    *(undefined2 *)(param_2 + 1) = 0;
    *(undefined2 *)((int)param_2 + 6) = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
    return;
  }
  if (param_1 == 2) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1 & 0xff;
      *(undefined1 *)((int)param_2 + uVar1 + 0xb) = 0;
      uVar1 = uVar2;
    } while (uVar2 < 8);
    *(undefined1 *)((int)param_2 + 10) = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    if (param_1 != 3) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 1 & 0xff;
      *(undefined1 *)((int)param_2 + uVar1 + 0xb) = 0;
      uVar1 = uVar2;
    } while (uVar2 < 8);
    *(undefined1 *)((int)param_2 + 10) = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 0x13) = 0;
  }
  *(undefined1 *)((int)param_2 + 9) = 0;
  *param_2 = 0;
  return;
}


/* 0800c9f8 FUN_0800c9f8 */

void FUN_0800c9f8(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_28 [2];
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  
  iVar4 = DAT_0800cb0c;
  if (*DAT_0800cb04 == '\0') {
    return;
  }
  local_28[0] = local_28[0] & 0xe1000000 | (*param_1 >> 0x19 & 0xf) << 0x19 | 0x1000000 |
                (*DAT_0800cb08 & 0x3f) << 0x12 | ((byte)DAT_0800cb04[1] & 0x3f) << 0xc |
                (ushort)*param_1 & 0x3ff;
  local_1f = 3;
  local_1e = *(undefined1 *)((int)param_1 + 10);
  uVar5 = *(uint *)(DAT_0800cb0c + 0xec);
  switch((ushort)*param_1 & 0x3ff) {
  case 0x300:
    if (*(char *)((int)param_1 + 10) == '\0') {
      uVar5 = uVar5 & 0xfffffffe;
    }
    else {
      uVar5 = uVar5 | 1;
    }
    goto LAB_0800ca7c;
  case 0x301:
    if (*(char *)((int)param_1 + 10) == '\0') {
      uVar5 = uVar5 & 0xfffffffd;
    }
    else {
      uVar5 = uVar5 | 2;
    }
LAB_0800ca7c:
    *(uint *)(DAT_0800cb0c + 0xec) = uVar5;
    break;
  case 0x302:
    if (*(char *)((int)param_1 + 10) == 'U') {
      *(uint *)(DAT_0800cb0c + 0xe4) = *(uint *)(DAT_0800cb0c + 0xe4) & 0xfffffffd | 1;
    }
    break;
  case 0x303:
    uVar3 = (*(byte *)((int)param_1 + 10) & 1) << 1;
    puVar1 = (uint *)(DAT_0800cb0c + 0xec);
    *puVar1 = uVar5 & 0xfffffffd | uVar3;
    uVar6 = *(uint *)(iVar4 + 0xf0);
    uVar2 = *(byte *)((int)param_1 + 10) >> 1 & 1;
    *(uint *)(iVar4 + 0xf0) = uVar6 & 0xfffffffe | uVar2;
    *puVar1 = uVar5 & 0xfffffffc | uVar3 | *(byte *)((int)param_1 + 10) >> 2 & 1;
    uVar5 = (*(byte *)((int)param_1 + 10) >> 3 & 1) << 1;
    *(uint *)(iVar4 + 0xf0) = uVar6 & 0xfffffffc | uVar2 | uVar5;
    *(uint *)(iVar4 + 0xf0) =
         uVar6 & 0xfffffff8 | uVar2 | uVar5 | (*(byte *)((int)param_1 + 10) >> 4 & 1) << 2;
    break;
  case 0x305:
    uStack_14 = *(undefined1 *)((int)param_1 + 10);
    uStack_13 = *(undefined1 *)((int)param_1 + 0xb);
    uStack_12 = (undefined1)param_1[3];
    uStack_11 = *(undefined1 *)((int)param_1 + 0xd);
    uStack_10 = *(undefined1 *)((int)param_1 + 0xe);
    uStack_f = *(undefined1 *)((int)param_1 + 0xf);
    thunk_FUN_0800ff4c(&uStack_14);
  }
  FUN_0800c964(local_28);
  return;
}


/* 0800cb10 FUN_0800cb10 */

void FUN_0800cb10(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = DAT_0800cbfc;
  uVar2 = DAT_0800cbf8;
  uVar1 = DAT_0800cbf4;
  uVar6 = (uint)*(byte *)(DAT_0800cbf0 + 0x1fc);
  uVar5 = (uint)*(byte *)(DAT_0800cbfc + 6);
  uVar4 = *(int *)(DAT_0800cbfc + 0x20) + 1;
  if ((uVar6 < 10) || (uVar6 - 10 < 0x16)) {
    *(uint *)(DAT_0800cbfc + 0x20) = uVar4;
    if (uVar4 != uVar5) goto LAB_0800cb5a;
    FUN_0800dedc(uVar1,0x200);
    FUN_0800ded8(uVar1,0x100);
  }
  else {
    if (0x20 < uVar6 - 0x20) {
      if (0x23 < uVar6 - 0x41) {
        return;
      }
      *(uint *)(DAT_0800cbfc + 0x20) = uVar4;
      if (uVar4 != uVar5) goto LAB_0800cb5a;
      FUN_0800ded8(uVar1,0x200);
      FUN_0800ded8(uVar1,0x100);
      FUN_0800dedc(uVar1,0x20);
      goto LAB_0800cbdc;
    }
    *(uint *)(DAT_0800cbfc + 0x20) = uVar4;
    if (uVar4 != uVar5) {
LAB_0800cb5a:
      if (uVar5 << 1 <= uVar4) {
        FUN_0800ded8(uVar1,0x200);
        FUN_0800ded8(uVar1,0x100);
        FUN_0800ded8(uVar1,0x20);
        FUN_0800ded8(uVar1,8);
        FUN_0800ded8(uVar2,0x4000);
        *(undefined4 *)(iVar3 + 0x20) = 0;
      }
      return;
    }
    FUN_0800ded8(uVar1,0x200);
    FUN_0800dedc(uVar1,0x100);
  }
  FUN_0800ded8(uVar1,0x20);
LAB_0800cbdc:
  FUN_0800ded8(uVar1,8);
  FUN_0800ded8(uVar2,0x4000);
  return;
}


/* 0800cc38 FUN_0800cc38 */

void FUN_0800cc38(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0800cc98;
  iVar1 = DAT_0800cc94;
  if (*(int *)(DAT_0800cc94 + 0x19c) < 0xc9) {
    if (9 < *(uint *)(DAT_0800cc94 + 0x300)) {
      *(undefined2 *)(DAT_0800cc98 + 0x1a) = 0;
      *(undefined1 *)(iVar2 + 5) = 1;
      goto LAB_0800cc76;
    }
  }
  else {
    *(short *)(DAT_0800cc98 + 0x1a) = *(short *)(DAT_0800cc98 + 0x1a) + 1;
  }
  if ((0xe < *(ushort *)(iVar2 + 0x1a)) && (*(char *)(iVar2 + 5) != '\0')) {
    *(short *)(iVar1 + 0x304) = *(short *)(iVar1 + 0x304) + 1;
    *(undefined1 *)(iVar2 + 5) = 0;
  }
LAB_0800cc76:
  if (((int)(*(uint *)(iVar1 + 0x114) << 0x18) < 0) &&
     (*(undefined4 *)(iVar1 + 0x298) = 0, 1 < *(ushort *)(iVar2 + 0x1a))) {
    *(uint *)(iVar1 + 0x114) = *(uint *)(iVar1 + 0x114) & 0xffffff7f;
  }
  return;
}


/* 0800cd00 thunk_FUN_0800cd4c */

void thunk_FUN_0800cd4c(void)

{
  FUN_0800d938(0x100);
  FUN_0800d928(0x100);
  return;
}


/* 0800cd04 FUN_0800cd04 */

void FUN_0800cd04(void)

{
  if (*(byte *)(DAT_0800cd14 + 2) < 0xfa) {
    *(byte *)(DAT_0800cd14 + 2) = *(byte *)(DAT_0800cd14 + 2) + 1;
  }
  return;
}


/* 0800cd18 FUN_0800cd18 */

void FUN_0800cd18(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = DAT_0800cd40;
  if (3 < *(byte *)(DAT_0800cd40 + 2)) {
    *(undefined1 *)(DAT_0800cd40 + 2) = 0;
  }
  iVar2 = DAT_0800cd40;
  puVar3 = (undefined1 *)(DAT_0800cd40 + 10);
  *(undefined1 *)(DAT_0800cd40 + 0xe) = *(undefined1 *)(DAT_0800cd40 + 0xd);
  *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(iVar2 + 0xc);
  *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar2 + 0xb);
  *(undefined1 *)(iVar2 + 0xb) = *puVar3;
  *puVar3 = *(undefined1 *)(iVar1 + 2);
  *(undefined1 *)(iVar1 + 2) = 0;
  return;
}


/* 0800cd44 FUN_0800cd44 */

void FUN_0800cd44(void)

{
  FUN_0800d918(0x100);
  return;
}


/* 0800cd4c FUN_0800cd4c */

void FUN_0800cd4c(void)

{
  FUN_0800d938(0x100);
  FUN_0800d928(0x100);
  return;
}


/* 0800cd64 FUN_0800cd64 */

void FUN_0800cd64(void)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort uVar14;
  
  iVar3 = DAT_0800cf40;
  uVar14 = *(ushort *)(DAT_0800cf40 + 0x306);
  if (0xfff0 < *(ushort *)(DAT_0800cf40 + 0x29c)) {
    *(undefined2 *)(DAT_0800cf40 + 0x29c) = 0xfff0;
  }
  iVar4 = DAT_0800cf44;
  uVar7 = *(uint *)(DAT_0800cf40 + 0xfc);
  if ((int)(*(uint *)(iVar3 + 0xf8) << 0x18) < 0) {
    *(uint *)(iVar3 + 0xf8) = *(uint *)(iVar3 + 0xf8) & 0xffffff7f;
    if (-1 < (int)(uVar7 << 0x1e)) {
      *(undefined2 *)(iVar3 + 0x29c) = 0;
      *(undefined2 *)(iVar3 + 0x2a0) = 0;
      *(undefined1 *)(iVar3 + 0x29e) = 0;
    }
    *(undefined2 *)(iVar4 + 0x22) = 0;
    *(undefined2 *)(iVar4 + 0x14) = 0;
  }
  else {
    sVar1 = *(short *)(DAT_0800cf44 + 0x22);
    uVar10 = sVar1 + 1;
    *(ushort *)(DAT_0800cf44 + 0x22) = uVar10;
    if (4 < uVar10) {
      *(short *)(iVar4 + 0x22) = sVar1;
    }
    if (*(ushort *)(iVar4 + 0x14) < 200) {
      *(ushort *)(iVar4 + 0x14) = *(ushort *)(iVar4 + 0x14) + 1;
    }
  }
  uVar13 = *(uint *)(DAT_0800cf40 + 0xe4);
  cVar2 = *(char *)(DAT_0800cf40 + 0x194);
  uVar12 = *(uint *)(DAT_0800cf40 + 0x1a4);
  uVar11 = uVar13 | 1;
  if ((*(byte *)(iVar3 + 0x104) & 1) == 0) {
    if ((int)(uVar13 << 0x1e) < 0) {
      uVar11 = uVar13 & 0xfffffffe;
    }
    *(uint *)(iVar3 + 0xe4) = uVar11;
    if ((cVar2 != '\0') && (100 < uVar12)) {
      *(undefined2 *)(iVar3 + 0x29c) = 0;
      *(undefined2 *)(iVar3 + 0x2a0) = 0;
      *(undefined1 *)(iVar3 + 0x29e) = 0;
    }
    if (((((uVar7 & 7) >> 2 != 0 || (uVar7 & 0xf) >> 3 != 0) || (uVar7 & 0x7f) >> 6 != 0) ||
        (uVar7 & 0x3f) >> 5 != 0) || (int)(uVar7 << 0x1e) < 0) {
      uVar14 = 5;
    }
    if (200 < *(int *)(iVar3 + 0x198)) {
      *(undefined2 *)(iVar3 + 0x29c) = 0;
      *(undefined2 *)(iVar3 + 0x2a0) = 0;
      *(undefined1 *)(iVar3 + 0x29e) = 0;
    }
    if (*(char *)(iVar4 + 0x11) != '\0') {
      *(undefined1 *)(iVar4 + 0x11) = 0;
      goto LAB_0800ce6a;
    }
  }
  else {
    *(undefined1 *)(iVar4 + 0x11) = 1;
    if ((int)(uVar13 << 0x1e) < 0) {
      if (cVar2 == '\0') {
        if (*(ushort *)(iVar3 + 0x58) < uVar12) goto LAB_0800ce6a;
      }
      else if (100 < uVar12) {
LAB_0800ce6a:
        *(undefined2 *)(iVar3 + 0x29c) = 0;
        *(undefined2 *)(iVar3 + 0x2a0) = 0;
        *(undefined1 *)(iVar3 + 0x29e) = 0;
      }
    }
    else {
      uVar14 = 1;
      *(uint *)(iVar3 + 0xe4) = uVar11;
    }
  }
  if (*(ushort *)(iVar3 + 0x29c) < uVar14) {
    uVar7 = *(uint *)(iVar3 + 0xe4);
  }
  else {
    *(undefined2 *)(iVar3 + 0x29c) = 0;
    *(undefined2 *)(iVar3 + 0x2a0) = 0;
    *(undefined1 *)(iVar3 + 0x29e) = 0;
    uVar7 = *(uint *)(iVar3 + 0xe4) & 0xfffffffd | 1;
    *(uint *)(iVar3 + 0xe4) = uVar7;
  }
  if ((((int)(uVar7 << 0x1e) < 0) || ((uVar7 & 1) == 0)) &&
     (-1 < (int)((uint)*(byte *)(iVar3 + 0x114) << 0x1b))) {
    *(undefined1 *)(iVar4 + 0x12) = 0;
  }
  else {
    bVar6 = *(byte *)(iVar4 + 0x12);
    if (bVar6 < 0xf0) {
      bVar6 = bVar6 + 1;
      *(byte *)(iVar4 + 0x12) = bVar6;
    }
    if (4 < bVar6) {
      FUN_08010134(2);
    }
  }
  pbVar5 = DAT_0800cf48;
  bVar6 = *DAT_0800cf48;
  *DAT_0800cf48 = bVar6 + 1;
  if (0x14 < (byte)(bVar6 + 1)) {
    if (((*(uint *)(iVar3 + 0xe4) & 3) >> 1 & *(uint *)(iVar3 + 0xe4)) == 0) {
      FUN_08010118(0);
      FUN_08010134(1);
      *pbVar5 = 0;
    }
    FUN_0800ac64(DAT_0800cf4c);
  }
  FUN_0800cd18();
  iVar8 = FUN_0800dd00(5);
  if ((iVar8 == 0) && (*(uint *)(iVar3 + 0x160) < 0x4e21)) {
    if ((int)((uint)*(byte *)(iVar3 + 0x114) << 0x1a) < 0) {
      return;
    }
  }
  else if ((int)((uint)*(byte *)(iVar3 + 0x114) << 0x1a) < 0) {
    *(undefined1 *)(iVar4 + 0x10) = 0;
    uVar9 = 0;
    goto LAB_0800cf34;
  }
  bVar6 = *(char *)(iVar4 + 0x10) + 1;
  *(byte *)(iVar4 + 0x10) = bVar6;
  if (bVar6 < 0xb) {
    return;
  }
  uVar9 = 1;
LAB_0800cf34:
  FUN_08006334(uVar9);
  return;
}


/* 0800cf50 FUN_0800cf50 */

void FUN_0800cf50(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x602);
  uVar1 = DAT_0800cf78;
  FUN_0800df68(DAT_0800cf78,0x10,3,0x100);
  FUN_0800ded8(uVar1,0x100);
  return;
}


/* 0800cf7c FUN_0800cf7c */

void FUN_0800cf7c(void)

{
  *DAT_0800cf84 = 1;
  return;
}


/* 0800cf88 FUN_0800cf88 */

void FUN_0800cf88(void)

{
  FUN_08010560();
  *DAT_0800cfa4 = 0;
  *DAT_0800cfa8 = 0;
  *DAT_0800cfac = 0;
  *(undefined4 *)(DAT_0800cfb0 + 0xc) = 0;
  return;
}


/* 0800cfb4 FUN_0800cfb4 */

undefined4 FUN_0800cfb4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0800cfcc;
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar1 = *(undefined4 *)(param_1 + uVar2 * 4);
  }
  return *puVar1;
}


/* 0800cfd0 FUN_0800cfd0 */

undefined4 FUN_0800cfd0(void)

{
  return *DAT_0800cfd8;
}


/* 0800d000 FUN_0800d000 */

void FUN_0800d000(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0xffffff) >> 0x13;
  if (((uVar2 == 4) || ((uVar1 & 0x1f000000) == 0)) || (uVar2 == 0x1f)) {
    switch((uVar1 & 0x7ffff) >> 0x10) {
    case 0:
      FUN_080064ec(param_1);
    case 4:
    case 5:
    case 6:
      FUN_08006c10(param_1);
      break;
    case 1:
      FUN_080065c8(param_1);
      break;
    case 2:
      FUN_080063dc(param_1);
      break;
    case 7:
      FUN_080064ec(param_1);
    }
  }
  if (*param_1 == DAT_0800d060) {
    *(undefined1 *)(DAT_0800d064 + 1) = 0;
  }
  return;
}


/* 0800d068 FUN_0800d068 */

void FUN_0800d068(void)

{
  ushort uVar1;
  char *pcVar2;
  char *pcVar3;
  ushort *puVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_38;
  undefined1 local_2f;
  char local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  
  FUN_080063b4();
  pcVar2 = DAT_0800d46c;
  if (DAT_0800d46c[1] != '\0') {
    return;
  }
  DAT_0800d46c[2] = DAT_0800d46c[2] + '\x01';
  puVar4 = DAT_0800d474;
  pcVar3 = DAT_0800d470;
  if (*DAT_0800d470 == '\x01') {
    uVar1 = *DAT_0800d474;
    *DAT_0800d474 = uVar1 + 1;
    if (0xfa < (ushort)(uVar1 + 1)) {
      *puVar4 = 0;
      *pcVar3 = '\0';
    }
    goto LAB_0800d098;
  }
  iVar8 = FUN_0800ddf0();
  iVar5 = DAT_0800d478;
  if (iVar8 != 0) {
    pcVar2[1] = '\0';
    goto LAB_0800d098;
  }
  if (pcVar2[1] == '\0') {
    if ((pcVar2[2] & 7U) == 0) {
      local_2e = '\0';
      local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
      goto LAB_0800d106;
    }
  }
  else {
    local_2e = '\x01';
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
LAB_0800d106:
    local_38 = CONCAT22(local_38._2_2_,0x340a);
    local_2f = 1;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
    if ((pcVar2[2] & 7U) == 0) {
      local_2e = '\0';
      if (*(int *)(iVar5 + 0xfc) << 0x1e < 0) {
        local_2e = 'H';
      }
      else if ((*(byte *)(iVar5 + 0x10c) & 1) == 0) {
        if (*(int *)(iVar5 + 0xfc) << 0x1d < 0) {
          local_2e = 'C';
        }
      }
      else {
        local_2e = 'D';
      }
      *DAT_0800d47c = local_2e;
      local_2f = 1;
      if (local_2e == '\0') {
        uVar7 = 0x1400;
      }
      else {
        uVar7 = 0x1402;
      }
      local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xff0000) + 0x4000000 >> 0x10);
      local_38 = CONCAT22(local_38._2_2_,uVar7);
      FUN_0800c964(&local_38);
    }
  }
  if ((pcVar2[2] & 1U) == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3400);
    iVar8 = *(int *)(iVar5 + 0x1e8);
    local_2e = (char)iVar8;
    local_2d = (undefined1)((uint)iVar8 >> 8);
    local_2c._0_3_ = CONCAT12(*(undefined1 *)(iVar5 + 0x1fc),*(undefined2 *)(iVar5 + 0x1f0));
    local_2c = CONCAT13(*(undefined1 *)(iVar5 + 0x1fc),(undefined3)local_2c);
    if (*(uint *)(iVar5 + 0x6c) != 0) {
      local_28 = (undefined1)((uint)(iVar8 * 100) / *(uint *)(iVar5 + 0x6c));
    }
    local_2f = 7;
    local_27 = 0;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 0x3c == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3410);
    local_2e = (char)*(undefined2 *)(iVar5 + 300);
    local_2d = (undefined1)((ushort)*(undefined2 *)(iVar5 + 300) >> 8);
    local_2c = CONCAT13((char)((ushort)*(undefined2 *)(iVar5 + 0x130) >> 8),
                        *(undefined3 *)(iVar5 + 0x12e));
    local_28 = (undefined1)*(undefined2 *)(iVar5 + 0x132);
    local_27 = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x132) >> 8);
    local_2f = 8;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 0x3c == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3411);
    local_2e = (char)*(undefined2 *)(iVar5 + 0x134);
    local_2d = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x134) >> 8);
    local_2c = CONCAT13((char)((ushort)*(undefined2 *)(iVar5 + 0x138) >> 8),
                        *(undefined3 *)(iVar5 + 0x136));
    local_28 = (undefined1)*(undefined2 *)(iVar5 + 0x13a);
    local_27 = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x13a) >> 8);
    local_2f = 8;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 0x3c == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3412);
    local_2e = (char)*(undefined2 *)(iVar5 + 0x13c);
    local_2d = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x13c) >> 8);
    local_2c = CONCAT13((char)((ushort)*(undefined2 *)(iVar5 + 0x140) >> 8),
                        *(undefined3 *)(iVar5 + 0x13e));
    local_28 = (undefined1)*(undefined2 *)(iVar5 + 0x142);
    local_27 = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x142) >> 8);
    local_2f = 8;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 0x3c == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3413);
    local_2e = (char)*(undefined2 *)(iVar5 + 0x144);
    local_2d = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x144) >> 8);
    local_2c = CONCAT13((char)((ushort)*(undefined2 *)(iVar5 + 0x148) >> 8),
                        *(undefined3 *)(iVar5 + 0x146));
    local_28 = (undefined1)*(undefined2 *)(iVar5 + 0x14a);
    local_27 = (undefined1)((ushort)*(undefined2 *)(iVar5 + 0x14a) >> 8);
    local_2f = 8;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 10 == 0) {
    local_2e = '\0';
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3402);
    if (*(int *)(iVar5 + 0x198) < 0x65) {
      if (*(int *)(iVar5 + 0x198) < -100) {
        local_2e = '\x04';
      }
    }
    else {
      local_2e = '\x02';
    }
    local_2f = 1;
    local_38 = local_38 & 0xfff8ffff;
    FUN_0800c964(&local_38);
  }
  if ((uint)(byte)pcVar2[2] % 0x14 == 0) {
    local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
    local_38 = CONCAT22(local_38._2_2_,0x3403);
    local_2e = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x28d));
    local_2d = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x28c));
    uVar6 = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x28b));
    local_2c = CONCAT31(local_2c._1_3_,uVar6);
    uVar6 = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x28a));
    local_2c._0_2_ = CONCAT11(uVar6,(undefined1)local_2c);
    uVar6 = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x289));
    local_2c._0_3_ = CONCAT12(uVar6,(undefined2)local_2c);
    uVar6 = FUN_08005cf0(*(undefined1 *)(iVar5 + 0x288));
    local_2c = CONCAT13(uVar6,(undefined3)local_2c);
    local_28 = 0;
    local_38 = local_38 & 0xfff8ffff;
    local_27 = 0;
    local_2f = 8;
    FUN_0800c964(&local_38);
  }
  local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
  local_38 = CONCAT22(local_38._2_2_,0x3401);
  iVar8 = (int)*(short *)(iVar5 + 0x19c) / 10;
  local_2e = (char)iVar8;
  local_2d = (undefined1)((uint)iVar8 >> 8);
  local_28 = 0;
  local_2f = 5;
  local_2c = (uint)CONCAT12((char)((int)(*(ushort *)(iVar5 + 0x1b2) - 0x91b) / 10),
                            CONCAT11((char)(*(uint *)(iVar5 + 0x14c) / 10 >> 8),
                                     (char)(*(uint *)(iVar5 + 0x14c) / 10)));
  local_38 = local_38 & 0xfff8ffff;
  local_27 = 0;
  FUN_0800c964(&local_38);
  bVar9 = (pcVar2[2] & 7U) == 0;
  do {
    if (!bVar9) goto LAB_0800d098;
    bVar9 = *pcVar2 == '\x01';
  } while (!bVar9);
  local_38._2_2_ = (undefined2)((local_38 & 0xe0ffffff | 0xf80000) + 0x4000000 >> 0x10);
  local_38 = CONCAT22(local_38._2_2_,0x3402);
  local_2e = 0;
  if (*(int *)(iVar5 + 0x198) < 0x65) {
    if (*(int *)(iVar5 + 0x198) < -100) {
      local_2e = 4;
    }
  }
  else {
    local_2e = 2;
  }
  local_2d = 0;
  local_38 = local_38 & 0xfff8ffff;
  local_28 = 0;
  local_2c = 0;
  local_27 = 0;
  local_2f = 1;
  FUN_0800c964(&local_38);
  if ((*DAT_0800d5a4 < 0x1555) && (DAT_0800d5a4[1] < 0x1f5)) {
    *pcVar2 = '\x02';
  }
  else {
    *pcVar2 = '\x01';
  }
LAB_0800d098:
  if (0x2f < (byte)pcVar2[2]) {
    pcVar2[2] = '\0';
  }
  return;
}


/* 0800d5a8 FUN_0800d5a8 */

void FUN_0800d5a8(void)

{
  FUN_0800ded8(DAT_0800d5b4,0x8000);
  return;
}


/* 0800d5b8 FUN_0800d5b8 */

void FUN_0800d5b8(void)

{
  FUN_0800dedc(DAT_0800d5c4,0x8000);
  return;
}


/* 0800d5c8 FUN_0800d5c8 */

void FUN_0800d5c8(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800d5f0;
  FUN_0800df68(DAT_0800d5f0,0x10,3,0x8000);
  FUN_0800ded8(uVar1,0x8000);
  return;
}


/* 0800d60c FUN_0800d60c */

void FUN_0800d60c(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  
  for (uVar2 = 0; uVar2 < param_1; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = 0;
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xc80);
  }
  return;
}


/* 0800d628 FUN_0800d628 */

void FUN_0800d628(int param_1)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800d65c;
  FUN_0800df68(DAT_0800d65c,0x10,3,1);
  if (param_1 == 0) {
    FUN_0800ded8(uVar1,1);
    return;
  }
  FUN_0800dedc();
  return;
}


/* 0800d660 FUN_0800d660 */

void FUN_0800d660(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    param_1 = param_1 + param_2 * 0x14;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d680 FUN_0800d680 */

void FUN_0800d680(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    param_1 = param_1 + param_2 * 0x14;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffffdf;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d6a0 FUN_0800d6a0 */

void FUN_0800d6a0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    iVar1 = param_1 + param_2 * 0x14;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0xf << ((param_2 & 0x3f) << 2);
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d6d6 FUN_0800d6d6 */

void FUN_0800d6d6(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  param_1 = param_1 + param_2 * 0x14;
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = param_3[2];
  *(uint *)(param_1 + 0xc) = (uint)*(ushort *)(param_3 + 4);
  *(uint *)(param_1 + 8) =
       param_3[1] | param_3[3] | param_3[5] | *(uint *)(param_1 + 8) & 0xffffc0ff;
  if (*(char *)(param_3 + 6) == '\x01') {
    uVar2 = *(uint *)(param_1 + 8) | 0x40;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8) & 0xffffffbf;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (*(char *)((int)param_3 + 0x19) == '\x01') {
    uVar2 = *(uint *)(param_1 + 8) | 0x80;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8) & 0xffffff7f;
  }
  *(uint *)(param_1 + 8) = uVar2;
  if (*(char *)((int)param_3 + 0x1a) == '\0') {
    uVar2 = *(uint *)(param_1 + 8) & 0xffffffef;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8) | 0x10;
  }
  *(uint *)(param_1 + 8) = uVar2;
  return;
}


/* 0800d74e FUN_0800d74e */

void FUN_0800d74e(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    param_1 = param_1 + param_2 * 0x14;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | param_3;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d76e FUN_0800d76e */

void FUN_0800d76e(int param_1,uint param_2,int param_3)

{
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << ((param_2 & 0x3f) << 2);
  return;
}


/* 0800d77a FUN_0800d77a */

undefined4 FUN_0800d77a(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 << ((param_2 & 0x3f) << 2);
  if (param_3 == 2) {
    uVar2 = *param_1 & uVar2;
    uVar1 = param_1[param_2 * 5 + 2] & 2;
  }
  else if (param_3 == 4) {
    uVar2 = *param_1 & uVar2;
    uVar1 = param_1[param_2 * 5 + 2] & 4;
  }
  else {
    if (param_3 != 8) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar2 = *param_1 & uVar2;
    uVar1 = param_1[param_2 * 5 + 2] & 8;
  }
  if ((uVar2 == 0) || (uVar1 == 0)) {
    return 0;
  }
  return 1;
}


/* 0800d7c4 FUN_0800d7c4 */

void FUN_0800d7c4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    param_1 = param_1 + param_2 * 0x14;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffbfff;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d7e4 FUN_0800d7e4 */

undefined4 FUN_0800d7e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((param_1 == DAT_0800d7f8) && (4 < param_2)) {
    uVar1 = 0;
  }
  return uVar1;
}


/* 0800d7fc FUN_0800d7fc */

void FUN_0800d7fc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    param_1[4] = 0;
    *(undefined1 *)((int)param_1 + 0x1a) = 0;
    param_1[5] = 0;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d816 FUN_0800d816 */

undefined4 FUN_0800d816(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800d7e4();
  if (iVar1 != 0) {
    return *(undefined4 *)(param_1 + param_2 * 0x14 + 0xc);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 0800d830 FUN_0800d830 */

void FUN_0800d830(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((*(uint *)(DAT_0800d874 + 0xe4) & 1) == 0) ||
     ((int)(*(uint *)(DAT_0800d874 + 0xe4) << 0x1e) < 0)) {
    return;
  }
  FUN_08010244();
  do {
    iVar2 = FUN_080100dc(0);
  } while (iVar2 != 0);
  FUN_080099fc();
  do {
    iVar2 = FUN_08005aec();
  } while (iVar2 != 0);
  FUN_0800e734();
  uVar1 = DAT_0800d878;
  FUN_080060f8(DAT_0800d878);
  FUN_080060bc(uVar1);
  return;
}


/* 0800d87c FUN_0800d87c */

void FUN_0800d87c(void)

{
  FUN_0800fb5c(0x600);
  FUN_0800e038(DAT_0800d8a8,1);
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_0800d8ac,0x10,3,0x2000);
  return;
}


/* 0800d8b0 FUN_0800d8b0 */

void FUN_0800d8b0(uint param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar1 = DAT_0800d914;
  *DAT_0800d914 = *DAT_0800d914 & ~param_1;
  puVar5 = puVar1 + 1;
  *puVar5 = *puVar5 & ~param_1;
  puVar3 = puVar1 + 2;
  *puVar3 = *puVar3 & ~param_1;
  puVar4 = puVar1 + 3;
  *puVar4 = *puVar4 & ~param_1;
  if (param_2 == 0) {
    *puVar1 = *puVar1 | param_1;
  }
  else if (param_2 == 1) {
    *puVar5 = *puVar5 | param_1;
  }
  if (param_3 == 0) {
    *puVar3 = *puVar3 | param_1;
    param_1 = *puVar4 & ~param_1;
  }
  else {
    if (param_3 == 1) {
      uVar2 = *puVar3 & ~param_1;
    }
    else {
      if (param_3 != 2) {
        return;
      }
      uVar2 = *puVar3 | param_1;
    }
    *puVar3 = uVar2;
    param_1 = *puVar4 | param_1;
  }
  *puVar4 = param_1;
  return;
}


/* 0800d918 FUN_0800d918 */

void FUN_0800d918(uint param_1)

{
  *DAT_0800d924 = *DAT_0800d924 & ~param_1;
  return;
}


/* 0800d928 FUN_0800d928 */

void FUN_0800d928(uint param_1)

{
  *DAT_0800d934 = *DAT_0800d934 | param_1;
  return;
}


/* 0800d938 FUN_0800d938 */

void FUN_0800d938(undefined4 param_1)

{
  *DAT_0800d940 = param_1;
  return;
}


/* 0800d944 FUN_0800d944 */

undefined4 FUN_0800d944(uint param_1)

{
  if (((*DAT_0800d960 & param_1) == 0) || ((*DAT_0800d964 & param_1) == 0)) {
    return 0;
  }
  return 1;
}


/* 0800d968 FUN_0800d968 */

void FUN_0800d968(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0800d990;
  iVar2 = FUN_0800e02c(DAT_0800d990,0x2000);
  if (iVar2 == 1) {
    FUN_0800ded8(uVar1,0x2000);
    return;
  }
  FUN_0800dedc();
  return;
}


/* 0800d994 thunk_FUN_0800dce0 */

void thunk_FUN_0800dce0(void)

{
  *DAT_0800dcec = 0xaaaa;
  return;
}


/* 0800d998 FUN_0800d998 */

int FUN_0800d998(void)

{
  int iVar1;
  int extraout_r3;
  
  do {
    iVar1 = FUN_0800d9b0();
    if (iVar1 != 1) {
      return iVar1;
    }
  } while (extraout_r3 != 1);
  return 4;
}


/* 0800d9b0 FUN_0800d9b0 */

undefined4 FUN_0800d9b0(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(DAT_0800d9d4 + 0xc) & 1) != 0) {
    return 1;
  }
  if (*(int *)(DAT_0800d9d4 + 0xc) << 0x1b < 0) {
    uVar1 = 3;
  }
  else if (*(int *)(DAT_0800d9d4 + 0xc) << 0x1d < 0) {
    return 2;
  }
  return uVar1;
}


/* 0800d9d8 FUN_0800d9d8 */

int FUN_0800d9d8(void)

{
  int iVar1;
  int extraout_r3;
  
  do {
    iVar1 = FUN_0800d9f0();
    if (iVar1 != 1) {
      return iVar1;
    }
  } while (extraout_r3 != 1);
  return 4;
}


/* 0800d9f0 FUN_0800d9f0 */

undefined4 FUN_0800d9f0(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(uint *)(DAT_0800da14 + 0x4c) & 1) != 0) {
    return 1;
  }
  if (*(int *)(DAT_0800da14 + 0x4c) << 0x1b < 0) {
    uVar1 = 3;
  }
  else if (*(int *)(DAT_0800da14 + 0x4c) << 0x1d < 0) {
    return 2;
  }
  return uVar1;
}


/* 0800da18 FUN_0800da18 */

void FUN_0800da18(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800da30 + (param_1 >> 6));
  *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
  return;
}


/* 0800da34 FUN_0800da34 */

undefined4 FUN_0800da34(uint param_1)

{
  if ((*(uint *)(DAT_0800da50 + (param_1 >> 6)) & 1 << (param_1 & 0x1f)) == 0) {
    return 0;
  }
  return 1;
}


/* 0800da54 FUN_0800da54 */

void FUN_0800da54(void)

{
  int iVar1;
  
  iVar1 = DAT_0800da74;
  *(uint *)(DAT_0800da74 + 0x10) = *(uint *)(DAT_0800da74 + 0x10) | 0x80;
  if (0x200 < *DAT_0800da78) {
    *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 0x80;
  }
  return;
}


/* 0800da7c FUN_0800da7c */

void FUN_0800da7c(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0800dafc;
  if ((*DAT_0800daf8 < 0x201) || (param_1 < DAT_0800db00)) {
    iVar2 = FUN_0800d998(0xf0000);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 2;
      *(uint *)(iVar1 + 0x14) = param_1;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x40;
      FUN_0800d998(0xf0000);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffd;
    }
  }
  else {
    iVar2 = FUN_0800d9d8(0xf0000);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 2;
      *(uint *)(iVar1 + 0x54) = param_1;
      if (*(int *)(iVar1 + 0x1c) << 0x1e < 0) {
        *(uint *)(iVar1 + 0x14) = param_1;
      }
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 0x40;
      FUN_0800d9d8(0xf0000);
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xfffffffd;
      return;
    }
  }
  return;
}


/* 0800db04 FUN_0800db04 */

void FUN_0800db04(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0800db34;
  uVar2 = DAT_0800db30;
  iVar1 = DAT_0800db2c;
  if (*(int *)(DAT_0800db2c + 0x10) << 0x18 < 0) {
    *(undefined4 *)(DAT_0800db2c + 4) = DAT_0800db30;
    *(undefined4 *)(iVar1 + 4) = uVar3;
  }
  if ((0x200 < *DAT_0800db38) && (*(int *)(iVar1 + 0x50) << 0x18 < 0)) {
    *(undefined4 *)(iVar1 + 0x44) = uVar2;
    *(undefined4 *)(iVar1 + 0x44) = uVar3;
  }
  return;
}


/* 0800db3c FUN_0800db3c */

void FUN_0800db3c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0800dba4;
  if ((*DAT_0800dba0 < 0x201) || (param_1 < DAT_0800dba8)) {
    iVar2 = FUN_0800d998(0xf0000);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 1;
      *param_1 = param_2;
      FUN_0800d998(0xf0000);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffe;
    }
  }
  else {
    iVar2 = FUN_0800d9d8(0xf0000);
    if (iVar2 == 0) {
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) | 1;
      *param_1 = param_2;
      FUN_0800d9d8(0xf0000);
      *(uint *)(iVar1 + 0x50) = *(uint *)(iVar1 + 0x50) & 0xfffffffe;
      return;
    }
  }
  return;
}


/* 0800dbac FUN_0800dbac */

void FUN_0800dbac(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0800dbe4;
  iVar1 = DAT_0800dbe0;
  *(uint *)(DAT_0800dbe0 + 0xec) = *(uint *)(DAT_0800dbe0 + 0xec) & 0xffffffbd | 1;
  *(undefined1 *)(iVar1 + 0x2a7) = 0;
  *(undefined1 *)(iVar2 + 1) = 1;
  *(undefined2 *)(iVar1 + 0x2e6) = 500;
  *(undefined2 *)(iVar1 + 0x2ea) = 100;
  *(undefined2 *)(iVar1 + 0x2c6) = 0x10cc;
  return;
}


/* 0800dbe8 FUN_0800dbe8 */

void FUN_0800dbe8(void)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(DAT_0800dc20 + 4);
  if (uVar2 < 60000) {
    uVar2 = uVar2 + 1;
    *(ushort *)(DAT_0800dc20 + 4) = uVar2;
  }
  iVar1 = DAT_0800dc24;
  if (((300 < uVar2) && (*(char *)(DAT_0800dc24 + 0x5d) != 'U')) &&
     (-1 < (int)((uint)*(byte *)(DAT_0800dc24 + 0x10c) << 0x1b))) {
    *(undefined1 *)(DAT_0800dc24 + 0x5d) = 0x55;
    *(undefined1 *)(iVar1 + 0x284) = 0x5f;
  }
  return;
}


/* 0800dc28 FUN_0800dc28 */

void FUN_0800dc28(void)

{
  FUN_0800ded8(DAT_0800dc30,4);
  return;
}


/* 0800dc34 FUN_0800dc34 */

void FUN_0800dc34(void)

{
  FUN_0800dedc(DAT_0800dc3c,4);
  return;
}


/* 0800dc40 FUN_0800dc40 */

void FUN_0800dc40(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800dc64;
  FUN_0800df68(DAT_0800dc64,0x10,3,4);
  FUN_0800ded8(uVar1,4);
  return;
}


/* 0800dc68 FUN_0800dc68 */

void FUN_0800dc68(void)

{
  int iVar1;
  
  FUN_0800fa50(0x900);
  do {
    iVar1 = FUN_0800fa6c(0x900);
  } while (iVar1 != 1);
  FUN_0800dc90(0x30c,6);
  *DAT_0800dcfc = 0xcccc;
  return;
}


/* 0800dc90 FUN_0800dc90 */

undefined4 FUN_0800dc90(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0800dcdc;
  iVar2 = DAT_0800dcd8;
  *DAT_0800dcdc = 0x5555;
  iVar3 = iVar2;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      if ((puVar1[3] & 1) != 0) {
        return 0;
      }
      break;
    }
  } while ((puVar1[3] & 1) != 0);
  puVar1[1] = param_2;
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      if ((puVar1[3] & 2) != 0) {
        return 0;
      }
      break;
    }
  } while ((puVar1[3] & 2) != 0);
  puVar1[2] = param_1 & 0xfff;
  *puVar1 = 0xaaaa;
  return 1;
}


/* 0800dce0 FUN_0800dce0 */

void FUN_0800dce0(void)

{
  *DAT_0800dcec = 0xaaaa;
  return;
}


/* 0800dd00 FUN_0800dd00 */

char FUN_0800dd00(uint param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = '\0';
  if (param_1 < 6) {
    uVar2 = 0;
    goto LAB_0800dd1e;
  }
  param_1 = 5;
  uVar2 = 0;
  do {
    cVar1 = cVar1 + *(char *)(DAT_0800dd24 + uVar2);
    uVar2 = uVar2 + 1 & 0xff;
LAB_0800dd1e:
  } while (uVar2 < param_1);
  return cVar1;
}


/* 0800dd28 FUN_0800dd28 */

void FUN_0800dd28(void)

{
  int iVar1;
  short sVar2;
  
  iVar1 = DAT_0800dda8;
  if (*(ushort *)(DAT_0800dda8 + 0x5a) < 5) {
    sVar2 = FUN_080092f0((int)((uint)*(ushort *)(DAT_0800dda4 + 6) * 10000) /
                         (int)(0x1000 - (uint)*(ushort *)(DAT_0800dda4 + 6)),0);
    *(short *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x5a) * 2 + 0x1b8) = sVar2 + 0xaab;
  }
  sVar2 = FUN_080092f0((int)((uint)*(ushort *)(iVar1 + 0x1d0) * 18000) /
                       (int)(0x4ee8 - (uint)*(ushort *)(iVar1 + 0x1d0)) + -500,1);
  *(short *)(iVar1 + 0x1ce) = sVar2 + 0xaab;
  sVar2 = FUN_080092f0((int)((uint)*(ushort *)(iVar1 + 0x1d4) * 18000) /
                       (int)(0x4ee8 - (uint)*(ushort *)(iVar1 + 0x1d4)) + -500,1);
  *(short *)(iVar1 + 0x1d2) = sVar2 + 0xaab;
  return;
}


/* 0800ddac FUN_0800ddac */

void FUN_0800ddac(void)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(DAT_0800dddc + 8),(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = VectorFloatToUnsigned((fVar1 * DAT_0800dde0 * DAT_0800dde4) / DAT_0800dde8,3);
  *(undefined4 *)(DAT_0800ddec + 0x150) = uVar2;
  return;
}


/* 0800ddf0 FUN_0800ddf0 */

undefined1 FUN_0800ddf0(void)

{
  return *DAT_0800ddf8;
}


/* 0800ddfc FUN_0800ddfc */

bool FUN_0800ddfc(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_0800dea8;
  bVar4 = false;
  *(undefined1 *)(DAT_0800dea8 + 0x2a6) = 0;
  iVar3 = FUN_0800f96c(0x91b);
  if (iVar3 == 0) {
    iVar3 = FUN_0800f96c(0x91d);
    if (iVar3 == 0) {
      iVar3 = FUN_0800f96c(0x91a);
      if (iVar3 == 0) {
        iVar3 = FUN_0800f96c(0x91f);
        if (iVar3 == 0) {
          iVar3 = FUN_0800f96c(0x91c);
          if (iVar3 == 0) {
            uVar2 = 0xff;
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
      *(undefined1 *)(iVar1 + 0x2a5) = uVar2;
    }
    else {
      *(undefined1 *)(iVar1 + 0x2a5) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x2a5) = 0;
    iVar3 = FUN_08006e70(6);
    if (iVar3 == 0x6677) {
      *(undefined1 *)(iVar1 + 0x2a6) = 1;
    }
    else {
      *(undefined1 *)(iVar1 + 0x2a6) = 0;
    }
    bVar4 = iVar3 != 0x6677;
    if ((*(char *)(iVar1 + 0x2a5) == '\0') && (*(char *)(iVar1 + 0x2a6) == '\x01'))
    goto LAB_0800de94;
  }
  *(uint *)(iVar1 + 0x120) = *(uint *)(iVar1 + 0x120) & 0xfffffffe;
LAB_0800de94:
  FUN_08006e9c(6,0);
  FUN_0800f834();
  return bVar4;
}


/* 0800deac FUN_0800deac */

void FUN_0800deac(void)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  FUN_08010244();
  do {
    iVar2 = FUN_080100dc(0);
    if (iVar2 == 0) break;
    bVar3 = bVar3 + 1;
  } while (bVar3 < 6);
  FUN_08007884();
  FUN_08007474();
  puVar1 = DAT_08010180;
  *DAT_08010180 = 0x72;
  puVar1[1] = 0x75;
  puVar1[2] = 0x6e;
  puVar1[3] = 0x49;
  puVar1[4] = 0x6e;
  puVar1[5] = 0x42;
  puVar1[6] = 0x6f;
  puVar1[7] = 0x6f;
  puVar1[8] = 0x74;
  puVar1[9] = 0;
  return;
}


/* 0800ded8 FUN_0800ded8 */

void FUN_0800ded8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


/* 0800dedc FUN_0800dedc */

void FUN_0800dedc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* 0800dee0 FUN_0800dee0 */

void FUN_0800dee0(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  FUN_0800fb5c(0x715);
  uVar1 = DAT_0800df0c;
  FUN_0800df68(DAT_0800df0c,0x1c,3,0xc0);
  FUN_0800dedc(uVar1,0xc0);
  return;
}


/* 0800df10 FUN_0800df10 */

void FUN_0800df10(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_0800df64;
  iVar4 = (param_2 & 3) << 2;
  uVar3 = 0xf << iVar4;
  uVar2 = param_1 << iVar4;
  if (param_2 < 4) {
    *(uint *)(DAT_0800df64 + 8) = *(uint *)(DAT_0800df64 + 8) & ~uVar3;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | uVar2;
    return;
  }
  if (param_2 < 8) {
    *(uint *)(DAT_0800df64 + 0xc) = *(uint *)(DAT_0800df64 + 0xc) & ~uVar3;
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | uVar2;
    return;
  }
  if (param_2 < 0xc) {
    *(uint *)(DAT_0800df64 + 0x10) = *(uint *)(DAT_0800df64 + 0x10) & ~uVar3;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | uVar2;
    return;
  }
  *(uint *)(DAT_0800df64 + 0x14) = *(uint *)(DAT_0800df64 + 0x14) & ~uVar3;
  *(uint *)(iVar1 + 0x14) = *(uint *)(iVar1 + 0x14) | uVar2;
  return;
}


/* 0800df68 FUN_0800df68 */

void FUN_0800df68(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xf;
  if ((int)(param_2 << 0x1b) < 0) {
    if (param_3 == 4) {
      uVar1 = uVar1 | 3;
      param_1[0xf] = param_1[0xf] | param_4;
    }
    else {
      uVar1 = uVar1 | param_3;
    }
  }
  uVar2 = 0;
  do {
    uVar3 = 1 << (uVar2 & 0xff) & param_4;
    if (uVar3 != 0) {
      if (param_2 == 0x28) {
        param_1[5] = uVar3;
      }
      else if (param_2 == 0x48) {
        param_1[4] = uVar3;
      }
      *param_1 = uVar1 << (uVar2 << 2 & 0xff) | *param_1 & ~(0xf << (uVar2 << 2 & 0xff));
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 8);
  uVar2 = 8;
  do {
    uVar3 = 1 << (uVar2 & 0xff) & param_4;
    if (uVar3 != 0) {
      uVar4 = uVar2 * 4 - 0x20;
      if (param_2 == 0x28) {
        param_1[5] = uVar3;
      }
      else if (param_2 == 0x48) {
        param_1[4] = uVar3;
      }
      param_1[1] = uVar1 << (uVar4 & 0xff) | param_1[1] & ~(0xf << (uVar4 & 0xff));
    }
    uVar2 = uVar2 + 1 & 0xffff;
  } while (uVar2 < 0x10);
  return;
}


/* 0800e00e FUN_0800e00e */

bool FUN_0800e00e(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 8) & param_2) != 0;
}


/* 0800e018 FUN_0800e018 */

void FUN_0800e018(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0800e02c();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}


/* 0800e02c FUN_0800e02c */

bool FUN_0800e02c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0xc) & param_2) != 0;
}


/* 0800e038 FUN_0800e038 */

void FUN_0800e038(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_0800e08c;
  if ((int)param_1 < 0) {
    uVar3 = *(uint *)(DAT_0800e08c + 0x1c);
  }
  else {
    uVar3 = *(uint *)(DAT_0800e08c + 4);
  }
  uVar4 = (param_1 & 0xffff) << ((param_1 >> 0x15 & 0xf) << 4);
  if ((param_1 & 0x3fffff) >> 0x14 == 3) {
    uVar3 = uVar3 & 0xf8ffffff;
    *(uint *)(DAT_0800e08c + 4) = *(uint *)(DAT_0800e08c + 4) & 0xf8ffffff;
  }
  else {
    uVar1 = uVar4;
    if ((int)(param_1 << 0xb) < 0) {
      uVar1 = 3 << ((param_1 & 0xfffff) >> 0x10);
    }
    uVar3 = uVar3 & ~uVar1 | 0x7000000;
  }
  if (param_2 != 0) {
    uVar3 = uVar3 | uVar4;
  }
  if ((int)param_1 < 0) {
    *(uint *)(iVar2 + 0x1c) = uVar3;
    return;
  }
  *(uint *)(iVar2 + 4) = uVar3;
  return;
}


/* 0800e090 FUN_0800e090 */

void FUN_0800e090(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = *param_1 | 0x400;
  }
  else {
    uVar1 = *param_1 & 0xfffffbff;
  }
  *param_1 = uVar1;
  return;
}


/* 0800e0a4 FUN_0800e0a4 */

void FUN_0800e0a4(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *param_1 | 0x800;
  }
  else {
    uVar1 = *param_1 & 0xfffff7ff;
  }
  *param_1 = uVar1;
  return;
}


/* 0800e0b8 FUN_0800e0b8 */

void FUN_0800e0b8(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_0800f864(2);
  uVar3 = DAT_0800e1ac;
  uVar2 = uVar1 / DAT_0800e1ac;
  if (0x3b < uVar2) {
    uVar2 = 0x3c;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff80 | uVar2;
  if (DAT_0800e1b0 < param_2) {
    uVar3 = param_2 * 3;
    if (DAT_0800e1b4 < param_2) {
      *(uint *)(param_1 + 0x20) = (uVar2 * 0x78) / 1000 + 1;
      if (param_3 == 0) {
        uVar2 = *(uint *)(param_1 + 0x1c) & 0xffffbfff;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x1c) | 0x4000;
        uVar3 = param_2 * 0x19;
      }
      *(uint *)(param_1 + 0x1c) = uVar2;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar1 / uVar3;
      *(undefined4 *)(param_1 + 0x90) = 1;
      return;
    }
    *(uint *)(param_1 + 0x20) = (uVar2 * 300) / 1000 + 1;
    if (param_3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x1c) & 0xffffbfff;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x1c) | 0x4000;
      uVar3 = param_2 * 0x19;
    }
    uVar1 = uVar1 / uVar3;
    *(uint *)(param_1 + 0x1c) = uVar2;
    if ((uVar1 & 0xfff) == 0) {
      uVar1 = uVar1 | 1;
    }
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x8000;
    uVar3 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar3 = uVar1 / uVar3 + 1;
    if (uVar3 < 0x3c) {
      if (uVar3 < 3) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 0x3c;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    uVar1 = uVar1 / (param_2 << 1);
    if (uVar1 < 4) {
      uVar1 = 4;
    }
    uVar3 = *(uint *)(param_1 + 0x1c);
    uVar1 = uVar1 & 0xfff;
  }
  *(uint *)(param_1 + 0x1c) = uVar3 | uVar1;
  return;
}


/* 0800e1f4 FUN_0800e1f4 */

uint FUN_0800e1f4(int param_1)

{
  return *(uint *)(param_1 + 0x10) & 0xff;
}


/* 0800e1fa FUN_0800e1fa */

void FUN_0800e1fa(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}


/* 0800e200 FUN_0800e200 */

void FUN_0800e200(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 + DAT_0800e22c == 0) {
    uVar2 = 0x415;
  }
  else {
    if (param_1 + DAT_0800e22c != 0x400) {
      return;
    }
    uVar2 = 0x416;
  }
  FUN_0800fb94(uVar2);
  puVar1 = (uint *)(DAT_0800fb90 + (uVar2 >> 6));
  *puVar1 = *puVar1 & ~(1 << (uVar2 & 0x1f));
  return;
}


/* 0800e230 FUN_0800e230 */

void FUN_0800e230(uint *param_1)

{
  *param_1 = *param_1 | 1;
  return;
}


/* 0800e23a FUN_0800e23a */

undefined8 FUN_0800e23a(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_2 == 0x501) {
    return CONCAT44(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  puVar1 = (uint *)(param_1 + (param_2 >> 6));
  uVar2 = 1 << (param_2 & 0x1f);
  *puVar1 = *puVar1 & ~uVar2;
  return CONCAT44(uVar2,puVar1);
}


/* 0800e25c FUN_0800e25c */

bool FUN_0800e25c(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + (param_2 >> 6)) & 1 << (param_2 & 0x1f)) != 0;
}


/* 0800e272 FUN_0800e272 */

void FUN_0800e272(void)

{
  undefined4 uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  FUN_0800dee0();
  FUN_0800fb5c(0x715);
  uVar1 = DAT_0800e1f0;
  FUN_0800e0b8(DAT_0800e1f0,DAT_0800e1ec,0);
  FUN_0800e292(uVar1,0,0,8,unaff_r4,unaff_lr);
  FUN_0800e230(uVar1);
  FUN_0800e090(uVar1,1);
  return;
}


/* 0800e280 FUN_0800e280 */

void FUN_0800e280(int param_1,uint param_2,int param_3)

{
  if (param_3 == -2) {
    param_2 = param_2 & 0xfffffffe;
  }
  else {
    param_2 = param_2 | 1;
  }
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}


/* 0800e292 FUN_0800e292 */

void FUN_0800e292(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  *param_1 = *param_1 & 0xfffffffd | param_2;
  param_1[2] = param_3 | param_4 & 0x3ff;
  return;
}


/* 0800e2a8 FUN_0800e2a8 */

void FUN_0800e2a8(uint *param_1)

{
  *param_1 = *param_1 | 0x100;
  return;
}


/* 0800e2b2 FUN_0800e2b2 */

void FUN_0800e2b2(uint *param_1)

{
  *param_1 = *param_1 | 0x200;
  return;
}


/* 0800e2bc FUN_0800e2bc */

void FUN_0800e2bc(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800e2e8;
  FUN_0800df68(DAT_0800e2e8,0x14,3,0xc0);
  FUN_0800ded8(uVar1,0xc0);
  FUN_0800d60c(0x1e);
  return;
}


/* 0800e2ec FUN_0800e2ec */

undefined4 FUN_0800e2ec(void)

{
  if (*(ushort *)(DAT_0800e2fc + 8) < 0x65) {
    return 0;
  }
  return 1;
}


/* 0800e300 FUN_0800e300 */

undefined4 FUN_0800e300(void)

{
  if (*(ushort *)(DAT_0800e310 + 8) < 100) {
    return 1;
  }
  return 0;
}


/* 0800e314 FUN_0800e314 */

undefined2 FUN_0800e314(void)

{
  return *DAT_0800e31c;
}


/* 0800e320 FUN_0800e320 */

undefined4 FUN_0800e320(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0800e35c;
  if ((((*(int *)(DAT_0800e35c + 0x198) < 0x65) ||
       (-1 < (int)((uint)*(byte *)(DAT_0800e35c + 0x104) << 0x1e))) &&
      ((uVar2 = FUN_0800dd00(3), uVar2 < 2 || (uVar2 = FUN_0800dd00(3), 10 < uVar2)))) &&
     (*(uint *)(iVar1 + 0x160) <= *(int *)(iVar1 + 0x15c) - 500U)) {
    return 0;
  }
  return 1;
}


/* 0800e360 FUN_0800e360 */

undefined4 FUN_0800e360(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_08006e70(9);
  uVar2 = FUN_08006e70(8);
  uVar3 = FUN_08010088();
  if (uVar3 < (iVar1 << 0x10 | uVar2)) {
    return 0;
  }
  return 1;
}


/* 0800e384 FUN_0800e384 */

uint FUN_0800e384(void)

{
  return *DAT_0800e38c & 0xff;
}


/* 0800e390 FUN_0800e390 */

undefined2 FUN_0800e390(void)

{
  return *(undefined2 *)(DAT_0800e398 + 0x10);
}


/* 0800e39c FUN_0800e39c */

undefined4 FUN_0800e39c(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_0800fb5c(0x602);
  uVar2 = DAT_0800e3d8;
  FUN_0800df68(DAT_0800e3d8,0x48,3,2);
  cVar1 = *(char *)(DAT_0800e3dc + 0x6b);
  uVar3 = FUN_0800e00e(uVar2,2);
  if (uVar3 == (cVar1 == '\x01')) {
    return 1;
  }
  return 0;
}


/* 0800e3e0 FUN_0800e3e0 */

bool FUN_0800e3e0(void)

{
  return *DAT_0800e3ec != 0;
}


/* 0800e3f0 FUN_0800e3f0 */

bool FUN_0800e3f0(void)

{
  return *DAT_0800e3fc != 0;
}


/* 0800e400 FUN_0800e400 */

undefined4 FUN_0800e400(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800fb5c(0x80f);
  FUN_0800f4a8();
  iVar1 = FUN_08006e70(10);
  if (iVar1 != 0x3344) {
    uVar2 = FUN_0800fd7c();
    iVar1 = FUN_08006e70(4);
    uVar3 = FUN_08006e70(5);
    if ((uVar3 | iVar1 << 0x10) <= uVar2) {
      return 1;
    }
  }
  return 0;
}


/* 0800e450 FUN_0800e450 */

void FUN_0800e450(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  
  iVar3 = DAT_0800e4e0;
  iVar2 = DAT_0800e4dc;
  if (*(char *)(DAT_0800e4dc + 0x5d) == '\0') {
    puVar6 = (uint *)(DAT_0800e4dc + 0xec);
    uVar5 = *puVar6 | 0x42;
    goto LAB_0800e4c0;
  }
  bVar1 = *(byte *)(DAT_0800e4e0 + 2);
  if (bVar1 < 0x65) {
    *(byte *)(DAT_0800e4e0 + 2) = bVar1 + 1;
    if (2 < (byte)(bVar1 + 1)) goto LAB_0800e47c;
  }
  else {
    *(undefined1 *)(DAT_0800e4e0 + 2) = 100;
LAB_0800e47c:
    if (*(char *)(iVar3 + 1) == '\x01') {
      *(undefined1 *)(iVar3 + 1) = 1;
      return;
    }
    uVar4 = FUN_0800e320();
    *(undefined1 *)(iVar3 + 1) = uVar4;
  }
  if (*(char *)(iVar3 + 1) != '\0') {
    return;
  }
  uVar5 = *(uint *)(iVar2 + 0x104);
  if (*DAT_0800e4e4 == '\0' && (uVar5 & 1) == 0) {
    uVar5 = *DAT_0800e4e8;
    *DAT_0800e4e8 = uVar5 + 1;
    if (uVar5 + 1 < 0x3d) {
      return;
    }
  }
  else {
    if (((uVar5 & 1) != 0) || (*DAT_0800e4e4 == '\0')) {
      *DAT_0800e4e8 = 0;
      return;
    }
    uVar5 = *DAT_0800e4e8;
    *DAT_0800e4e8 = uVar5 + 1;
    if (uVar5 + 1 < 0x12d) {
      return;
    }
  }
  puVar6 = (uint *)(iVar2 + 0xe4);
  uVar5 = *puVar6 & 0xfffffffd | 1;
LAB_0800e4c0:
  *puVar6 = uVar5;
  return;
}


/* 0800e4ec FUN_0800e4ec */

void FUN_0800e4ec(void)

{
  *(undefined2 *)(DAT_0800e4f4 + 0x10) = 0;
  return;
}


/* 0800e4f8 FUN_0800e4f8 */

void FUN_0800e4f8(void)

{
  FUN_0800d938(2);
  FUN_0800d918(2);
  return;
}


/* 0800e50a FUN_0800e50a */

void FUN_0800e50a(void)

{
  FUN_0800d938(2);
  FUN_0800d928(2);
  return;
}


/* 0800e51c FUN_0800e51c */

void FUN_0800e51c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e540;
  *(short *)(DAT_0800e540 + 0x10) = *(short *)(DAT_0800e540 + 0x10) + 1;
  *(short *)(iVar1 + 0x12) = *(short *)(iVar1 + 0x12) + 1;
  FUN_0800e4f8();
  FUN_08010134(0);
  *(int *)(DAT_0800a310 + 0x24) = *(int *)(DAT_0800a310 + 0x24) + 1;
  return;
}


/* 0800e574 FUN_0800e574 */

void FUN_0800e574(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  
  FUN_0800e50a();
  iVar3 = DAT_0800e6dc;
  if (*(byte *)(DAT_0800e6dc + 1) < 0xfa) {
    *(byte *)(DAT_0800e6dc + 1) = *(byte *)(DAT_0800e6dc + 1) + 1;
  }
  iVar4 = DAT_0800e6e0;
  if ((*(int *)(DAT_0800e6e0 + 0x19c) < 0x65) && (iVar8 = FUN_0800e320(), iVar8 == 0)) {
    uVar6 = FUN_0800e6e8();
    *(undefined1 *)(iVar3 + 0xd) = uVar6;
  }
  else {
    *(undefined2 *)(iVar3 + 0xe) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined1 *)(iVar3 + 0xd) = 0;
  }
  bVar10 = *(byte *)(iVar3 + 1);
  if (bVar10 < 5) {
    *(undefined1 *)(iVar3 + 0xd) = 0;
    *(undefined2 *)(iVar3 + 0xe) = 0;
  }
  pcVar5 = DAT_0800e6e4;
  iVar8 = DAT_0800e6dc;
  bVar1 = *(byte *)(iVar3 + 0xd);
  if (*(char *)(iVar4 + 0x6b) != '\x01') {
    cVar2 = *DAT_0800e6e4;
    if (bVar1 == 0 && cVar2 == '\0') {
      return;
    }
    *(undefined1 *)(iVar3 + 2) = 1;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    if ((bVar1 == 2) && ((*(byte *)(iVar4 + 0xe4) & 1) == 0)) {
      if ((*(byte *)(iVar4 + 0x104) & 1) == 0) {
        *(undefined1 *)(iVar8 + 0x31) = 1;
      }
      else {
        *(undefined1 *)(iVar8 + 0x30) = 1;
      }
    }
    if (cVar2 != '\0') {
      if (*(int *)(iVar4 + 0x198) < 200) {
        bVar10 = *(char *)(iVar3 + 3) + 1;
        *(byte *)(iVar3 + 3) = bVar10;
        if (bVar10 < 6) goto LAB_0800e698;
        *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) | 0x42;
        *pcVar5 = '\0';
      }
      *(undefined1 *)(iVar3 + 3) = 0;
    }
LAB_0800e698:
    if (bVar1 == 0x28) {
      if ((*(byte *)(iVar4 + 0x104) & 1) != 0) {
        return;
      }
      if ((*(byte *)(iVar4 + 0xe4) & 1) == 0) {
        *(undefined1 *)(iVar8 + 0x30) = 0;
        *(undefined1 *)(iVar8 + 0x31) = 0;
        *(undefined1 *)(iVar8 + 0x32) = 1;
        *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) | 0x42;
        return;
      }
      return;
    }
    if (bVar1 < 0xb5) {
      return;
    }
    uVar9 = *(uint *)(iVar4 + 0xe4);
    if ((uVar9 & 1) == 0) {
      *(undefined1 *)(iVar8 + 0x33) = 1;
      *(uint *)(iVar4 + 0xe4) = uVar9 & 0xfffffffd | 1;
      return;
    }
    return;
  }
  if (bVar1 == 0) {
    if ((10 < bVar10) && (*(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) | 0x40, bVar10 == 0xb))
    {
      FUN_08009b1c();
    }
    *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) | 1;
LAB_0800e638:
    if (*(char *)(iVar4 + 0x2a7) == '\0') goto LAB_0800e652;
  }
  else {
    if (bVar1 != 1) {
      if (bVar1 == 0xf) {
        *(undefined1 *)(iVar4 + 0x2a7) = 0;
        *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) & 0xffffffbe;
        FUN_08009b1c();
      }
      if (0x15 < *(byte *)(iVar3 + 0xd)) {
        *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) & 0xfffffffd | 1;
      }
      goto LAB_0800e638;
    }
    *(undefined1 *)(iVar4 + 0x2a7) = 1;
  }
  if ((*(int *)(iVar4 + 0x19c) < 100) &&
     (uVar7 = *(short *)(iVar3 + 0x14) + 1, *(ushort *)(iVar3 + 0x14) = uVar7, uVar7 < 0x79)) {
    return;
  }
LAB_0800e652:
  *(undefined2 *)(iVar3 + 0x14) = 0;
  return;
}


/* 0800e6e8 FUN_0800e6e8 */

undefined1 FUN_0800e6e8(void)

{
  char cVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  cVar1 = *(char *)(DAT_0800e728 + 0x6b);
  uVar5 = FUN_0800e00e(DAT_0800e72c,2);
  puVar2 = DAT_0800e730;
  if (uVar5 == (cVar1 == '\x01')) {
    uVar3 = *(short *)(DAT_0800e730 + 0xe) + 1;
    *(ushort *)(DAT_0800e730 + 0xe) = uVar3;
    if (3 < uVar3) {
      *puVar2 = 1;
    }
    if (uVar3 < 0xfb) goto LAB_0800e71c;
    uVar4 = 0xfa;
  }
  else {
    uVar4 = 0;
  }
  *(undefined2 *)(puVar2 + 0xe) = uVar4;
LAB_0800e71c:
  return puVar2[0xe];
}


/* 0800e734 FUN_0800e734 */

void FUN_0800e734(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e768;
  FUN_0800ded8(DAT_0800e768,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e76c,0x4000);
  return;
}


/* 0800e770 FUN_0800e770 */

void FUN_0800e770(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e7a4;
  FUN_0800dedc(DAT_0800e7a4,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e7a8,0x4000);
  return;
}


/* 0800e7ac FUN_0800e7ac */

void FUN_0800e7ac(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e7e0;
  FUN_0800dedc(DAT_0800e7e0,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e7e4,0x4000);
  return;
}


/* 0800e7e8 FUN_0800e7e8 */

void FUN_0800e7e8(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e81c;
  FUN_0800dedc(DAT_0800e81c,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e820,0x4000);
  return;
}


/* 0800e824 FUN_0800e824 */

void FUN_0800e824(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e858;
  FUN_0800dedc(DAT_0800e858,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800ded8(DAT_0800e85c,0x4000);
  return;
}


/* 0800e860 FUN_0800e860 */

void FUN_0800e860(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e894;
  FUN_0800dedc(DAT_0800e894,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800dedc(DAT_0800e898,0x4000);
  return;
}


/* 0800e89c FUN_0800e89c */

void FUN_0800e89c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e8d0;
  FUN_0800dedc(DAT_0800e8d0,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e8d4,0x4000);
  return;
}


/* 0800e8d8 FUN_0800e8d8 */

void FUN_0800e8d8(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e90c;
  FUN_0800dedc(DAT_0800e90c,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e910,0x4000);
  return;
}


/* 0800e914 FUN_0800e914 */

void FUN_0800e914(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e948;
  FUN_0800dedc(DAT_0800e948,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800e94c,0x4000);
  return;
}


/* 0800e950 FUN_0800e950 */

void FUN_0800e950(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e984;
  FUN_0800dedc(DAT_0800e984,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800ded8(DAT_0800e988,0x4000);
  return;
}


/* 0800e98c FUN_0800e98c */

void FUN_0800e98c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e9c0;
  FUN_0800dedc(DAT_0800e9c0,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800dedc(DAT_0800e9c4,0x4000);
  return;
}


/* 0800e9c8 FUN_0800e9c8 */

void FUN_0800e9c8(void)

{
  int iVar1;
  
  iVar1 = DAT_0800e9fc;
  FUN_0800dedc(DAT_0800e9fc,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800ded8(DAT_0800ea00,0x4000);
  return;
}


/* 0800ea04 FUN_0800ea04 */

void FUN_0800ea04(void)

{
  int iVar1;
  
  iVar1 = DAT_0800ea38;
  FUN_0800dedc(DAT_0800ea38,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800dedc(DAT_0800ea3c,0x4000);
  return;
}


/* 0800ea40 FUN_0800ea40 */

void FUN_0800ea40(void)

{
  int iVar1;
  
  iVar1 = DAT_0800ea74;
  FUN_0800dedc(DAT_0800ea74,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800ea78,0x4000);
  return;
}


/* 0800ea7c FUN_0800ea7c */

void FUN_0800ea7c(void)

{
  int iVar1;
  
  iVar1 = DAT_0800eab0;
  FUN_0800dedc(DAT_0800eab0,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800dedc(iVar1,8);
  FUN_0800ded8(DAT_0800eab4,0x4000);
  return;
}


/* 0800eab8 FUN_0800eab8 */

void FUN_0800eab8(void)

{
  int iVar1;
  
  iVar1 = DAT_0800eaec;
  FUN_0800dedc(DAT_0800eaec,0x200);
  FUN_0800dedc(iVar1,iVar1 >> 0x16);
  FUN_0800ded8(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800eaf0,0x4000);
  return;
}


/* 0800eaf4 FUN_0800eaf4 */

void FUN_0800eaf4(void)

{
  int iVar1;
  
  iVar1 = DAT_0800eb28;
  FUN_0800dedc(DAT_0800eb28,0x200);
  FUN_0800ded8(iVar1,iVar1 >> 0x16);
  FUN_0800dedc(iVar1,0x20);
  FUN_0800ded8(iVar1,8);
  FUN_0800ded8(DAT_0800eb2c,0x4000);
  return;
}


/* 0800eb30 FUN_0800eb30 */

void FUN_0800eb30(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  
  iVar2 = DAT_0800edbc;
  pcVar1 = DAT_0800edb8;
  if (*DAT_0800edb8 == '\x01') {
    *(undefined1 *)(DAT_0800edbc + 6) = 1;
  }
  else {
    *(undefined1 *)(DAT_0800edbc + 6) = 0x14;
  }
  iVar4 = DAT_0800edc0;
  bVar6 = *(byte *)(DAT_0800edc0 + 0xfc);
  uVar8 = (uint)bVar6;
  uVar13 = (uint)*(byte *)(DAT_0800edc0 + 0x108);
  uVar9 = (uint)*(byte *)(DAT_0800edc0 + 0x100);
  uVar10 = (uint)*(byte *)(DAT_0800edc0 + 0x10c);
  *(byte *)(iVar2 + 0xb) =
       (byte)((uVar13 & 3) >> 1) |
       *(byte *)(DAT_0800edc0 + 0x108) & 1 |
       (byte)((uVar13 & 0x3f) >> 5) |
       (byte)(((uVar10 & 3) >> 1 |
              (uVar10 & 7) >> 2 |
              ((uVar10 & 0x1f) >> 4 |
              (uVar10 & 1 |
              (uVar10 & 0xf) >> 3 |
              ((uVar9 & 0xf) >> 3 |
              (uVar9 & 3) >> 1 |
              (uVar9 & 7) >> 2 |
              uVar9 & 1 |
              ((uVar8 & 0x3f) >> 5 |
              (uVar8 & 0x1f) >> 4 |
              (uVar13 & 0x7f) >> 6 |
              ((uVar8 & 3) >> 1 |
              uVar8 & 1 | (uint)(byte)(*(byte *)(iVar2 + 0xb) | bVar6 >> 2 | bVar6 >> 3) << 1) << 1)
              << 1) << 1) << 1) << 1) << 1);
  iVar11 = FUN_0800e320();
  iVar3 = DAT_0800edbc;
  if ((iVar11 == 0) || (*(int *)(iVar4 + 0x19c) < 0x65)) {
    if ((*(char *)(DAT_0800edbc + 0x33) != '\0') && ((*(byte *)(iVar4 + 0xe4) & 1) != 0)) {
      uVar5 = 2;
      goto LAB_0800ec2a;
    }
    if (*(char *)(DAT_0800edbc + 0x32) != '\0') {
      uVar5 = 6;
      goto LAB_0800ec2a;
    }
    if (*(char *)(DAT_0800edbc + 0x30) == '\0') {
      if (*(char *)(DAT_0800edbc + 0x31) == '\0') {
        if (*(char *)(iVar2 + 0xb) == '\0') {
          *(undefined1 *)(iVar2 + 4) = 0;
          goto LAB_0800ec30;
        }
        uVar5 = 4;
      }
      else {
        uVar5 = 3;
      }
      goto LAB_0800ec2a;
    }
    *(undefined1 *)(iVar2 + 4) = 1;
  }
  else {
    uVar5 = 5;
LAB_0800ec2a:
    *(undefined1 *)(iVar2 + 4) = uVar5;
  }
LAB_0800ec30:
  iVar4 = DAT_0800f7d4;
  uVar12 = DAT_0800edc8;
  uVar14 = DAT_0800edc4;
  switch(*(undefined1 *)(iVar2 + 4)) {
  default:
    FUN_0800ded8(DAT_0800edc8,0x200);
    FUN_0800ded8(uVar12,0x100);
    FUN_0800ded8(uVar12,0x20);
    FUN_0800ded8(uVar12,8);
    uVar15 = 0x4000;
    uVar12 = uVar14;
    break;
  case 1:
    FUN_0800f2e0();
    return;
  case 2:
    FUN_0800ded8(DAT_0800edc8,8);
    FUN_0800ded8(uVar14,0x4000);
    bVar6 = *(char *)(iVar2 + 5) + 1;
    uVar8 = (uint)bVar6;
    *(byte *)(iVar2 + 5) = bVar6;
    uVar9 = (uint)*(byte *)(iVar2 + 6);
    if (uVar8 == uVar9) {
      FUN_0800dedc(uVar12,0x20);
      FUN_0800ded8(uVar12,0x100);
      uVar15 = 0x200;
    }
    else if (uVar8 == uVar9 * 2) {
      FUN_0800dedc(uVar12,0x100);
      FUN_0800ded8(uVar12,0x200);
      uVar15 = 0x20;
    }
    else {
      if (uVar9 * 3 != uVar8) {
        if (uVar8 < uVar9 << 2) {
          return;
        }
        *(undefined1 *)(iVar2 + 5) = 0;
        *(undefined1 *)(iVar3 + 0x33) = 0;
        goto LAB_0800ed80;
      }
      FUN_0800dedc(uVar12,0x200);
      FUN_0800ded8(uVar12,0x20);
      uVar15 = 0x100;
    }
    break;
  case 3:
    FUN_0800ded8(DAT_0800edc8,8);
    FUN_0800ded8(uVar14,0x4000);
    FUN_0800ded8(uVar12,0x100);
    FUN_0800ded8(uVar12,0x20);
    uVar7 = *(short *)(iVar2 + 0x16) + 1;
    uVar8 = (uint)uVar7;
    *(ushort *)(iVar2 + 0x16) = uVar7;
    if (uVar8 % 0xf == 0) {
      if (uVar8 < 0x3c) {
        uVar14 = 0x200;
        goto LAB_0800ecec;
      }
    }
    else if (uVar8 < 0x3c) {
      return;
    }
    *(undefined2 *)(iVar2 + 0x16) = 0;
    *(undefined1 *)(iVar3 + 0x31) = 0;
LAB_0800ed80:
    *(undefined1 *)(iVar2 + 4) = 0;
    return;
  case 4:
    FUN_0800dedc(DAT_0800edc8,0x200);
    FUN_0800ded8(uVar12,8);
    FUN_0800ded8(uVar14,0x4000);
    uVar8 = *(int *)(iVar2 + 0x24) + 1;
    *(uint *)(iVar2 + 0x24) = uVar8;
    if (*pcVar1 == '\x01') {
      uVar8 = uVar8 * -0x80000000;
    }
    else {
      uVar8 = uVar8 % 0xf;
    }
    if (uVar8 != 0) {
      return;
    }
    FUN_0800e018(uVar12,0x100);
    uVar14 = 0x20;
LAB_0800ecec:
    FUN_0800e018(uVar12,uVar14);
    return;
  case 5:
    FUN_0800cb10();
    return;
  case 6:
    uVar7 = *(short *)(DAT_0800f7d4 + 0x16) + 1;
    *(ushort *)(DAT_0800f7d4 + 0x16) = uVar7;
    iVar3 = DAT_0800f7d8;
    iVar2 = DAT_0800f7d4;
    if ((uVar7 & 7) == 0) {
      if (uVar7 < 0x3c) {
        FUN_0800e018(DAT_0800f7d8,0x200);
        FUN_0800ded8(iVar3,8);
        FUN_0800ded8(DAT_0800f7dc,0x4000);
        FUN_0800ded8(iVar3,iVar3 >> 0x16);
        FUN_0800ded8(iVar3,0x20);
        return;
      }
    }
    else if (uVar7 < 0x3c) {
      return;
    }
    puVar16 = (undefined1 *)(DAT_0800f7d4 + 0x30);
    *(undefined2 *)(iVar4 + 0x16) = 0;
    *(undefined1 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar4 + 4) = 0;
    *puVar16 = 1;
    return;
  }
  FUN_0800ded8(uVar12,uVar15);
  return;
}


/* 0800edcc FUN_0800edcc */

void FUN_0800edcc(void)

{
  short sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar3 = DAT_0800ef30;
  pcVar2 = DAT_0800ef2c;
  uVar9 = *(ushort *)(DAT_0800ef28 + 0x1f8) / 10 & 0xff;
  uVar6 = (uint)*(byte *)(DAT_0800ef28 + 0x100);
  uVar7 = (uint)*(byte *)(DAT_0800ef28 + 0xfc);
  uVar10 = (uVar7 & 0x1f) >> 4;
  uVar11 = (uVar7 & 7) >> 2;
  uVar12 = (uVar7 & 0x3f) >> 5;
  uVar7 = (uVar7 & 0xf) >> 3;
  uVar6 = ((uVar6 & 3) >> 1 | (uVar6 & 0xf) >> 3) << 4 | (uVar6 & 1) << 2 | uVar6 & 4 | uVar10 |
          uVar11 | uVar12 | uVar7;
  *(char **)(DAT_0800ef30 + 0x2c) = DAT_0800ef2c;
  if ((uVar6 == 0) && (10 < uVar9)) {
    *puVar3 = 0;
  }
  *puVar3 = *puVar3;
  if (*pcVar2 == '\0') {
    FUN_0800e734();
LAB_0800ef24:
    puVar3[9] = 0;
    return;
  }
  sVar1 = *(short *)(puVar3 + 0x1a);
  *(ushort *)(puVar3 + 0x1a) = sVar1 + 1U;
  if ((ushort)(sVar1 + 1U) < 5) {
    return;
  }
  *(undefined2 *)(puVar3 + 0x1a) = 0;
  iVar8 = DAT_0800ef28;
  switch(puVar3[9]) {
  case 0:
    FUN_0800e770();
    break;
  case 1:
    FUN_0800e7ac();
    break;
  case 2:
    FUN_0800e7e8();
    break;
  case 3:
    FUN_0800e824();
    cVar4 = puVar3[9] + '\x02';
    goto LAB_0800ee82;
  case 4:
    FUN_0800e860();
    break;
  case 5:
    if (((uVar10 == 0 && uVar11 == 0) && uVar12 == 0) && uVar7 == 0) {
      if ((int)(uVar6 << 0x1d) < 0) {
        cVar4 = '\b';
      }
      else if ((int)(uVar6 << 0x1b) < 0) {
        cVar4 = '\t';
      }
      else {
        cVar4 = '\x06';
      }
    }
    else {
      cVar4 = '\a';
    }
    goto LAB_0800ee82;
  case 6:
    bVar5 = puVar3[10] + 1;
    puVar3[10] = bVar5;
    iVar8 = *(int *)(iVar8 + 0x19c);
    if (uVar9 < 10) {
      if (iVar8 < 0x65) {
        if ((bVar5 & 1) != 0) {
          FUN_0800e734();
          goto LAB_0800eefe;
        }
      }
      else {
LAB_0800eeb8:
        if ((bVar5 & 1) != 0) goto LAB_0800eeec;
      }
    }
    else {
      if (0x18 < uVar9) {
        if (0x31 < uVar9) {
          if (uVar9 < 0x4b) {
            if ((100 < iVar8) && ((bVar5 & 1) != 0)) goto LAB_0800eeec;
          }
          else if ((iVar8 < 0x65) || ((bVar5 & 1) != 0)) {
            FUN_0800e824();
            goto LAB_0800eefe;
          }
          FUN_0800e7e8();
          goto LAB_0800eefe;
        }
        if (100 < iVar8) goto LAB_0800eeb8;
LAB_0800eeec:
        FUN_0800e7ac();
        goto LAB_0800eefe;
      }
      if (100 < iVar8) goto LAB_0800eeb8;
    }
    FUN_0800e770();
LAB_0800eefe:
    puVar3[9] = 5;
    return;
  case 7:
    FUN_0800eab8();
    goto LAB_0800ef18;
  case 8:
    FUN_0800ea40();
    goto LAB_0800ef18;
  case 9:
    FUN_0800e9c8();
LAB_0800ef18:
    puVar3[9] = 5;
    puVar3[10] = 0;
    return;
  default:
    FUN_0800e734();
    puVar3[10] = 0;
    goto LAB_0800ef24;
  }
  cVar4 = puVar3[9] + '\x01';
LAB_0800ee82:
  puVar3[9] = cVar4;
  return;
}


/* 0800ef34 FUN_0800ef34 */

void FUN_0800ef34(void)

{
  short sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar3 = DAT_0800f0a8;
  pcVar2 = DAT_0800f0a4;
  uVar7 = *(ushort *)(DAT_0800f0a0 + 0x1f8) / 10 & 0xff;
  uVar6 = (uint)*(byte *)(DAT_0800f0a0 + 0x100);
  uVar8 = (uint)*(byte *)(DAT_0800f0a0 + 0xfc);
  uVar10 = (uVar8 & 0x1f) >> 4;
  uVar11 = (uVar8 & 7) >> 2;
  uVar12 = (uVar8 & 0x3f) >> 5;
  uVar8 = (uVar8 & 0xf) >> 3;
  uVar6 = ((uVar6 & 3) >> 1 | (uVar6 & 0xf) >> 3) << 4 | (uVar6 & 1) << 2 | uVar6 & 4 | uVar10 |
          uVar11 | uVar12 | uVar8;
  *(char **)(DAT_0800f0a8 + 0x28) = DAT_0800f0a4;
  if ((uVar6 == 0) && (10 < uVar7)) {
    *puVar3 = 0;
  }
  *puVar3 = *puVar3;
  if (*pcVar2 == '\0') {
    FUN_0800e734();
LAB_0800f09a:
    puVar3[7] = 0;
    return;
  }
  sVar1 = *(short *)(puVar3 + 0x18);
  *(ushort *)(puVar3 + 0x18) = sVar1 + 1U;
  if ((ushort)(sVar1 + 1U) < 5) {
    return;
  }
  *(undefined2 *)(puVar3 + 0x18) = 0;
  iVar9 = DAT_0800f0a0;
  switch(puVar3[7]) {
  case 0:
    FUN_0800e89c();
    break;
  case 1:
    FUN_0800e8d8();
    break;
  case 2:
    FUN_0800e914();
    break;
  case 3:
    FUN_0800e950();
    break;
  case 4:
    FUN_0800e98c();
    break;
  case 5:
    if (((uVar10 == 0 && uVar11 == 0) && uVar12 == 0) && uVar8 == 0) {
      if ((int)(uVar6 << 0x1d) < 0) {
        cVar4 = '\b';
      }
      else if ((int)(uVar6 << 0x1b) < 0) {
        cVar4 = '\t';
      }
      else {
        cVar4 = '\x06';
      }
    }
    else {
      cVar4 = '\a';
    }
    goto LAB_0800efe4;
  case 6:
    bVar5 = puVar3[8] + 1;
    puVar3[8] = bVar5;
    iVar9 = *(int *)(iVar9 + 0x19c);
    if (uVar7 < 5) {
      if (iVar9 < 0x65) {
        if ((bVar5 & 1) != 0) {
          FUN_0800e734();
          goto LAB_0800f072;
        }
      }
      else {
LAB_0800f01a:
        if ((bVar5 & 1) != 0) goto LAB_0800f04e;
      }
    }
    else {
      if (9 < uVar7) {
        if (uVar7 < 0x1e) {
          if (100 < iVar9) goto LAB_0800f01a;
        }
        else {
          if (0x31 < uVar7) {
            if (uVar7 < 0x4b) {
              if ((100 < iVar9) && ((bVar5 & 1) == 0)) goto LAB_0800f060;
            }
            else if ((iVar9 < 0x65) || ((bVar5 & 1) != 0)) {
              FUN_0800e98c();
              goto LAB_0800f072;
            }
            FUN_0800e950();
            goto LAB_0800f072;
          }
          if ((iVar9 < 0x65) || ((bVar5 & 1) == 0)) {
LAB_0800f060:
            FUN_0800e914();
            goto LAB_0800f072;
          }
        }
LAB_0800f04e:
        FUN_0800e8d8();
        goto LAB_0800f072;
      }
      if (100 < iVar9) goto LAB_0800f01a;
    }
    FUN_0800e89c();
LAB_0800f072:
    puVar3[7] = 5;
    return;
  case 7:
    FUN_0800eaf4();
    goto LAB_0800f08c;
  case 8:
    FUN_0800ea7c();
    goto LAB_0800f08c;
  case 9:
    FUN_0800ea04();
LAB_0800f08c:
    puVar3[7] = 5;
    puVar3[8] = 0;
    return;
  default:
    FUN_0800e734();
    puVar3[8] = 0;
    goto LAB_0800f09a;
  }
  cVar4 = puVar3[7] + '\x01';
LAB_0800efe4:
  puVar3[7] = cVar4;
  return;
}


/* 0800f0ac FUN_0800f0ac */

void FUN_0800f0ac(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(DAT_0800f0d0 + 0x6a);
  if (cVar1 == '3') {
LAB_0800f0c2:
    *(undefined4 *)(DAT_0800f0d8 + 0x34) = DAT_0800f0d4;
    return;
  }
  if (cVar1 == ')') {
    uVar2 = DAT_0800f0dc;
  }
  else {
    if (cVar1 != '\x1f') goto LAB_0800f0c2;
    uVar2 = DAT_0800f0e0;
  }
  *(undefined4 *)(DAT_0800f0d8 + 0x34) = uVar2;
  return;
}


/* 0800f0e4 FUN_0800f0e4 */

void FUN_0800f0e4(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x602);
  uVar1 = DAT_0800f130;
  FUN_0800df68(DAT_0800f130,0x10,3,0x4000);
  FUN_0800ded8(uVar1,0x4000);
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800f134;
  FUN_0800df68(DAT_0800f134,0x10,3,0x328);
  FUN_0800ded8(uVar1,0x328);
  return;
}


/* 0800f138 FUN_0800f138 */

void FUN_0800f138(void)

{
  int iVar1;
  int iVar2;
  
  FUN_080103a0();
  FUN_08010c34();
  FUN_080093dc();
  FUN_0800dbac();
  iVar1 = DAT_0800f220;
  do {
    iVar2 = FUN_0800e3e0();
    if (iVar2 != 0) {
      FUN_08010cf0();
      *DAT_0800f224 = *DAT_0800f224 + '\x01';
      FUN_0800e574();
      FUN_0800d068();
      (*(code *)*DAT_0800f228)();
      FUN_08010b44();
      thunk_FUN_0800cd4c();
    }
    iVar2 = FUN_0800e3f0();
    if (iVar2 != 0) {
      FUN_0800fbe8();
      FUN_0800e450();
      FUN_0800dbe8();
      FUN_0800f46c();
      FUN_0800af98();
      FUN_08010184();
      FUN_0800d968();
      thunk_FUN_0800dce0();
      FUN_0800a0c8();
      FUN_08007130();
      FUN_080071c8();
      FUN_08008e8c();
      FUN_0800a940();
      FUN_08009f6c();
      FUN_08009fe4();
      FUN_08009d60();
      FUN_08009e70();
      FUN_080080c0();
      FUN_08008a64();
      FUN_08008f2c();
      FUN_08007a4c();
      FUN_08009a44();
      FUN_080095e0();
      FUN_08009aa8();
      FUN_0800a894();
      FUN_080070c8();
      FUN_0800dd28();
      FUN_0800ddac();
      FUN_0800a088();
      FUN_0800a1ac();
      FUN_08009d38();
      FUN_0800cd64();
      FUN_08009b1c();
      FUN_08007444();
    }
    FUN_0800953c();
    FUN_08008e34();
    FUN_0800be64();
    if (*(char *)(iVar1 + 0x2a8) != '\0') {
      FUN_08009e3c();
    }
    FUN_0800f624();
  } while( true );
}


/* 0800f22c FUN_0800f22c */

undefined4 FUN_0800f22c(char *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0800f25c;
  iVar2 = *DAT_0800f258;
  while( true ) {
    if (param_1 < pcVar1) {
      return 0;
    }
    if (*(uint *)(iVar2 + *param_1 * 4) != param_2) break;
    *(uint *)(iVar2 + *param_1 * 4) = ~param_2;
    param_1 = param_1 + -1;
  }
  return 1;
}


/* 0800f260 FUN_0800f260 */

undefined4 FUN_0800f260(char *param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_0800f290;
  iVar2 = *DAT_0800f28c;
  while( true ) {
    if (pcVar1 < param_1) {
      return 0;
    }
    if (*(uint *)(iVar2 + *param_1 * 4) != param_2) break;
    *(uint *)(iVar2 + *param_1 * 4) = ~param_2;
    param_1 = param_1 + 1;
  }
  return 1;
}


/* 0800f294 FUN_0800f294 */

void FUN_0800f294(void)

{
  undefined4 uVar1;
  
  FUN_0800fb5c(0x603);
  uVar1 = DAT_0800f2b8;
  FUN_0800df68(DAT_0800f2b8,0x10,3);
  FUN_0800ded8(uVar1,3);
  return;
}


/* 0800f2e0 FUN_0800f2e0 */

void FUN_0800f2e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar4 = DAT_0800f3a8;
  iVar3 = DAT_0800f3a4;
  iVar1 = DAT_0800f3a0;
  *(char *)(DAT_0800f3a0 + 0xc) = *(char *)(DAT_0800f3a0 + 0xc) + '\x01';
  uVar5 = DAT_0800f3ac;
  uVar6 = (uint)*(byte *)(iVar3 + 0x1fc);
  if (uVar6 < 10) {
    uVar6 = *(int *)(iVar1 + 0x20) + 1;
    *(uint *)(iVar1 + 0x20) = uVar6;
    if (uVar6 % 10 != 0) goto LAB_0800f384;
    FUN_0800e018(uVar4);
LAB_0800f32e:
    FUN_0800ded8(uVar4,0x100);
LAB_0800f336:
    FUN_0800ded8(uVar4,0x20);
  }
  else {
    if (uVar6 - 10 < 0x16) {
      FUN_0800dedc(uVar4);
      goto LAB_0800f32e;
    }
    if (uVar6 - 0x20 < 0x21) {
      FUN_0800ded8(uVar4);
      FUN_0800dedc(uVar4,0x100);
      goto LAB_0800f336;
    }
    if (0x23 < uVar6 - 0x41) goto LAB_0800f384;
    FUN_0800ded8(uVar4);
    FUN_0800ded8(uVar4,0x100);
    FUN_0800dedc(uVar4,0x20);
  }
  FUN_0800ded8(uVar4,8);
  FUN_0800ded8(uVar5,0x4000);
LAB_0800f384:
  iVar2 = DAT_0800f3a0;
  if (0x3b < *(byte *)(iVar1 + 0xc)) {
    *(undefined1 *)(iVar1 + 0xc) = 0;
    *(undefined1 *)(iVar3 + 0x2a7) = 0;
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined1 *)(iVar1 + 4) = 0;
  }
  return;
}


/* 0800f3b0 FUN_0800f3b0 */

void FUN_0800f3b0(uint param_1,int param_2,uint param_3)

{
  uint extraout_r2;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if ((*DAT_0800f440 & 0x7ff) >> 8 == 7) {
    iVar1 = 4;
  }
  else if ((*DAT_0800f440 & 0x7ff) >> 8 == 6) {
    iVar2 = 1;
    iVar1 = 3;
  }
  else {
    if ((*DAT_0800f440 & 0x7ff) >> 8 != 5) {
      if ((*DAT_0800f440 & 0x7ff) >> 8 == 4) {
        iVar2 = 3;
        iVar1 = 1;
        goto LAB_0800f40e;
      }
      if ((*DAT_0800f440 & 0x7ff) >> 8 == 3) {
        iVar2 = 4;
        goto LAB_0800f40e;
      }
      FUN_0800f444(0x500);
      param_3 = extraout_r2;
    }
    iVar2 = 2;
    iVar1 = 2;
  }
LAB_0800f40e:
  *(char *)(param_1 + 0xe000e400) =
       (char)((0xfU >> (4U - iVar1 & 0xff) & param_3 | param_2 << (4U - iVar2 & 0xff)) << 4);
  *(int *)(&DAT_e000e100 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
  return;
}


/* 0800f444 FUN_0800f444 */

void FUN_0800f444(uint param_1)

{
  *DAT_0800f454 = param_1 | DAT_0800f450;
  return;
}


/* 0800f46c FUN_0800f46c */

void FUN_0800f46c(void)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  
  iVar1 = DAT_0800f4a4;
  if (*(char *)(DAT_0800f4a4 + 0x5d) == 'U') {
    uVar2 = 500;
  }
  else {
    uVar2 = 0xfff0;
  }
  *(undefined2 *)(DAT_0800f4a4 + 0x2e6) = uVar2;
  if ((*(byte *)(iVar1 + 0x108) & 1) == 0) {
    uVar3 = *(uint *)(DAT_0800f4a4 + 0xec) | 2;
  }
  else {
    uVar3 = *(uint *)(DAT_0800f4a4 + 0xec) & 0xfffffffd;
  }
  *(uint *)(iVar1 + 0xec) = uVar3;
  return;
}


/* 0800f4a8 FUN_0800f4a8 */

void FUN_0800f4a8(void)

{
  *DAT_0800f4b4 = *DAT_0800f4b4 | 0x100;
  return;
}


/* 0800f4b8 FUN_0800f4b8 */

void FUN_0800f4b8(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = *DAT_0800f4d4 | 4;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar1 = *DAT_0800f4d4 | 8;
  }
  *DAT_0800f4d4 = uVar1;
  return;
}


/* 0800f4d8 FUN_0800f4d8 */

undefined4 FUN_0800f4d8(uint param_1)

{
  if ((*(uint *)(DAT_0800f4e8 + 4) & param_1) == 0) {
    return 0;
  }
  return 1;
}


/* 0800f4ec FUN_0800f4ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800f4ec(uint param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_0800f56c;
  *DAT_0800f56c = *DAT_0800f56c & 0xfffffffc;
  *puVar1 = *puVar1 | param_1;
  puVar1 = DAT_0800f570;
  *DAT_0800f570 = *DAT_0800f570 | 4;
  puVar2 = DAT_0800f574;
  *DAT_0800f574 = _DAT_e000e010;
  puVar2[1] = _DAT_e000e100;
  puVar2[2] = _DAT_e000e104;
  puVar2[3] = _DAT_e000e108;
  _DAT_e000e180 = DAT_0800f57c;
  _DAT_e000e184 = DAT_0800f580;
  _DAT_e000e188 = 0xffffffff;
  if (param_2 == 0) {
    WaitForInterrupt();
  }
  else {
    WaitForEvent();
    WaitForEvent();
  }
  _DAT_e000e010 = *puVar2;
  _DAT_e000e100 = puVar2[1];
  _DAT_e000e104 = puVar2[2];
  _DAT_e000e108 = puVar2[3];
  *puVar1 = *puVar1 & 0xfffffffb;
  return;
}


/* 0800f584 FUN_0800f584 */

void FUN_0800f584(int param_1)

{
  *DAT_0800f598 = *DAT_0800f598 & 0xfffffffb;
  if (param_1 == 0) {
    WaitForInterrupt();
    return;
  }
  WaitForEvent();
  return;
}


/* 0800f59c FUN_0800f59c */

void FUN_0800f59c(int param_1)

{
  uint *puVar1;
  
  *DAT_0800f5c4 = *DAT_0800f5c4 | 4;
  puVar1 = DAT_0800f5c8;
  *DAT_0800f5c8 = *DAT_0800f5c8 | 2;
  *puVar1 = *puVar1 | 4;
  if (param_1 == 0) {
    WaitForInterrupt();
    return;
  }
  WaitForEvent();
  return;
}


/* 0800f5cc FUN_0800f5cc */

void FUN_0800f5cc(void)

{
  *(uint *)(DAT_0800f5d8 + 4) = *(uint *)(DAT_0800f5d8 + 4) | 0x100;
  return;
}


/* 0800f5dc FUN_0800f5dc */

void FUN_0800f5dc(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0800d87c();
  FUN_0800d968();
  iVar1 = FUN_0800e400();
  if ((iVar1 != 0) && (iVar1 = FUN_0800f4d8(1), iVar1 != 0)) {
    thunk_FUN_0800fc8c();
    FUN_0801003c();
    FUN_08008aa4(0xffffffff);
    FUN_0801014c();
    FUN_0800f4b8(0);
    FUN_08006360();
    FUN_0800f5cc();
    FUN_0800f59c(0);
  }
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  iVar1 = FUN_08006e70(10);
  if (iVar1 == 0x3344) {
    iVar1 = FUN_08006e70(1);
    if (iVar1 == 0xabcd) {
      FUN_0800f4a8();
      FUN_0800ff34();
      FUN_08006e9c(10,0);
      uVar2 = FUN_0800fd7c();
      FUN_08006e9c(2,uVar2 & 0xffff);
      FUN_08006e9c(3,uVar2 >> 0x10);
      FUN_0800fdd0();
      FUN_0800fde0(0);
      FUN_0800fdd0();
      return;
    }
  }
  return;
}


/* 0800f624 FUN_0800f624 */

void FUN_0800f624(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_0800d968();
  iVar4 = DAT_0800f770;
  pcVar2 = DAT_0800f76c;
  cVar1 = *DAT_0800f76c;
  if (cVar1 == '\0') {
    FUN_0800f584(0);
    if (pcVar2[1] == '\0') {
      return;
    }
    pcVar2[1] = '\0';
    FUN_0800c1e0(1);
    goto LAB_0800f6e8;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return;
    }
    FUN_0800d830();
    FUN_08006360();
    FUN_0800f5cc();
    FUN_080062a0();
    FUN_0800e4ec();
    FUN_0800d5a8();
    FUN_0800d60c(10);
    FUN_0800fb5c(0x602);
    uVar3 = DAT_0800f774;
    FUN_0800df68(DAT_0800f774,0x48,3,0x1200);
    FUN_0800df68(uVar3,0x28,3,0xc00);
    FUN_0800fb5c(0x603);
    FUN_0800fb5c(0x604);
    FUN_0800c772();
    while ((iVar5 = FUN_0800e314(), iVar5 == 0 && (iVar5 = FUN_0800e390(), iVar5 == 0))) {
      FUN_0800d968();
      FUN_0801014c();
      FUN_0800f59c(0);
    }
    FUN_0800c75c();
    FUN_080062a0();
    FUN_0800e4ec();
    FUN_08010134(0);
    *(uint *)(iVar4 + 0xe4) = *(uint *)(iVar4 + 0xe4) & 0xfffffffe | 2;
    FUN_08005ed8();
    FUN_080093dc();
    goto LAB_0800f760;
  }
  DAT_0800f76c[1] = '\x01';
  if (*(char *)(iVar4 + 0x6b) == '\x01') {
    iVar4 = FUN_0800e384();
    if (iVar4 != 0) goto LAB_0800f6ce;
  }
  else {
    iVar5 = FUN_0800e384();
    if ((iVar5 != 0) && (*(char *)(iVar4 + 0x2a7) == '\0')) {
LAB_0800f6ce:
      iVar4 = FUN_0800e39c();
      if (iVar4 == 0) {
        FUN_0800c1e0(0);
        FUN_0800c772();
        FUN_0801115a();
        FUN_0800f4ec(0);
        FUN_0800c75c();
        FUN_08011144();
        FUN_08005ed8();
LAB_0800f760:
        FUN_0800cf88();
        return;
      }
    }
  }
  FUN_0800c1e0(0);
  FUN_0800c772();
  FUN_0801115a();
  FUN_0800f584(0);
LAB_0800f6e8:
  FUN_0800c75c();
  FUN_08011144();
  return;
}


/* 0800f7e0 FUN_0800f7e0 */

void FUN_0800f7e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_0800f82c;
  uVar2 = *(uint *)(DAT_0800f82c + 4) & DAT_0800f830;
  uVar3 = *(uint *)(DAT_0800f82c + 0x2c) & 0xdfffffff;
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 3:
    uVar2 = uVar2 | param_1 << 0xe;
    break;
  case 5:
  case 7:
    uVar2 = uVar2 | (param_1 & 0xfffffffb) << 0xe | 0x10000000;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    uVar2 = uVar2 | (param_1 & 0xfffffff3) << 0xe;
    uVar3 = uVar3 | 0x20000000;
  }
  *(uint *)(DAT_0800f82c + 4) = uVar2;
  *(uint *)(iVar1 + 0x2c) = uVar3;
  return;
}


/* 0800f834 FUN_0800f834 */

void FUN_0800f834(void)

{
  *(uint *)(DAT_0800f840 + 0x24) = *(uint *)(DAT_0800f840 + 0x24) | 0x1000000;
  return;
}


/* 0800f854 FUN_0800f854 */

void FUN_0800f854(void)

{
  *(uint *)(DAT_0800f860 + 0x20) = *(uint *)(DAT_0800f860 + 0x20) | 0x10000;
  return;
}


/* 0800f864 FUN_0800f864 */

uint FUN_0800f864(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_30 = DAT_0800f94c;
  uStack_2c = DAT_0800f950;
  uStack_28 = DAT_0800f954;
  uStack_24 = DAT_0800f958;
  local_20 = DAT_0800f950;
  uStack_1c = DAT_0800f954;
  local_18 = DAT_0800f950;
  uStack_14 = DAT_0800f954;
  uVar3 = (*(uint *)(DAT_0800f95c + 4) & 0xf) >> 2;
  uVar1 = DAT_0800f960;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar1 = DAT_0800f960 << 1;
    }
    else if (uVar3 == 2) {
      if ((*(uint *)(DAT_0800f95c + 4) & 0x10000) == 0x10000) {
        uVar1 = DAT_0800f960 << 1;
        if ((*(uint *)(DAT_0800f95c + 0x2c) & 0x40000000) != 0) {
          uVar1 = DAT_0800f968;
        }
        if ((*(uint *)(DAT_0800f95c + 4) & 0x20000) == 0x20000) {
          uVar1 = DAT_0800f960;
        }
      }
      else {
        uVar1 = DAT_0800f964;
      }
      uVar3 = (*(uint *)(DAT_0800f95c + 4) & 0x3fffff) >> 0x12;
      if (*(int *)(DAT_0800f95c + 4) << 4 < 0) {
        uVar3 = uVar3 | 0x10;
      }
      if (*(int *)(DAT_0800f95c + 4) << 1 < 0) {
        uVar3 = uVar3 | 0x20;
      }
      if (uVar3 < 0xf) {
        iVar2 = uVar3 + 2;
      }
      else if (uVar3 - 0xf < 0x30) {
        iVar2 = uVar3 + 1;
      }
      else {
        iVar2 = 0x3f;
      }
      uVar1 = uVar1 * iVar2;
    }
  }
  uVar3 = uVar1 >> *(sbyte *)((int)&local_30 + ((*(uint *)(DAT_0800f95c + 4) & 0xff) >> 4));
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = uVar3;
    }
    else if (param_1 == 2) {
      uVar1 = uVar3 >> *(sbyte *)((int)&local_20 + ((*(uint *)(DAT_0800f95c + 4) & 0x7ff) >> 8));
    }
    else {
      uVar1 = 0;
      if (param_1 == 3) {
        uVar1 = uVar3 >> *(sbyte *)((int)&local_18 + ((*(uint *)(DAT_0800f95c + 4) & 0x3fff) >> 0xb)
                                   );
      }
    }
  }
  return uVar1;
}


/* 0800f96c FUN_0800f96c */

undefined4 FUN_0800f96c(uint param_1)

{
  if ((*(uint *)(DAT_0800f988 + (param_1 >> 6)) & 1 << (param_1 & 0x1f)) == 0) {
    return 0;
  }
  return 1;
}


/* 0800f98c FUN_0800f98c */

void FUN_0800f98c(void)

{
  *DAT_0800f998 = *DAT_0800f998 | 0x80000;
  return;
}


/* 0800f99c FUN_0800f99c */

undefined4 FUN_0800f99c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = DAT_0800fa2c;
  iVar2 = 0;
  *DAT_0800fa2c = *DAT_0800fa2c | 0x10000;
  iVar3 = 0xffff;
  do {
    iVar2 = iVar2 + 1;
    if ((*puVar1 & 0x20000) != 0) break;
  } while (iVar2 != 0xffff);
  if (-1 < (int)(*puVar1 << 0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1[1] = puVar1[1];
  puVar1[1] = puVar1[1];
  puVar1[1] = puVar1[1] | 0x400;
  puVar1[1] = puVar1[1] & DAT_0800fa30;
  puVar1[1] = puVar1[1] | 0x50000;
  puVar1[0xb] = puVar1[0xb] & 0xbfffffff;
  *puVar1 = *puVar1 | 0x1000000;
  do {
  } while (-1 < (int)(*puVar1 << 6));
  *puVar1 = *puVar1 | 0x1000000;
  do {
  } while (-1 < (int)(*puVar1 << 6));
  puVar1[1] = puVar1[1] & 0xfffffffc;
  puVar1[1] = puVar1[1] | 2;
  while (-1 < (int)(puVar1[1] << 0x1c)) {
    iVar3 = iVar3 + -1;
  }
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}


/* 0800fa34 FUN_0800fa34 */

void FUN_0800fa34(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800fa4c + (param_1 >> 6));
  *puVar1 = *puVar1 & ~(1 << (param_1 & 0x1f));
  return;
}


/* 0800fa50 FUN_0800fa50 */

void FUN_0800fa50(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800fa68 + (param_1 >> 6));
  *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
  return;
}


/* 0800fa6c FUN_0800fa6c */

bool FUN_0800fa6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  
  iVar3 = DAT_0800fb3c;
  if (param_1 == 0x800) {
    uVar2 = 0x801;
    do {
      iVar3 = FUN_0800f96c(0x801);
      if (iVar3 != 0) break;
    } while (extraout_r3_00 != 0x3fffffe);
  }
  else if (param_1 < 0x801) {
    if (param_1 == 0) {
      do {
        iVar3 = FUN_0800f96c(1);
        if (iVar3 != 0) break;
      } while (extraout_r3_01 != 0x4ff);
      uVar2 = 1;
    }
    else if (param_1 == 0x10) {
      do {
        iVar3 = FUN_0800f96c(0x11);
        if (iVar3 != 0) break;
      } while (extraout_r3 != 0xfffe);
      uVar2 = 0x11;
    }
    else {
      if (param_1 != 0x18) {
        return false;
      }
      do {
        iVar1 = FUN_0800f96c(0x19);
        if (iVar1 != 0) break;
      } while (extraout_r3_04 + 1 != iVar3);
      uVar2 = 0x19;
    }
  }
  else if (param_1 == 0x900) {
    uVar2 = 0x901;
    do {
      iVar1 = FUN_0800f96c(0x901);
      if (iVar1 != 0) break;
    } while (extraout_r3_03 + 1 != iVar3);
  }
  else {
    if (param_1 != 0x3010) {
      return false;
    }
    uVar2 = 0x3011;
    do {
      iVar1 = FUN_0800f96c(0x3011);
      if (iVar1 != 0) break;
    } while (extraout_r3_02 + 1 != iVar3);
  }
  iVar3 = FUN_0800f96c(uVar2);
  return iVar3 != 0;
}


/* 0800fb40 FUN_0800fb40 */

void FUN_0800fb40(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800fb58 + (param_1 >> 6));
  *puVar1 = *puVar1 & ~(1 << (param_1 & 0x1f));
  return;
}


/* 0800fb5c FUN_0800fb5c */

void FUN_0800fb5c(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800fb74 + (param_1 >> 6));
  *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
  return;
}


/* 0800fb94 FUN_0800fb94 */

void FUN_0800fb94(uint param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0800fbac + (param_1 >> 6));
  *puVar1 = *puVar1 | 1 << (param_1 & 0x1f);
  return;
}


/* 0800fbb0 FUN_0800fbb0 */

void FUN_0800fbb0(uint param_1)

{
  *(uint *)(DAT_0800fbc0 + 0x20) = *(uint *)(DAT_0800fbc0 + 0x20) & 0xfffffcff | param_1;
  return;
}


/* 0800fbc4 FUN_0800fbc4 */

void FUN_0800fbc4(uint param_1)

{
  *(uint *)(DAT_0800fbd4 + 4) = *(uint *)(DAT_0800fbd4 + 4) & 0xfffffffc | param_1;
  return;
}


/* 0800fbd8 FUN_0800fbd8 */

uint FUN_0800fbd8(void)

{
  return *(uint *)(DAT_0800fbe4 + 4) & 0xc;
}


/* 0800fbe8 FUN_0800fbe8 */

void FUN_0800fbe8(void)

{
  *DAT_0800fbf0 = 0;
  return;
}


/* 0800fbf4 FUN_0800fbf4 */

void FUN_0800fbf4(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint extraout_r2;
  
  FUN_0800fd5c(param_1,param_2,param_1);
  puVar1 = DAT_0800fc10;
  *DAT_0800fc10 = extraout_r2 >> 0x10;
  puVar1[1] = extraout_r2 & 0xffff;
  *DAT_0800fd78 = *DAT_0800fd78 & 0xffffffef;
  return;
}


/* 0800fc8c FUN_0800fc8c */

void FUN_0800fc8c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800f4a8();
  uVar2 = FUN_0800e360();
  *(uint *)(DAT_0800fd54 + 0x120) = *(uint *)(DAT_0800fd54 + 0x120) & 0xfffffffe | uVar2 & 1;
  iVar3 = FUN_08006e70(1);
  if (iVar3 != 0xabcd) {
    FUN_08006e60();
    FUN_0800fa50(0x800);
    FUN_0800fa6c(0x800);
    FUN_0800fbb0(0x100);
    FUN_0800fb5c(0x80f);
    FUN_0800ff34();
    FUN_0800fdd0();
    FUN_0800fdc0(2);
    FUN_0800fdd0();
    FUN_0800fde0(0);
    FUN_0800fdd0();
    FUN_08006e9c(1,0xabcd);
    FUN_080100b0(DAT_0800fd58);
    FUN_0800fdd0();
  }
  FUN_0800fb5c(0x80f);
  FUN_0800fdc0(2);
  FUN_0800f3b0(0x29,2,0);
  FUN_0800fdb0(2);
  FUN_0800d8b0(0x20000,0);
  FUN_0800d938(0x20000);
  FUN_0800d928(0x20000);
  iVar3 = FUN_08006e70(10);
  if (iVar3 == 0x3344) {
    return;
  }
  iVar3 = FUN_0800fd7c();
  FUN_0800fdd0();
  iVar1 = FUN_08006e70(4);
  uVar2 = FUN_08006e70(5);
  uVar2 = (uVar2 | iVar1 << 0x10) + 0x7fff;
  if (0xfff8 < (uVar2 - iVar3) - 6) {
    uVar2 = iVar3 + 0x7fff;
  }
  FUN_0800fbf4(uVar2);
  FUN_0800fdd0();
  *DAT_0800fc88 = *DAT_0800fc88 + 1;
  FUN_08006e9c(4,uVar2 >> 0x10);
  FUN_08006e9c(5,uVar2 & 0xffff);
  iVar3 = FUN_08010088();
  FUN_080100b0(iVar3 + 1);
  return;
}


/* 0800fd5c FUN_0800fd5c */

void FUN_0800fd5c(void)

{
  *DAT_0800fd68 = *DAT_0800fd68 | 0x10;
  return;
}


/* 0800fd7c FUN_0800fd7c */

uint FUN_0800fd7c(void)

{
  return *DAT_0800fd8c | DAT_0800fd8c[-1] << 0x10;
}


/* 0800fd90 FUN_0800fd90 */

void FUN_0800fd90(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint extraout_r2;
  
  FUN_0800fd5c(param_1,param_2,param_1);
  puVar1 = DAT_0800fdac;
  *DAT_0800fdac = extraout_r2 >> 0x10;
  puVar1[1] = extraout_r2 & 0xffff;
  *DAT_0800fd78 = *DAT_0800fd78 & 0xffffffef;
  return;
}


/* 0800fdb0 FUN_0800fdb0 */

void FUN_0800fdb0(uint param_1)

{
  *DAT_0800fdbc = *DAT_0800fdbc & ~param_1;
  return;
}


/* 0800fdc0 FUN_0800fdc0 */

void FUN_0800fdc0(uint param_1)

{
  *DAT_0800fdcc = *DAT_0800fdcc | param_1;
  return;
}


/* 0800fdd0 FUN_0800fdd0 */

void FUN_0800fdd0(void)

{
  do {
  } while (-1 < *DAT_0800fddc << 0x1a);
  return;
}


/* 0800fde0 FUN_0800fde0 */

void FUN_0800fde0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  uint extraout_r2;
  
  FUN_0800fd5c(param_1,param_2,param_1);
  puVar1 = DAT_0800fe00;
  *DAT_0800fe00 = (extraout_r2 & 0xfffff) >> 0x10;
  puVar1[1] = extraout_r2 & 0xffff;
  *DAT_0800fd78 = *DAT_0800fd78 & 0xffffffef;
  return;
}


/* 0800fe04 FUN_0800fe04 */

void FUN_0800fe04(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 extraout_r2;
  undefined1 extraout_r2_00;
  undefined1 extraout_r2_01;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  uVar3 = FUN_08010088();
  iVar2 = DAT_0800ff28;
  *(undefined4 *)(DAT_0800ff28 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  FUN_08004d9c(uVar3,0,0x3c,0);
  uVar12 = FUN_08004d9c(uVar3,0,0x3c,0);
  FUN_08004d9c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x3c,0);
  uVar12 = FUN_08004d9c(uVar3,0,0xe10,0);
  FUN_08004d9c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0x18,0);
  uVar4 = FUN_08004d9c(uVar3,0,DAT_0800ff2c,0);
  iVar2 = DAT_0800ff28;
  uVar6 = uVar4 / 0x16d;
  uVar10 = uVar6 + 1 >> 2;
  uVar8 = uVar6 + 0x7b2;
  if (((uVar6 + 0x7b1) / 100 != uVar8 / 100) && (uVar8 % 400 != 0)) {
    uVar10 = uVar10 + 1;
  }
  uVar4 = uVar4 % 0x16d;
  uVar10 = uVar8 / 400 + (uVar10 - uVar8 / 100) + 0xf;
  uVar8 = uVar4;
  if (uVar4 < uVar10) {
    uVar8 = uVar4 + 0x16d;
    uVar6 = uVar6 - 1;
  }
  uVar11 = uVar6 + 0x7b2;
  iVar9 = DAT_0800ff28 + 0x10;
  uVar5 = (uVar8 - uVar10) + 1;
  *(undefined4 *)(DAT_0800ff28 + 0x14) = 0x1c;
  if (((uVar6 & 3) == 2) &&
     (((uVar11 % 100 != 0 || (uVar11 % 400 == 0)) &&
      (*(undefined4 *)(iVar2 + 0x14) = 0x1d, uVar4 < uVar10)))) {
    uVar5 = (uVar8 - uVar10) + 2;
  }
  iVar2 = DAT_0800ff30;
  iVar7 = 1;
  uVar4 = *(uint *)(DAT_0800ff28 + 0x10);
  while (uVar4 < uVar5) {
    uVar5 = uVar5 - uVar4;
    iVar1 = iVar7 * 4;
    iVar7 = iVar7 + 1;
    uVar4 = *(uint *)(iVar9 + iVar1);
  }
  *(undefined1 *)(DAT_0800ff30 + 0x28d) = extraout_r2;
  *(undefined1 *)(iVar2 + 0x28c) = extraout_r2_00;
  *(undefined1 *)(iVar2 + 0x28b) = extraout_r2_01;
  *(char *)(iVar2 + 0x28a) = (char)uVar5;
  *(char *)(iVar2 + 0x289) = (char)iVar7;
  *(char *)(iVar2 + 0x288) = (char)uVar11 + '0';
  return;
}


/* 0800ff34 FUN_0800ff34 */

void FUN_0800ff34(void)

{
  uint *puVar1;
  
  puVar1 = DAT_0800ff48;
  *DAT_0800ff48 = *DAT_0800ff48 & 0xfffffff7;
  do {
  } while (-1 < (int)(*puVar1 << 0x1c));
  return;
}


/* 0800ff4c FUN_0800ff4c */

void FUN_0800ff4c(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[1] - 2;
  uVar4 = *param_1 + 2000;
  if (iVar5 < 1) {
    uVar4 = *param_1 + 1999;
    iVar5 = param_1[1] + 10;
  }
  bVar1 = param_1[5];
  lVar2 = (ulonglong)
          ((((uint)((short)iVar5 * 0x16f) / 0xc + uVar4 / 400 +
             ((uVar4 >> 2) - uVar4 / 100) + (uint)param_1[2] + (short)uVar4 * 0x16d + DAT_0800ffd0)
            * 0x18 + (uint)param_1[3]) * 0x3c + (uint)param_1[4]) * 0x3c;
  iVar5 = (int)lVar2;
  FUN_0800fdd0((uint)bVar1,iVar5,(int)((ulonglong)lVar2 >> 0x20));
  FUN_080100b0(iVar5 + (uint)bVar1);
  FUN_0800fdd0();
  iVar5 = FUN_08006e70(10);
  if (iVar5 == 0x3344) {
    return;
  }
  iVar5 = FUN_0800fd7c();
  FUN_0800fdd0();
  iVar3 = FUN_08006e70(4);
  uVar4 = FUN_08006e70(5);
  uVar4 = (uVar4 | iVar3 << 0x10) + 0x7fff;
  if (0xfff8 < (uVar4 - iVar5) - 6) {
    uVar4 = iVar5 + 0x7fff;
  }
  FUN_0800fbf4(uVar4);
  FUN_0800fdd0();
  *DAT_0800fc88 = *DAT_0800fc88 + 1;
  FUN_08006e9c(4,uVar4 >> 0x10);
  FUN_08006e9c(5,uVar4 & 0xffff);
  iVar5 = FUN_08010088();
  FUN_080100b0(iVar5 + 1);
  return;
}


/* 0801003c FUN_0801003c */

void FUN_0801003c(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0800fdd0();
  FUN_0800fde0(0x7fff);
  FUN_0800fdd0();
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800f4a8();
  iVar1 = FUN_08006e70(3);
  uVar2 = FUN_08006e70(2);
  FUN_0800fd90(uVar2 | iVar1 << 0x10);
  FUN_0800fdd0();
  FUN_08006e9c(10,0x3344);
  return;
}


/* 08010088 FUN_08010088 */

uint FUN_08010088(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800f4a8();
  iVar1 = FUN_08006e70(3);
  uVar2 = FUN_08006e70(2);
  return uVar2 | iVar1 << 0x10;
}


/* 080100b0 FUN_080100b0 */

void FUN_080100b0(uint param_1)

{
  FUN_0800fb5c(0x71b);
  FUN_0800fb5c(0x71c);
  FUN_0800f4a8();
  FUN_08006e9c(2,param_1 & 0xffff);
  FUN_08006e9c(3,param_1 >> 0x10);
  return;
}


/* 080100dc FUN_080100dc */

undefined4 FUN_080100dc(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_10;
  undefined2 uStack_e;
  
  uVar2 = 0;
  if ((int)((uint)*(byte *)(DAT_08010114 + 0xe8) << 0x1e) < 0) {
    return 0xffffffff;
  }
  _local_10 = CONCAT22((short)((uint)param_4 >> 0x10),param_1);
  iVar1 = FUN_0800abaa(0,0x83,2,&local_10);
  if (iVar1 != 2) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


/* 08010118 FUN_08010118 */

void FUN_08010118(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = *DAT_08010130 | 0x10;
  }
  else {
    uVar1 = *DAT_08010130 & 0xffffffef;
  }
  *DAT_08010130 = uVar1;
  return;
}


/* 08010134 FUN_08010134 */

void FUN_08010134(int param_1)

{
  *DAT_08010144 = (char)param_1;
  if (param_1 == 0) {
    *DAT_08010148 = 0;
  }
  return;
}


/* 0801014c FUN_0801014c */

void FUN_0801014c(void)

{
  FUN_08006e9c(6,0x6677);
  return;
}


/* 08010184 FUN_08010184 */

void FUN_08010184(void)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = *(byte *)(DAT_080101c8 + 0x1fc);
  if ((int)((uint)*(byte *)(DAT_080101c8 + 0x114) << 0x18) < 0) {
    if (bVar1 < 2) {
LAB_0801019c:
      *(undefined2 *)(DAT_080101c8 + 0x306) = 10;
      return;
    }
    uVar2 = 0x3c;
  }
  else if (bVar1 < 0x29) {
    if (bVar1 < 0xb) {
      if (bVar1 < 2) goto LAB_0801019c;
      uVar2 = 0xb40;
    }
    else {
      uVar2 = 0x4ec0;
    }
  }
  else {
    uVar2 = 0xa8c0;
  }
  *(undefined2 *)(DAT_080101c8 + 0x306) = uVar2;
  return;
}


/* 080101cc FUN_080101cc */

void FUN_080101cc(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = DAT_0801023c;
  uVar6 = *(uint *)(DAT_0801023c + 0x1e0);
  uVar1 = (*(byte *)(DAT_0801023c + 0xfc) & 1) << 6;
  uVar7 = uVar6 & 0xffffffbf | uVar1;
  *(uint *)(DAT_0801023c + 0x1e0) = uVar7;
  iVar4 = DAT_08010240;
  if ((*(ushort *)(iVar3 + 0x154) < 0xcb2) && (-5000 < *(int *)(iVar3 + 0x19c))) {
    sVar2 = *(short *)(DAT_08010240 + 0xe);
    uVar5 = sVar2 + 1;
    *(ushort *)(DAT_08010240 + 0xe) = uVar5;
    if (5 < uVar5) {
      *(short *)(iVar4 + 0xe) = sVar2;
      *(uint *)(iVar3 + 0x1e0) = uVar7 | 0x20;
    }
    *(undefined2 *)(iVar4 + 0xc) = 0;
  }
  else if (500 < *(int *)(iVar3 + 0x19c)) {
    sVar2 = *(short *)(DAT_08010240 + 0xc);
    uVar5 = sVar2 + 1;
    *(ushort *)(DAT_08010240 + 0xc) = uVar5;
    if (5 < uVar5) {
      *(short *)(iVar4 + 0xc) = sVar2;
      *(uint *)(iVar3 + 0x1e0) = uVar6 & 0xffffff9f | uVar1;
    }
    *(undefined2 *)(iVar4 + 0xe) = 0;
    return;
  }
  return;
}


/* 08010244 FUN_08010244 */

void FUN_08010244(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_08010294;
  if ((int)(*(uint *)(DAT_08010294 + 0x1dc) << 0x1e) < 0) {
    *(uint *)(DAT_08010294 + 0x1dc) = *(uint *)(DAT_08010294 + 0x1dc) | 1;
    uVar2 = *(undefined4 *)(iVar1 + 0x27c);
    *(undefined4 *)(iVar1 + 0x27c) = 0;
    *(undefined4 *)(iVar1 + 0x280) = uVar2;
  }
  FUN_080095e0();
  FUN_08009aa8();
  uVar3 = *(uint *)(iVar1 + 0x1dc);
  if ((int)(uVar3 << 0x1c) < 0) {
    *DAT_08010298 = *(undefined4 *)(iVar1 + 0x278);
    *(undefined4 *)(iVar1 + 0x278) = 0;
    *(uint *)(iVar1 + 0x1dc) = uVar3 | 4;
  }
  FUN_080095e0();
  FUN_08009aa8();
  return;
}


/* 0801029c FUN_0801029c */

ushort FUN_0801029c(void)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar2 = (uint)*(ushort *)(DAT_08010330 + 0x1e4);
  if (0xc3a < uVar2) {
    return *(ushort *)(DAT_08010330 + 0xa6);
  }
  uVar3 = *(ushort *)(DAT_08010330 + 0xa4);
  if (uVar2 < 0xba5) {
    uVar4 = *(ushort *)(DAT_08010330 + 0xa2);
    if (uVar2 < 0xaab) {
      uVar3 = *(ushort *)(DAT_08010330 + 0xa0);
      if (0xa46 < uVar2) {
        sVar1 = (short)((int)((uVar2 - 0xa47) * ((uint)uVar4 - (uint)uVar3)) / 100);
        goto LAB_0801030a;
      }
      uVar4 = *(ushort *)(DAT_08010330 + 0x9e);
      if (uVar2 < 0x9e3) {
        return uVar4;
      }
      sVar1 = (short)((int)((uVar2 - 0x9e3) * ((uint)uVar3 - (uint)uVar4)) / 100);
    }
    else {
      sVar1 = (short)((int)((uVar2 - 0xaab) * ((uint)uVar3 - (uint)uVar4)) / 0xfa);
    }
    uVar3 = uVar4 + sVar1;
  }
  else {
    sVar1 = (short)((int)((uVar2 - 0xba5) * ((uint)*(ushort *)(DAT_08010330 + 0xa6) - (uint)uVar3))
                   / 0x96);
LAB_0801030a:
    uVar3 = sVar1 + uVar3;
  }
  return uVar3;
}


/* 08010334 FUN_08010334 */

void FUN_08010334(void)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = DAT_08010384;
  iVar2 = 0;
  *DAT_08010384 = *DAT_08010384 | 0x10000;
  do {
    iVar2 = iVar2 + 1;
    if ((*puVar1 & 0x20000) != 0) break;
  } while (iVar2 != 0xffff);
  if (-1 < (int)(*puVar1 << 0xe)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar1[1] = puVar1[1];
  puVar1[1] = puVar1[1];
  puVar1[1] = puVar1[1] | 0x400;
  puVar1[1] = puVar1[1] & 0xfffffffc;
  puVar1[1] = puVar1[1] | 1;
  do {
  } while (-1 < (int)(puVar1[1] << 0x1d));
  return;
}


/* 08010388 FUN_08010388 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010388(int param_1)

{
  if (param_1 == 4) {
    _DAT_e000e010 = _DAT_e000e010 | 4;
  }
  else {
    _DAT_e000e010 = _DAT_e000e010 & 0xfffffffb;
  }
  return;
}


/* 080103a0 FUN_080103a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080103a0(void)

{
  _DAT_e000e014 = (*DAT_080103d8 >> 2) - 1;
  if (_DAT_e000e014 < 0x1000000) {
    FUN_08005e62(0xffffffff,0xf);
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
    FUN_08005e62(0xffffffff,0);
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* 080103dc FUN_080103dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080103dc(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  iVar10 = 1000;
  iVar9 = 1000;
  FUN_0800fb5c(0x71c);
  FUN_0800fb5c(0x71b);
  FUN_0800f4a8();
  FUN_0800fa50(0x800);
  while (iVar4 = FUN_0800f96c(0x801), iVar4 == 0) {
    if (iVar9 == 0) goto LAB_08010426;
    iVar9 = iVar9 + -1;
  }
  if (iVar9 == 0) {
LAB_08010426:
    uVar5 = 0;
  }
  else {
    iVar9 = 10000;
    FUN_0800fa50(0x10);
    while (iVar4 = FUN_0800f96c(0x11), iVar4 == 0) {
      if (iVar9 == 0) goto LAB_080104a2;
      iVar9 = iVar9 + -1;
    }
    if (iVar9 == 0) {
LAB_080104a2:
      uVar5 = 1;
    }
    else {
      FUN_0800f98c();
      FUN_0800fbb0(0x100);
      FUN_0800fb5c(0x80f);
      FUN_0800ff34();
      FUN_0800fdd0();
      FUN_0800fde0(0);
      FUN_0800fdd0();
      uVar5 = FUN_0800fd7c();
      puVar2 = DAT_08010548;
      *DAT_08010548 = uVar5;
      FUN_08010388(4);
      _DAT_e000e014 = 48000;
      _DAT_e000e018 = 0;
      _DAT_e000e010 = _DAT_e000e010 | 1;
      do {
      } while (-1 < (int)(_DAT_e000e010 << 0xf));
      iVar9 = FUN_08010b0c();
      piVar3 = DAT_0801054c;
      DAT_0801054c[2] = iVar9;
      FUN_0800fbc4(1);
      while (iVar9 = FUN_0800fbd8(), iVar9 != 4) {
        if (iVar10 == 0) goto LAB_080104e2;
        iVar10 = iVar10 + -1;
      }
      if (iVar10 == 0) {
LAB_080104e2:
        uVar5 = 2;
      }
      else {
        uVar5 = FUN_0800fd7c();
        *puVar2 = uVar5;
        _DAT_e000e014 = DAT_08010550;
        _DAT_e000e018 = 0;
        do {
        } while (-1 < (int)(_DAT_e000e010 << 0xf));
        iVar9 = FUN_08010b0c();
        piVar3[1] = iVar9;
        iVar10 = DAT_08010554 * piVar3[2];
        *piVar3 = iVar10;
        if (iVar9 == 0) {
          iVar10 = -1;
        }
        uVar11 = FUN_08004d9c(iVar10,0,iVar9,0);
        lVar1 = (uVar11 & 0xffffffff) * (ulonglong)DAT_08010558;
        uVar12 = FUN_08004d9c((int)lVar1,
                              (int)(uVar11 >> 0x20) * DAT_08010558 + (int)((ulonglong)lVar1 >> 0x20)
                              ,DAT_08010554,0,(int)uVar11);
        uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
        uVar6 = (uint)uVar12;
        uVar8 = uVar7;
        if ((uVar7 == 0 && (DAT_08010554 <= uVar6) <= uVar7) ||
           (uVar8 = DAT_0801055c - uVar6, (uint)(uVar6 <= DAT_0801055c) <= -uVar7)) {
          FUN_0800fbc4(0,uVar8);
          uVar5 = 3;
        }
        else {
          uVar5 = 4;
        }
      }
    }
  }
  return uVar5;
}


/* 08010560 FUN_08010560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010560(void)

{
  _DAT_e000e018 = 0;
  _DAT_e000e014 = DAT_08010590;
  _DAT_e000e010 = _DAT_e000e010 & 0xfffffffe | 2;
  FUN_08010b34(0);
  _DAT_e000e010 = _DAT_e000e010 | 1;
  return;
}


/* 08010594 FUN_08010594 */

undefined4 FUN_08010594(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = DAT_080105d4;
  uVar2 = *DAT_080105d4;
  if (uVar2 <= DAT_080105d8) {
    FUN_0800cfb4(uVar2,8);
    *puVar1 = *puVar1 + 0x20;
    return 0;
  }
  FUN_0800cfb4(uVar2,7);
  iVar3 = FUN_0800cfd0();
  if (iVar3 == *DAT_080105dc) {
    FUN_080105e0();
    return 2;
  }
  FUN_080105e0();
  return 1;
}


/* 080105e0 FUN_080105e0 */

void FUN_080105e0(void)

{
  *DAT_080105f0 = DAT_080105ec;
  FUN_080105f4();
  return;
}


/* 080105f4 FUN_080105f4 */

void FUN_080105f4(void)

{
  FUN_0800fb5c(0x506);
  *(uint *)(DAT_0800cfe8 + 8) = *(uint *)(DAT_0800cfe8 + 8) | 1;
  return;
}


/* 08010608 FUN_08010608 */

void FUN_08010608(void)

{
  do {
    *DAT_08010620 = DAT_0801061c;
  } while( true );
}


/* 08010624 FUN_08010624 */

undefined4 FUN_08010624(int param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  uVar5 = *DAT_08010690;
  if (param_1 == 0) {
    uVar5 = 0xffffffff;
  }
  uVar7 = FUN_08004d9c(uVar5,0,param_1,0,uVar5,0);
  lVar1 = (uVar7 & 0xffffffff) * (ulonglong)DAT_08010694;
  uVar6 = (int)DAT_08010694 >> 1;
  uVar8 = FUN_08004d9c((int)lVar1,
                       (int)(uVar7 >> 0x20) * DAT_08010694 + (int)((ulonglong)lVar1 >> 0x20),uVar6,0
                       ,(int)uVar7);
  uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
  uVar2 = (uint)uVar8;
  uVar4 = uVar2 - uVar6;
  if (uVar3 != 0 || uVar3 < (uVar6 <= uVar2)) {
    uVar6 = DAT_08010698 - uVar2;
    uVar4 = uVar3;
    if (-uVar3 < (uint)(uVar2 <= DAT_08010698)) {
      return 4;
    }
  }
  FUN_0800fbc4(0,uVar4,uVar6);
  return 3;
}


/* 0801069c FUN_0801069c */

undefined4 FUN_0801069c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08010b0c();
  uVar2 = FUN_0800fd7c();
  *DAT_080106b0 = uVar2;
  return uVar1;
}


/* 080106b4 vec01_080106b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vec01_080106b4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0800f5dc();
  iVar2 = FUN_0800f99c();
  if (iVar2 != 1) {
    do {
      *DAT_08010778 = DAT_08010774;
    } while( true );
  }
  iVar2 = FUN_08004968();
  if ((iVar2 == 1) && (iVar2 = FUN_080109c0(), iVar2 == 1)) {
    FUN_080105f4();
    iVar2 = FUN_0800cfb4(DAT_0801077c,0x42ff);
    *DAT_08010780 = iVar2;
    if (*DAT_08010784 == iVar2) {
      iVar2 = 1000;
      FUN_0800fbc4(0);
      while (iVar3 = FUN_0800fbd8(), iVar3 != 0) {
        if (iVar2 == 0) goto switchD_0801072a_caseD_0;
        iVar2 = iVar2 + -1;
      }
      if (iVar2 != 0) {
        FUN_0800fa34(0x18);
        uVar4 = FUN_080103dc();
        switch(uVar4) {
        case 4:
          goto switchD_0801072a_caseD_4;
        }
      }
    }
  }
switchD_0801072a_caseD_0:
  do {
    FUN_08010608();
switchD_0801072a_caseD_4:
    FUN_0800fbc4(0);
    puVar1 = DAT_08010788;
    *DAT_08010788 = 0xaaaaaaaa;
    puVar1[1] = 0x55555555;
    puVar1[2] = 0xcccccccc;
    puVar1[3] = 0x33333333;
    puVar1[4] = 0x99999999;
    puVar1[5] = 0x66666666;
    FUN_08010810();
    iVar2 = FUN_0801078c();
  } while (iVar2 != 1);
  (*DAT_08004960)();
                    /* WARNING: Could not recover jumptable at 0x0800494a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_08004964)();
  return;
}


/* 0801078c FUN_0801078c */

undefined4 FUN_0801078c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = DAT_080107c4;
  iVar2 = DAT_080107c0;
  puVar1 = DAT_080107bc;
  *DAT_080107bc = 0;
  do {
    iVar4 = (**(code **)(iVar2 + *puVar1 * 4))();
    if (iVar4 != *(int *)(iVar3 + *puVar1 * 4)) {
      return 0;
    }
    uVar5 = *puVar1 + 1;
    *puVar1 = uVar5;
  } while (uVar5 < 6);
  return 1;
}


/* 080107c8 FUN_080107c8 */

undefined4 FUN_080107c8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_080107f8;
  if (*DAT_080107f8 == 6) {
    *DAT_080107f8 = 0;
  }
  iVar2 = (**(code **)(DAT_080107fc + *piVar1 * 4))();
  if (iVar2 == *(int *)(DAT_08010800 + *piVar1 * 4)) {
    *piVar1 = *piVar1 + 1;
    return 1;
  }
  return 0;
}


/* 08010810 FUN_08010810 */

void FUN_08010810(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_08010830;
  *DAT_08010830 = DAT_0801082c;
  puVar1[1] = DAT_08010834;
  puVar1[2] = DAT_08010838;
  puVar1[3] = DAT_0801083c;
  puVar1[4] = DAT_08010840;
  puVar1[5] = DAT_08010844;
  return;
}


/* 08010854 FUN_08010854 */

undefined4 FUN_08010854(int param_1)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  iVar2 = DAT_080109ac;
  puVar1 = DAT_080109a0;
  uVar7 = *DAT_080109a0;
  uVar9 = 0;
  if (DAT_080109a4 <= uVar7) {
    uVar9 = 2;
    *DAT_080109a0 = DAT_080109a4 - 0x70;
    goto LAB_08010982;
  }
  iVar4 = 0;
  pcVar8 = DAT_080109a8 + 3;
  for (pcVar3 = DAT_080109a8; pcVar3 <= pcVar8; pcVar3 = pcVar3 + 1) {
    *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(uVar7 + *pcVar3 * 4);
    iVar4 = iVar4 + 1;
    *(undefined4 *)(uVar7 + *pcVar3 * 4) = 0x55555555;
  }
  iVar4 = FUN_0800f260(DAT_080109a8,0x55555555);
  pcVar3 = DAT_080109a8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = FUN_0800f260(DAT_080109a8,0xaaaaaaaa);
      if ((iVar4 == 0) && (iVar4 = FUN_0800f22c(pcVar3 + 3,0x55555555), iVar4 == 0))
      goto LAB_080108ce;
    }
    else {
      if (param_1 == 1) {
LAB_080108ce:
        iVar4 = FUN_0800f22c(pcVar3 + 3,0xaaaaaaaa);
        if (iVar4 != 0) goto LAB_08010980;
      }
      iVar4 = 0;
      uVar7 = *puVar1;
      for (pcVar5 = DAT_080109a8; pcVar6 = DAT_080109a8, pcVar5 <= pcVar8; pcVar5 = pcVar5 + 1) {
        if (*(int *)(uVar7 + *pcVar5 * 4) != 0x55555555) goto LAB_08010980;
        *(undefined4 *)(uVar7 + *pcVar5 * 4) = *(undefined4 *)(iVar2 + iVar4 * 4);
        iVar4 = iVar4 + 1;
      }
      uVar7 = uVar7 + 8;
      iVar4 = 0;
      *puVar1 = uVar7;
      for (; pcVar6 <= pcVar8; pcVar6 = pcVar6 + 1) {
        *(undefined4 *)(iVar2 + iVar4 * 4) = *(undefined4 *)(uVar7 + *pcVar6 * 4);
        iVar4 = iVar4 + 1;
        *(undefined4 *)(uVar7 + *pcVar6 * 4) = 0x55555555;
      }
      iVar4 = FUN_0800f260(DAT_080109a8,0x55555555);
      if (iVar4 == 0) {
        if (param_1 != 0) {
          if (param_1 == 1) goto LAB_0801095e;
LAB_08010966:
          puVar1 = DAT_080109a0;
          iVar4 = 0;
          uVar7 = *DAT_080109a0;
          for (pcVar3 = DAT_080109a8; pcVar3 <= pcVar8; pcVar3 = pcVar3 + 1) {
            if (*(int *)(uVar7 + *pcVar3 * 4) != 0x55555555) goto LAB_08010980;
            *(undefined4 *)(uVar7 + *pcVar3 * 4) = *(undefined4 *)(iVar2 + iVar4 * 4);
            iVar4 = iVar4 + 1;
          }
          *puVar1 = uVar7 + 8;
          goto LAB_08010982;
        }
        iVar4 = FUN_0800f260(DAT_080109a8,0xaaaaaaaa);
        if ((iVar4 == 0) && (iVar4 = FUN_0800f22c(pcVar3 + 3,0x55555555), iVar4 == 0)) {
LAB_0801095e:
          iVar4 = FUN_0800f22c(pcVar3 + 3,0xaaaaaaaa);
          if (iVar4 == 0) goto LAB_08010966;
        }
      }
    }
  }
LAB_08010980:
  uVar9 = 1;
LAB_08010982:
  return uVar9;
}


/* 080109b0 FUN_080109b0 */

void FUN_080109b0(void)

{
  *DAT_080109bc = DAT_080109b8;
  return;
}


/* 080109c0 FUN_080109c0 */

undefined4 FUN_080109c0(void)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  
  piVar2 = DAT_08010b00;
  piVar9 = (int *)&DAT_20000000;
  piVar5 = (int *)&DAT_20000000;
  do {
    *piVar5 = 0x55555555;
    iVar3 = DAT_08010b04;
    piVar5 = piVar5 + 1;
  } while (piVar5 < piVar2);
  piVar5 = (int *)&DAT_20000000;
  piVar6 = DAT_08010b00 + -0x10;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != 0x55555555) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = -0x55555556;
    } while (uVar7 < 8);
    piVar5 = piVar5 + 0x10;
  } while (piVar5 <= piVar6);
  piVar5 = (int *)&DAT_20000000;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != -0x55555556) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = 0x55555555;
      piVar4 = DAT_08010b08;
    } while (uVar7 < 8);
    piVar5 = piVar5 + 0x10;
  } while (piVar5 <= piVar6);
  piVar8 = DAT_08010b00 + -8;
  piVar5 = DAT_08010b08;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != 0x55555555) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = -0x55555556;
    } while (uVar7 < 8);
    piVar5 = piVar5 + 0x10;
  } while (piVar5 <= piVar8);
  piVar5 = piVar4;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != -0x55555556) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = 0x55555555;
    } while (uVar7 < 8);
    piVar5 = piVar5 + 0x10;
  } while (piVar5 <= piVar8);
  piVar5 = piVar6;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != 0x55555555) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = -0x55555556;
    } while (uVar7 < 8);
    piVar5 = piVar5 + -0x10;
  } while ((int *)0x1fffffff < piVar5);
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar6[*pbVar1] != -0x55555556) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar6[*pbVar1] = 0x55555555;
    } while (uVar7 < 8);
    piVar6 = piVar6 + -0x10;
  } while ((int *)0x1fffffff < piVar6);
  piVar5 = piVar8;
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar5[*pbVar1] != 0x55555555) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar5[*pbVar1] = -0x55555556;
    } while (uVar7 < 8);
    piVar5 = piVar5 + -0x10;
  } while (piVar4 <= piVar5);
  do {
    uVar7 = 0;
    do {
      pbVar1 = (byte *)(iVar3 + uVar7);
      if (piVar8[*pbVar1] != -0x55555556) {
        return 0;
      }
      uVar7 = uVar7 + 1;
      piVar8[*pbVar1] = 0x55555555;
    } while (uVar7 < 8);
    piVar8 = piVar8 + -0x10;
  } while (piVar4 <= piVar8);
  do {
    if (*piVar9 != 0x55555555) {
      return 0;
    }
    piVar9 = piVar9 + 1;
  } while (piVar9 < piVar2);
  return 1;
}


/* 08010b0c FUN_08010b0c */

int FUN_08010b0c(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = FUN_0800fd7c();
  puVar1 = DAT_08010b30;
  if (uVar2 < *DAT_08010b30) {
    iVar3 = FUN_0800fd7c();
    return iVar3 + ~*puVar1;
  }
  iVar3 = FUN_0800fd7c();
  return iVar3 - *puVar1;
}


/* 08010b34 FUN_08010b34 */

void FUN_08010b34(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0800fd7c();
  *DAT_08010b40 = uVar1;
  return;
}


/* 08010b44 FUN_08010b44 */

void FUN_08010b44(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*DAT_08010be0 == '\x01') {
    *DAT_08010be0 = '\0';
    FUN_0800cf7c();
    iVar2 = FUN_08004bbc();
    if (iVar2 != 1) {
      FUN_08010bec(0);
    }
    puVar1 = DAT_08010be8;
    *(uint *)(DAT_08010be8 + 2) = *(uint *)(DAT_08010be4 + 0xc) >> 3;
    iVar2 = FUN_08010624();
    if (iVar2 == 3) {
      FUN_08010bec(1);
      FUN_08005ed8();
      FUN_0800fb5c(0x71c);
      FUN_0800fb5c(0x71b);
      FUN_0800f4a8();
      FUN_0800fa50(0x800);
      for (iVar2 = 1000; (iVar3 = FUN_0800f96c(0x801), iVar3 == 0 && (iVar2 != 0));
          iVar2 = iVar2 + -1) {
      }
      FUN_0800cf88();
    }
    else {
      *puVar1 = 0;
    }
    iVar2 = FUN_08010594();
    if (iVar2 == 1) {
      FUN_08010bec(2);
    }
    iVar2 = FUN_08010cb0();
    if (iVar2 != 1) {
      FUN_08010bec(3);
      return;
    }
  }
  return;
}


/* 08010bec FUN_08010bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010bec(int param_1)

{
  ushort uVar1;
  
  if (param_1 == 1) {
    uVar1 = *DAT_08010c28;
    *DAT_08010c28 = uVar1 + 1;
    if ((ushort)(uVar1 + 1) < 0x32) {
      return;
    }
  }
  else {
    *DAT_08010c28 = 0;
  }
  _DAT_e000e010 = _DAT_e000e010 & 0xfffffffd;
  FUN_0800628c();
  FUN_08009598(param_1);
  do {
    *DAT_08010c30 = DAT_08010c2c;
  } while( true );
}


/* 08010c34 FUN_08010c34 */

void FUN_08010c34(void)

{
  *DAT_08010c54 = 0;
  *DAT_08010c58 = 0;
  FUN_080109b0();
  *(undefined4 *)(DAT_08010c5c + 0xc) = 0;
  FUN_08010560();
  FUN_080105e0();
  return;
}


/* 08010c60 FUN_08010c60 */

void FUN_08010c60(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = DAT_08010ca4;
  iVar3 = *DAT_08010ca4;
  *DAT_08010ca4 = iVar3 + 1;
  if (iVar3 + 1 != 0) {
    *piVar1 = 0;
    *DAT_08010ca8 = 1;
    uVar2 = FUN_0801069c();
    *(undefined4 *)(DAT_08010cac + 0xc) = uVar2;
    iVar3 = FUN_08010854(0);
    if ((iVar3 != 0) && (iVar3 != 2)) {
      FUN_08010bec(4);
    }
    iVar3 = FUN_080107c8();
    if (iVar3 != 1) {
      FUN_08010bec(5);
      return;
    }
  }
  return;
}


/* 08010cb0 FUN_08010cb0 */

undefined4 FUN_08010cb0(void)

{
  if ((((*DAT_08010cec == -0x55555556) && (DAT_08010cec[1] == 0x55555555)) &&
      (DAT_08010cec[2] == -0x33333334)) &&
     (((DAT_08010cec[3] == 0x33333333 && (DAT_08010cec[4] == -0x66666667)) &&
      (DAT_08010cec[5] == 0x66666666)))) {
    return 1;
  }
  return 0;
}


/* 08010cf0 FUN_08010cf0 */

void FUN_08010cf0(void)

{
  *DAT_08010cf8 = 0;
  return;
}


/* 08010cfc FUN_08010cfc */

int FUN_08010cfc(byte *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  
  bVar1 = *param_1;
  uVar4 = (short)(ushort)bVar1 * 0x16d + (bVar1 + 3 >> 2);
  uVar5 = uVar4 & 0xffff;
  uVar3 = (ushort)((bVar1 & 3) == 0);
  sVar2 = (short)uVar4;
  switch(param_1[1]) {
  default:
    goto switchD_08010d1e_caseD_0;
  case 1:
    bVar1 = param_1[2];
    goto LAB_08010d38;
  case 2:
    bVar1 = param_1[2];
    uVar5 = uVar5 + 0x1f;
LAB_08010d38:
    uVar3 = (short)uVar5 + (ushort)bVar1;
    goto LAB_08010d3a;
  case 3:
    sVar6 = uVar3 + 0x3b;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 4:
    sVar6 = uVar3 + 0x5a;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 5:
    sVar6 = uVar3 + 0x78;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 6:
    sVar6 = uVar3 + 0x97;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 7:
    sVar6 = uVar3 + 0xb5;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 8:
    sVar6 = uVar3 + 0xd4;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 9:
    sVar6 = uVar3 + 0xf3;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 10:
    sVar6 = uVar3 + 0x111;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 0xb:
    sVar6 = uVar3 + 0x130;
    sVar2 = sVar2 + (ushort)param_1[2];
    break;
  case 0xc:
    sVar6 = uVar3 + 0x14e;
    sVar2 = sVar2 + (ushort)param_1[2];
  }
  uVar3 = sVar2 + sVar6;
LAB_08010d3a:
  uVar5 = (uint)uVar3;
switchD_08010d1e_caseD_0:
  return (uint)param_1[4] + ((uint)param_1[3] + (uVar5 - 1) * 0x18) * 0x3c;
}


/* 08010e5c FUN_08010e5c */

undefined4 FUN_08010e5c(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int local_38 [2];
  char *local_30;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  for (uVar5 = 0; pcVar2 = DAT_08010f20, iVar1 = DAT_08010f1c, uVar5 < param_2;
      uVar5 = uVar5 + 1 & 0xffff) {
    FUN_0800acaa(DAT_08010f1c,*(undefined1 *)(param_1 + uVar5));
  }
  if (*DAT_08010f20 == '\0') {
    uVar6 = 0;
    *DAT_08010f20 = '\x01';
    uVar5 = 300;
    do {
      if (*(short *)(iVar1 + 4) == 0) {
        uVar5 = uVar6;
        break;
      }
      cVar4 = FUN_0800ac78(DAT_08010f1c);
      (pcVar2 + 2)[uVar6] = cVar4;
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 300);
    uVar3 = DAT_08010f24;
    FUN_0800d6a0(DAT_08010f24,3);
    FUN_0800d7fc(local_38);
    local_1e = 1;
    local_38[0] = DAT_08010f28;
    local_1f = 1;
    local_2c = 0;
    local_20 = 0;
    local_38[1] = 0;
    local_24 = 0x3000;
    local_30 = pcVar2 + 2;
    uStack_28 = uVar5;
    FUN_0800d6d6(uVar3,3,local_38);
    FUN_0800d680(uVar3,3);
    FUN_0800d7c4(uVar3,3);
    FUN_0801128c(DAT_08010f28 + -4,0x80);
    FUN_0800d74e(uVar3,3,2);
    FUN_0800d660(uVar3,3);
  }
  return 0;
}


/* 08010fdc FUN_08010fdc */

undefined4 FUN_08010fdc(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int local_38 [2];
  char *local_30;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  for (uVar5 = 0; pcVar2 = DAT_080110a0, iVar1 = DAT_0801109c, uVar5 < param_2;
      uVar5 = uVar5 + 1 & 0xffff) {
    FUN_0800acaa(DAT_0801109c,*(undefined1 *)(param_1 + uVar5));
  }
  if (*DAT_080110a0 == '\0') {
    uVar6 = 0;
    *DAT_080110a0 = '\x01';
    uVar5 = 1000;
    do {
      if (*(short *)(iVar1 + 4) == 0) {
        uVar5 = uVar6;
        break;
      }
      cVar4 = FUN_0800ac78(DAT_0801109c);
      (pcVar2 + 3)[uVar6] = cVar4;
      uVar6 = uVar6 + 1 & 0xffff;
    } while (uVar6 < 1000);
    uVar3 = DAT_080110a4;
    FUN_0800d6a0(DAT_080110a4,6);
    FUN_0800d7fc(local_38);
    local_1e = 1;
    local_38[0] = DAT_080110a8;
    local_1f = 1;
    local_2c = 0;
    local_20 = 0;
    local_38[1] = 0;
    local_24 = 0x3000;
    local_30 = pcVar2 + 3;
    uStack_28 = uVar5;
    FUN_0800d6d6(uVar3,6,local_38);
    FUN_0800d680(uVar3,6);
    FUN_0800d7c4(uVar3,6);
    FUN_0801128c(DAT_080110a8 + -4,0x80);
    FUN_0800d74e(uVar3,6,2);
    FUN_0800d660(uVar3,6);
  }
  return 0;
}


/* 080110ac FUN_080110ac */

void FUN_080110ac(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 int param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  byte local_68 [5];
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e [74];
  
  uVar2 = 0;
  if (0x50 < param_6) {
    param_6 = 0x50;
  }
  local_68[0] = 0x3a;
  local_68[1] = param_2;
  local_68[2] = 3;
  local_68[3] = param_3;
  local_68[4] = (char)(param_6 + 4 >> 8);
  local_63 = (char)(param_6 + 4);
  local_62 = (char)((uint)param_4 >> 8);
  local_60 = (char)(param_6 >> 8);
  local_61 = (char)param_4;
  local_5f = (char)param_6;
  for (uVar1 = 0; uVar1 < param_6; uVar1 = uVar1 + 1 & 0xff) {
    local_5e[uVar1] = *(undefined1 *)(param_5 + uVar1);
  }
  for (uVar1 = 0; uVar1 < param_6 + 9; uVar1 = uVar1 + 1 & 0xff) {
    uVar2 = local_68[uVar1 + 1] + uVar2 & 0xffff;
  }
  uVar1 = uVar1 + 1 & 0xff;
  local_68[uVar1] = (byte)(uVar2 >> 8);
  uVar1 = uVar1 + 1 & 0xff;
  local_68[uVar1] = (byte)uVar2;
  uVar2 = uVar1 + 1 & 0xff;
  local_68[uVar2] = 0xd;
  uVar2 = uVar2 + 1 & 0xff;
  local_68[uVar2] = 10;
  FUN_0800a870(param_1,local_68,uVar2 + 1 & 0xff);
  return;
}


/* 08011144 FUN_08011144 */

void FUN_08011144(void)

{
  FUN_0800d938(0x400);
  FUN_0800d918(0x400);
  return;
}


/* 0801115a FUN_0801115a */

void FUN_0801115a(void)

{
  FUN_0800d938(0x400);
  FUN_0800d928(0x400);
  FUN_0800d60c(1);
  FUN_08010134(1);
  return;
}


/* 0801117c FUN_0801117c */

void FUN_0801117c(void)

{
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_080111cc,0x48,3,0x400);
  FUN_0800fb5c(0x600);
  FUN_0800f3b0(0x28,2,0);
  FUN_0800df10(0,10);
  FUN_0800d938(0x400);
  FUN_0800d8b0(0x400,0,1);
  FUN_0800d918(0x400);
  return;
}


/* 080111d0 FUN_080111d0 */

void FUN_080111d0(void)

{
  FUN_08010134(0);
  FUN_08011144();
  *(int *)(DAT_0800a310 + 0x24) = *(int *)(DAT_0800a310 + 0x24) + 1;
  return;
}


/* 080111e4 FUN_080111e4 */

void FUN_080111e4(void)

{
  int iVar1;
  
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_08011224,0,3,0x3f0d);
  FUN_0800fb5c(0x603);
  iVar1 = DAT_08011228;
  FUN_0800df68(DAT_08011228,0,3,0xe400);
  FUN_0800df68(iVar1,0x48,3,iVar1 >> 0x14);
  return;
}


/* 0801122c FUN_0801122c */

void FUN_0801122c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  
  puVar1 = DAT_0801127c;
  *DAT_0801127c = *(undefined4 *)(DAT_08011278 + 0x40);
  local_40 = *(undefined1 *)puVar1;
  local_3f = *(undefined1 *)((int)puVar1 + 1);
  local_3e = *(undefined1 *)((int)puVar1 + 2);
  local_3d = *(undefined1 *)((int)puVar1 + 3);
  FUN_0800abaa(0,0x91a8,4,&local_40);
  do {
    iVar2 = FUN_0800ac34(0,0x91a8,4,&local_40);
  } while (iVar2 != 0);
  return;
}


/* 08011280 FUN_08011280 */

void FUN_08011280(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffbf | param_2;
  return;
}


/* 0801128c FUN_0801128c */

void FUN_0801128c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffff7f | param_2;
  return;
}


/* 08011298 FUN_08011298 */

void FUN_08011298(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + (param_2 >> 0x16));
  *puVar1 = *puVar1 & ~(1 << ((param_2 & 0x1fffff) >> 0x10));
  return;
}


/* 080112ac FUN_080112ac */

undefined4 FUN_080112ac(int param_1,uint param_2)

{
  if (((*(uint *)(param_1 + (param_2 >> 0x16)) & 1 << ((param_2 & 0x1fffff) >> 0x10)) == 0) ||
     ((*(uint *)(param_1 + ((param_2 & 0xffff) >> 6)) & 1 << (param_2 & 0x1f)) == 0)) {
    return 0;
  }
  return 1;
}


/* 080112dc FUN_080112dc */

void FUN_080112dc(void)

{
  FUN_0800fb5c(0x602);
  FUN_0800df68(DAT_080112fc,0x48,3,2);
  FUN_0800fb5c(0x600);
  FUN_0800f3b0(7,2,0);
  FUN_0800df10(0,1);
  FUN_0800d8b0(2,0,1);
  FUN_0800d938(2);
  return;
}


