#include "test_me.h"

START_TEST(strncpy_1) {
  char str1[100] = "abcdef";
  char str2[] = "         ";
  for (int i = 0; i < 10; i++) {
    str2[i] = '$';
  }
  ck_assert_str_eq(strncpy(str2, str1, 10), s21_strncpy(str2, str1, 10));
}
END_TEST

START_TEST(strncpy_2) {
  char str1[100] = "abcdef";
  char str2[] = "         ";
  for (int i = 0; i < 10; i++) {
    str2[i] = '$';
  }
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_3) {
  char str1[100] = "TESTinG STR_ncpy ";
  char str2[] = "    ";
  ck_assert_str_eq(strncpy(str2, str1, 5), s21_strncpy(str2, str1, 5));
}
END_TEST

START_TEST(strncpy_4) {
  char str1[100] = "a";
  char str2[] = "  ";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_5) {
  char str1[100] = "abcdef\0";
  char str2[] = "    ";
  ck_assert_str_eq(strncpy(str2, str1, 4), s21_strncpy(str2, str1, 4));
}
END_TEST

START_TEST(strncpy_6) {
  char str1[100] = "FSah}B8IT.z~@)_Pb+On/,M>R.=";
  char str2[] = "8}uh-MjZ(f?_D:Wa$SM";
  ck_assert_str_eq(strncpy(str2, str1, 19), s21_strncpy(str2, str1, 19));
}
END_TEST

START_TEST(strncpy_7) {
  char str1[150] =
      "|C*B-PUEQeO)HOX/"
      ":IeX*_boC1g7rR&W]@1RIY%<Xp3PPCLaPvJj]os6!HMKuw5PLG]<Ig{<RDfF4/|T";
  char str2[] =
      "uUGj^rz&V=LAxmM9il14ia;T(yOk4-VHM0L>bsY$n@FC@S9Bg*X-vpEuI1%A<e/e";
  ck_assert_str_eq(strncpy(str2, str1, 64), s21_strncpy(str2, str1, 64));
}
END_TEST

START_TEST(strncpy_8) {
  char str1[100] = "PkUniADR02[00%SaT(52Z(*QD/";
  char str2[] = "9>j0i21<s+4m.i";
  ck_assert_str_eq(strncpy(str2, str1, 14), s21_strncpy(str2, str1, 14));
}
END_TEST

START_TEST(strncpy_9) {
  char str1[150] =
      "SS0GXntSG~YPb6MJbfBTil]19$G{`3:%V@!lUA]v{<stM]9B+c>uLtq^qc5O2KyPBNq*7/"
      "zV-*HZc9mQkCG3=2{uF<Az>Q&pa";
  char str2[] = "E>6#A;{(~j#9,;<-+R,";
  ck_assert_str_eq(strncpy(str2, str1, 19), s21_strncpy(str2, str1, 19));
}
END_TEST

START_TEST(strncpy_10) {
  char str1[150] =
      "H@^mOJiD&4P:wM[Yo-?)O_Ko$-x^0Yww,dFx2CJQrE<(II}dT:9Ok5evk%uJ@_^>{f";
  char str2[] = "`$h5Nr/:bb;4AveB;C!L2.i-6,jFE.}=2_i.;GQZ?QWV>n-e]e],t6Np+$-Sj";
  ck_assert_str_eq(strncpy(str2, str1, 61), s21_strncpy(str2, str1, 61));
}
END_TEST

START_TEST(strncpy_11) {
  char str1[150] =
      "#|RDudyXcL|xa!y:V#qKw*i<EY?.q3qWp(Uks>C$6=@ZEd.Gs<@`lAMu;7Hxn*)UihG-"
      "06iXgI-@r";
  char str2[] = "VGUPhuG;g$bYE#[3Xao1#**$u-ul8QQQoKu&{";
  ck_assert_str_eq(strncpy(str2, str1, 37), s21_strncpy(str2, str1, 37));
}
END_TEST

START_TEST(strncpy_12) {
  char str1[150] =
      "#<Uv-/dO@EEh{cT70hKk9WZ[`-9v)Pb3TTS@jSiI(@-UAz/ydO*)c3cm/"
      "{+qwG>3Dabi?zc#jtP,@6YDc%R%oP.3~a4VE{_@~$+38MA9h@&";
  char str2[] =
      "kF48g4ez.J^]6:!7LOH8BXeknscvJD=EaX6_B#rvoYv{pD.5Nov34B5*FY![if[wVuVmYpX/"
      ".s:cxZRFBg|!H/";
  ck_assert_str_eq(strncpy(str2, str1, 86), s21_strncpy(str2, str1, 86));
}
END_TEST

START_TEST(strncpy_13) {
  char str1[150] = "GaVB";
  char str2[] = "6";
  ck_assert_str_eq(strncpy(str2, str1, 1), s21_strncpy(str2, str1, 1));
}
END_TEST

START_TEST(strncpy_14) {
  char str1[150] =
      "bFCZy9jyKnrk;kb($,>#Fb8*Ytjx_RgKl]Lq6fa@P#INKV1PKaCw)o6{Andp,O";
  char str2[] = "{M3K(8xSXC~rfgG{_Znq%v0K7&ll2BRV62@y";
  ck_assert_str_eq(strncpy(str2, str1, 36), s21_strncpy(str2, str1, 36));
}
END_TEST

START_TEST(strncpy_15) {
  char str1[400] =
      "3-NVw<[|{2,phF@nHtK(whE|k)m5:Iu5B/"
      "l{,lh<TEV8Jpc@A-vTKwgt~~.{MN)+$Zjp}eG[(bsiZiSja6M";
  char str2[30] = "#`cuJ36/d1aw.LNQ";
  ck_assert_str_eq(strncpy(str2, str1, 20), s21_strncpy(str2, str1, 20));
}
END_TEST

START_TEST(strncpy_16) {
  char str1[150] = "]RseIDpXJq)7#L5979u3)I7c]3&vbG1ywH{`7L0e&A";
  char str2[] = "U;|[";
  ck_assert_str_eq(strncpy(str2, str1, 4), s21_strncpy(str2, str1, 4));
}
END_TEST

START_TEST(strncpy_17) {
  char str1[150] =
      "`Z-Jp)8a:I]IUOm2e}Ej5tX1FHxa776@|F=uh7]0#hBF_qpaJd^zN9FV&D|7]3G)5os`Z)C@"
      "Qh/2c+MQ+^5vo2Ro.SR<8n51o3QGxK${@&ikD3j3j0nBN6j*M.z&E";
  char str2[] = "`B*^2V+4~=]@zVywssjznMLVZ&o9%r;+5BRGpBQ=ZO3-33,,6DOdp2,&D97h";
  ck_assert_str_eq(strncpy(str2, str1, 60), s21_strncpy(str2, str1, 60));
}
END_TEST

START_TEST(strncpy_18) {
  char str1[150] =
      ";[@?,sks-jX6QIFS<uiF^pzRZx,rDv/Q[r9e6?x52XcN^,H4`GtF6cuoXh|/"
      "K9}C$}ncFu+(8FA@HdL4-+;Pz2vzXH&(eER]X%4A,]z_A-$8rC3YpxyMYX";
  char str2[] =
      "?>Ju?a]9lp<e:k7Q=$-DspW<0]#aZsPEbxA1#Pr8N6+q^Pf.UE6xR~?hq`pP,ER0Wc&~}?I#"
      "%gi|wdm-y$oNKd=HFtAdU4F+2v%}d@jy2tDvri-";
  ck_assert_str_eq(strncpy(str2, str1, 111), s21_strncpy(str2, str1, 111));
}
END_TEST

START_TEST(strncpy_19) {
  char str1[150] = "beJ+w1hL8+4ekw{ki>5Vj|Z*9qP9:KE[QD*{jZf,%)";
  char str2[] = "}4x1S$";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_20) {
  char str1[150] =
      "u,iX[a8jC0ARU1^z#S[:}]-uYB8O{l{j(75(P$AVi-1k9D(A?3|YF^Pa7E?/"
      "c.<!dkh-<z-K5|VZ)(oK_aAh31qNr]^??ZM6I8/Ja<cN4kMH~_";
  char str2[] = "W#D$Wpf/jWVF1e4SLn4b,{j6hkokL}Eix{xp=de$acUCm+T>jc+Y8c2P^}4-";
  ck_assert_str_eq(strncpy(str2, str1, 60), s21_strncpy(str2, str1, 60));
}
END_TEST

START_TEST(strncpy_21) {
  char str1[150] = "`C;x`J!m#o4^m&U!iE&=]m^b8fwk9T{<a#";
  char str2[] = ";9/F?+gPkB(;*kd~J";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_22) {
  char str1[150] =
      "TTGyaL-zcNcxu!jw^P{x0@BbsI9-kj`T++AO-C,o2sts$n,ja[sFf&Hi?EBUsv%?V$j7MB_"
      "f%)";
  char str2[] =
      "_H5?asdKfGGnasdasdaq<J>daasdasdasdsdasdasO)fG>mIe^rw[UX#/"
      "*`IHfsdasdasdsoNTN77DsddasdasdadsadasH&xs[]Nw(<l";
  ck_assert_str_eq(strncpy(str2, str1, 74), s21_strncpy(str2, str1, 74));
}
END_TEST

