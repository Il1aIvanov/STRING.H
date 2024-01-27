#include "test_me.h"

START_TEST(strpbrk_1) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "nitupsaR";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_2) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = ",";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_3) {
  char s1[] = "";
  char s2[] = "a";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_4) {
  char s1[] = "\0";
  char s2[] = "";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_5) {
  char s1[] = "";
  char s2[] = "";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_6) {
  char s1[] = "123456789";
  char s2[] = "654";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_7) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "az";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_8) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "za";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_9) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_10) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_11) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "\0";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_12) {
  char s1[] = "";
  char s2[] = "\0";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_13) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "\0asd";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_14) {
  char s1[] = "\0Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "asd";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_15) {
  char s1[] = "i6RU<Rdf9:4XbLW-wnr!xWL`NAffIvQV2Wajx|YK:~rqoysnuP%:KbIZ,4[Xvoa";
  char s2[] = "v";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_16) {
  char s1[] =
      "Zjj~MQ5Vft4CysB[=g9T4K,$Fp4YnZAl*,tT;^4@{1tMozB/"
      "o<;8DB7q}Msl-Me?O62>4c%^I-6X3ag7D^}BeTP0L[`/`lAcSm,Wi{Kf_NuQd;";
  char s2[] = "e";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_17) {
  char s1[] =
      "FE(%^j7IEpvhBELDf{91,!gN^Hc+4`wf*f&fe,US,(jDU2<HCaO1859=dYWVW(G2g]O[@"
      "kYuoM~UuCq<Hd!G[43gTr";
  char s2[] = "3";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_18) {
  char s1[] = "5~z.kJNc2U^zV`iL4_+/swSV6/9";
  char s2[] = "4";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_19) {
  char s1[] = ";jiK>-+I^Lf::OFiDHM4n3u,#>$Lc%?=ht_S~R%syi*t1pw-;;jSLmo096@,";
  char s2[] = "D";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_20) {
  char s1[] =
      "^*^/zbg+i;FkYkbx9Wn^Q1-N~}%Tu!C}>)Y6Mb`R,|~hK[&YuWH7>2>/"
      "muk{]!i}`L$ujDVjsSJV";
  char s2[] = "6";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_21) {
  char s1[] =
      "A{#:qU/"
      "WA~coz.*bPs]iDVxp&f2?28L;R6z;_sVdH4A1F5>|rH)$f+?C8N)`#-|8Oc%:5&Yk?geo[["
      "8|@Xw-6!9*)49++HF9ZGUzAi7w8ly2.sIE<r6D]C{:7=@*4N4nZ7?V6";
  char s2[] = "+";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_22) {
  char s1[] =
      "T*]U`ac,Qzb(AYU<Z&C.pq><$5,OqHR,=^TR%D4m0q4$ch@Qu4+O^u,cYf&,/C5SYRx/6D>/"
      "%!o4Hs)%Zi0#^fgj?Xlo:s_~TGBf?DsE";
  char s2[] = "j";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_23) {
  char s1[] = "wadw4Z/8-yVpF74H&-&q";
  char s2[] = "w";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_24) {
  char s1[] =
      "]9>8A+Y3&|*xmI2KB<lC9{8=2-#OR1q(pU=qrO1N!08+-!Ag(H.gxX7.Ll%`zEm_Cf5KsDG,"
      "tPFaan$|)y[xS-U~g(3d3)#A*05%En$x";
  char s2[] = "-";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_25) {
  char s1[] =
      "U$u2r6!4bszY!U=Jg6BwpTbS@0+@:3@g[A;l&Ii;SKr1d3$HiWQVc95YOc=,F+l~C;"
      "VNAcPw*Ubg70,_Up#:kZ,s6}";
  char s2[] = ";";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_26) {
  char s1[] = "UNsTc>(7~Fy#*K&9";
  char s2[] = "K";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_27) {
  char s1[] =
      "A)xHkoPQh?Jm6!u>41Va^la;]}[MR`azo^FE>oG9e1eYdYpmT0G=EsNo:6s-dG?^tBg;6q1<"
      "KHDJ^-f^9zfq0Y>-=!DGT`u5k[e3sl8P32p``/bSTX2MYQlzn{wm";
  char s2[] = "p";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_28) {
  char s1[] = "G;t9dKEXoZF.o&E`La>m.a";
  char s2[] = "m";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_29) {
  char s1[] = "f*G$*63haq<l6UJ7";
  char s2[] = "l";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_30) {
  char s1[] = ",nJjt!6/*D7mX|a5=v{RP^fcx]eB}2ugp:UeDZ5&ln";
  char s2[] = "5";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_31) {
  char s1[] = "EK@xM6z|?3+JZEj-Ls)A}fS,)x}%rC*KAguO?yr7";
  char s2[] = "}";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_32) {
  char s1[] =
      "kNST|+GiYI)V2a+x8BCiJ$*QN3)^6*pNx9vNxM/"
      "MYby(?I[NjG2:Ls_kPR!tV$K1}i!EPJ?Mau-N3X4<5Io+Xa+orBI0#RsH.nDtT>(&*"
      "MsNi7w^vWTV`jzLw1kUk[Kg]>B:*4[UL1g9,@O)Y)}?,";
  char s2[] = "(";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_33) {
  char s1[] =
      "0Ye;yAz+`#nyM&.=3Dj(VnC+:owQ/N6M(80z/"
      "t3[V_I`yN`l1Urj}XqrwLE<X,I~F{{W?X*a~]BEVRu@?Q@:5[>/lk~mDl<16Bo6(?/"
      "`K+:vQi0dWTr@W*/7!cr9v_%HQ2I3WVt";
  char s2[] = "I";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_34) {
  char s1[] = "#>HL|uV%GC0Zd7Gsv[*d:L{A&$TS?9YB6{c8]&6by=G[0(od9";
  char s2[] = "{";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_35) {
  char s1[] =
      "yVye?`/f^=FB/Tg&xc#YRe(@Qc1xA+[P.gd|ig;4N.G:_n:k?nMi:=qhUw[]E]9&g>xL";
  char s2[] = "A";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_36) {
  char s1[] = "|pp9%VG";
  char s2[] = "%";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_37) {
  char s1[] = ";";
  char s2[] = ";";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_38) {
  char s1[] = "~Uu#aUfM=vNIK0><A;Uu9jA=^Sf@tps)3R&k@^{f%qB";
  char s2[] = "~";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_39) {
  char s1[] =
      "<MW`dMaF(nm|_c@n@u#%l!)@.pnXU<%E45{#M?mH2vo]rFMH*iD5f`&DQhQL#"
      "5ofavaVxMDj;^C,adV9PYUO:|{.w}u1kY@2-cH{]<t`hTjS{2OZ-x/"
      "-I%RFLmr{-JI}Qs$Xz]A~)H<ds";
  char s2[] = ".";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_40) {
  char s1[] = "z!->ZU&hxI$K[+^CQk[/";
  char s2[] = "^";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_41) {
  char s1[] = "_@|z.a~cq~2FFJEH5m]]x$5Rf4!Z,E0M7^9.Xf54)#[RA`.X-cHv)";
  char s2[] = "4";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_42) {
  char s1[] =
      "Y?7a6O2-ul3=_=8ZD4~qle^N{6ZQ/"
      "U72$uLI|K(4d%~r=P<B$UiClw]Y&^v;%4l,9OT*gmX>62oYn?h-`,JNtdC9;w6[wJasA7qf("
      "Qc];5:N8^F<Du1>B]~ztxUwY!@x{2SkL&DmWxK0?AU~Gti";
  char s2[] = "w";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_43) {
  char s1[] =
      ",ygv$I$v$nP>Db(QXVH2[vAsA$S)vlOqBRvK#^77]vJ%hlk23EN<X8+r(_KldZ0EaK:";
  char s2[] = "l";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_44) {
  char s1[] =
      "33J?zGk:}Hqp63[b4ghzwu$AI-JO3=H%@Vx[h*o1RL&=e5$O2QV8isM[x?,!D,%T!V_"
      "9IBKDc~x";
  char s2[] = "3";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_45) {
  char s1[] =
      "$}gD2oacu!yCZ0qPbmb+MG$ppkKMv-w#hkN&n5]X4$.TPE?IIq43(;/"
      "g.a]f~sn<@kj-@NAOXoT<<D_Y>:fE";
  char s2[] = "Z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_46) {
  char s1[] =
      "FaPHou-?dJ,XpLQM0&xn%,w+4cl@D*.~hbSX_V59E%J2Y6`U-tqMpXXGt2c)zd`+"
      "KJFF9gEI6=C+iQ{)aiSj_bOSI`1D5t0FxJ+AZgjn]TMO#45l%%y@>]3[.3CGp&jpZ";
  char s2[] = "X";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_47) {
  char s1[] =
      "C?_4C`cts<Qm3O7?s{B7XU7yzlb(}d.Z6t>*5JNpw4^v|9&-a@no%Ouh2dkEU^;@;byta`-("
      "$M+1~=4c|UD:Sb";
  char s2[] = "7";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_48) {
  char s1[] = "bt>7q[rXL8ZzsVTR.-(V{zuLYFj?36ta=,>9s/R9HCPJlFNv&n~+hd>27";
  char s2[] = "6";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_49) {
  char s1[] = "PNnC";
  char s2[] = "P";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_50) {
  char s1[] =
      "9O7d?$^@NZQEt>bz(gx(phP}]`rS3-)#ETLUBhe6GARp_k/"
      "|K6t&r9zPNS7whF~9UF8,p&m<A>mV/x-h?wG<}s5lx28{<,CLV/"
      "FGDS<<0XU@DH7:HCLaB.IAFxo[";
  char s2[] = "F";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_51) {
  char s1[] =
      "1,u+Sk4$U8cJ(C0m([^&.MrSSZ)py?~kJY>{<!OL~[F;HLXQy=@JjTF!^-_G+ugjbx1,!("
      "DlJ<)QB";
  char s2[] = "u";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_52) {
  char s1[] =
      "&M+?fKGm)^=:m1=4NT_QfxzY1wSNE!64;N9V-Iz0Jr2fQ>$zdX#y#huWE`_2%w5eWj]>,|"
      "rLFBa_,4@Z6x+0hO!9slQLdO!A";
  char s2[] = "Q";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_53) {
  char s1[] = "??wb*/CrJ.6>N0H*f,FB4";
  char s2[] = "/";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_54) {
  char s1[] = "T&6b%4h]qey_Ks:NS6%o{8nO,2Dbg?/N;db>d<qslJI#)9IbeLPI";
  char s2[] = "g";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_55) {
  char s1[] = "C2Kce~3<?TEVLy<$_tbQ1I&VDH~$s5IS9wpTo:X!HbAgm_d/n39HE(90";
  char s2[] = "9";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_56) {
  char s1[] = "hU8$k{2B4K";
  char s2[] = "k";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_57) {
  char s1[] =
      "@}RAGNylKMRv:F=6{pqo>U@L^(G;U{LGay5]I(QvNI0S,xmg62@n4f2gy|ubhi{N1%+7[=Q:"
      "1byvYSrv0eif8d!QXz8TF5#5ObqR1<h5BMD{h%|GE}=n@-0^yw+BFG}q5*3xl/j?vKk7/"
      "<Ms";
  char s2[] = "]";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_58) {
  char s1[] =
      "u:G5-GQ`6^ad(e_k)U9Ew/V`@&A`?^?;%PTV!Kfu(1tB5{l/"
      ":yDpjM5KJMxy*tGB+T2~H*H1Kads?WzuO~Ra0M@Zzm;`DwzjtSfeND42m&EnBCb<0[HB}k,"
      "B-}7[:j-2!";
  char s2[] = ")";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_59) {
  char s1[] =
      "+=H!_1-ZDbi,8Hj$8(N[u*N)Y$kb]*5a&<|3RWF8a7p<W0STGA^-CPZ!G<4$C(<_lP;N}#"
      "zuey:kB>;_H#:IHH6o|*zt8(wV-r&C[{InEVGBB(0UnCghm<sE*VH2";
  char s2[] = "W";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_60) {
  char s1[] = "j~}`wx96q6F_V]SeFEqk<:FvZ.x>YmOF8tJ:B.2niRWj9CK%X";
  char s2[] = "S";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_61) {
  char s1[] =
      "5@c6Jro],ELr0Fd%uFjvdV7*GMeMD@6PqD&RQ7f7ep=p&<5dYv1#w_<P&G$Ik6y8t*Ig+"
      "dpH>h_a*Y{q^h3@_BVDIU(RFU%y-lao}";
  char s2[] = "d";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_62) {
  char s1[] =
      "dB,={qJZDdzaN7#n(IgX=FT(.`n6e@zf&@]ZyMaD*.}c2mAL%^HDc(umURSi2?H^+y,"
      "H2UKB#X`y6qZnbTc.Cj8`bgdX!3TC0zYrXWG<[gC#UKAj}>>";
  char s2[] = "D";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_63) {
  char s1[] =
      "ov,(8y@pkV}g.B/"
      "`SKfd`)[BgwQu!-qAvK4MYtRLBOLU*E5NBbm0XD#M;f[w)uZK{81O9fnjcB[JERHzpi(-"
      "VAM{Y{hX^11/D<tR=,9-";
  char s2[] = "A";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_64) {
  char s1[] = "_x_Kcls";
  char s2[] = "s";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_65) {
  char s1[] = "!9li0?lO%!gOD;qE<Zh=-HE2G2:{30zK-EcC0:C";
  char s2[] = "E";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_66) {
  char s1[] =
      "JZD)cGNq>YFU<l+Z~(Oiv%F_==}1ulg]7CEUo,g5wgSBEcn*RbP(?+Xdih*>)4yF,]={Oa!"
      "1P,3{-Uu%~LVu5K@I?CA)ct#lgaIh-_CuuX|Xq,m3b5@pgOH";
  char s2[] = "5";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_67) {
  char s1[] =
      "uZSn/G,D./ovjw:_u9nN*a$w0b0_5hi/EM`^Q%+bw|k(EeB`<#1Kyr@![Yf_,Y;/C/"
      "w?:]~rJ-x";
  char s2[] = "0";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_68) {
  char s1[] =
      "_&YQ@4YLeB5ci~:8_b?1NIXVoVv[VG&Wvr6Hz_0pe`0WNzi2itG$7w$pDFU=K}Zuj4mu`5*"
      "qoqs_O,?/j*SMw.ov(,pH}$ecPV<{C81.L?ay)z]=UYwHU!-z&Pqr2_X@:I97o";
  char s2[] = ":";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_69) {
  char s1[] = "BN_dD</R$2_]/As$z@C/u+0cRUKm:X71*F~%B=[lS^DrHll=Sut#P@m||}";
  char s2[] = "|";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_70) {
  char s1[] =
      "/F0^A!OpxpQ3PD0+0<`{1%<P[4;)mSQ<8]f:}IP=m.hoNTue;Hm`e25@h?U9|Atar+@i?|J="
      "<3,1c2QPNgd[}>Btl&J+9XN0DDU;#U[J5&,rzauT]q&]|k*3)=85Ov>%hLq$";
  char s2[] = "o";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_71) {
  char s1[] =
      "WVa<Z9tb]%vw>X`d8gUa,P*3LCo9<#C`~*FkKCw/"
      "^D#>XEs8tt!yxz7@uAO+f[EOqt])<gPk|w[=yp3+*]J^c@7snWnx1Vl!?7;>9(%RkV,";
  char s2[] = "x";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_72) {
  char s1[] = "|<O_I4>|R<Y9ulS9,{FZ6IU`Y`|x/jxr[E_{Y*uw5c_rG#";
  char s2[] = "G";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_73) {
  char s1[] = "8N|/*CEY!k.>>_&Q9Nz92h<";
  char s2[] = "|";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_74) {
  char s1[] = "9Pfjak#!4p-AE9*yZpqXYuUk2(";
  char s2[] = "9";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_75) {
  char s1[] = "|.?#T!3brt1qXT&]7";
  char s2[] = "7";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_76) {
  char s1[] =
      "TB.Gu303:dy%Ms[~NWOJN-8Y=EYC*0dUzmo!:=[r1|A~3xko22&yf}PEog9Xz{F7O<9<"
      "GLUMnQZ+=k8>}oT?_y1SIMUpdmja+f]c9U`&D|";
  char s2[] = "L";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_77) {
  char s1[] =
      "Pym_.EtWtJ3O/XHq2WUtS@L&Bhn:a_{XdcN`5T`|mcQ)5fHb$zx#rcE<&FL/"
      ")V@vd7),51Lcwk9>$|&st<c`uu<^Y;8J_V}G";
  char s2[] = "k";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_78) {
  char s1[] = "Y:8ke}ST?4V[neLSow3;knk:g*VIp.d+/>xkkSni";
  char s2[] = "p";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_79) {
  char s1[] =
      "H]EF6}2tBy~k]y>isn,G)EwT8${97Kehgr0TN<W`EA):HklDlwYH+pqVXRHR#7?TUh;"
      "nPKpJJ=.z7,egq/,pXfVTnw-L{Cq-5%o.bDe^$=39V";
  char s2[] = "H";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_80) {
  char s1[] =
      "rRHK/"
      "n<-gdd2`Qfpzc;S)wpZ]E,XDf(t-a!X!u9{oInGa0Zq1!{#[Hdn[1K!uE$(UEF;rnn!}hAM>"
      "}h^$Zf0;cz{7liAzgJq}mNyasT=`ndZ<+RB(Qzl.LHiUd=-{{DEZfpOVH3J3";
  char s2[] = ".";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_81) {
  char s1[] =
      "#=E|3v*ab<[J{&IO;tSDM{JrYI~%4~mKd>Xa(~api8o!O^;*U/"
      "nfuwwTQ#Ti80;yGMRyt[rVC)vOBG{ueMVmO{s,";
  char s2[] = "r";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_82) {
  char s1[] = "mY*^*T>;}4K*6*NTjG(+k";
  char s2[] = "*";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_83) {
  char s1[] = "XG*)bL(gP!:iEn]`549x(CoW&[K9Mz.q^]Q!^AD,wK>4~f3R`$u{():+";
  char s2[] = "9";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_84) {
  char s1[] = "ublfTTYf<GM)<{6~-kpeoOcy";
  char s2[] = "f";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_85) {
  char s1[] =
      "fQpB@rW1s_<y2E%b2a!Pt|T9r:}$i8uZhEP&$#g`4v7Krr$A_82xLA<6*dpd8:]w/"
      ":kJEcuxlSUS{}yXQ{lcr[/"
      "bv%yo]wPto;M?_H^)nbm@4[0H;BE<Cs(j|OlJU#6jQ~ix_x~L$=W";
  char s2[] = "@";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_86) {
  char s1[] = "b?43:w(";
  char s2[] = "4";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_87) {
  char s1[] =
      ">i_jSq;kUqne]|GVuIR$q6e/6ENXD*sS?%)y@8zU{5TpU99!o$B3~BpR,#W$5@F[xy1H$%~/"
      "JR2vf:BDs}Fo{a4gGfUZL3Kx>dN}ut^BTjY4E}#68|f^r;+N,wVngBtp`I1O|r(."
      "JRtjkbaJ2G";
  char s2[] = "_";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_88) {
  char s1[] = "N>!w-:jrsN-jzm>@R:N";
  char s2[] = "@";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_89) {
  char s1[] = "*}HlV:)}d+lvE2@6F*~h@2|.M#";
  char s2[] = "}";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_90) {
  char s1[] = "YrMk^w!8m]e?J+#ha9M/PDVRNBL1t/?QpsOkQW$ya#G@6!Ea/x]B";
  char s2[] = "?";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_91) {
  char s1[] =
      "Zt.a2AyV?%P@8jtJ-f>SBoEI~W~Q./@.|/"
      "P39)]D^Q?Xnav4iPIbcvHgXe2Ppc4G0UgIh85uL/"
      "h;ICe0_MPly(iQFV!lcLMW9e[^*4~^sy9nY/oM8MNTf_APD8z_ao.5-U2pcI4&]x";
  char s2[] = "I";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_92) {
  char s1[] = ")H:)5Bb5k";
  char s2[] = "B";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_93) {
  char s1[] =
      "ylC.d}Y`F`wtgv*`~GR[1)b4%s-2Any8bc?CdWSs.FY,&^eLy}<oF)hlN7wXELm.tUmfY0>/"
      "!=v;$56`c8K<pq>QO+iJw0-;fmp9T;IX|@-QT[9CzOA58dZEw&~eP)yn9]{I;V9n4&WJ";
  char s2[] = ";";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_94) {
  char s1[] =
      "P,w0/"
      "SP<_&50iyV&g~g_F]]l3qCveDITR#^g8Sbx8Uy&Gyp=2rz?DYY%F|DI|.s!]{g0nFRh,@c@)"
      "1aD&%[YS!mi.F^=kv<>8Y{&S>*nH-aWNTvjBC^h5lb{@B<P[A{fA0+SBT;|}gFhmPfV";
  char s2[] = "}";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_95) {
  char s1[] =
      "M=;NE?R4`is/t@;X6>WMOMHc3LX|S!J2L!>d!~&:.P()gLc*)oew)x,#`b1;dp/"
      "bBCuDzB#~u";
  char s2[] = "#";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_96) {
  char s1[] =
      "k~H18i7U{__p.EHf)p#=H0^JJc-}?xv]I!68<q>co0=eWp4Ok?qlI_R*iYceHgYcxO*)s%^_"
      "Bo(#q>kJJ.Pjin?d[c)QLiF)L4#no^CafesNp[jC!U68:o`IMEfdK@udXos?R-t}hAs";
  char s2[] = "d";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_97) {
  char s1[] =
      "uD,H_(YcR(M+-G~FdSpJ$h<:zCb2ekmjt,iUP~TnPd=l44]N^=}G04h7Ai@_{%gzwm&b$%r^"
      "?o?SZd&=fpQ3I+^k";
  char s2[] = "o";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_98) {
  char s1[] =
      "iCvD-hn#3Gdhhe#6D,ApR{P|jL8^$-{+~ipGQr&j2~XS=0k`q[+QVWCtw3;Q4:"
      "MYqZrgnTj6?U1aGu^rWl!]v.SS&u9HI%$FyO!P}Q!aIidDA6VmPXrHFEkD+DKeg>iY{4BOF)"
      "+|O?+";
  char s2[] = "h";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_99) {
  char s1[] =
      "BRL`I{o5W:=X7h.45Pm%NzJbX1oOVVq=G)&wf@~r(^.@K$97|`(E9^]F&Zr05|9(L2((]uF/"
      "Aht9JqE,yT:zIcK5GWWWJD}?Aag07)]o9tPhu;W0/J~DWdnk#kYUkj>*Vw{Dkpp";
  char s2[] = "p";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_100) {
  char s1[] =
      "<hr^I-_Vfd!v!iv@+ze?f}8mk}RZ/"
      "Fl34NGO>wPfZ4P~XrGpgZA-4!^{Ty--5w<%@89AF20}mg9^/"
      "DGpl*.%PJy+^PM!;nhK4CLy+|R^WHwx(!Sg-@0-J%20+XRupCV[g?l,mW[C6<7Uw";
  char s2[] = "+";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_101) {
  char s1[] = "~~!)[n^0qW?wNJs90I:N$xk5i6JG4`&&b?`$tguF)0W3?8JI";
  char s2[] = "$";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_102) {
  char s1[] = "L1Ib_,*}ruIKdBflesTN<WTIZA;cJUs";
  char s2[] = "u";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_103) {
  char s1[] =
      "UU^e^eTP}UZMUtG<NBLZY{R>>B7~D{6!=oORch*5.Emo7D|}>c~0*P:[1]W=NG-1bO^$"
      "T7NWpS-2yBeOHaif5+MVm9Xe?k^0K90WYJ,_455G2XGtMy~_x:N?p)e`/>fX";
  char s2[] = "M";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_104) {
  char s1[] =
      "Vg^U;`55j8Y+,<N=3Um~|Tz8})hG906tUwjzg&$O,nVHpEY,sav>AKeG|v)la.n<$-";
  char s2[] = "8";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_105) {
  char s1[] = "9Y.xXb}%F!m_l!_eg&BUFydyDMo#I>N8:)&!er?qAO:?X";
  char s2[] = "g";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_106) {
  char s1[] = "=o34R)>XzF|XH/E;{!TA4(UMhiC=QInVqNf%to?,ex&f>g6yBH}k";
  char s2[] = "=";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_107) {
  char s1[] = "dXdgq^EG.Xt^t8cU6Jq>0Hp]";
  char s2[] = "0";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_108) {
  char s1[] =
      "UqC^7l?fGY3swpa<mxo.QILvkkN{8)a(ZjZlA;wtpgb}&$~&y?AYd&2|B:*E@4H<;"
      "RuW4aQUTn4JPG}yIcc`~_D%*UPgQw|]BYkYe4*Z5rtK&^irTe@teyXe:+rQ.2X3Ay/"
      "t}oDoB";
  char s2[] = "j";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_109) {
  char s1[] =
      "&M:?%<DMYAvjW3=jR2m]gM[o+k9ZMRb%TRYv^K?Q&J}nU{<JAWFuz+IAX^8+LPKS,"
      "4WYCjCoR}J2Y(B%^;l330*.-.]and&#>-7geRM3R|<,RdHEQ$ib259m}DPy)24!c~o1k7.m_"
      "W=La#";
  char s2[] = "j";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_110) {
  char s1[] = "&~y/yBmdCgGAx/vQy,s";
  char s2[] = "/";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_111) {
  char s1[] =
      "e,tDwnucP<)O}Ad5CI~b)=2X{(E%6l]n)OC[S_7zWoUVV-^Nwv4=l=?w]4[+&nX%t|9%"
      "u1sk#=A+E,8e!T$nWGs0]Poagw%dJU>GAfbV#l~b_;bbFa";
  char s2[] = "t";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_112) {
  char s1[] = "c*yT:W+u<NZgYQhzpf.J+UD=y_a!$S|W>RG,tYM.vLC5?4Qsw>ZrkL{";
  char s2[] = "Q";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_113) {
  char s1[] =
      "iReY8G;pz_nkZ]T1LmDj|Pc}fFb}zCbRDdR&w4*trnI.x0;DPtA?*gGxUCZtvJiGrW49?"
      "ECPg*`&>G@bZpdM3F|HP!MSIcX|0h{siZXcEXUf:$a;";
  char s2[] = "J";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_114) {
  char s1[] = "YPlC=`:[[csL35{edI>[dGbciX]nldR?f`}^KGAE!8s:^FVxrD-!RXhq^";
  char s2[] = "}";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_115) {
  char s1[] =
      "6Y/"
      "lWd?>&+0B9ngFB`av0hQW`bj:pGH@K>bEHU83<WGau+KVT03|-qd$8J[(4lqd#[{KLMJ{("
      "3rV";
  char s2[] = "u";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_116) {
  char s1[] =
      "9XC09;<fI3wY[hT@FzC^;|.7F46,C$6!F@djc;Z;T!oD26Yg5%MfZ5B@RPfT~`"
      "EheD9htNGIO_(/4^MEwGVl_<|xYY1>~@_r(]rpLo0Z|}Uk3Awlj0]50>/"
      "%XLFL?iq^N*ku2o";
  char s2[] = "/";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_117) {
  char s1[] = "GHk^LZY]Tdvt$$vPX|u`;lKh6*2EH&J;9NpB{,tujQHjeazf";
  char s2[] = "T";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_118) {
  char s1[] =
      "5]Fsl-&A8><*/"
      "}Jr#Da`~-Wb6H3;7<!SI(@qf$B]a_kg;ttA=_#PNMh7w?u;h@bBJTPhyhv8*r`~l|!,.Iuo~"
      "kVCK-hxUOETlwq}X!FOP9x3rHKJUWD+ArbcOk#k?jrdD#A5RP~";
  char s2[] = "h";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_119) {
  char s1[] =
      "^zrYFSl3(req`/"
      ".%cjskl.HsVT%#7.IX?{Ofy0U%^[UlTpOT{IIAi^:(saNu4W&.0jx;]^YK_I2?";
  char s2[] = "%";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_120) {
  char s1[] = "@r?7X&r_|o7(Mq~`lhLgytaMd";
  char s2[] = "X";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_121) {
  char s1[] = "2:[o-g7F9x^9hGI3F[fgn6Dry&fp,o)y8Lp+,MI0Mi*$M$.{kbS/`Ts4^7t{SNQ";
  char s2[] = "9";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_122) {
  char s1[] =
      "qQaU}/"
      "mb_~9sbx~Ce8e&Zykec}$)YUCHtce#s;7dh,CoKP];$MX39^1r,aLZ-qIr=V9-lS+D{"
      "iLwdwq(F|X;d%";
  char s2[] = "/";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_123) {
  char s1[] = "Mx^S2wZ4}";
  char s2[] = "Z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_124) {
  char s1[] =
      "wXa<v^|-Bx@DxdE166UsQE:+%Tfq:[I#}QK6gTbd@tem?L??UEmo/"
      "J[.kO{x(u0<mh|B@VkSo2=tyHtR4LeknD8Z}eoMY9!6x&/VKPJSV6XWk9d(yRbbV-,}>";
  char s2[] = "V";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_125) {
  char s1[] =
      "~uX6]~M@-q=aOd;tFikLWMvr[g.9<&ktlCskxMN%h<ZT_^Qv6;`MlVz>?-$:7>Y10Y,!~&~"
      "LfUddLy9=U3M!";
  char s2[] = "1";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_126) {
  char s1[] = "!i%)MX78;/8zW{TEM;Eq";
  char s2[] = ";";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_127) {
  char s1[] =
      "U6b2,Di|M-JXi%Lu&Z|`/"
      "CS.31I}w{C5ig&O#YN.uIm|GdTzQ2GQ)m6>4S.M#^}@nPwzxo4>FFT]Ea)dSPd^~%]3p#TU";
  char s2[] = "i";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_128) {
  char s1[] =
      "u&a73~Lk0nL{dFM6c$5[35&OAF|Dw:V2^@Qhzwap`_YF{8I<(E+d`$/"
      "{|-tcQIalxB$(Sv&FcDW?L_96o&Mm0}@hU<K3a9%2HhqxNh$[#37Z$<Dsaq`SJ>}se~o("
      "WhK[gK*c$:7ayRPr8ru>E8";
  char s2[] = "E";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_129) {
  char s1[] =
      "vMG.I5`wL0!]9`-g}g~9{oZy8fB3H<CWV(S;KuWU~MY*S5tCl$J;Z,x5iT8nM&Dl;L3I";
  char s2[] = "J";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_130) {
  char s1[] =
      "XnwmExz@Z+R}5+pxF3@}KKTLn{@C*m`j/Ocom0|jr-(%Y!wN5?HB1[,!(BQB(p/"
      "l&g4pOa;{z&PZiHwm`9&^ISh.mv<DULuZYaI#%,hzmVL%;dQ-v{Q,}T*hL";
  char s2[] = "%";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_131) {
  char s1[] = "thV,ZQl";
  char s2[] = ",";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_132) {
  char s1[] =
      "W[ae*@`fYk$V63<$tDaI<{K5;#-FPI*S@]xQ8DYkH@t?#5XsH$FL>4~fQPW-gj/"
      "4$,p]BXZ=d,4tAZj0lQs5k[yY!!}PL`8E5s4N>T%v?B^,";
  char s2[] = "8";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_133) {
  char s1[] =
      "YLv`6@J;WOdS%2YcMdsen|muL07huuCrsu<I,_ypLp2mU+SP~{q)zCmDJI?8S9q7c6BUr>"
      "lvJF7u]v^5(mLoFaw>M6]R,e(ae^!gU+.eO>jsm%,[nL](+[mmM(I";
  char s2[] = "R";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_134) {
  char s1[] =
      "8?l}a$jLl[A5g6a@VKw*1yHg`:{X~-p,y&SEyHhCW;#Cx)WvYW[{0sb6=][XG`:@#.1dS";
  char s2[] = "y";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_135) {
  char s1[] =
      "#5m,!Xxf5g,6P?;:SMI%G8|}J:W,E8=6z}d4f()uIBoZ7rN1UN}i%6/"
      ",pa<ZwA,rIj1<^M?#.mrJU~Jy~.if";
  char s2[] = "w";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_136) {
  char s1[] = "t#ROLi-Yx]<5m]Z";
  char s2[] = "-";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_137) {
  char s1[] = "dTj,Y3Im{o740A^Jt0LuzxYFB*bnC@+MA9G;PnDfpppK(KJwr";
  char s2[] = "z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_138) {
  char s1[] = "X+uNUMOd0jT;N";
  char s2[] = "O";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_139) {
  char s1[] = "Y)R/zBKHxP6RG<K`?i}5}Za{.d!";
  char s2[] = "?";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_140) {
  char s1[] = "Z@v3w^*L<ezsj/<=-W][52JFxK2+O";
  char s2[] = "<";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_141) {
  char s1[] =
      "6:]rPc/"
      "ad9V+w{01eS`-au%$Vo5@!]F2d7;;n_%7ae]!r^xZ7lDr?;p=Y|9KAN2lH<8cn~|>u<.8@#"
      "7/r}4nh+=c,=85#MoRT&";
  char s2[] = "=";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_142) {
  char s1[] = "3z*@M`xN5L";
  char s2[] = "*";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_143) {
  char s1[] =
      "_@(L7hzQVv)ACcttF__hUt-L$vGpK|x=+~d]Kf!su[]]/"
      ",?A3x?Lnp2uJ*Pn}!u]#tAueZ$*jl[n#HLzvES;Rr-2mu@@v^K<7FRhHeO@lU|`R2-2FX)"
      "ApM&*(BqVOU$U8e<qyg571C8^iRu0,pt{jG";
  char s2[] = ")";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_144) {
  char s1[] =
      "+{vWXMMT]P|D^yJw,y,p+%|D*xUdIZ?h|&8TIrFl0/"
      "09k5l1wQ=>&$}WR=N{;&T}_Wnv7:ole?hn;>,F8TQi?!5m48F?9u0tj|+/R";
  char s2[] = "?";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_145) {
  char s1[] =
      "P;@pch1Kz]b~[,vvu#_)P>LcK|m&RLZDc9Mxs:U)/"
      "EQNr}E_S93?Y=`Mv[N_6Aem)sRk-o_qIcL9Ko.et,mc^H$u+SkcL/"
      "Ct!O#OVqv$5,5iqz0uL";
  char s2[] = "z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_146) {
  char s1[] =
      "DM0$u{mV4Z+nK+PB4:jE1{@-M,[#A?Wl2YQ/"
      "*j5r_!Fe0ZXn>wP,5f[f8a~H}:S#P)&C;Y5ckL)/"
      "yY~jzO|Ect,wH#AE5y=jQP*:f3OYj*3_{JUHR%w&DwD~D]hSX0wq-zLpg|Cil^]E";
  char s2[] = "Z";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_147) {
  char s1[] =
      "7l]Jk}hTNyaXZVT-e{k@O`q.lasbasVYX,!SPt5YYg?F_r7y.:<YNR4{fBk`7UF`V2f238D/"
      "Xwkg{b;=ce$`hQ%qXeSoS7sM6LP{|ra@^%v$NPm<Y&f3";
  char s2[] = "P";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_148) {
  char s1[] =
      "8m[_4}bHmhJ%Fx/"
      "Tuk>?tzcf:Y^Tr)t0coQ[wlqk!NvO$2xI^|:?C5s;|V2,%`XD^,jG|cinsTU;W8#";
  char s2[] = "T";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_149) {
  char s1[] = "Srg5q+LNh*pLr;NC[c#>?e8?3u<7*X]S|7~4O$8&#c~qWa=Fo@.L";
  char s2[] = "h";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

START_TEST(strpbrk_150) {
  char s1[] =
      "G0Vmd:S/W5$_fe|A#pHqvNT/"
      "gk,=O2?hw9JB5,>;msX4PB6+fFza,OJE{~PbSfs?kLCs+x%obK/"
      "#3iH148o]8`r};vWT!=lYspUZc)SVXZYs1]F9_kwCigpGDhe";
  char s2[] = "X";
  ck_assert_pstr_eq(strpbrk(s1, s2), s21_strpbrk(s1, s2));
}
END_TEST

Suite *test_strpbrk(void) {
  Suite *s = suite_create("\033[45m-=S21_STRPBRK=-\033[0m");
  TCase *tc = tcase_create("strpbrk_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strpbrk_1);
  tcase_add_test(tc, strpbrk_2);
  tcase_add_test(tc, strpbrk_3);
  tcase_add_test(tc, strpbrk_4);
  tcase_add_test(tc, strpbrk_5);
  tcase_add_test(tc, strpbrk_6);
  tcase_add_test(tc, strpbrk_7);
  tcase_add_test(tc, strpbrk_8);
  tcase_add_test(tc, strpbrk_9);
  tcase_add_test(tc, strpbrk_10);
  tcase_add_test(tc, strpbrk_11);
  tcase_add_test(tc, strpbrk_12);
  tcase_add_test(tc, strpbrk_13);
  tcase_add_test(tc, strpbrk_14);
  tcase_add_test(tc, strpbrk_15);
  tcase_add_test(tc, strpbrk_16);
  tcase_add_test(tc, strpbrk_17);
  tcase_add_test(tc, strpbrk_18);
  tcase_add_test(tc, strpbrk_19);
  tcase_add_test(tc, strpbrk_20);
  tcase_add_test(tc, strpbrk_21);
  tcase_add_test(tc, strpbrk_22);
  tcase_add_test(tc, strpbrk_23);
  tcase_add_test(tc, strpbrk_24);
  tcase_add_test(tc, strpbrk_25);
  tcase_add_test(tc, strpbrk_26);
  tcase_add_test(tc, strpbrk_27);
  tcase_add_test(tc, strpbrk_28);
  tcase_add_test(tc, strpbrk_29);
  tcase_add_test(tc, strpbrk_30);
  tcase_add_test(tc, strpbrk_31);
  tcase_add_test(tc, strpbrk_32);
  tcase_add_test(tc, strpbrk_33);
  tcase_add_test(tc, strpbrk_34);
  tcase_add_test(tc, strpbrk_35);
  tcase_add_test(tc, strpbrk_36);
  tcase_add_test(tc, strpbrk_37);
  tcase_add_test(tc, strpbrk_38);
  tcase_add_test(tc, strpbrk_39);
  tcase_add_test(tc, strpbrk_40);
  tcase_add_test(tc, strpbrk_41);
  tcase_add_test(tc, strpbrk_42);
  tcase_add_test(tc, strpbrk_43);
  tcase_add_test(tc, strpbrk_44);
  tcase_add_test(tc, strpbrk_45);
  tcase_add_test(tc, strpbrk_46);
  tcase_add_test(tc, strpbrk_47);
  tcase_add_test(tc, strpbrk_48);
  tcase_add_test(tc, strpbrk_49);
  tcase_add_test(tc, strpbrk_50);
  tcase_add_test(tc, strpbrk_51);
  tcase_add_test(tc, strpbrk_52);
  tcase_add_test(tc, strpbrk_53);
  tcase_add_test(tc, strpbrk_54);
  tcase_add_test(tc, strpbrk_55);
  tcase_add_test(tc, strpbrk_56);
  tcase_add_test(tc, strpbrk_57);
  tcase_add_test(tc, strpbrk_58);
  tcase_add_test(tc, strpbrk_59);
  tcase_add_test(tc, strpbrk_60);
  tcase_add_test(tc, strpbrk_61);
  tcase_add_test(tc, strpbrk_62);
  tcase_add_test(tc, strpbrk_63);
  tcase_add_test(tc, strpbrk_64);
  tcase_add_test(tc, strpbrk_65);
  tcase_add_test(tc, strpbrk_66);
  tcase_add_test(tc, strpbrk_67);
  tcase_add_test(tc, strpbrk_68);
  tcase_add_test(tc, strpbrk_69);
  tcase_add_test(tc, strpbrk_70);
  tcase_add_test(tc, strpbrk_71);
  tcase_add_test(tc, strpbrk_72);
  tcase_add_test(tc, strpbrk_73);
  tcase_add_test(tc, strpbrk_74);
  tcase_add_test(tc, strpbrk_75);
  tcase_add_test(tc, strpbrk_76);
  tcase_add_test(tc, strpbrk_77);
  tcase_add_test(tc, strpbrk_78);
  tcase_add_test(tc, strpbrk_79);
  tcase_add_test(tc, strpbrk_80);
  tcase_add_test(tc, strpbrk_81);
  tcase_add_test(tc, strpbrk_82);
  tcase_add_test(tc, strpbrk_83);
  tcase_add_test(tc, strpbrk_84);
  tcase_add_test(tc, strpbrk_85);
  tcase_add_test(tc, strpbrk_86);
  tcase_add_test(tc, strpbrk_87);
  tcase_add_test(tc, strpbrk_88);
  tcase_add_test(tc, strpbrk_89);
  tcase_add_test(tc, strpbrk_90);
  tcase_add_test(tc, strpbrk_91);
  tcase_add_test(tc, strpbrk_92);
  tcase_add_test(tc, strpbrk_93);
  tcase_add_test(tc, strpbrk_94);
  tcase_add_test(tc, strpbrk_95);
  tcase_add_test(tc, strpbrk_96);
  tcase_add_test(tc, strpbrk_97);
  tcase_add_test(tc, strpbrk_98);
  tcase_add_test(tc, strpbrk_99);
  tcase_add_test(tc, strpbrk_100);
  tcase_add_test(tc, strpbrk_101);
  tcase_add_test(tc, strpbrk_102);
  tcase_add_test(tc, strpbrk_103);
  tcase_add_test(tc, strpbrk_104);
  tcase_add_test(tc, strpbrk_105);
  tcase_add_test(tc, strpbrk_106);
  tcase_add_test(tc, strpbrk_107);
  tcase_add_test(tc, strpbrk_108);
  tcase_add_test(tc, strpbrk_109);
  tcase_add_test(tc, strpbrk_110);
  tcase_add_test(tc, strpbrk_111);
  tcase_add_test(tc, strpbrk_112);
  tcase_add_test(tc, strpbrk_113);
  tcase_add_test(tc, strpbrk_114);
  tcase_add_test(tc, strpbrk_115);
  tcase_add_test(tc, strpbrk_116);
  tcase_add_test(tc, strpbrk_117);
  tcase_add_test(tc, strpbrk_118);
  tcase_add_test(tc, strpbrk_119);
  tcase_add_test(tc, strpbrk_120);
  tcase_add_test(tc, strpbrk_121);
  tcase_add_test(tc, strpbrk_122);
  tcase_add_test(tc, strpbrk_123);
  tcase_add_test(tc, strpbrk_124);
  tcase_add_test(tc, strpbrk_125);
  tcase_add_test(tc, strpbrk_126);
  tcase_add_test(tc, strpbrk_127);
  tcase_add_test(tc, strpbrk_128);
  tcase_add_test(tc, strpbrk_129);
  tcase_add_test(tc, strpbrk_130);
  tcase_add_test(tc, strpbrk_131);
  tcase_add_test(tc, strpbrk_132);
  tcase_add_test(tc, strpbrk_133);
  tcase_add_test(tc, strpbrk_134);
  tcase_add_test(tc, strpbrk_135);
  tcase_add_test(tc, strpbrk_136);
  tcase_add_test(tc, strpbrk_137);
  tcase_add_test(tc, strpbrk_138);
  tcase_add_test(tc, strpbrk_139);
  tcase_add_test(tc, strpbrk_140);
  tcase_add_test(tc, strpbrk_141);
  tcase_add_test(tc, strpbrk_142);
  tcase_add_test(tc, strpbrk_143);
  tcase_add_test(tc, strpbrk_144);
  tcase_add_test(tc, strpbrk_145);
  tcase_add_test(tc, strpbrk_146);
  tcase_add_test(tc, strpbrk_147);
  tcase_add_test(tc, strpbrk_148);
  tcase_add_test(tc, strpbrk_149);
  tcase_add_test(tc, strpbrk_150);

  suite_add_tcase(s, tc);
  return s;
}