START_TEST(strncpy_23) {
  char str1[150] =
      "-*C6KAy<gZAj:3(uXvNfRt2z=:J7>u`susYX6C!CFZ5/"
      "Y)xg=$-lGYY*d|IfJBkp!QB&#uon1.Bjh;##3o^$jby/>wEuK";
  char str2[] =
      "s(8Xb2<5mX/owyl%<LlnXmF`.@#4r{/"
      "sxtH>o`DybB2p|c>}b_o5[m5Nh.0aj?-?4`Dp1l{s&=Ivc6{7:m([3.C:6";
  ck_assert_str_eq(strncpy(str2, str1, 89), s21_strncpy(str2, str1, 89));
}
END_TEST

START_TEST(strncpy_24) {
  char str1[150] =
      "nmxZZckb_C:_~eiSg$&=i,1;Yk&t98#JdeyFK$_n)lB8#Rday(Gr+$$lWFL.nV#1.!Wxp,q|"
      "3!.@k^-HBi}5OpKt8p2;n^,(vK|i!]s(rCr)Xa6Nlj(qyQ)#`OIb0PpzFB]1?omIqlq:"
      "56l35";
  char str2[] =
      "`%35yRYlW*ts)dQcG~id2WXJ|oqO+~8[j7w[|JogrL)4!)KQ1/"
      "7|Za$NCAs$Lm;tTv$z]OA=Z#*lMNO+.EL?L.8xnVQd8lb*,iYR2>=[Y";
  ck_assert_str_eq(strncpy(str2, str1, 105), s21_strncpy(str2, str1, 105));
}
END_TEST

START_TEST(strncpy_25) {
  char str1[150] =
      "M929pA0TO6&S^ldd!GyU^2}CrCdy#o*%XsJR!cyz=SXp_a2jC*E(8|71HIrUW.Symih;"
      "WILALTLc=!:+*F[,l(S1AM1,y7Msh@#gU7I`3:pW1~m},=^AH1$2O]]>=@<y#-M7.X";
  char str2[] =
      "a0/"
      "F7h!WACXX_vg*$Jxjw@I~|7U?}=>~Q.YVLr34frLZ;}9:#Ph#]_W$^6,X%7ZRjB[UFOJjq";
  ck_assert_str_eq(strncpy(str2, str1, 73), s21_strncpy(str2, str1, 73));
}
END_TEST

START_TEST(strncpy_26) {
  char str1[150] = "F:7QebK#6`ABO_W6=ry~rC#qSJD^G=MPqa@R!U";
  char str2[] = "t__L582NMu$";
  ck_assert_str_eq(strncpy(str2, str1, 11), s21_strncpy(str2, str1, 11));
}
END_TEST

START_TEST(strncpy_27) {
  char str1[150] =
      "u>V4Cwx<?SY!]+<)|Kt0OLdCeZ#0e8<#[ACU1;Sq>Y!Sx*Z(gy:hLG>,r5}sn+:y>"
      "Y85tet6z";
  char str2[] = "2d/[=5AhU8/kufRv%";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_28) {
  char str1[150] = "`c`mV_SjM_r/hzGs:NKNZ$Bo.60~E,KQ!8hB;dV}C$6";
  char str2[] = "xzxt(w}nW+T:vSdijm:,|wZ1-+";
  ck_assert_str_eq(strncpy(str2, str1, 26), s21_strncpy(str2, str1, 26));
}
END_TEST

START_TEST(strncpy_29) {
  char str1[150] = "3QjQTvRih@.I}t5<=*coXSFR-Ul4fE5pS@zB7*IR;Pg";
  char str2[] = "=Vo+Q+vJL,h~d%``p:*.VmYPH{G@|-d=+*";
  ck_assert_str_eq(strncpy(str2, str1, 34), s21_strncpy(str2, str1, 34));
}
END_TEST

START_TEST(strncpy_30) {
  char str1[150] =
      "Ty{n{f-_bE8(&oc,C.Vnr,)ZM4M3!0{&E&Jv3SyPaZSeKSP}2paGqBkEq^{FD";
  char str2[] = "N6xVHCeam00_PUBp!`zl$,Mnt!l9PGf_t2J$N:%*<zbXWri,a:%#UT&r;";
  ck_assert_str_eq(strncpy(str2, str1, 57), s21_strncpy(str2, str1, 57));
}
END_TEST

START_TEST(strncpy_31) {
  char str1[150] = "x#D9!#KfWcvE4m1I@uK(G|U`~e|";
  char str2[] = "SK";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_32) {
  char str1[150] =
      "_)L78grp6m(*)Ne6UsW5[vc-Lt)1)H~}?,-7W<hGML@~[3<9ZB-fgywGX1d,T>`1c!8U(d(";
  char str2[] = "!%ZNrcHXJ!t:Rw";
  ck_assert_str_eq(strncpy(str2, str1, 14), s21_strncpy(str2, str1, 14));
}
END_TEST

START_TEST(strncpy_33) {
  char str1[150] =
      "u=x>]*/DVX<Av#Htf4Jj0r151NfVa|j*$LRe9XX>ef;K$34nMMM|/gnTp%lp1L1xO%/"
      "iJS,vZq(|;5y4X{Ig?JYXaw6ki,,wr%<45s,";
  char str2[] =
      "|Za%A(@evOF{v[-JB)hp[1aP4$Cy=>|:j,BCa^ChL[MKHbhB_1?;*b+zrMZ7px";
  ck_assert_str_eq(strncpy(str2, str1, 62), s21_strncpy(str2, str1, 62));
}
END_TEST

START_TEST(strncpy_34) {
  char str1[150] =
      "w?13{)*d04n)lE[M@wz1id3HoR8>%Jy_XzDQa2<v;^[a`%S;q=E><z>.yxL9N|,}[eu]>"
      "6xN73ovJiTCT~=DjrIr#`_p>iaQE&&raU$Zc1";
  char str2[] = "q}dJNiBjwsBph5kybb>G#N^1mM~>bW@U,7~{lz0x7]/rbu(X]Cb>gKkiHzDI";
  ck_assert_str_eq(strncpy(str2, str1, 60), s21_strncpy(str2, str1, 60));
}
END_TEST

START_TEST(strncpy_35) {
  char str1[150] =
      "d)ZNU3]&$#T+)9)gnG==-)WFMx0`q7H2#F(39!.R`Oc1mBD0WBe|*?S{aO6ya@F*<z-Yj)"
      "jrp[yLsGGDD>15OA^v{i$ioM|-3T]cjm(h4`eR|%KG%CRBG;;^O|GSq[ShvQg@B!a{^?"
      "9wiaN[uZ8SQ";
  char str2[] = "00[]s[d][ds][d]]ds[dla;asld;asl]`Gf3o~F1|oqNIkO[-~BbiX`0D9U";
  ck_assert_str_eq(strncpy(str2, str1, 59), s21_strncpy(str2, str1, 59));
}
END_TEST

START_TEST(strncpy_36) {
  char str1[150] =
      "1bq>cWlOrEXK$3sL6V{M7WMynhs<qDW<hp;hN?sM%Q]^3YGQ3}?s,0ZR)%Ob6cS."
      "E5mTnL1e@/8I34o*G$5EIJIwnVP*KL3";
  char str2[] =
      "&LtFU2QM0bqm$%k,~kwjaj3yk07dfYM:I9O<NP0MD>8MYd;*-jzfK|2X9(+xoC&X9I{B+!"
      "yuj6tG}YG^}}^&tdBYpV|3Q/";
  ck_assert_str_eq(strncpy(str2, str1, 94), s21_strncpy(str2, str1, 94));
}
END_TEST

START_TEST(strncpy_37) {
  char str1[150] =
      "E*]8CPh605J<lk]m?<UnW1K#=lC#0(zk_][@^+2Wv$$<bI_iU2CSse^rJZQ:_M]kOhz)"
      "zruX|Qg)X9nPDq";
  char str2[] = "Am-6N7aIEe/3uTlxA)VNjk7p}}5au+_0Bt";
  ck_assert_str_eq(strncpy(str2, str1, 34), s21_strncpy(str2, str1, 34));
}
END_TEST

START_TEST(strncpy_38) {
  char str1[150] = "x{D#F9ItEmi&qnUgrMXb93%.+4;^I`";
  char str2[] = "q!dBUD~aNn*J+TcEkG.HbK(maZL`1W";
  ck_assert_str_eq(strncpy(str2, str1, 30), s21_strncpy(str2, str1, 30));
}
END_TEST

START_TEST(strncpy_39) {
  char str1[150] = "I*eZ)";
  char str2[] = "+h_$";
  ck_assert_str_eq(strncpy(str2, str1, 4), s21_strncpy(str2, str1, 4));
}
END_TEST

START_TEST(strncpy_40) {
  char str1[150] =
      "y;-SIFmyZ-Fx*|dc)>M=+y7,v7>x?rz?:5x5~cy]VT@>2_agfg1gB@{/"
      "Q+}x)>&x{hbzyw+GOYzQ%=wL;7";
  char str2[] = "G}QVtk|k~;Nd3MaI&Q|iw^ReA@2G)oRVi";
  ck_assert_str_eq(strncpy(str2, str1, 33), s21_strncpy(str2, str1, 33));
}
END_TEST

START_TEST(strncpy_41) {
  char str1[150] =
      "ZzR7{)}4@.5agVD5OhoIE3o$MTv.~|mSb,gWLw4j*w,%oTQ);y3cr$Qg.MU1NF22zlh?k~"
      "f4BJS%y<E@C&K47g:a";
  char str2[] = "asLXIK7+d5GD=OWjdvzL$;LK-~zbqsdSv$5fG4JbNRaIz,RYTcC!5c_(A";
  ck_assert_str_eq(strncpy(str2, str1, 57), s21_strncpy(str2, str1, 57));
}
END_TEST

START_TEST(strncpy_42) {
  char str1[150] =
      "g^#a+C4mp)nfm(!p)Pxf2(YYiH2nkqyo<;c,bLd=x6]3|mcE:v2A)[M+IJ[n$n~036:"
      "mDEwVI:JjNvlawjcqVKi0`^Hv9sx7H";
  char str2[] =
      "@T=8l2V)^_EB;qo=xlM1wOU11#ThAo#/"
      "c^avhKXj4eQ:[B_?4rS>.8|r8Wgr3`.|AhZFSmi9wzH?o9b";
  ck_assert_str_eq(strncpy(str2, str1, 79), s21_strncpy(str2, str1, 79));
}
END_TEST

START_TEST(strncpy_43) {
  char str1[150] = "Ia<&H9<0j4u{?AR$od`6Ce?poK=[$^Uk3gz=G3I^pa#{$(*#(pN{j>aGu6";
  char str2[] = "|aOyV!5~Dt";
  ck_assert_str_eq(strncpy(str2, str1, 10), s21_strncpy(str2, str1, 10));
}
END_TEST

START_TEST(strncpy_44) {
  char str1[150] =
      "KRL>_.5`wt83M#CIom/w=-Q5,uP~]Paa09g4%%C:vkLpjTPitKlwRNQ[+]+[^B";
  char str2[] = "jbYXvHt}dB_&$wBHR&Cw|DP{&hc=4pXC?r[L!$&?4sx(";
  ck_assert_str_eq(strncpy(str2, str1, 44), s21_strncpy(str2, str1, 44));
}
END_TEST

START_TEST(strncpy_45) {
  char str1[150] = "%xP6MC<S0%tx@b`17bv-e";
  char str2[] = ";sdlapdk[aslpaLo|1";
  ck_assert_str_eq(strncpy(str2, str1, 18), s21_strncpy(str2, str1, 18));
}
END_TEST

START_TEST(strncpy_46) {
  char str1[150] =
      "b#G`75+,,Jac<Q$~o(]DFxeuHcyW9ESO=8_p85~x?v~L=@`X+)uN2>J%NAvQ-/"
      "q{j]Zt^pxk(RlXub~C>z:QQvp`vF$&KxGQ|$SL";
  char str2[] =
      "TVc`)3Nub9@q=%x7C[feyvC;eRJK|TvjXv4%6!C6m,psqTiK]8H.e^,B$N#?PE*EBwLe/"
      "}[N?n.q4aq&,51e|ceWIoM";
  ck_assert_str_eq(strncpy(str2, str1, 91), s21_strncpy(str2, str1, 91));
}
END_TEST

START_TEST(strncpy_47) {
  char str1[150] =
      "62~yoazDU00$}F2%k1Mj#8~|ZwmWm>=waTQh<PuNgdIYBrDA>CT#AY3~|v%!xJ^";
  char str2[] = "6K@Hin:Q$K:l/)<%.yPIMcMpi%KX7[Qk/O6h[3";
  ck_assert_str_eq(strncpy(str2, str1, 38), s21_strncpy(str2, str1, 38));
}
END_TEST

START_TEST(strncpy_48) {
  char str1[150] =
      "TP_~v[WrH;Hs$94m.q+KD@{9B54:$t1bTF~Ip:x!s&x1qDt-G?tYa$x=H;[#exuDyr]K6]"
      "QoyF>n>}tx<[4#`*ymBYVl@Y)DCJL#n%XQI=-cv";
  char str2[] = "(P&wAg^JXD|BB=z.qE6pMTYMJj$X?C(/5y8F,Lyey%dI%yQ";
  ck_assert_str_eq(strncpy(str2, str1, 47), s21_strncpy(str2, str1, 47));
}
END_TEST

START_TEST(strncpy_49) {
  char str1[150] =
      "743~Bx^OEZaGs~7LcPKBc]4RUDR-DcJWqGUx[)DyJe!!g24}Pkl5ycoilnM$#)7mr-Yz9WH{"
      "@hqF>ewi@>|vf}.%/!fQwLoBU<vuVnO,Zc!RY#9&aPQ30e,";
  char str2[] = "`a?fkQ(adsaPBMsdadsh%d1V2MssadqwZH7P";
  ck_assert_str_eq(strncpy(str2, str1, 36), s21_strncpy(str2, str1, 36));
}
END_TEST

START_TEST(strncpy_50) {
  char str1[150] = "7l4AE`|X7L>v:Ce;lk[T32}7oiYf@`~84%A^Ib`k!C!~y<a";
  char str2[] = "cVfsCr";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_51) {
  char str1[150] =
      "k-B8K3QaP9=,F>x2k-cnFB}tvRk|n(KIjQh5~vq-K8}[[]3$M7(5OB51kcy?^#"
      "O2^(Y9]57n;]a&doE1=hBNU2d~efy/Har6jXF~g6%liJ<Iyu+H";
  char str2[] =
      "P>/x$v/OU)eg~vGDCSb;3Vns<!;B:ZV]h/"
      "Wn[n9Q2l14?vn.GB9)%GF&0I<BKJx3x{vhK%ks%A_";
  ck_assert_str_eq(strncpy(str2, str1, 75), s21_strncpy(str2, str1, 75));
}
END_TEST

START_TEST(strncpy_52) {
  char str1[150] =
      "}P|!=DCJ@I4P#UC4SLl#PS|_b;5/bw+7QNA#:1Tx56tJN]3Yl`2A%Z6jZ6Sju";
  char str2[] = "D8-y>kB3{%@qF9S2;~BmC`lFl@J*$^{|LtENpPSdI>%6EBVJF?[%Q9kv";
  ck_assert_str_eq(strncpy(str2, str1, 56), s21_strncpy(str2, str1, 56));
}
END_TEST

START_TEST(strncpy_53) {
  char str1[150] =
      "PhR)}Nt[3b.xQ%FhvG-mX|)uxl$ExaK=!OX49ueFYR@2aDE`3/fzc({m$_[MIdp^jBm>t/"
      "Qc?mmUM`EvwM3pFpeFH~RwE7t+";
  char str2[] = "lxs}<74)p/v0^zMaqwxt";
  ck_assert_str_eq(strncpy(str2, str1, 20), s21_strncpy(str2, str1, 20));
}
END_TEST

START_TEST(strncpy_54) {
  char str1[150] = "sfC6+p/";
  char str2[] = "z-64z:";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_55) {
  char str1[150] = "RXDFM^xZ=4Rl.%%hE9XrvdI1P4v$6RL{||0!t";
  char str2[] = "vx";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_56) {
  char str1[150] = "J_lOcAqIhGY?O#-o";
  char str2[] = "D.g=@:Af17";
  ck_assert_str_eq(strncpy(str2, str1, 10), s21_strncpy(str2, str1, 10));
}
END_TEST

START_TEST(strncpy_57) {
  char str1[150] =
      "Tp,1s,e|nTs}p7w.lROnwt$rB/"
      "gpU@~GgeIP@bWtd5,s){W[q^f.KYa7Z>.qEva!0)Te~Seod;BK9{GW6K1m~qbE!iXP>"
      "N8IKKF!NA5%vl75hb;%s5iK5uTB0C~^/2[vVZt>&K";
  char str2[] =
      "V/"
      "osc.6y|:bm%uI;P^@xluM?-]:MIk_gK=~k!=cpC4xi99FPk%~*.|Rx(JdPWVwE^tRu6ex|"
      "X4p*Yyj!k/V}b$ZXl{x";
  ck_assert_str_eq(strncpy(str2, str1, 91), s21_strncpy(str2, str1, 91));
}
END_TEST

START_TEST(strncpy_58) {
  char str1[150] =
      "UAh5No5&tFimbL(,C>/"
      "L:gjBe(s*:9?-m&%>`JD]k1C}JNg_{.IB~tICgQFnb1U5NgAzEv11Oz_{5oU$v4tbQr&T";
  char str2[] = "sdlapd[M";
  ck_assert_str_eq(strncpy(str2, str1, 8), s21_strncpy(str2, str1, 8));
}
END_TEST

START_TEST(strncpy_59) {
  char str1[150] =
      "?>dj9!qV|Gb1}Mqf2b*N0(u>22RuH{![m4+}s=RP^6St;{;#I08,9((k}u?IWZE`[SY.&"
      "yiLf[&*oQ?u)[rT3;8F{~exU|d;JD~]Y^L&nl]";
  char str2[] =
      "JshsO)@:D{vf?.,,w$)4pLCTDm{/YRkseLDMEqy[z8Ko5rV/mFglwJPMK._cZ64/"
      "JbHK^FMWJI3frw~z9dR#e~s@KS]YXNw2,3T)!";
  ck_assert_str_eq(strncpy(str2, str1, 101), s21_strncpy(str2, str1, 101));
}
END_TEST

START_TEST(strncpy_60) {
  char str1[150] =
      "qBU(nf;n=R}b4WlzS4NlwQY0N.?BDu~@;Q=dN;j49@12~kWLF-}fBXmqGNE=}J%=;:Sf0-."
      "h^t#-zo0FLW}#AFRmwgG5R~a6`Cc80e0&b";
  char str2[] =
      "%.gs#?DsSHP([q7iDyu(Qy$G6GIdjg7&D8GqU,v1?yaQd?+9sz@aZtru&:|?g0Kq`ZLw;"
      "o3f2bgE0/d";
  ck_assert_str_eq(strncpy(str2, str1, 79), s21_strncpy(str2, str1, 79));
}
END_TEST

START_TEST(strncpy_61) {
  char str1[150] = "l&B{C*7YZv";
  char str2[] = "rtzq1;<";
  ck_assert_str_eq(strncpy(str2, str1, 7), s21_strncpy(str2, str1, 7));
}
END_TEST

START_TEST(strncpy_62) {
  char str1[150] = "$%FuXf_wcA_d4{;v_";
  char str2[] = "egY{~8bdsadasGI`sadasd(XdfasadsamdsdsasPMd";
  ck_assert_str_eq(strncpy(str2, str1, 42), s21_strncpy(str2, str1, 42));
}
END_TEST

START_TEST(strncpy_63) {
  char str1[150] =
      "+)gWpuk{vjADNRkY^&TqIJ0bd2rk8AxPME.Z+jc02`(8uvUpH[!u#,Y#M{cDimfI}Y&#"
      "jitE";
  char str2[] = "{%_jJ>-inMGdibNP-";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_64) {
  char str1[150] =
      "1pI{[k[wHqFqOpEy}%``DBWS0st0x>iDJB0CD]xEQ{sqC4p[&iT,xRmbhSM_.6NZ}!@kNU,"
      "NKsfg6$X!A9UAbb!0h[/"
      "uC[}`#*863bG{Yhe9E|<T:J*tSf!qF)+iHbB6(>t1f_c;(mUYLvn";
  char str2[] = ".moLfOJ*pdBC+|Y|flva9lQCrD3E[@zaB,fs<+";
  ck_assert_str_eq(strncpy(str2, str1, 38), s21_strncpy(str2, str1, 38));
}
END_TEST

START_TEST(strncpy_65) {
  char str1[150] =
      "%^k.i$qo`AtXJy6t1Pal[GJu8b2%5q4}6.yX+=LccEV^&U=5)=n-^HO^"
      "Z7VfAnj9E3wf6G2nZL~TG";
  char str2[] = "R5dspq.sdsdsd56wdsdsd/~tSy4pquo";
  ck_assert_str_eq(strncpy(str2, str1, 30), s21_strncpy(str2, str1, 30));
}
END_TEST

START_TEST(strncpy_66) {
  char str1[150] = "6?)y5apacQk)a#0$";
  char str2[] = "sW";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_67) {
  char str1[150] = "E~+}7Yq8@lHmT-+[Lq`~?z%Cr&Vfz3X!Q^%";
  char str2[] = ",^QNj_(Sk/!";
  ck_assert_str_eq(strncpy(str2, str1, 11), s21_strncpy(str2, str1, 11));
}
END_TEST

START_TEST(strncpy_68) {
  char str1[150] = "6sS0r&o^x>.`4UAoO_Gab)Z;Jd/:H,.>;MjAXuR5xB";
  char str2[] = "C;lx=UO(8|$x@mn";
  ck_assert_str_eq(strncpy(str2, str1, 15), s21_strncpy(str2, str1, 15));
}
END_TEST

START_TEST(strncpy_69) {
  char str1[150] = "#YRo`7-@zXh2*&q3Bw&cLDpM3d!7t2~/Leyv=SmjE,O!$";
  char str2[] = "@.-=6wJf<1r:_s5F.@Df&~nUY.Y(VvWmbcZ!U.k@";
  ck_assert_str_eq(strncpy(str2, str1, 40), s21_strncpy(str2, str1, 40));
}
END_TEST

START_TEST(strncpy_70) {
  char str1[150] =
      "GCG,r?E]:.gwC>)Zi;7pA?]nt{r9?Xv?&Jb$Ug|0_ff~<ltzD7fLH`RTfbT6,W8#iks!TbR{"
      "?yo{pW(8`yEMnOC]Gz3V74NXLiTsX*./SSxR`BBJ)~fEMH<1wLB=DAB6r=yk6B";
  char str2[] = "nG4V+Ydg5kMB5s=X5:PWcq~|?D9G[>:z8_Fb8W0>0{po[B)XR37B1eR{#";
  ck_assert_str_eq(strncpy(str2, str1, 57), s21_strncpy(str2, str1, 57));
}
END_TEST

START_TEST(strncpy_71) {
  char str1[150] =
      "POd,A<62(<?9d#hEm=fumk/fJXD.r[S~!6t8l4g=?RquYYe/"
      "CFwcVnW3g8of)TND#];?IR4%Qp<t~&/";
  char str2[] = "K?ZG:|,BtZe|a";
  ck_assert_str_eq(strncpy(str2, str1, 13), s21_strncpy(str2, str1, 13));
}
END_TEST

START_TEST(strncpy_72) {
  char str1[150] = "Mc+%:Gfb+Hnx0h8nSdzp8Vjh|98uXw*#uU!7/:=iwTJLf";
  char str2[] = "(e#bj^WZ4$m";
  ck_assert_str_eq(strncpy(str2, str1, 11), s21_strncpy(str2, str1, 11));
}
END_TEST

START_TEST(strncpy_73) {
  char str1[150] = "<4,[O:h/oU)S%mUt_9b~sHX<q3i>k#>Nt<";
  char str2[] = "B!";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_74) {
  char str1[150] =
      "HUeGQg!&]j_h^):;kz{$K(aWoV.C7`i$Mi1Yka#gAOB=_KR168*|Oj{MvFH3=4UMv3]8~:["
      "m/EjYI;vvLvua_+V=aM#2";
  char str2[] = "%HuqjQ?H0dvqBcR;;";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_75) {
  char str1[150] = "s104,dq";
  char str2[] = "9*W}IV";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_76) {
  char str1[150] = "#dce6QS";
  char str2[] = "iqZ7647";
  ck_assert_str_eq(strncpy(str2, str1, 7), s21_strncpy(str2, str1, 7));
}
END_TEST

START_TEST(strncpy_77) {
  char str1[150] = "$:7b";
  char str2[] = "nD";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_78) {
  char str1[150] =
      "K.0U{_N8JM:MkL7GHq,?r>PSkSp6Z+ZG_YC1VCXn]oWYF(7{g:-)VxZZe*$`bv,N";
  char str2[] = "H}XT99FtP0FL1v&V4wGZJsP,jN2n%_";
  ck_assert_str_eq(strncpy(str2, str1, 30), s21_strncpy(str2, str1, 30));
}
END_TEST

START_TEST(strncpy_79) {
  char str1[150] = "a+8{7bF6;Ro+@dRSMH0-7y:nTj!<_v)J|ZCN{Q/a";
  char str2[] = "c^Eq{`m=`;1Cb0+)Rcjep";
  ck_assert_str_eq(strncpy(str2, str1, 21), s21_strncpy(str2, str1, 21));
}
END_TEST

START_TEST(strncpy_80) {
  char str1[150] = ".!F))[W}Ia:dRESr*Gg+}:)x";
  char str2[] = "B=R";
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_81) {
  char str1[150] = "T3_";
  char str2[] = ":j2";
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_82) {
  char str1[150] =
      "XB9j$k/"
      "{(hSz=Z::>kJxrrx$E|+*`s|3_8[]BuWcrA@J;#N,KH}F*fj?9yvSN5v5lPw&Xo](cOjz]"
      "Nc}<b^t;?71E+`McE!*ma^5FzY";
  char str2[] = "(zk);5y~}lvWdcQpLBu5;<";
  ck_assert_str_eq(strncpy(str2, str1, 22), s21_strncpy(str2, str1, 22));
}
END_TEST

START_TEST(strncpy_83) {
  char str1[150] =
      "X%c1+9KJ=G#),>zx!i!pYaIlvJSIT&(lT[D!7q0b}Ys1i5Iy}xeC,anp|w[eXFfM}bVb32~"
      "n7F#.%dg^wV^bdL/6C:8<+4aO1Y;x^mX6WC_(F^lF-OTJ}2hZ`,3|3[AV";
  char str2[] = "O~v2+A.cnM)Nw[g$o{VpKo_}v!1@Q0`IMh?^E>WB|UXA:hM#sJ`)?SBv,af";
  ck_assert_str_eq(strncpy(str2, str1, 59), s21_strncpy(str2, str1, 59));
}
END_TEST

START_TEST(strncpy_84) {
  char str1[150] =
      "e~i_B,O2Ni3d<6+*?Mm5-Rk.t%b,Yx[buEyk0C,m?UW/dI:U0aU69u/"
      "~=|bM$wv_cgQ4Z9Pxqt$sG*5`?Zq}|KaaQdrqsWgRrNX-pNDWaR+@MpYI*3=P:;y";
  char str2[] = "a+2g_odJe8h*>jw3^I~33";
  ck_assert_str_eq(strncpy(str2, str1, 21), s21_strncpy(str2, str1, 21));
}
END_TEST

START_TEST(strncpy_85) {
  char str1[150] = "y>/Dn84Kw$5Uza[I^>&b,_}$hMyX5@r!QM21JWg";
  char str2[] = "Wet,2_2E9fs8ztL#omFdky>L%0@2";
  ck_assert_str_eq(strncpy(str2, str1, 28), s21_strncpy(str2, str1, 28));
}
END_TEST

START_TEST(strncpy_86) {
  char str1[150] = "S##tMMsayw2l[Y,{>SN1150t!^dbybbvniLgzvT46qSJ~r0n>!5";
  char str2[] = ";ll;s[dsospd[spa[pEX";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_87) {
  char str1[150] = "52;/0E";
  char str2[] = "_yh>";
  ck_assert_str_eq(strncpy(str2, str1, 4), s21_strncpy(str2, str1, 4));
}
END_TEST

START_TEST(strncpy_88) {
  char str1[150] =
      "za^yB(@;bs`3vEg[K~gB/"
      "00_fRxc(dQi}^3PC@]BR[3wUqr~,88bo8ZolreI725U-UiU8A-+vYGn~z}.>K%5r^>!>GS)"
      "grBf&uyoeo;44%*y@";
  char str2[] = "dfsfsa->&i=7%q?Eu7P$-,3`|e#p/iey(=B-:;qbzSK*T{xz6N&u.FUZ";
  ck_assert_str_eq(strncpy(str2, str1, 56), s21_strncpy(str2, str1, 56));
}
END_TEST

START_TEST(strncpy_89) {
  char str1[150] =
      ";Y9O`(A0HHC&.c9o#(pX63DPggR0D?Q0f9[JMfjN1*(L^NtCU*?x>FyBM.~+2Ea59^sN>"
      "LrSaN_Xh(e%(1";
  char str2[] = ",z8VKmmG4`Sy<7{%II,|&Tcu4U)3wHmvaN";
  ck_assert_str_eq(strncpy(str2, str1, 34), s21_strncpy(str2, str1, 34));
}
END_TEST

START_TEST(strncpy_90) {
  char str1[150] = "tpFY8@#w(c/_8D8Pu.*)y";
  char str2[] = "-m5";
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_91) {
  char str1[150] = "7RDyU";
  char str2[] = "dsak";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_92) {
  char str1[150] =
      "z4%b%?AIUKx[0N}d+BiZiFO0K]@zi#i)Z=}<Z8Ta^0UFVHz|3djM~EDH$zsg_@)4pOoAC,"
      "Fw}8eQ!)}/Bw)|Z>5||&PZg1c,#9e7-sTxJ<~jVK";
  char str2[] =
      "4wGzk[]/asddsaF8A4<|+~#sadasdas{,HL^/mW%F/"
      "r>QGB>Jj2jRdsdasdasdasddh&l5g`n-c:.~|#cat?v%WmXww:r+b3l)b}DUIBTI|nXzk!";
  ck_assert_str_eq(strncpy(str2, str1, 101), s21_strncpy(str2, str1, 101));
}
END_TEST

START_TEST(strncpy_93) {
  char str1[150] = "y2bBH>";
  char str2[] = "sddax#";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_94) {
  char str1[150] =
      "SI)$N=RF%2M1K)*$*W{O,qGGP!=(55MB]!B4U2XUPoNhG0hG%A45SiA@Kbq@cmLr6&:-!!"
      "igMrYEfej:?Ct/Y^rY&G}nZYpzaEX4";
  char str2[] =
      "jm/W)bGOFyv?oB)Dg|}Oi8R_~dh:ph7i#j{k[M^ExU8(^V={^W68:QUmkTFcA[AWSq3/"
      "AY_zF7joC{=ks|us#ESyp@cr`p_ve-?";
  ck_assert_str_eq(strncpy(str2, str1, 99), s21_strncpy(str2, str1, 99));
}
END_TEST

START_TEST(strncpy_95) {
  char str1[150] =
      "tfy<%TUO>!>3ke0z2x3PwrmR&qwG`~&KUnnO-,{(PUDhWnhPH]~xqafIjdtjLu?a|z1yC<Y~"
      "W2ck`B]nu&>t_$8kGqr?GL2fUQlG*iUGgA8VO3Ws";
  char str2[] =
      "{8?w]wOF05|BDSwq:O-@ST=2WS;l-}*7+S%ZCiFF@ucAy|E_,5~scOKQ,+7H7(gU6W8CA$^"
      "oDH*@.={";
  ck_assert_str_eq(strncpy(str2, str1, 79), s21_strncpy(str2, str1, 79));
}
END_TEST

START_TEST(strncpy_96) {
  char str1[150] = ",`PsUOw+<uL|}";
  char str2[] = "&-";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_97) {
  char str1[150] =
      "FvNWF*xB@:G{rE;9/W9D&2#W`7zQ}1}#m|)YV_pEQ#wj,M%.9-D%}Q6)hUx";
  char str2[] = "q>_X!kshisLI|S0y";
  ck_assert_str_eq(strncpy(str2, str1, 16), s21_strncpy(str2, str1, 16));
}
END_TEST

START_TEST(strncpy_98) {
  char str1[150] =
      "J|Jb_ue-H/k^j@+k~/mxMS&T2)rc@vkwZOk#6w6Rzaz&,`(0td;x/f}`]-~/"
      "Up8Ql0[VB.W$*MQ$8CXOS,HI/a/Hg{,f=HADt&=r?/`seG#}fr$r";
  char str2[] = "`v8L@f[EQI*S@<RcEHdKw1v";
  ck_assert_str_eq(strncpy(str2, str1, 23), s21_strncpy(str2, str1, 23));
}
END_TEST

START_TEST(strncpy_99) {
  char str1[150] = "lN`0s@q!0oQy?J";
  char str2[] = "&Iv/{j`";
  ck_assert_str_eq(strncpy(str2, str1, 7), s21_strncpy(str2, str1, 7));
}
END_TEST

START_TEST(strncpy_100) {
  char str1[150] =
      "_(!u#TN)y~,T{2o|Y3Xd4oTjr!6,#)ryF9^~}}3F=P6o.UDL|.+-jD-/nf{/"
      "TV:2GU<[*iXbBZ/oL`+W=)v@zOX:S%`ge1OEQ&KMT*hD|VP";
  char str2[] =
      ")+f0!W:yN^Dz]~?!yMu7q!vfLIh32L{^V4_:}E_$}1!SF7-S&S@y!cN;}Cq4q|qmQ<x;te+;"
      "P])wy=tq}LzzdW],i>mFl_hIzMmY";
  ck_assert_str_eq(strncpy(str2, str1, 100), s21_strncpy(str2, str1, 100));
}
END_TEST

START_TEST(strncpy_101) {
  char str1[150] =
      "fp>xDLZR)Aw<%/u}v(tFZdviaT(p5S4]|*>/"
      "rbQk16i=~&jK,%BOEt<sIus$[1d[mYG&Xjnt";
  char str2[] = "0/PjVBkRP-<[Citl6SJ[|vB/v>c%1I#})(:#C$%uCOzqJ$+m2%byV2#{vlp7=";
  ck_assert_str_eq(strncpy(str2, str1, 61), s21_strncpy(str2, str1, 61));
}
END_TEST

START_TEST(strncpy_102) {
  char str1[150] = "-Zaee+q+?!?V,7.8V6i";
  char str2[] = "p";
  ck_assert_str_eq(strncpy(str2, str1, 1), s21_strncpy(str2, str1, 1));
}
END_TEST

START_TEST(strncpy_103) {
  char str1[150] =
      "$M$[=6ouYW-HJ6v4I47U46H:J@)qM]C9Z`^hX5%cghR+I6a.m?wULjO`qE^t*Naaw(SEHkI%"
      "2a/swvt+*1/,sYIL_}V^<v%B)QN1%TF8o2m_jA(juyZo||e:js>:cexL.D@@L/c<9^|8(k";
  char str2[] = "kosdpkdsaa@prNfRoRdp-NqdsadsH.u|rxnNGT~47nJ;RKd;+bPEaQf)9zB";
  ck_assert_str_eq(strncpy(str2, str1, 54), s21_strncpy(str2, str1, 54));
}
END_TEST

START_TEST(strncpy_104) {
  char str1[150] = "?m}xK=IYolTZ+~o275Z#";
  char str2[] = "iD3f8q|?iJ&?H$";
  ck_assert_str_eq(strncpy(str2, str1, 14), s21_strncpy(str2, str1, 14));
}
END_TEST

START_TEST(strncpy_105) {
  char str1[150] =
      "L+N(qznm^#^.vf0ly&2$nTzFH=J?05V)@9uV(=u`1/w/"
      "lu}CoM3.E2GvF8.W3TNowN)_qqx1McH6ta%gmN?jT1||O-R|;XQL~jCgmgF4V`HWT?V7(FL."
      "d2L";
  char str2[] = "Ef6FO3)~z|`3BCE`nT(_F[dA<hU;kmw-7;/B,f0;2CC;g?Lc6D6JU@";
  ck_assert_str_eq(strncpy(str2, str1, 54), s21_strncpy(str2, str1, 54));
}
END_TEST

START_TEST(strncpy_106) {
  char str1[150] = "1bXBYswP%T!A~;ioKu-0#Y1_Jk";
  char str2[] = "b1MZTJ7n!>#8eet}F$";
  ck_assert_str_eq(strncpy(str2, str1, 18), s21_strncpy(str2, str1, 18));
}
END_TEST

START_TEST(strncpy_107) {
  char str1[150] =
      "RiH{g:#*qao6=JZ/4usV4yiB)i`wXD~a_Smz]jYN?lgFI;WI;_0f>(rQ$,6D/"
      "bME{*,[-+t6Yh~Q#Kl!b+~[Hb1:qYg2q";
  char str2[] =
      "d[:,K8Bdb5,?V:JB]({NDU4JpZ<{cQ{dF3gg*=w7Je(Z%VW2I3(K7p~u9PE(8ENx~U5RI";
  ck_assert_str_eq(strncpy(str2, str1, 69), s21_strncpy(str2, str1, 69));
}
END_TEST

START_TEST(strncpy_108) {
  char str1[150] = "BIz@eO#.bl^CA6PyDTK0_cZ";
  char str2[] = "4Mu.UQ%:x=,XPd=VMTc;Z";
  ck_assert_str_eq(strncpy(str2, str1, 21), s21_strncpy(str2, str1, 21));
}
END_TEST

START_TEST(strncpy_109) {
  char str1[150] =
      "LQ~Xn?ocQNZB5>#W=ZN9&u=j[^Kyl$d<?vSGQNwe39yo}v{YEp5{B{Cb9,HsXaPCJPA{^"
      "7egqq<aexB;,xD_=ef+;ORCzl~6wC341iwCvDp_m!kJ*Q:.sy";
  char str2[] = "]h=TYyW0e&9Sg<8Z1Jl[m+EP<y!YX?m0wdrDyzHlWr.K%tjclz_U0~fKHr.z";
  ck_assert_str_eq(strncpy(str2, str1, 60), s21_strncpy(str2, str1, 60));
}
END_TEST

START_TEST(strncpy_110) {
  char str1[150] = "m10dw`RC!b9";
  char str2[] = "@/YRg";
  ck_assert_str_eq(strncpy(str2, str1, 5), s21_strncpy(str2, str1, 5));
}
END_TEST

START_TEST(strncpy_111) {
  char str1[150] = "a_&Z}jjpgY)I*~!SZvmciWY)fG^{o8rpL6KB~";
  char str2[] = "qsg>gnkNYs%zwHlLat5Z+qVK";
  ck_assert_str_eq(strncpy(str2, str1, 24), s21_strncpy(str2, str1, 24));
}
END_TEST

START_TEST(strncpy_112) {
  char str1[500] =
      "Uz}8pk7<X%fjhR}q.DzH=(iCJ|f`BrQPJYHbtwmk6]a0)Xwc[(zuI?YyEPmP_;IYZ^]NaQv>"
      "NZpeaKtG#}CK4xXWGQBj6w~%~Us@X*^7W+>#/?EV+";
  char str2[50] = "ibcxncbmxbcxzczzd5w~P6H;un/GlB8(SYMMet";
  ck_assert_str_eq(strncpy(str2, str1, 39), s21_strncpy(str2, str1, 39));
}
END_TEST

START_TEST(strncpy_113) {
  char str1[150] = "|dqcDy;ulzcpv}wK;4&kH-4R^a,#dRd2}rTE";
  char str2[50] = "0*HMAE//(Oe.t3:UQw";
  ck_assert_str_eq(strncpy(str2, str1, 18), s21_strncpy(str2, str1, 18));
}
END_TEST

START_TEST(strncpy_114) {
  char str1[150] =
      "ed{Z)*a=[;Fptz^o@1Q#_yJ8y6Ob!oA]R0.y8f0[.Cy=-k2F3pLGg#aimzU~D>;9;Yx0_of("
      "(grQ%n|<>[e2-^bN/V}_}CN.1zdId!a=L1&,vzcrL^.6GsE@.]~^8*kD_";
  char str2[] = ":<~WONt$hg2c4*.O;?J@4hm$W)gL#&?x-1Jgj7t>wIk(~Qr`^{?$6qi";
  ck_assert_str_eq(strncpy(str2, str1, 55), s21_strncpy(str2, str1, 55));
}
END_TEST

START_TEST(strncpy_115) {
  char str1[150] =
      "kTo?~$v/"
      "Z??h^5ZQF,_o(=Sa[f^hxBz*e=0UaX7>?rAQ.hQGAy4t$mSSH`]U3Syw6}kKpWjle),<"
      "Duxm=g4MDI;CQ.|j-6s205-Mt3T6|z-0+h0]mOpKV;ut]Yc[:]FDe%s`(V|7c%R(BOl;!+"
      "boR";
  char str2[] = ":+9kG${Ah0)FG@-D$V]dgJe?7}57GEMbh9j?=NwCOQ_!V;#&1T`X8Lbj8No}T";
  ck_assert_str_eq(strncpy(str2, str1, 61), s21_strncpy(str2, str1, 61));
}
END_TEST

START_TEST(strncpy_116) {
  char str1[150] =
      "u*#12T_ETnZhu3f#NZ$CN6_lU>)qUv}QUm^l>b9EQx6fIc-;&?%dqmpVgJz+3r`GY68HUd1-"
      "AhG[&U*iBeWNBQnkTlQ$QpZ}==z<5nXU5?mm86a=[Sk^05,pEjv";
  char str2[] = "[YE>J1/S.Y-uj,%4VO(76G8m$V:$Er5RGA#C<%a*b;n[G,ViRKgD4Dvbf$";
  ck_assert_str_eq(strncpy(str2, str1, 58), s21_strncpy(str2, str1, 58));
}
END_TEST

START_TEST(strncpy_117) {
  char str1[150] = "@ZhXA0";
  char str2[] = "t|WM[h=3)n7Vx";
  ck_assert_str_eq(strncpy(str2, str1, 13), s21_strncpy(str2, str1, 13));
}
END_TEST

START_TEST(strncpy_118) {
  char str1[150] =
      "nbwro6h4^#VKe~pqS7YxJte$H8Mw!QG3~UR9.]~9De,r?0uqNlqtqDDle*I+_m0GC+8+"
      "Sr2a@YF~,BN!C";
  char str2[] = ")!mpQzT";
  ck_assert_str_eq(strncpy(str2, str1, 7), s21_strncpy(str2, str1, 7));
}
END_TEST

START_TEST(strncpy_119) {
  char str1[150] =
      "Wap)sp$A`EYVC-]^=ZKFif{[]"
      "m$ItKw=BQdO^5=<46A}^3GY.FDU|:f)[1Tg%&i+/"
      ".71u6M#;h`0x^e;T+Bf~TcJx8S&hKvJS|l";
  char str2[] = " icasTf$df2s2ddsdsadosiapidosaidbjmoaoadf";
  ck_assert_str_eq(strncpy(str2, str1, 41), s21_strncpy(str2, str1, 41));
}
END_TEST

START_TEST(strncpy_120) {
  char str1[150] =
      "dX62MDiA@,`-GL;w<-Q#C{5poJ1nQ~p<zS:g~C{3q#_+D|t6DZiR$sQ.HTMP6IDh2";
  char str2[] = "k;3`58-5y,om_HLRD#>~i9ZPeDHG1OpWsd.(Oo_*";
  ck_assert_str_eq(strncpy(str2, str1, 40), s21_strncpy(str2, str1, 40));
}
END_TEST

START_TEST(strncpy_121) {
  char str1[150] =
      ";QMK6hEBPT6<;Yn35_PP`cJo|P-=zRhhnppDyu(5gR~ZW;[qCN]Dt~8H|C^_@FAUgLM/"
      ",7~hHy7Q6FOE!}(j+57rm]~rFZA6S;lt8f,s(+,h`,J$Q|)M0";
  char str2[] =
      "@sz)&%f^S~>:&.(xZoh]2wBW-4TrHM_RCvAQJ/"
      "fMF6|N_*6Rch?_R>Vi%`<I}Zhztk`Si(Hu)?";
  ck_assert_str_eq(strncpy(str2, str1, 74), s21_strncpy(str2, str1, 74));
}
END_TEST

START_TEST(strncpy_122) {
  char str1[150] =
      "Sd<[X/p:xdpL}J7`&(D8kySK!u|yrSvf_;1-DGj/"
      "S.pNFyclJD#XMx:mH9RKH=U.E[wth(M3PipaD7z}G?oZ|M";
  char str2[] =
      "hyIqEJT(fL}oKa&V>8Qgbv8?!gmyDLr#pl_1E9?!i0lf:c~T}[mvOW;!f{aaq%ig^"
      "PlvrCAzy8%Doflj";
  ck_assert_str_eq(strncpy(str2, str1, 80), s21_strncpy(str2, str1, 80));
}
END_TEST

START_TEST(strncpy_123) {
  char str1[150] = ".$hvzA.90MTiyK[*yEMZOsl1(4";
  char str2[] = "PrE.EZG5x^Ll6iw%@";
  ck_assert_str_eq(strncpy(str2, str1, 17), s21_strncpy(str2, str1, 17));
}
END_TEST

START_TEST(strncpy_124) {
  char str1[150] = "(&";
  char str2[] = "$A";
  ck_assert_str_eq(strncpy(str2, str1, 2), s21_strncpy(str2, str1, 2));
}
END_TEST

START_TEST(strncpy_125) {
  char str1[150] =
      "sp;/"
      "AaeHxqj_1]us_2.ay=7.u#Lei=6Aq)95Sn<,h2B@seddfz03Jc443}(N{65[hkQMv9D~*"
      "SyBt8P`MLq!2w@Dsfyo^8yR~2gJ$bve#-J2iwa&V*o<}w(!06l[5a6Qvs8p";
  char str2[] = "|_sd(7&vJ~Dm";
  ck_assert_str_eq(strncpy(str2, str1, 12), s21_strncpy(str2, str1, 12));
}
END_TEST

START_TEST(strncpy_126) {
  char str1[150] =
      "l=)-RJ;IWGI.0Q%NSG#s9mJj*]`$QPv3q<9OD,@n=A/"
      "oN<SdA{T<_#3IjszQ;N$4(=V}K?IHyo/BX0eq=0m$er%,$i";
  char str2[] = "koxQbWu3e?c";
  ck_assert_str_eq(strncpy(str2, str1, 11), s21_strncpy(str2, str1, 11));
}
END_TEST

START_TEST(strncpy_127) {
  char str1[150] = "eNTS:";
  char str2[] = "K{QS#o(WxQ[uxfy{=B{b/##I6o:";
  ck_assert_str_eq(strncpy(str2, str1, 27), s21_strncpy(str2, str1, 27));
}
END_TEST

START_TEST(strncpy_128) {
  char str1[150] =
      "!6w}89k7/yDi-]oKL_+}/wP43z+l}#XS6emIQo6aN>8QNaBW&,C!0i$m)TdX[B#RL(Q/"
      "JyD5IC6nAG";
  char str2[] = ".ft";
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_129) {
  char str1[150] =
      "&_!vyP)4~7,qN~c4hy<1kKU~`TkXRW!<ez(&`[L<#-_FmxLAygcL6E?U~tnfa[uuiC`Mb^}"
      "U?]^?ies8N]`%j*3)9b1>tLJ4*$/)JExhKZ{O)iJ";
  char str2[] = "aW<eO#?u";
  ck_assert_str_eq(strncpy(str2, str1, 8), s21_strncpy(str2, str1, 8));
}
END_TEST

START_TEST(strncpy_130) {
  char str1[150] = "8|A(D~oT6/)g=>,";
  char str2[] = "(a(0YD7_MYh}yF";
  ck_assert_str_eq(strncpy(str2, str1, 14), s21_strncpy(str2, str1, 14));
}
END_TEST

START_TEST(strncpy_131) {
  char str1[150] = "v+=,j!3b9%goSj4#";
  char str2[] = "F>Tvx@";
  ck_assert_str_eq(strncpy(str2, str1, 6), s21_strncpy(str2, str1, 6));
}
END_TEST

START_TEST(strncpy_132) {
  char str1[150] = "~STm*=^Y(`";
  char str2[] = "~HUM#2i^";
  ck_assert_str_eq(strncpy(str2, str1, 8), s21_strncpy(str2, str1, 8));
}
END_TEST

START_TEST(strncpy_133) {
  char str1[150] = "6Z!W,b?;D9@i/:.";
  char str2[] = ",tJo}I$*mo";
  ck_assert_str_eq(strncpy(str2, str1, 10), s21_strncpy(str2, str1, 10));
}
END_TEST

START_TEST(strncpy_134) {
  char str1[150] =
      "&DPQ:g$D5T.161V-B2WJ)7iW9)n,^SYGWljw~;S:70;V8rV&VdiXHJVH{KN6ol{LtPUK("
      "cSp,,[guL,RRHs:-Fr$i@2l`1h[+=pUB9so91T!VDtuu/m.Dk";
  char str2[] = "gAPhafrc~~nBn%@X^_h8A_&#FO-(4.CWCSmg:";
  ck_assert_str_eq(strncpy(str2, str1, 37), s21_strncpy(str2, str1, 37));
}
END_TEST

START_TEST(strncpy_135) {
  char str1[150] = "7!;5Y@Ik6oDdk3kvBmbds";
  char str2[] = "oq$<gS92>";
  ck_assert_str_eq(strncpy(str2, str1, 9), s21_strncpy(str2, str1, 9));
}
END_TEST

START_TEST(strncpy_136) {
  char str1[150] =
      "<CMH(k*s!&FQ9Xgx|E,<K*a@3)]oUF?4c(yV{kJ!#uq)*FFoWxc/"
      "EmmK7(4e>V:E#|gVgQRep)>dmy#z8k]);MN9abFJbU,ei-BQ>J1u|7MQZPPI_+Cp[9<"
      "bd1U]";
  char str2[] =
      "uTtW|_Pl1=7yQ<_oO?umGNJ,~7;C#i@F#/qa{g+$j)X?XTR%@Q2/-~4xqE~:.@Zj`}j@@i";
  ck_assert_str_eq(strncpy(str2, str1, 70), s21_strncpy(str2, str1, 70));
}
END_TEST

START_TEST(strncpy_137) {
  char str1[150] =
      ";YZWPIL/N]%H&DhL6hQ`-P/"
      "f4QW)%9*vZGl=1A%CtYV2uhR39{P!r%p?J7ZhMC6}-TAyenE35]PF[kmjUsR`M.}6`v$"
      "DcSp7RHARnh3}<1<TRXt:eI4p#zoY:,$9]}(";
  char str2[] = "kdpskgkdfjlgkhdsuiafj;ldsnjkgL9T6x:)-aNk";
  ck_assert_str_eq(strncpy(str2, str1, 40), s21_strncpy(str2, str1, 40));
}
END_TEST

START_TEST(strncpy_138) {
  char str1[150] = "=r2W[Vf|a`9B.n{0@%+TW9^.Kwm9(Xyh2";
  char str2[] = "74KwM#a<gMt/@6t3%Z";
  ck_assert_str_eq(strncpy(str2, str1, 18), s21_strncpy(str2, str1, 18));
}
END_TEST

START_TEST(strncpy_139) {
  char str1[150] =
      "kr-RH~0jB(N|pr>n#Q:9SD_sFI/"
      "`U)y,$m:I^jA`*2_qR^nXNkc+Rn-Q,zp8Jx:Du9>u$D:>Hpu>Bq4s;@;,Z-<A4pv|Icsu9,>"
      "w/l3kq:(!~j#f|K8YFeG6i";
  char str2[] =
      "bP8TW]2<<872tnn=^Z@eMwwuVmr$43G7EVs8fwhBb<,TL+$x[yh2mHAuJ{iZ`EmgT$N+"
      "KieAJJg(&Is.y9K|.t|mz++iLC";
  ck_assert_str_eq(strncpy(str2, str1, 94), s21_strncpy(str2, str1, 94));
}
END_TEST

START_TEST(strncpy_140) {
  char str1[150] =
      "7x$hxV6c&&&}r%hl~D7,LS*JyEO})1*c6K@r+b4crLm8?d4|+@@x=7U|oh-qa~8$8*,-t4k>"
      ";#%^C%q={OUtHrYg*rngSPud*_.VV)01;RLyj$dlRF:%Hvmru7<]}()]SvW)7OV=]`";
  char str2[] =
      "=of0a5Ra8p$#$o&zAIz#AwgY=Sz)UVDnS*TC1O&p{8+Bv1}-Gg]Kn1V!ivB<DhO`L<OFr>)"
      "9cZWH6EjV]4/Ir";
  ck_assert_str_eq(strncpy(str2, str1, 85), s21_strncpy(str2, str1, 85));
}
END_TEST

START_TEST(strncpy_141) {
  char str1[150] = "4JT,.f51B&";
  char str2[] = "s";
  ck_assert_str_eq(strncpy(str2, str1, 1), s21_strncpy(str2, str1, 1));
}
END_TEST

START_TEST(strncpy_142) {
  char str1[150] =
      "@HWHaL~dlF/"
      ",BFpfk}{_z{qsq0LtFeFg;_fiz-8F~:AxZ*1=T`Kv:j0qxmS7VGK!`N!,<#Se5&pre`N^"
      "NhIMhCa_:@Wh&Vb76+Qx&5~r9aAj0;Kn}&cmfy9Ukm`P@7>^g7=7jM4Iu^";
  char str2[] = "dksalkfuidsogodf[l[dsadnsdahfojpifhdouisajodioi^L^G8C";
  ck_assert_str_eq(strncpy(str2, str1, 53), s21_strncpy(str2, str1, 53));
}
END_TEST

START_TEST(strncpy_143) {
  char str1[150] =
      "^]P0dn.%<kmM([QVAwu!;]aX*1l;ZN^ShAe/"
      "r~ZCC_a3%2U>3BQWElUr=Di{8Ej<R;O:KIw81O#tnp|rfI%@ZOgW4sZ{Q~-~<u";
  char str2[] = "7H_())9mWs~p<vW";
  ck_assert_str_eq(strncpy(str2, str1, 15), s21_strncpy(str2, str1, 15));
}
END_TEST

START_TEST(strncpy_144) {
  char str1[150] = "J`z7Eq6Qj|vZWMcQZ&s{G$qyDFH,dCksi#F";
  char str2[] = "dlskaoifidsiofjisodjhuihjafoksaofjpkoT@";
  ck_assert_str_eq(strncpy(str2, str1, 24), s21_strncpy(str2, str1, 24));
}
END_TEST

START_TEST(strncpy_145) {
  char str1[150] =
      "Nfq3R&W3t0BU*{v+<Ee+o#D{lRrG6c|`VL]hKu@n2LpgrYI6a~LggG!d!Do)~odF]["
      "VylaPemE<Pij`4qS]eJtZDPKa6;3%=W?TO89<f!{WcbO2K_]Q1Ar2Vw-vi.NFX@G$//"
      "U]z&+KBsrH*`";
  char str2[] = "};qlqib/)";
  ck_assert_str_eq(strncpy(str2, str1, 9), s21_strncpy(str2, str1, 9));
}
END_TEST

START_TEST(strncpy_146) {
  char str1[150] = "c{(";
  char str2[] = "Vne";
  ck_assert_str_eq(strncpy(str2, str1, 3), s21_strncpy(str2, str1, 3));
}
END_TEST

START_TEST(strncpy_147) {
  char str1[150] =
      ">+egCN1M!dDj{rrPVCwz4;hcK=n(Mh(@8o}z<%2.W*wv!O+(De8YLD;o9I>S{MxzVOb/"
      "])k[@a=m3^RT2yo=-80sJ:gfVt=}qA<Z91jB$)MUVkZ.LhAdG3<Mc)/Jl7w/"
      "rVky[4FH{[QFTk-";
  char str2[] =
      "}GH*jQ{0b3(<S`{s!i5S+vkw%xfP8:Z,;[==`QDF~/"
      "+8ln}KzcDWTa[j{:3$&A$A[&2f1@XlRUJ~D8/mUHbak";
  ck_assert_str_eq(strncpy(str2, str1, 85), s21_strncpy(str2, str1, 85));
}
END_TEST

START_TEST(strncpy_148) {
  char str1[150] =
      "_)bi-kc/"
      "BW]b}zY,NPlS(~t?A8y{fFh.|iw83)1J>7n(aj!G:Brd}uXh+Wtm^S-X59f*}EX?1G<"
      "mFuUGXAx`;N}impQ!J)H&/Bm>kTPRnG@O78g}EjbiS?_68lRT.CL.GnOZ?mTfxdN72f";
  char str2[] =
      "^3=n4O//|H/^|1sWYj#FiUol!a4B8D=od+I*L0$ssscc3so>ib/"
      "Hf(82hg_zHu=VJTc>nMqC+DwB_-l=CA(}Us_N{qVu.68iyCeQ]45GTVr<GfatUu2tV52){(."
      "QB@DCRml}";
  ck_assert_str_eq(strncpy(str2, str1, 132), s21_strncpy(str2, str1, 132));
}
END_TEST

START_TEST(strncpy_149) {
  char str1[150] =
      "2r5iL]DL`T,~7@c:V)vTvH]Ttfae:,-1<Okdw~~5zR9PshJSeiv75tV_GI_Po;.hy!3Oxvh,"
      "$[~!bIq3&;)n6aG+Hy#&j9;:APvbOWV*Ep`DRIO3qo^`G9|v";
  char str2[] = "dsadsadsadaE_Sw@@-5aQP4FW=2GK5N:,BJsE;lR?To69@${x4[r";
  ck_assert_str_eq(strncpy(str2, str1, 49), s21_strncpy(str2, str1, 49));
}
END_TEST

START_TEST(strncpy_150) {
  char str1[150] = "dkSn3wZ=z>`K";
  char str2[] = "W.+^`{KI/J/Q(WTnc>y";
  ck_assert_str_eq(strncpy(str2, str1, 19), s21_strncpy(str2, str1, 19));
}
END_TEST

Suite *test_strncpy(void) {
  Suite *s = suite_create("\033[45m-=S21_STRNCPY=-\033[0m");
  TCase *tc = tcase_create("strncpy_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncpy_1);
  tcase_add_test(tc, strncpy_2);
  tcase_add_test(tc, strncpy_3);
  tcase_add_test(tc, strncpy_4);
  tcase_add_test(tc, strncpy_5);
  tcase_add_test(tc, strncpy_6);
  tcase_add_test(tc, strncpy_7);
  tcase_add_test(tc, strncpy_8);
  tcase_add_test(tc, strncpy_9);
  tcase_add_test(tc, strncpy_10);
  tcase_add_test(tc, strncpy_11);
  tcase_add_test(tc, strncpy_12);
  tcase_add_test(tc, strncpy_13);
  tcase_add_test(tc, strncpy_14);
  tcase_add_test(tc, strncpy_15);
  tcase_add_test(tc, strncpy_16);
  tcase_add_test(tc, strncpy_17);
  tcase_add_test(tc, strncpy_18);
  tcase_add_test(tc, strncpy_19);
  tcase_add_test(tc, strncpy_20);
  tcase_add_test(tc, strncpy_21);
  tcase_add_test(tc, strncpy_22);
  tcase_add_test(tc, strncpy_23);
  tcase_add_test(tc, strncpy_24);
  tcase_add_test(tc, strncpy_25);
  tcase_add_test(tc, strncpy_26);
  tcase_add_test(tc, strncpy_27);
  tcase_add_test(tc, strncpy_28);
  tcase_add_test(tc, strncpy_29);
  tcase_add_test(tc, strncpy_30);
  tcase_add_test(tc, strncpy_31);
  tcase_add_test(tc, strncpy_32);
  tcase_add_test(tc, strncpy_33);
  tcase_add_test(tc, strncpy_34);
  tcase_add_test(tc, strncpy_35);
  tcase_add_test(tc, strncpy_36);
  tcase_add_test(tc, strncpy_37);
  tcase_add_test(tc, strncpy_38);
  tcase_add_test(tc, strncpy_39);
  tcase_add_test(tc, strncpy_40);
  tcase_add_test(tc, strncpy_41);
  tcase_add_test(tc, strncpy_42);
  tcase_add_test(tc, strncpy_43);
  tcase_add_test(tc, strncpy_44);
  tcase_add_test(tc, strncpy_45);
  tcase_add_test(tc, strncpy_46);
  tcase_add_test(tc, strncpy_47);
  tcase_add_test(tc, strncpy_48);
  tcase_add_test(tc, strncpy_49);
  tcase_add_test(tc, strncpy_50);
  tcase_add_test(tc, strncpy_51);
  tcase_add_test(tc, strncpy_52);
  tcase_add_test(tc, strncpy_53);
  tcase_add_test(tc, strncpy_54);
  tcase_add_test(tc, strncpy_55);
  tcase_add_test(tc, strncpy_56);
  tcase_add_test(tc, strncpy_57);
  tcase_add_test(tc, strncpy_58);
  tcase_add_test(tc, strncpy_59);
  tcase_add_test(tc, strncpy_60);
  tcase_add_test(tc, strncpy_61);
  tcase_add_test(tc, strncpy_62);
  tcase_add_test(tc, strncpy_63);
  tcase_add_test(tc, strncpy_64);
  tcase_add_test(tc, strncpy_65);
  tcase_add_test(tc, strncpy_66);
  tcase_add_test(tc, strncpy_67);
  tcase_add_test(tc, strncpy_68);
  tcase_add_test(tc, strncpy_69);
  tcase_add_test(tc, strncpy_70);
  tcase_add_test(tc, strncpy_71);
  tcase_add_test(tc, strncpy_72);
  tcase_add_test(tc, strncpy_73);
  tcase_add_test(tc, strncpy_74);
  tcase_add_test(tc, strncpy_75);
  tcase_add_test(tc, strncpy_76);
  tcase_add_test(tc, strncpy_77);
  tcase_add_test(tc, strncpy_78);
  tcase_add_test(tc, strncpy_79);
  tcase_add_test(tc, strncpy_80);
  tcase_add_test(tc, strncpy_81);
  tcase_add_test(tc, strncpy_82);
  tcase_add_test(tc, strncpy_83);
  tcase_add_test(tc, strncpy_84);
  tcase_add_test(tc, strncpy_85);
  tcase_add_test(tc, strncpy_86);
  tcase_add_test(tc, strncpy_87);
  tcase_add_test(tc, strncpy_88);
  tcase_add_test(tc, strncpy_89);
  tcase_add_test(tc, strncpy_90);
  tcase_add_test(tc, strncpy_91);
  tcase_add_test(tc, strncpy_92);
  tcase_add_test(tc, strncpy_93);
  tcase_add_test(tc, strncpy_94);
  tcase_add_test(tc, strncpy_95);
  tcase_add_test(tc, strncpy_96);
  tcase_add_test(tc, strncpy_97);
  tcase_add_test(tc, strncpy_98);
  tcase_add_test(tc, strncpy_99);
  tcase_add_test(tc, strncpy_100);
  tcase_add_test(tc, strncpy_101);
  tcase_add_test(tc, strncpy_102);
  tcase_add_test(tc, strncpy_103);
  tcase_add_test(tc, strncpy_104);
  tcase_add_test(tc, strncpy_105);
  tcase_add_test(tc, strncpy_106);
  tcase_add_test(tc, strncpy_107);
  tcase_add_test(tc, strncpy_108);
  tcase_add_test(tc, strncpy_109);
  tcase_add_test(tc, strncpy_110);
  tcase_add_test(tc, strncpy_111);
  tcase_add_test(tc, strncpy_112);
  tcase_add_test(tc, strncpy_113);
  tcase_add_test(tc, strncpy_114);
  tcase_add_test(tc, strncpy_115);
  tcase_add_test(tc, strncpy_116);
  tcase_add_test(tc, strncpy_117);
  tcase_add_test(tc, strncpy_118);
  tcase_add_test(tc, strncpy_119);
  tcase_add_test(tc, strncpy_120);
  tcase_add_test(tc, strncpy_121);
  tcase_add_test(tc, strncpy_122);
  tcase_add_test(tc, strncpy_123);
  tcase_add_test(tc, strncpy_124);
  tcase_add_test(tc, strncpy_125);
  tcase_add_test(tc, strncpy_126);
  tcase_add_test(tc, strncpy_127);
  tcase_add_test(tc, strncpy_128);
  tcase_add_test(tc, strncpy_129);
  tcase_add_test(tc, strncpy_130);
  tcase_add_test(tc, strncpy_131);
  tcase_add_test(tc, strncpy_132);
  tcase_add_test(tc, strncpy_133);
  tcase_add_test(tc, strncpy_134);
  tcase_add_test(tc, strncpy_135);
  tcase_add_test(tc, strncpy_136);
  tcase_add_test(tc, strncpy_137);
  tcase_add_test(tc, strncpy_138);
  tcase_add_test(tc, strncpy_139);
  tcase_add_test(tc, strncpy_140);
  tcase_add_test(tc, strncpy_141);
  tcase_add_test(tc, strncpy_142);
  tcase_add_test(tc, strncpy_143);
  tcase_add_test(tc, strncpy_144);
  tcase_add_test(tc, strncpy_145);
  tcase_add_test(tc, strncpy_146);
  tcase_add_test(tc, strncpy_147);
  tcase_add_test(tc, strncpy_148);
  tcase_add_test(tc, strncpy_149);
  tcase_add_test(tc, strncpy_150);

  suite_add_tcase(s, tc);
  return s;
}