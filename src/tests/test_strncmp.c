#include "test_me.h"

START_TEST(strncmp_1) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 14;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_2) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, worldj";
  s21_size_t n = 14;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_3) {
  char s1[] = "";
  char s2[] = "";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_4) {
  char s1[] = "f";
  char s2[] = "";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_5) {
  char s1[] = "";
  char s2[] = "j";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_6) {
  char s1[] = "1242434246364377659";
  char s2[] = "1242434246364377659";
  s21_size_t n = 19;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_7) {
  char s1[] = "1242434246364377659";
  char s2[] = "1242434246364377659";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_8) {
  char s1[] = "g124243425";
  char s2[] = "124243424";
  s21_size_t n = 0;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_9) {
  char s1[] = "";
  char s2[] = "";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_10) {
  char s1[] = "@/loa{N)4+{^G)P%+?Jj";
  char s2[] = "sPnXUNS4T.c|`peAJ|1;";
  s21_size_t n = 17;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_11) {
  char s1[] = ".J}3~0)J2e1wq`my@6@3#2dDBu]K7S#-`r?hs|q:Ib_keFxf4";
  char s2[] = "aJc[IC.sStLV|dIP7Z,^xx0`}Xs:/Q-NVd3r5jj8OBJ4EwA1b";
  s21_size_t n = 26;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_12) {
  char s1[] =
      "j2Z)|&6;5SZ{>MZQkMx;@@8ltA)+E}7/"
      "aiI`GxaK^X{*Cgx%nd9,jfgkjg?0_U-(@%en<_i]42";
  char s2[] =
      "dX.e8[c/"
      "[y&=VGH%#%v`;S2)J2KSfU}yMdyU.El)y{FreX96|An)lD`1TE2}1+#~{sF,PP@epU";
  s21_size_t n = 15;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_13) {
  char s1[] = "g/CH1(xU3aq)It7pDQ.pIrfJPVi+EHGQsd:)RP@0XpmRr?:Vu7y^v";
  char s2[] = "@CVAd!6%(AB;]JSTN6^VI>[Ho(F<<Ngyl<x~1;SK%G8h]xviVaY|f";
  s21_size_t n = 52;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_14) {
  char s1[] =
      "_81iZ=xf|gE5saiF0LQ/"
      "[!`u^SMt?iE!hiTl9GpBLSEd%q##*eC>r%Dto$T5JV,]|{|Dt{H+#**QM7oX-KV-&Pm+I:"
      "kZ(c-D~+t+T*k$S!;me+;m]5";
  char s2[] =
      "S=_8_GvcoxXhc%b7{PF$Ugm2=.2U:Jr-*u*:GkRZJjkiQbkf+D-Ist5$M2k<t4,V(4<2{s*:"
      "oZX,we^(XZucQ}DhMSGl79pjS[[TH@8}9D3/?1(sD#";
  s21_size_t n = 109;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_15) {
  char s1[] =
      ";JPMEuN#GJhX7rJn]3=0c2[F#(VdqtYrcod,]!vN:0PsFf]T~:m=rOiiOu!Fc|7n!2sL^<^+"
      "SZi^<,7=EcnuX5_;aW/"
      "aJDnu9uUytuXQ_(yNHSxClu.CCNaC1KnG>k^_z;u7IK>UpF1F%0ybC";
  char s2[] =
      "W5`96>4JY9Egi7[[I7j,@~jIkWoV5yGYK%TKg310srE)9aA>|dFn+Nw.w1Q-Cd#&9!F_L%/"
      "whwj?!,1qk-l,%9$=Mcy<N^Psxc^d4V$zR|.mwk?v<}zQ4%(|XP#j#+!66B.+xOK)Xfc)a?"
      "C*$";
  s21_size_t n = 143;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_16) {
  char s1[] = "zb";
  char s2[] = "8h";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_17) {
  char s1[] =
      "eH4qzW39dTpO!($&./"
      "pQ39iY}3lA^.wo}`nj23ngnUEo]xK^6#%s$9,gN%nE}#[0Zp|tnfNc3Gc1(0%E0AVksL/"
      "5Wf,~U1!!25<[Q:s6R8hg@{8xSZ^K4YYkI)uM[YFW";
  char s2[] =
      "4l%&S{Zgp!#QHOE@r@jK7Xy8rmKhaG#C-H@*vakZla#i)>J,@RB&P]xhn>8<1e<OEJyFUz*"
      "KNjZ1.{wpW9&}#EXZm-?$7*d>|Emi_;mY5?f?NfY.A-XADPz:a/Hhv;W]";
  s21_size_t n = 21;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_18) {
  char s1[] =
      "@%IS&$bLA:e9S,>nRCS#LFMzmCH9xl1*&<~>P$|Gu6Bz}=PbDL]5:/j/"
      "++,&V+Hd~+E}*aE4E}vR0w}G,:U9T(G!QaPe{";
  char s2[] =
      "G$rp}DN$#uoDXL5nH6-Yrp[.(G[}+!iT^BDTFqo+_LE]9k*[eJ6f[wRiHlihq+fY0)<"
      "6W0q5?,VYK)/_:9-?i>5ImJR_v";
  s21_size_t n = 53;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_19) {
  char s1[] = "GSkr-7[qsHF@]L#0d/=fvUZ4<fKX>pBab@:DpK";
  char s2[] = "GdvhMBFRp5P*;z:ab^iWHC[4*28UlgjT8]vt}$";
  s21_size_t n = 15;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_20) {
  char s1[] = "yPxO[x4{Zo.fn&4=d_zJoag$v";
  char s2[] = "Qm8xK@J6:P@hQPo`I,^QS6eeF";
  s21_size_t n = 6;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_21) {
  char s1[] =
      "H#idt22_]_:fm6@rAvv%7hK3Yjf9?X{O(?.>e(l&f4^zBFZ|n$C0%+=Z/tN9GX.j,/"
      "jh{r]dLP.5~mESpLe-Te_QQ,PD@GPn^>Kd[R[J/2b4xaMCCf,";
  char s2[] =
      "(_BC@Tm2{Re@Z{16z7Rz~F$#8aXiRG%XLwYV(!~=2$0vD&j/"
      "(DrvO^qV,`Rg[#Vjb*~N,^+Ht._]^Z};KJ^/.GALg1A{Ono}(YIi_)FnRuc^t/Vpm?Z";
  s21_size_t n = 78;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_22) {
  char s1[] =
      "4::V(2Shz|ICL)l2V7&T~.zl>L.+.w~:{q-j>.<[W`cW%7Se$[*jX%t}<z=G[[%8knD<"
      "M6eaCmYK[bLTvkFm*6f8$4KWmnIH=F1h8;H92R5n(C~QY_>k<}oX;?Tz";
  char s2[] =
      "O3%U$Vl&Mp9qgsmw38).9A^T/"
      "|^ZZ8QvRpAqQK,;NmqAS#v35L0A5VXt#:q)|#eNNoj|@q=+I<[)))piF<~H~g{Qav]BO0*"
      "MzI^y2.&_IyMdPmen<bG00?QY2S<L";
  s21_size_t n = 88;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_23) {
  char s1[] =
      ">4?BK:!2Y2evNB>)ix9Dutt3ZI8DXX+8`uLXdVDOt(B]:N@z7e5Ui5*GU2yS="
      "u3YmFPPtSZrQ_Z_cyg=X>O`@`Fd/CU34qUfi#HJ)5Em`RjCJh<0O>QMH/"
      "itFA,C=JyUQ$P!Sjm$=gjXyP}}o";
  char s2[] =
      "OB$1:H-t[nh~irnF#K3]|O6(Rv$mPnekW;YYHCi5YI,h8k9api>iccaSJO}:{V7`DaXIXe4!"
      "+&FgRo|7T>@F8zcjD*w1qZyCY4}uBS.-1A*jbo-I*Nlj.j%@T_0kOh:O|eOOoV;[Zb)s`[,~"
      "+";
  s21_size_t n = 117;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_24) {
  char s1[] =
      "#F9@}%gXo*x_=jj8U^X<lz/di8DK5ejO98p_HS2-~{[t/"
      "+?0WpP9<pqb^-K[}2K5w>yF$0.dImYOc2S<HF<)mEDI,OMclST6&JgB0j`K";
  char s2[] =
      "~jQB&5ae>YVuyHm{<7~bD[5EaIpdG4Kz{[09XW$I`J4x?bQGaFJ0`tsk0.bY#wuU)tCEi#^"
      "6@$,,tkqr1sN=d`Qs2JV&OFI6k0o7>(S[";
  s21_size_t n = 17;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_25) {
  char s1[] = "KaYlmnBjLMJfXRi^[Qd";
  char s2[] = "el!h/9*fx,>(4mK1a2P";
  s21_size_t n = 7;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_26) {
  char s1[] = "~Zo0R2#v%}<lyaaWh2^MNfQ:8C6YVlU$|?[]ZBUT.=S79f@<P>1[$j+^_@Cn{";
  char s2[] = "(`(XPI{l.o.{Q~(n.+MkMX<Aw>@^gzNs7;ZTVHhF11_7vdE3}LSUPqX{l]P}8";
  s21_size_t n = 61;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_27) {
  char s1[] =
      "*FHXbAV2-rtut*/"
      "p8nok-;E~&s4l8,!Y$c~gZqZt@(=.Udb_*62j2|YM-s$pd+sD%heD<t1v4P~m9_x,==p>j&"
      "X{u3;0z|O_>.C_%-A2?k`dRiX";
  char s2[] =
      "NtZTJ62..>KQ1~QgCXA0U6HmLlzh2B)^k;CGG=}BT*L306K@^mK*94[_Z(BA]DrXaX9%|"
      "eGSWL}$9wV]:}])yY;e=%f^S%`/?fy=w40M^c}S{?m";
  s21_size_t n = 51;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_28) {
  char s1[] =
      "F0;hR6:;Sw`IGc&pgK3y%u),;+4rU5WL:.%59u*)$T|zBr>?`w,Z7jn+AJXU6VGn0WLRw[,"
      "AqTqV;F;rIJfddm]P(!X34x,Gbnj";
  char s2[] =
      "i4Th*s}{i{KIYyYg]8-mw6<(e[k/"
      "o[p9M$wR)_{9pv8fhev!;4~33`=qU6&i2IXJ(?Kp4.gX6=V#+Yy-t+v8mibs|F6Y_!W7Rfp";
  s21_size_t n = 70;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_29) {
  char s1[] =
      "6MsD[R8iS2!TCsE%]_]_{]=>JUz,49$kr4qtsVda.%cmh!2l%fEkE8.F2dM>1)gBIF&"
      "7cXHRg&e>BXWC]g*n#qE~}?dGD)p~<WspJk0kLC=l9@$~jp";
  char s2[] =
      "RsD)O*4aaehu*x5Ny5uN[@R}J@F>bcVmQrN3RUa($2&w}^%;+f*[oN6ewYgpm>|NR^UR@Tf?"
      "f?;mJ.L8]OP:j8z}Ux@l1A&km7@}j7%-ca,ECqZkZX";
  s21_size_t n = 66;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_30) {
  char s1[] =
      ",z?WQP1b7l1o:9o:wy`E4taw(F`XI%y>j(EzvHCZH~+aV3=,H)?fbfIRk9sA]^Ukcrn`wG";
  char s2[] =
      ":Z{bV[bMscd:X9b?UFrI>1Z^~/:AKS+gxDLE$Dw_^a>xTbI[tU]Z,X,`kr$,i#)>G:DP=]";
  s21_size_t n = 33;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_31) {
  char s1[] = "><Cr?Y(PK}L&!_/&A$|zlA*|ai>70OT7Y*YD_~J;;xzCt&k?yPnjf2yD";
  char s2[] = "[rx.EBmZ1C?9]^;)Rcz.D3e484Jt2`*}dy.]8E8~L(HZl?nk-_TuDnA#";
  s21_size_t n = 38;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_32) {
  char s1[] = "mT@<Nxu:(`C3muRX>C$7]=n";
  char s2[] = "[g79A:@=CCmdZ<&c])<w+[p";
  s21_size_t n = 14;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_33) {
  char s1[] =
      "$JuAeSdt(uISu?ig3kfa!@C!:H{>g[wd,@r<|[^Nmxx5NJLJg]#nMIM^h6%A?*ZkjmAp_k{"
      "3cBxmS,?ix/<^KHp`2BY_vyA1`c{{7?Z";
  char s2[] =
      "96d7+E@i1eNa8-pO7bQHi!RD!%1D-lSm)HHpU3fPQWl{MZgb58:VM(-Vhi9Qg.+2iqP+p*"
      "61>GE4&I+Ci6,)xASSEO*|c,<X*Y)Ji<J";
  s21_size_t n = 87;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_34) {
  char s1[] =
      "kEwoo|kU`z[(:>)WbgK~?4Glo}|-uS#*d>bcJr]}u&`AugCsor=OEF#wc7p}YL!ViY+]"
      "R3eZ%:aSdo&hq52SM";
  char s2[] =
      "|eJe9a`yxU}1_D*iqs?nifY9#zI955hu]]B)MZLvvUAK#;.G[]b?g6_vH(GBALBM4dxbuf}="
      "O`6AhdId#s+L{";
  s21_size_t n = 43;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_35) {
  char s1[] = "5DedA!O8gO|xtd,?9hU&@-{qgxL%,9Lf>m>mD_P&N?A/F45$}hn:yz`~zMqA";
  char s2[] = "|Dr~[V/-|7Q=YLDfK(v0M(u.fW/:hU>5+j=}y*>L:1#4#([IYN:~@#:;QPB8";
  s21_size_t n = 56;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_36) {
  char s1[] =
      "iauuB,_feyD.L._Ui9D4c~Xf/"
      "kQt<vZXV&jaix;ad^q.n;np~bH7Qpy$[!KtuRK=WZQX.ExYW[@NOF3}8=>c7J*wa,+%"
      "1JALX`";
  char s2[] =
      "m&sPl<?j0SN,;8&n)>rB/Ci%V]MMNLyB^dOtgY7?BzL.fxKfY[YUfF_rvhl~Cdr+,s3?7/"
      "?JdW[F#[>`@Z4iAE#NxG-#s_&Lhv";
  s21_size_t n = 30;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_37) {
  char s1[] = "9Q]g|r}Njuw>>DXV,R@XyV73=_uY^#qh*`SC3viJ?Xe4f;gj?AQiRiXnd;Lst,";
  char s2[] = "T8iZI1NV)Aak~W4!i1AC6g<__}f@ao8TF^T[@UrCad3<xhrGEg#`b]brhp:,+6";
  s21_size_t n = 11;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_38) {
  char s1[] =
      "D2T&Kc7Jp5&a_oqk?o{?MrUx/"
      "p,UL7zXY7S|!9FF$+uo!:~n}?;<J.y<=1>][7,3M6H>S&.M^8`[D,?9vFrzp?e_fsv-rS!"
      "Jb{jB0x?%Z*:u-?^IL)=wv";
  char s2[] =
      "WOa|ur{FJ6+YQ=[iKt>;`]q/"
      ">b0zw~cI&yHs]JCRh2JPg]6xuodgw0tVT=qRe8^nwhicI}729VMrR19/"
      "&X[12]`P,Ttv73@RNzVi?Do];a$n%u=<1OEu:";
  s21_size_t n = 90;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_39) {
  char s1[] = "0QN3D)*$J_FWX|X}WU7,~x~xy]VW$r7OI9[pPAw";
  char s2[] = "U*dPfmV_#<//A{_Y^bOKpRiVRcIDlJ<UhkoT{(>";
  s21_size_t n = 24;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_40) {
  char s1[] = "A1g/xasJWocxU*&CZu#1mB-8mVl3t5v<L";
  char s2[] = "V`!_Yx.(r-CiovTo2%q(^56B}sPGLkV[f";
  s21_size_t n = 20;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_41) {
  char s1[] =
      "M8K4Mo<D+^eT^5v9AJG3oU$*-if>y-Ct*]CC#y7W(bRL0U<$!uG5y30#x]Kj7[_FQYha,<%"
      "7~T;Vg";
  char s2[] =
      "-Yr<U?Mh1@1,+u(-NVWjh<GtC#aFRkm-msoCU1R5tr%fvmgeych_Yg4-q!;N98FHc9W)"
      "DD7a|=m`K";
  s21_size_t n = 76;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_42) {
  char s1[] =
      "r#DcP:%*-%@kLv,0S_`XC.g|^a/"
      "jzL%4Y7c[f4hJqp_=8?E6Sm8O$Wd;i%}g#I8MGZ{){:$Oj";
  char s2[] =
      "g5O_}W(MmN@+M-iIK4]i!ePQ>J-_yJ$0$@{GwyvQ%{w0wXXRg!n_bqegtjfm&>6-@oU=k,"
      "0NR";
  s21_size_t n = 64;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_43) {
  char s1[] =
      "0gGx+VyQ^huz;&e{HzsSi6V4((^Y/n)ijD[F,+.FIl8xuWSPQ6ud[;3#?AJW_B?a";
  char s2[] =
      "((*#{*>J:@r/8p}v3`y&H~~Hw3fg1w&yYyqj0AR?e2I)DKdDKuL:l|h:}|V2pl3e";
  s21_size_t n = 25;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_44) {
  char s1[] =
      "3i7rjJ9o:DH(BSxikfa[n7]u>Ysf8f.$+p(X@J_{V8*R$Fk[D[=u3eOfuD<8nn;s<"
      "55JyL0IM#VTkKnK|v}RqMEL7MosaG|8[qM+_5|1|q*AlSrA)8t";
  char s2[] =
      "<hpF55}d2Y,nP6XkTuWT=x+o[Z(s*?@AWaLZF1y&>;B`_.q2zzIwNsJ3qH)yL.3mCGb_RPU-"
      "^;{Y_B|wj42xfVK;du3c>UUpmuyKNJ@5^g+NrZe%Zl<";
  s21_size_t n = 108;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_45) {
  char s1[] =
      "+OyNlEXZCraLs*Y{45yR^?~UdiCn1Zz+KuedM}:Yn!Q.%^s&CV2TnC,k*y)6@qAHza<f="
      "PGRBp5VaV8G]u";
  char s2[] =
      "&tt5`DS=g$HRD|>x>oz!sMg~l_5T<+:kmSUtrWp1WXQQ{)pEq!,Qr|oUBe?;M0Y/"
      ".sbjL$5^30/zW1HGE?";
  s21_size_t n = 43;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_46) {
  char s1[] =
      "^ply+gCC8ZK8>.i0:U.elzhs|oPYmsBY+iF/+(Wk!K,wzvmu`p.Wn*.bV<+eXQ@5:9:";
  char s2[] =
      "nxV0&fU0-z-]^Q;B]LMT~L]S~fED.d4d,j$/]j/wfgEf_F`=8ntuq|,S1.B/RdW7:mW";
  s21_size_t n = 39;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_47) {
  char s1[] =
      "?RZG<%ZW.WTzqm`g6B,@L^-W/"
      "{>!)9L~>W*u2bU]O`VPk+1f4fSf}XY-)KbsHA!c~tCY6%B7<?P4E?^sH&-!?t92O9blJmhW."
      "!Cd+!!K#4";
  char s2[] =
      "%r$zBg-,}Dn.69fKKE3lshITJK$&TRgZoni30z,rjAW&-aWqIn_[r)Pr$j$xsJI06&"
      "SEFe8xs*z|,Yl$OaZHqa5$nN4zilmtlDz(MaamxL";
  s21_size_t n = 80;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_48) {
  char s1[] =
      "x,Wq`Y,P3%/Qa/#|WJY%DZ5UPwo=R%``y*&)]xS-LmwsSiq.vh&VA.c/"
      "KUHo}AFQSgp?[Z2an!ZR0eH-IY|?y3}}zf)othIJjMimq=:F";
  char s2[] =
      "cv0w.mfSrAL&Sh_Q}a*engo)KGM4]tP*L!d4O+i:tTDCM2#6&kE/"
      "o%rPV<4,gLi)SNQ&SZY,KhSGu_kLWcd9oN-&}urpb>VN#XJ)=<99";
  s21_size_t n = 70;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_49) {
  char s1[] =
      "4,o}f2CFQ,7Whqu=YL)/"
      "([&KZQE?chXX`%O1E~Zrrdj~)j=Pa*5BG,s6)2[p2?*kn~jbD}VqK+zusXVIT8O.H*zH)*"
      "mpymE/{Xl~wR7{Nqfy`vbW|@#Fl=<+ZsnFkz99j[MK/*^P;8gPwnqU,~@GA";
  char s2[] =
      "@O${2,x=;:@S$!kQ?M?XMK}lmHh;Si<uM}y*jOe{&j+<(%kiO-gobme_;ehuD~4LJMv_mm!"
      "R5jg{(X%UvIx8U8B0`^LO^.rk2f+_9=oMR+Y6@OF}@C7Gx%Z`7;e0k6&waXKE4.g+F~JhXv:"
      "pIjT(R";
  s21_size_t n = 96;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_50) {
  char s1[] = "VwAi[?tx?j(?w/l,4a2!Y7[>4>t_~JjhDJ*7+[?qNGK|G,aa^JEfX^2a]G#ztQ=";
  char s2[] = ":;SGt;TP6l1v,pr<Jf@8$~.F9W1`1e0pT/pG),&R+-%Qn<lslQNDS~~{$E)RWI[";
  s21_size_t n = 30;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_51) {
  char s1[] =
      "q0_]xEf<(8B;{$UR.y_;Ain?BJPfG<!A<r5:?>4Bzb1cdsQ>%24&YUruy::x=tM;BHNAWh_%"
      "@k.U-90b`I=qqn#)T[<K+wn-FKpaP.1d,^}/5f[";
  char s2[] =
      "(5to;R*&XY3;C,G-_&[O<;JC7}XSKu5H5m:0P4KR#0rU(ER[gII^%U3]/"
      "`xIF?wM3-5~C.bgb*L3@Vp:*}vYii}8Px*ibVis3R:k!>(kE/}!C?q";
  s21_size_t n = 36;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_52) {
  char s1[] =
      "O/t]@2]hYu:`lp*,c!?3C>oaN3^3kT@i6`6Wf1v/"
      "m@~$)3)M5iZ,L$c4hRp3%iwh~w<8TemJk:J,";
  char s2[] =
      "4:aM,jwLVTUyskO.L)lZ?aczw|Y2.+]b}y0h[StG{6D0>V#4YPfv.@Sm>ljUO*Lqt?^"
      "Z8SW4C^]R";
  s21_size_t n = 71;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_53) {
  char s1[] =
      "0riW9vBamq4v2t$$kqwNjaf=}{TIGH>Z@,yVRl1JtunhR~X1suu6sSIW&adQw[%TK1jM~Z}";
  char s2[] =
      "Mv)+dT1dzn:{r#1!0.yb7F+:gxPwNz$kX@m^%it@Z]7Hd#`Ti4QQ/U`xi4e=weSiLE*z]r#";
  s21_size_t n = 34;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_54) {
  char s1[] =
      ">}w!M</J/"
      "Fq{!1};0h-I[okR_ijVXHF}DVS,-pvB@SCFbvrsDGlIPQ$Qtbly5caKlrsuZ9wydDv|"
      "dvtJF!q45=,7x*l;p$_qp{&T)P*";
  char s2[] =
      "DBn;(MPx|[/TU#-6$98D_rORb$K6nCqta!7W,9/"
      "*1g0fkMFzOQE0Zl]c.T-kGQ7#=Lya0^~Llq~NNVk<ogeub-X/]n?Pgz!2poO~Xy{";
  s21_size_t n = 84;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_55) {
  char s1[] = "hI_NDTW19K;7UoXgN=}mIj~E-b:Tg>";
  char s2[] = "h~f76};)dQWWG2w54R9bGD1=Iw9`,a";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_56) {
  char s1[] =
      "qjL]NTG9m`EDb3e(3v@)Q$F;#}{UXYA_F,S%xg&WYdtqJ|`W=N*w0K75Gxs)B%sSo:^,}]~|"
      "[1hM|H0Y/#HG#b@Z1]|.$eYyh?q-G`Rr%DT/>,1ea8VO.&i0xiP~TK]EG=pej#.6zHupQ=P";
  char s2[] =
      "~4|VMs}J#E.PbD]36k:qxff_#7)H(Dwme75VR-*|s,C@A7ui4c(Lrp(=>Vc6kCD4U~"
      "nEKEKsee,i2YWk13:Bco)aF)}+^/"
      "0hmLzh(o}aGayh|ayad8,9<4[iP5@sHOe%hDzT;Yf=74+tgRl";
  s21_size_t n = 66;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_57) {
  char s1[] = "-P_KZ5m??iR>VH*BO@=RJAqWCFneCLtw;t9d8*eM*)I`TzZ@X@TJtk(B";
  char s2[] = "DbHK_wp/Ypj9L&/e3j~u!sxKF&`OSpd<]J*n^pXZ)]PT:HmWfWlfIcm}";
  s21_size_t n = 34;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_58) {
  char s1[] = "Hzs~(THKsh(To#pD%kEJ~kYi5N__Y^TpL>>.OGy$dN)<Jb,glo";
  char s2[] = "rV{#H:QeQcR-F2r7+3Piim,?29o6~D2B$Vd0s|<)BGsxXd<]*@";
  s21_size_t n = 16;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_59) {
  char s1[] =
      "`yU9uH|%-M1G@{!mUNiJw%$I/"
      "7NF3_:md;;,P@ATxSm3Wf4O)*`wVl<Bj8^7Eir0wwnjx$J~D$TR_|xkbw>Rv%$wpP&`"
      "IEvR0]u~P#elVX%l9";
  char s2[] =
      "xb]HUH-uTDRuS^qAri}|(r9P]L2xBAPP9ACoiFR7w8!EEZGX)vg{5}%8wN#"
      "j9g07miQUYUjae8%YO^l79~#.LH5/7B3Pb[uI*0FBbAk}8DW!_";
  s21_size_t n = 53;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_60) {
  char s1[] = "[A{T7.lM1a6mm<L,:}SUo{0oU&A[1=%MR6HGBGs|<yx-;;5pZX3eo+C>A.L";
  char s2[] = "t]Q%cyTRgKk8rzSBW0/C.85`rf{PeHNo0#uCK*clwmK:ad=W:bnEzn@6U2,";
  s21_size_t n = 56;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_61) {
  char s1[] = "3T3Z1LazoX{yfniqcGrb&NQxcwPIo}Zzh<]Bo2cRqiDrV<,f~9r.FYczQ6:%dR";
  char s2[] = "p>{z5pIOx)LGE>b|A!6bkmL?|ML2dO-|=xY%naR5^2Mvw#.s,]~_%U(Sxi&<!}";
  s21_size_t n = 58;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_62) {
  char s1[] =
      "7?1dT:ejE;VD06?4{AP;Wj}NKc,4ig}rAy+i_iH-uC]}0bFSKEq-.atD@4d,m~G;((&yq[-"
      "iro[JjdeIn{T6+L#A7aJSDmtuo`hVK;.[:6+*~:Ql)7X!$60^T:xsM[.+!dfw,W*u";
  char s2[] =
      "_j&A01:vo@MRFi=IxflAKitJ|kFDcfB1S8,;kclZ7;f~E{sb[84Drh<(?{^QLdwza0J[rO]["
      "ae2X&PzGg%-8&.H1`_#f1S(UCqc-R9yHn5J_R4Dh`X%lkc>.C;H0;~;Zq^M`Au|h";
  s21_size_t n = 62;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_63) {
  char s1[] = "_;KyKF2FMi_UaTN+y=z&ZfQ-WLZx]<]A-}CfZtXj;kB}q&o$xb]?uul";
  char s2[] = "W4{kcSot(>r^[O=pk7r%GE3#q+cVS00/lL}_C2Ww!rUOzMq=P6-E?}b";
  s21_size_t n = 17;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_64) {
  char s1[] =
      "@Zby/uY5WFJ5+c&[nbfL-i7D>u{M(WFzc!RsI:eH1gGqOVP1;_>TqL/"
      "KdgsA@)E@?cPEnjh5u)D/.KgT$=iW>6TxdzYh3F`ZS:bORy3";
  char s2[] =
      "|_`B#x`@{_*}6<kKdY<90_)*r@-BBE5m+HBGgo+_oX&c3-Ollkf2?4;co&5n]p3*B@:n8q,"
      "q$KsKXmxR#30N`[F$;.oe7L,0&ge|cg}";
  s21_size_t n = 60;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_65) {
  char s1[] =
      "Q52TX3Ub)1y~*T<1DIbMy#.n/2/"
      "3h<m!Gh%_lvHqfV.g^lpI;:C[gtL<3l>dDpyJK,RkZoT~l&#$L7J56+}ZwLvMT1hpJ4";
  char s2[] =
      "e+:})=T~0>6>k#PO)i:(JAi_T|OO<L62kBrsTjHjkC]II&0VE2MKe-{zGNevW;fi`Iug.a}"
      "p(IH-:I/hgvGum-!J=m@:An";
  s21_size_t n = 70;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_66) {
  char s1[] =
      "D(E9UVw9p#=L|{VEyL#+$[fNxd>nud2v#{YLx]Lv=xUT<6`HEQ{5@%ev]/"
      "_>VA+6XK3oT?a}I#nP>7piRI)15T}YEap7(wk5klpJ9*Q*3N&";
  char s2[] =
      "^F%ul5(`W/"
      "FGJMTU~LY5cD?J7X`x#}vl|]e|0|12*jP[|FDyc&kvxKTL*ZgX+W,+q~N:4k$_*=/"
      "R[X4ZxqRdo4w3h53x3B>c,(u)<*Qr.@2";
  s21_size_t n = 35;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_67) {
  char s1[] =
      "Y;0bDJ@l-aE?*l95,iFTtGzGHs@*`%;n<J#sqn.y$}=bdzp^n]_+Oi0_}A{ezJF13e^d-z?"
      "TE3U*,x#s(qK#:crV16/9M?~V4V[8M*NoOU$%b9tI4Ki#dESTB";
  char s2[] =
      "E-.;|dzTi)MamO7A.]MVB}Ucf20F(FTHqD$yKic!>;E5{9niHAkg#j[>swMC3CWWYd:NPv/"
      ",=l6c:3S}X~qQiA(M,A<1fS^kd6TSYYvli+G%>./0dHh].^AxV";
  s21_size_t n = 8;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_68) {
  char s1[] =
      "sc3&{^(s?sA}HE}3Rhuza|WSG2~>E%~7[C$)I8`))VO4_Q%/e*()1d/`Zn`o0BM+o^N6";
  char s2[] =
      "j`Vf(9{tcc+,[R(A.n8g~4!h{,qXjor-$53MFo`-5D<#5kgCXuG]w8LrW7Hr&.?92Y>@";
  s21_size_t n = 27;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_69) {
  char s1[] =
      "WMA4Fq;J0rMPHBtex^.{,x.YDWX+=T/{%6B/xK/"
      "uSgZDmzQk|&hQ9<QK~H25JYS,?|yD.1uDCKW=6ezIsGr;<UgrP9hy36S%S5I?Y`kDJauz4O`"
      "/FdG0CpthYE9W_Bk/1C9~HBe#Tx";
  char s2[] =
      "Qk5aB.5LTJ63HxAJ;A<7Yf|8>%Vm1)#[*}-YT__W@V=;nDE<@B#0DsZ+NlePfK-><iYN]e_"
      "R@o%02;4c>C:`$qW2-7B?B_})6I:q#wC+]M7}c(OT#Mud:lyf$4Y]a-;(|r^/E4JKdQ";
  s21_size_t n = 70;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_70) {
  char s1[] = "g1+";
  char s2[] = "wp+";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_71) {
  char s1[] = "%!D-on[DH5o`[Q3+?";
  char s2[] = "$g+^|X^tsku;SA2z5";
  s21_size_t n = 10;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_72) {
  char s1[] = "S9jfqHnytzM";
  char s2[] = "/sC/Ci9h7zy";
  s21_size_t n = 3;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_73) {
  char s1[] = "3N?l`n,gbKSt6~Y20}[0?>YtZ";
  char s2[] = "BTv?@[%&F>R{=LY6s,si4i6*l";
  s21_size_t n = 9;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_74) {
  char s1[] = "VRJ9S90lFztGV[/et[uD!-AE#~(Ww+4>U$Cm:dyA_<}yw5MU)]ZdWle";
  char s2[] = "{kNuOJ2t9_v[zwq93@Dkj7LvkV9XCfrb8hQRu$Oi0Ib,L8,bevMCiTo";
  s21_size_t n = 39;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_75) {
  char s1[] =
      "rIHZ1;(KG+VvUyY0[<F_>eb=YP=]CkGxvcg81j;UPHK999ndKI=M5ax@XQAZiqUJA5KKK;"
      "0C5FQeEqK@]|e8z";
  char s2[] =
      "<,GvF(18d;5ADyBO$wq!FXeqAnDg)G=vSP*7LZVHi;gBzX7:5AI)*i5=:q3Bv9xWh1K.~](`"
      "qps#o1va5x~3X";
  s21_size_t n = 54;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_76) {
  char s1[] =
      "Ye>G$DrsoYhYp@$O^JV*.oMv3S%d[5~N7}3Ed!Y:2&|~w*kv&SF;03)[{FS8LvaX@A<[Cn{"
      "M&/AidY[tsh/?EeV8F[Ng8*/x$L";
  char s2[] =
      "jTYYrF2oW`:wxt+)Di[[Bo.&0/"
      "|]21R.hM%KQ-3&fq1=6PI*Pf`@:rz>Uiv>zm&d$~?92riRv;5@/W;y/"
      "usZ&7[K9U!tl3-Yo6";
  s21_size_t n = 41;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_77) {
  char s1[] = "=HX1q=^+~g/+#yjrpdnr:t/Kw&?9$_mD0%E6$1OOY>E)u:GB8S^+";
  char s2[] = "9}>]SH8rOf/ry$HHf|:U&i?MSYO>pdw5KPq5]D!{FmFK6j7BfcX8";
  s21_size_t n = 34;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_78) {
  char s1[] =
      "Y%b|J6a2lQdY?K9*@A.W]}r$w?09$)}]#lg9Kkg1w49%)(Ak.b&Bl![+<z|*kvR+m{"
      "OIZ7x3v@HYCb;NFy#oz*X4d}^Ew][&kWlY/!,|7v{U!+L)Sf";
  char s2[] =
      "zF(JZxh5*Vxd`w>,&L>A@x/"
      "MJ]h8g%,*AuFx<Q;cky|o[{7o9%Hs[U#v3ZmvoWzJD4)lvYpmg3u7M.4don~A!cp[H;T_"
      "EqTLu9@!%{|:~4@~wm9YHK";
  s21_size_t n = 54;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_79) {
  char s1[] =
      "EHRA1>z#cM,$_^=X<DGKu.RGA_AEX(J/}i:bD]0|05iD%1Yq>t[{%iOg,gTTsRu/"
      "<@i7-E1c%EXjh@$Yw-6Io#^-UgBxik59l";
  char s2[] =
      "1A$*OW9Btl<=_X6O:/K=DJgiz}mM4HSe]Qs[(!/"
      "*gW?$>SY,6}FJRH===.aBTB(}Jr]}:*T{eZQ;1-c_0_)j{Mt=5h@gx/6R$";
  s21_size_t n = 17;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_80) {
  char s1[] = "J5S:|LV";
  char s2[] = "<t]bd9X";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_81) {
  char s1[] =
      "$-XaC^GFYr{xkd5=$0XHss7csj*B79LP>b{|M.&$|`5MU],X]BgIUeEDAL`x$DAo_ny:"
      "Jwga-J:+kY%~ZaYRJ,V/LQy4r.hQd-?7L^2@vhN458dH";
  char s2[] =
      "JLQo.q>&>LNEf4XR7v6vqc)SG+D/"
      "2Huju;P%%=6KtG0ia3l,S*Jj)fZFmHqP]#z{|s_}%j$89?LELIGjWh}H3:*{vQ?]J."
      "hfNeBc=.Z&zQCbPOIl";
  s21_size_t n = 98;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_82) {
  char s1[] = "{@,CK&jWN::?.j>F<cV`;wn*6sX_/*V%cNne;|7SQIWp*N947eW!#qyw2M@.H_";
  char s2[] = "5,WcoeZL-.%c&P/BA7JF{n*~~l]g#]BRo*>Zr#t2|#O9hP+[AFL8!snQ3yQa;z";
  s21_size_t n = 3;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_83) {
  char s1[] =
      "|(X%Am(.#8R|xnWqtSz~Y)5`J0am#~_CX[6rYB49bcHrkh7#ZOu>.Ojg(X~F=|bV0ej:/"
      "uNy0:AYb4}J,P|4de7h=|n>sk%=sOema*Y4*._:p7&C<>qfPwy";
  char s2[] =
      "w/-84xPNT0xa9qrtcwfObmoEg35:P#k9Nm+VN*])yK`G#ul1DLF/"
      "#qLh.QZ_#lf>4t)F%5rr-o2;p&EK[=o!&e34>p|^X-E$Lm}AzC,P3j!2+U<$JK2NOe`";
  s21_size_t n = 66;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_84) {
  char s1[] =
      "b45DfV?ZCi!`J)MvgRbvkFA%NNMT|3WZoZm;]%7OnI[-^Jx`+0{(dWNLqq}<#J[xV|:^"
      "029T`9k/42)dG(Wc(";
  char s2[] =
      "KeH<5bSCeJ?e$2JY|mJza~e!p52rzYWgO|Ou?ZzXz^{bj<.qST;U4(|sWD8~Zpi_XD>"
      "TKq7Vo<SY*p0w1%zMi";
  s21_size_t n = 11;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_85) {
  char s1[] = "a^.Rh#.4tz7+OAVm{77f%S#REz%F9~>{:ZGfX";
  char s2[] = "n-1Od;)ldN*YT+U3j+M!0HD3I>D4c.jM5vB$I";
  s21_size_t n = 34;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_86) {
  char s1[] =
      "i#$4%=uHE<)4Wq?v.oMq{yR07]DKPfyot~&W_OM+ri7X?IR]hf@FF&O>&y(qhU*367&-"
      "tdxNkA`gv=$t4zUzG<SMu0b~Wj$UF-%HIHxjGrG0G!22ky>[IEMn.c,Y,=k!_@)DSt=1O|j<"
      ",L=$]";
  char s2[] =
      "yn>>^f=AG`~9vb<hg/"
      "-],oL6&notYtoQiBAp7S65A!?KQzr5c8t3%`od1u}XF^h$7+VUjkAQA<3g~PLPkAa3w@u7^"
      "XHb~|b:owS:3d%u5+];S5|6mH5Hlg:#_8A)e4#BSZfSc51/Ce4u+u2Zn";
  s21_size_t n = 37;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_87) {
  char s1[] =
      "l@ggIGR!/"
      "ED*s_b!j2dgE!Vh>;ouSc~*eR3.dqdby@:J6X,8Nxt?yFQ)~r9z[gcrJ_;=*2[49iXsU)8<"
      "bmDwv[!R/T$lu$,!A;5jE_z}?,s=B+[i";
  char s2[] =
      "[!MaBl3W(6ud+&1;>!)6U<;Peh)3`P6+O_o4&Z@ak9K:CN?u,9Ky`e)#3<Nn;:w%%IyG<"
      "NK73kO=#-a%8=`kJ6eQ<EF)KDe)Waqt1!v:kHp9qF(}";
  s21_size_t n = 34;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_88) {
  char s1[] = "bYt1vC2KGD*N)";
  char s2[] = "[s2PM6?NTgo6@";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_89) {
  char s1[] =
      "=%CdJahGCF;vfC6wV*^Ht>q8-V?R]fe}<QoEHS@]ss5k*7vg6Uwd|#aO;15]Vt<Ik?WV.B9("
      "P_5+7?O?Wo1KrhQ";
  char s2[] =
      "@}SszFB>}g#-p1ILr,m2y{GdVwzzwce7e06Li+g2P(u1i)rXgtG~aGz%iMy_6ml.~z`!+x;"
      "gh-_7>+u(7O7&P!<";
  s21_size_t n = 50;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_90) {
  char s1[] =
      ")gHW}eA=84wv/"
      "si>NRV(<i{[M8u%9$;v?YM=s@2Okp{I)Cxr=h-wCAx?^-[CkLILYrzEKs59r/"
      "wvc0q}=R4,UlN&";
  char s2[] =
      "Z32*+HN+mwg8>oSd.80$`av.{Tvql*!t(i9N33b4X;F<4C*OPh^B,Dp_hL>dx.VBFlc7C!@"
      "8m{>dzJ##z=V|W]gS";
  s21_size_t n = 54;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_91) {
  char s1[] = "~54;@/yFx)zlhp|^DjTqEdzli[X9h|gt3/bqW/%lpIMW+~t^4!mI[1s8D;";
  char s2[] = "hVz4YHB/}{OJ}h|P*v*7SFfz;#%)nQ+7c&5D,_JO!ssC7#]rJyyD;^TMiI";
  s21_size_t n = 9;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_92) {
  char s1[] =
      ",iN#V_795x19D?xrm-$u((=lsM:O_JeA$*Qn`HguOs;ueKc)_pjiuaIx{v&r1$yP>29SA`"
      "mBv3?E.d}ytTs-n/,osKxclb6N~aBs!(pNj;tW_qUS=H,WZ{j%&aYE";
  char s2[] =
      "y7w}V;D@Ko=%XoT9FWW)Z~Q5379+xS*!bz,BjY]1iB&,j{#j[G0<ZLCh74M/"
      "{G2yoNhd+h8{lf]CVTc0hgR-e@IeqeidfoRpls?.S_*8CRZdNw@jX,(,WNvXl0jV";
  s21_size_t n = 98;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_93) {
  char s1[] = "(yMQS<{sz0F`vHjzXw`t4Y_ABHVtRm_o$vDV43:T1=Mp3qa`#R}";
  char s2[] = "tb|U!;ktirIk+x52g@tK2cO]a?&mf`UAS:IO+qfC~[5@LNHI}F?";
  s21_size_t n = 36;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_94) {
  char s1[] = "+ZHfhwLnGBk!]3|>(K<%6UzKeF}4^sae2zql$0QlOb,?6i<I";
  char s2[] = "#J(JZ28#C#%wN&6#D_q<25FJC2TA3k%S3NEPFpa?+%#G$9_,";
  s21_size_t n = 29;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_95) {
  char s1[] = "`J>F43!]C3r]NmPNTg!4<rpA`:N2+hk:vdPUKH*:kD0_lY![F^#";
  char s2[] = "(8@OhB?`S0[#pMD9=Nz]^S7,x-$bI3A=Ae7>*-O~d.D_ToxV/_*";
  s21_size_t n = 43;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_96) {
  char s1[] =
      "jFo;mUbo0.ljf9fv-]?Q{,hEX@]DlCZT}?]Ev{E1q+d[VNr]yZEtGl;TuxNx,yG:?Nj1PVy="
      "&,oC1yb(;iFYTEX4!Z?f,(yBpB~I.1?ZPRz2zHf3a4y1>~Wy[LI:A]6:{%k8Q}%@4EPSW-"
      "cG_$e";
  char s2[] =
      "X_}Y:kHZ=v&&_wZJuLOS^eR0B|@&5q@1,w#ghM)iTRy3k?.IWf=7lNUDv78*YtU:J>yBh0]}"
      "pfZTN[*eEr9^vXFo3BL~%:wm0L-w@M_TEQ?LGnPh/"
      "G&$C!tRT@htxokB9BY,3{5I>P[Kps7JR)D";
  s21_size_t n = 144;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_97) {
  char s1[] =
      "%F&t3c0;o;zuXk,c~bcK1Qjb5{,?X]1w3zOvN`$=^WoU|k}NYBHp,=N)GT>i3wA-ljq^E<"
      "a02[]";
  char s2[] =
      "B92f0s$[qePKH9w4#>`QY>N8!u(5=!@-{_{|`DU;br&9KzV49.k%`ors7{N8c;"
      "zRAxAU5xOZU:g";
  s21_size_t n = 41;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_98) {
  char s1[] =
      "l7sS!HuE/-/yWNxy:(,7EHS,i1Y9y.NeZjmz/"
      "ELmV2JExWn.370xGH{ZksZ==74p,FE6#aa^qCyLWTB+lf5nBbbkY0{<G)VU";
  char s2[] =
      "V/c(dsyltD6[zBZ[b-;WLE3_f7>.O1l@DdVx4+{*vmV/"
      "iH+DnE]5qs9#qKfaBwdz4?UK3G-lVWc&A.D)qtKALJtInnb[fW((";
  s21_size_t n = 74;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_99) {
  char s1[] = "[M@km,Y?Iz-&VJBb}C#|*e5BG[g;4Yfl!O=B}4f4D-O&#{U.S}3nR";
  char s2[] = "-Y}~HYp@mol7Px/`vcl}3L.<l.z%Q3.>~S_:zyLw$|CPkPKckdo}@";
  s21_size_t n = 13;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_100) {
  char s1[] =
      "]e?Qiga^EGJIh*s3q<=z3a6o&Ggz2/"
      "eM+:]qA3pHA`*k.J[8;eIc&0OL6,JS)Y^JV$oZ1S^tpsk$7qI=9VB657R5+zFv@#cYH5$@,+"
      "B-b!L%*VM&/IkYwVW,{";
  char s2[] =
      "2W&1u*<aiv.N;7pr55&QDM(&scdN3=h&B$SXvX4EPD0$y/"
      "aI}A;W.lP-{[7oW^r!bc*8Jz=,@=@nG$9mK*sJnf:}f|?hdKN@A/"
      "?ki7K@8|Aq=ompmHh~~XVp0";
  s21_size_t n = 79;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_101) {
  char s1[] =
      "2<;1o<DKtX1*9qr46mBC8(a87&&GDNV?o@V5;B0jo|.<!2q<^FYaNP$+FTl:}e%JneH7=("
      "WTrdF?IBD:~Tn5J,V`y?>TOrrmQUAaY#/"
      "ct(1)3jqB?ksskylSz{1GU+^%z$&N;Io(Q@=f*4/uC:F";
  char s2[] =
      ",6G#h(LHt)kx+**ONcYz5$Vs[xy[3E1ll[Mb9O-pR+y8,raL4*I85a!p5&_h]xy;"
      "a0ZBMKTb%y)jclG*.bZ^oN5o(d%DC|!*&V+}a5HY<#j^=qRF.&:BJf3QGLh8wG[H.*yV$qL#"
      "1tM3[,pGse=";
  s21_size_t n = 80;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_102) {
  char s1[] =
      "m/4MbzMp>2e_K-=|mV?t@9n~~?g/"
      "a^|LEJGh[7lH3lxo~)GG{,}Wy(nkpa~+pD;y>sEHt|nNHM^{q-M@7^Oq_UH{6ZG08^<m+}R?"
      "0HQ{=fq<3QL|$]QmZXdRiDT_$wS#mHcOJ;o#:8hg=m(";
  char s2[] =
      "v2kR&^:uYf55XwG/e=9OXZ$b4-dZ_8FzrJHu;zfKHTB3-Nf@&is3M6AKv-,x}/"
      "(-FjGM[lRC1{,~%Z_/o$a$cetoYJ-VSUx]r`%j|/"
      "tUX+8k(Abf(Ml!Q_6!pNc#+X4zLcc^oOhZoW=Ml7M";
  s21_size_t n = 109;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_103) {
  char s1[] =
      "nNqT<XPbd)q7_uDx3Ko$yT:-ia.X;3DUsr$`!Y%|-=;M!<;>%U_kf.(kqm;)r/GZ@y`B4d{/"
      "b;[bkiz]tA3{`B5hRuL";
  char s2[] =
      "qiKBP;)nHP1Nl9X:u?O7U~GD1pn|:ord1aTO6eg*<Uk]k.a1:kD!^m:|nzD?qA}J>"
      "qtXkV1a@3!XF]!v)cxK/n4^qbw";
  s21_size_t n = 42;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_104) {
  char s1[] =
      "He}dGgiU=H;[IV8;AQdEm32;00;,u3ARVeEq^+I58O7Q.=.^kzD|Z&P:#~K8;8[.PWq1Cd;["
      "}DY~~=k1WW1UWYwcpb?[*Zue_s}`7s^1V`Nd5DrQ%VjLjDhP[az#8T*g2qxcvv26?";
  char s2[] =
      "]dLD,3D)+n)Li7oo<~FPl7u~sj>.6?~kcJDUOsbyTQa|vPne+zyfZwRttDd!}mC;a)xE:-"
      "KdDfnv+h]!O|x!s4_;@Dmp9s_lKn?irvgVu5:4]=`RW}xFgm=4M{S(-Aj-CA[09?aB-";
  s21_size_t n = 87;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_105) {
  char s1[] = "0iVZX~6~l4#d7/fs#)m/q[OQz]PMD[vO";
  char s2[] = "^%{dBLL$74Vk:E)zs;C2EkbBiYRE;FcG";
  s21_size_t n = 9;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_106) {
  char s1[] = "m?";
  char s2[] = "u`";
  s21_size_t n = 2;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_107) {
  char s1[] = "HB):D=aRLu;]TE6<j:U-HCQQQgxjK";
  char s2[] = "eEHZ>.~Cm~2&tDY8zD6fK9u]$hh7>";
  s21_size_t n = 24;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_108) {
  char s1[] = "OK]f[_}o^|IXFGvtS";
  char s2[] = "SgxwbIxi+{#$}rB^o";
  s21_size_t n = 17;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_109) {
  char s1[] =
      "/dXpzK&vbeo@BJW<?,-@:SEmFXE1RAXx%=,J&1NVYv6|}9*g7O[{.3zESacvBu[?bQZyQd_"
      "Dg>/6)VW#{)!97K2M_k-r+mh";
  char s2[] =
      "}[KEFb.Xb=8(h1O;X3eu!|_[YCSmf&ow}tGTMrC[buA]NeHjs%,_L:J!DrvNM$CR!Lq$RH["
      "g_kLJ^{0w3w@#vx1%;dj?681";
  s21_size_t n = 78;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_110) {
  char s1[] =
      ")NJFrmH<El@b0{Xl{PauRdrHzEU0o&PM0rvk([>s1/"
      "!S)?dmfv~F@O6i5F:gGc-[ps!{d[s7kVeL%Mx80tX/0n@gT_H:<b06TK_I(>9oi~M^9h";
  char s2[] =
      "5-)F9VBEIYErPknfe<5P4x0DM3rh]JR_icj{>%rafG}c0?x7)yF6^VksZ6&F&jyixR1M|3%"
      "5&r)?Hjze|4X|X|tyi*NZlkkeGhccT3vO(n{~P*";
  s21_size_t n = 59;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_111) {
  char s1[] = "<6:Bu|GfqnuMROJ9IM";
  char s2[] = "]q~5IZ^(B1Z/8smq9e";
  s21_size_t n = 18;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_112) {
  char s1[] = "Vt{(tTQ.y3fm0";
  char s2[] = ";hj=0qeR&z9p?";
  s21_size_t n = 13;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_113) {
  char s1[] =
      "yS}A#6ly+O73o@JKpJU9L?Dws%~)Ll(;J<&FV$:us0(iE<0!m[R6K,I5q,{z~LMou=}qKy-"
      "X|#q-|f2(}B+z$2M>$ntjeNbS1Ik=VM2^";
  char s2[] =
      "4~P1D{<1LCgXAUBLlrhv<2zfgBu_0C;Dp9zTm;3t(`Gdz8RL;$>.JP()or+$`P(^7|I>v.B="
      ".qkIQWH$._s5KLas:D3sk$f_hr?[?b?K";
  s21_size_t n = 14;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_114) {
  char s1[] =
      "`_@`H~A>JE~^x.x4bw8tSBlr(aMea:n6jLh91M!BZsL9VK_@d247x.hZ:p3iNz~r_an8-"
      "79Ac,)@ZIvpO7sm%0Phg7v";
  char s2[] =
      "z+ks(?T$rw&Q,4[>uq-%~L8UhSbz};Z+dd1Ub#ANqBl0=LZ!DH)NTDc2tI#"
      "PQQaPKykukQbJ:;LN~pa(0;w/IP-3Z[&";
  s21_size_t n = 31;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_115) {
  char s1[] = "NxS8P=hC[&xVg{}+dFhhf3E!S,P;AY_z(^/M2Rh[)}-v~C2#YYi]Na";
  char s2[] = "o!]Als;:>4M:_>xh#M%*v.2ZKKLGp-AS4u40&]VWd@hH}5x|+IBsW*";
  s21_size_t n = 20;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_116) {
  char s1[] = "G}/tc>5TDRH?*#%h;:T!4Cx@Bdbcz%";
  char s2[] = "yieiE[|nHZ<7Z_L8Y.Jd_&3:EoF<ak";
  s21_size_t n = 14;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_117) {
  char s1[] = "1";
  char s2[] = "i";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_118) {
  char s1[] =
      "k@75r,T^rF:[s{CTqC6AJ|^%~7,oSUHg~>HiyfyCo{z*:2XrV4-k;o:GOt#$p,=1%[w("
      "y29qMy?0G~oSJ,4#L(e5ld,Fkb4IN`X%IXjj6F)OkEgjAnJE";
  char s2[] =
      "fim^UV(ieWz}~(,B/"
      "{7E^W[85dUV.^GKoIJtNL#-zb!G=J)Bl_9-h-E<txo!pC~SNSNRh}o7#WY^pP,x=F#q7{"
      "vYg5sYXN1&+/G~jeX>lXgWC#/~eJlz";
  s21_size_t n = 89;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_119) {
  char s1[] =
      "9KdJ%^vt6,2iMA)FVh9KBT|a.&?fo@F!olAHJaL>F6qgu}N0~E&dfRHjLaTllcXY|.Tfbi="
      "th|x]%ifQ)M|q])<Ch[L7`tEiH~%vCfWXDY3&=Z1yTL?3%0OI(3S&`+eMKY3vxKOL";
  char s2[] =
      ":};-@wN#,`iEo{zv>`Ye4K^qT2scj^FW:,jmcn}dIONvJy:C=A6(9z==KRztPte,"
      "DH3kQEPzjzWQP%@hc1|wdOe~*?Q}3F|2oJwR!YlZi7>oD>L)zxm:Xhw+XKC3P7SyVWl/"
      "!qhr";
  s21_size_t n = 16;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_120) {
  char s1[] =
      "tPZ8f<mHdgp+~,}#JnZ=mD-yHqd$=(2[OQ8dlxp0jY4#qzs#c+p.UNv][!tZje{KY{_ktT:"
      "50^%eE(_>3IDnI$mhKMuHYN[~?SnC]ov8:~{~oK`v7M5!WBY:D!";
  char s2[] =
      ":U/"
      "*u2BbS2(dYc=7Lq~,aDmN,_*.4q8^}pUHwSy]T8Q4M8mA3k|5~]t?0IZV<bvifL6GC_9.0c*"
      "cL5dgD2gLGoZ5uIBDU8S[g|:UxJg0X@lQx<.]@n:6B,SqGN";
  s21_size_t n = 46;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_121) {
  char s1[] =
      "@C|p5;~b~hT7aNg]G`RhbY~shx,E%/"
      "gEt~)Bc;q|B{*~Iy#,,l,Gz#(dXf*>oy~xt;#7<hrEg1=`q.gMa2Dqt-xIYUbH&#"
      "P6tWIIrk0~|hd/-p~>:L[37V+AutQgV0c|R#Hm";
  char s2[] =
      "D^_^U3j_<u)i_{>l)9(=|ucIOb6F$[*3-~2sEVQ}VIp-0,/"
      "9IZ&DYq_^Tq[3YBTho1hO!G6jSW%h}5H8^cc(IX=R%by/"
      "Q(WUo>F>l@ej~Whd!{;R:.Q2G2kD0F^?f}|kHRb-";
  s21_size_t n = 95;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_122) {
  char s1[] =
      "mf(5aO8nYlQH-*Gx4|+1LB4+X0pG|YohDZVY8h7h2opp)TC:GrKfX[t~5y/"
      "*Dn~9Mje^5J?Y?d}v_f/ould#=YW@OEs,*sz_xdqv6XPZ3nFebGnqcz|LT";
  char s2[] =
      "-n`be2B+*TGf~muS^Yl0%P`-(<%qdPK+`!oZ&d5mVpgz[.DFC@Y|l6m6DP$]4U>gU0?jhvD_"
      "q:axwe;0Ni@hd:Fbwtpm%Zud%xj6mkwa!_EdxIV2&sLj/";
  s21_size_t n = 42;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_123) {
  char s1[] = "GLyAkB)uu<VrBHq,SJ{d";
  char s2[] = "juQyq>wnMN5EXahelfqu";
  s21_size_t n = 20;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_124) {
  char s1[] = "VPG.A[()1{-31*L,2W?:djy[@?*@,`,/nI[5qhg;a<,jx=Q1OBWj![-)+{Tn5";
  char s2[] = "/]wpfH.BIi1&>hC2p-jGjNqt^Q,m$3FR+|!uU@vLV>N>A7sPgcDGa_YG@]5;S";
  s21_size_t n = 18;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_125) {
  char s1[] =
      "b+O![3zfFp&L|;h6&uAzyP_X,+At#sX@A^{Zt&OtgvICLJ61s5;xE-YpKFB5*n^N33Fl$"
      "2Iscnj[lC^$<PhyaYpmtW([Il?9rR9;Vmo&G9q{P))D{?q7[n3phrLiAc";
  char s2[] =
      ">P%7z%u<SbG[_=_D;k&?.DKrX^z]rK;GubY?YRsFxk&bMBOPuL.Cj<Yt|<U1mEVDf["
      "wrW3oHP@+7S{`jr53c#F[V|,~f]+,|dKmIVr&r3O}gJY&Iuvn42(Ro^bE!IX";
  s21_size_t n = 117;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_126) {
  char s1[] =
      ",APvuJE>1@%$&EqiQ<T53~z=#Pyr*wJA7vHs.*Nom_L~/P0b(UulfIUUkso^uR}tUse-LW";
  char s2[] =
      "#*k6E`t]h{~>L}tj<<e-hW!BHcW:8y/z;%Hr82hz~j(*rS`gmsXt:BlN,?Bcp&;9<(Te}}";
  s21_size_t n = 40;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_127) {
  char s1[] =
      "6Y|S,_`:ye#YK5dF]DplIFMnN_UQFl<HRBqR@b,>7AdI2~6EaMaN`RKuKvI){c`(d/.kid:";
  char s2[] =
      "*RFG$bw#D5QVR.i-Knay(i=)8lN?6s}Xzfc8a0ghfE)~_TvATN+|uAR#9ZXVib|^Q8PQ%:;";
  s21_size_t n = 57;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_128) {
  char s1[] =
      ".4<!:%~cYwak!MQHkc<E3/"
      "ZTEzS?euD,W?uFV^Rc69yrs=+#8_Y&*)fNSKYU|N6~#3Z:5KEMuqtYXaYtnKPwAzUQ;?"
      "fzCK+#i5,cb*h-kc.iJBCUP";
  char s2[] =
      "xd?[wkiigAxA^[TX}$)7CPa+7c4^8ruVHZ:AtU(s:hykr)$>{C.YaIC|dn?MYT2:3!iC|d]"
      "T/CXt<2Jk(`1KBN#V9~=up){LdZiV({$]DQ#@.:FUx";
  s21_size_t n = 76;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_129) {
  char s1[] =
      "%>Sp0.Tvj7QH-|=Om0c0DgD,C`:qXf>bB;lE~n.kpl{3#!;q]c!+k,03+_as=8K.ix4:{j`"
      "AG%E7fZNNR@>Qp,vGNOPaqAV";
  char s2[] =
      "x#O3#j@Er23;6j~L;8q)Ffdk`ZcZn4mIXruD<vJ$<ym&>oSN_AAB)_D9A[a:5L`dTZp3g;"
      "0JvYod@}g/0zM)F5f$EB#n-8r";
  s21_size_t n = 82;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_130) {
  char s1[] =
      ">]bgf}9.BXfEfVWte[*n^h/"
      ":@|.j]|WIoq#6@:b!]1ga6*qlM=uT6-M9Gl3VJ_|rmy`<tET$yU`fOreTci:.4`sEqI.}7<"
      "VN=z([nAQ{,,mc.c<Eq!J2zO19;Nvu7EZc{@A";
  char s2[] =
      "Z&uJ|4{S&t>,[/dz5wk+Ee}!%X3rz;7%V,hK_?^.@.|wckfO~|2/"
      "QY.|l@1CRM%+^:{J<0W}-d&9Hj6:XA)E-kYFvt{[)tHm4!p@5C9.p?*0za*-X_p>^&>bD>X*"
      "C6=!+xl";
  s21_size_t n = 27;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_131) {
  char s1[] = "Lg24-Nr&5_ldTSD#kwx%H9^+";
  char s2[] = "qdu$KlznAl6Cv0]:m3lhek.^";
  s21_size_t n = 8;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_132) {
  char s1[] =
      "&z<RFDw&&CLZ0N;N[B9&3FW.j@LX7mm6Dvd/"
      "iCK,I+<R>oqQCR]JFn$v|9-PP-|g8<S!wa4c@[K1wD//"
      "nOa0w66*&=V-p2>(fMUu0yr|ml7Ou_.<a2!{xH{.b+[v_aw8?2`i";
  char s2[] =
      "oIO=?ooJ}-r>kouA?>P^I2k5$0x<,@1~J@%x3#Y)?&]SHyv_Wt]>yO[~01lR-DWp&*8T[vI`"
      "ZQ<Nkaa*z[nk/G`[.#%Lt,P)h_I|g6^M5CVO=)L)x.w=$]_5_Zi)i!~jo/eQ";
  s21_size_t n = 8;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_133) {
  char s1[] = "U7Z9minV`gT:4!a>!&W68-&zb8/`{tQP,S(H]lkzwQmBY9g_aqHJzbYn=]^";
  char s2[] = "o`2nt^z7Er+vIFq-AEBDEEt*gC-|i76GW2%T>WYGA$C^Km.6xD=<PX>;81A";
  s21_size_t n = 24;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_134) {
  char s1[] = "*2r@-ssOvin";
  char s2[] = ")}-_ln7cqIW";
  s21_size_t n = 1;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_135) {
  char s1[] = "K[V!nTU6`zw(;i&--";
  char s2[] = "`b6t6T,!K;1wCY8R!";
  s21_size_t n = 5;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_136) {
  char s1[] = ";wq^36at9-j-.=S]O5~ai4/(-QX7G";
  char s2[] = "$Vt;TK0A}w,,vX*cC-8i7:?s[X(+J";
  s21_size_t n = 27;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_137) {
  char s1[] =
      "-60[v=*PIU/sxl{2ukzS6xw%LsQpz]-/"
      ";(83vfm]XOR(qjWD%2>8>TCmHfR^92CCO]tps8P-E";
  char s2[] =
      "dazS{$bjD~;!pBW6C.hd[x9~DK)J%a[#yv*h$]GF)I~3!(Q5R%iz?Owi?qZ_BSvT+xeIP_"
      "0ec";
  s21_size_t n = 11;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_138) {
  char s1[] =
      "!}YmXfXV2+:JgUbi6EuoioeMx{N1?2-@Cm&k(l1Qn1NJ`QgvwQEUrmr91kcZjh:6^!6z*";
  char s2[] =
      "N,X*zc_$d=4#_G<d_3B*h=;3tK8et[LZPH@Dd$bMj;+eGVrj>aU|GyT7d)9w#[G3>/Xs@";
  s21_size_t n = 27;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_139) {
  char s1[] = "2?gNLQ*&589Lq)[Th(+{RhUnSPT/7AcJ#loR:F@X!M[TTCMk&9!YLtSbC;A,";
  char s2[] = "i&m#y{~Wc?kk+FkyVZcMY3LdK!CBC=02=t/JX9dB+he1@Z{drHW!~}Y}Cz5}";
  s21_size_t n = 31;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_140) {
  char s1[] =
      ".o[,qI,0J44VcqU}p-mVowZ!@0fri_+|:#*;ThaXxW~CD~W5RPh4s^BtUvEooD)L~"
      "nUxsKJTm/WMEz?BK.H6~=vLru:5tq<mZ?Xr3_`)W^{?Grl,btJQR7>nsLF*_LdVUII|,<4)";
  char s2[] =
      "o|O1@`XFmgy,DnHE?qiM2EbCMeOLZboYGCuUWR0LQCYCC.AMfE$|?_l#^`Wt5}>r|&+"
      "Qo0Wl>w9dI]Bm0mP(xenl0Sc4~4*R4DL;>SJ/&;}[i5G(Ol3ZR~sSj{7U$1,ku~8/G})C";
  s21_size_t n = 132;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_141) {
  char s1[] =
      "g[,eZ^8-ME-(q_,zZ$[:~!n|q#{-;TgYl6Nrw@~7L+v-xQTN8J20{BnE1+*A|ke7f1C;"
      "irgKxDT|?}mfwq-kl%J&Da&ZQF&t}%Y+js<9_o_BO3vK~HnW^>uULiWRbIz>OON!UL~"
      "jgwOk2T";
  char s2[] =
      "6d&ByB)^dx3`zp}w9NYdjp1Y}Dc+/"
      "Yc.{c1NVZBl>{F^nr7&3~W@DS9hqk[DD5[_ICX?]JHED>CsNO64*/{dA&/"
      "l>N6C]v~US>&=Z=Fb!EWmjPm>*3l:|tv{-,/M6MXRC9&NxIYsLQMGqw";
  s21_size_t n = 109;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_142) {
  char s1[] = "hj+y7cb[E4/`;Z(5aw84Xf(";
  char s2[] = "sG}=Dg2=*feK`_U,h5pdYS?";
  s21_size_t n = 9;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_143) {
  char s1[] =
      "~q:iF8&xOH&Wo67OXWe}:}gC_`5M3E}H9EPy,jO$yxYY_H;e=LcE3:WHYfD{(_#)qco*A<%,"
      "zo|#lJqVkdDx?Cayq(";
  char s2[] =
      "g8VhFsfo5*oh!lFR!{_S&:ZG=_+=-R7PxON-|c[YaGZ>=$}8(R;r!1K:!3Bis0Wf-G9u(<."
      "6RqLx%GTzK&W&w-Ws(R";
  s21_size_t n = 50;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_144) {
  char s1[] = "nT_9$Y+#L92Rf,Gub?VMgpTU$u(;DW~lzn5dba#RJ_SD*w%}[v,BU";
  char s2[] = ":?s6pZJzIMYoOY]8Dd_v;YMdAg}``3{5oMXipc=9(e+8>8+gqX&i*";
  s21_size_t n = 46;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_145) {
  char s1[] =
      "9*[9V2jr{ikx[L`DZB`U/kD>^Z~KV!6`VqRPOF5H(4ui=fNP,irUvzdyrICRPN9MYCI3b_";
  char s2[] =
      "u57;Vf{p3a)sh~c7SekrSv5<{Zals|A/cjMXDSk%Ya`c^n[0]5PE$O@efKWbX>G+v;T`]u";
  s21_size_t n = 31;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_146) {
  char s1[] =
      "]@~tE!&up?wy#$w$566WP4Gw=wt06$quqyhqn4%%8pPmc5|9vBDJ|R|%(9~;B;Go)[Y4hBs;"
      "l4UKn?(*_]K^mF$O%!nO`?Q*Ro.nDXu6Z?6h|";
  char s2[] =
      ")d_^?<<TyP:AG}qe4C$sE|wG8T1$2;6Q0RFr(4Sc1-K>t.&Tr3!Ofs)yta323yddS@?I:"
      "ZFe,jbgW,OB)u,5)~;sZ_:;)/`,KdC4IUb;P}1}J";
  s21_size_t n = 20;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_147) {
  char s1[] = "S=I^sv}Pg=.IdoFGiZYtOu1.SsQ;koC1R+sG4oy_e@Z:Fp";
  char s2[] = "!_vu[!NV@.U=3eDs`Au[J//O74fW!m,xe8}&G-]1Y]).q5";
  s21_size_t n = 44;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_148) {
  char s1[] =
      "64?n3JjU(LjkUY;l2]AXrt]E=3Ip{E~:JIUpYs>6OpQdT`=SAh?C^XEhmrCcA~lhGawnS@"
      "lm_D53%v64?EJf@+(C,w;v7/rjpq3(ym[)csMdK(nb4aIpk+=<&xh)VP(=#Y{7`,$pf";
  char s2[] =
      "UIn95v-e[kN4Gnw}f%O(/"
      "Km+=MR[Bvwb=vW7ZxDt:$*,6GV!+mzbfhP?_jvnN:B2$%g=b+;Ks9N%(2rS<i0c5Q],068g]"
      "~}wf&_]}ZEc?LY%B>6Q<R$(g]cO~ylVm;nY]gx5I/DFK";
  s21_size_t n = 59;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_149) {
  char s1[] =
      "1d?xAT.<m}inMiAmcrE$f>H>s<8KxFKYWu)b.4{4XHT]h_;v0X+`{O2Yt|KxHg39;X2";
  char s2[] =
      "CC4cbW@gL*Xxk)z?Aaj06C(LAz+e|a(x*0!}hbmfQC){Lyw$uJ~LWa_v$UMFXE%amJ.";
  s21_size_t n = 53;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(strncmp_150) {
  char s1[] =
      "1d?xAT.<m}inMiAmcrE$f>H>s<8KxFKYWu)b.4{4XHT]h_;v0X+`{O2Yt|KxHg39;X2";
  char s2[] =
      "CC4cbW@gL*Xxk)z?Aaj06C(LAz+e|a(x*0!}hbmfQC){Lyw$uJ~LWa_v$UMFXE%amJ.";
  s21_size_t n = 53;
  int n1 = strncmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_strncmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

Suite *test_strncmp(void) {
  Suite *s = suite_create("\033[45m-=S21_STRNCMP=-\033[0m");
  TCase *tc = tcase_create("strncmp_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncmp_1);
  tcase_add_test(tc, strncmp_2);
  tcase_add_test(tc, strncmp_3);
  tcase_add_test(tc, strncmp_4);
  tcase_add_test(tc, strncmp_5);
  tcase_add_test(tc, strncmp_6);
  tcase_add_test(tc, strncmp_7);
  tcase_add_test(tc, strncmp_8);
  tcase_add_test(tc, strncmp_9);
  tcase_add_test(tc, strncmp_10);
  tcase_add_test(tc, strncmp_11);
  tcase_add_test(tc, strncmp_12);
  tcase_add_test(tc, strncmp_13);
  tcase_add_test(tc, strncmp_14);
  tcase_add_test(tc, strncmp_15);
  tcase_add_test(tc, strncmp_16);
  tcase_add_test(tc, strncmp_17);
  tcase_add_test(tc, strncmp_18);
  tcase_add_test(tc, strncmp_19);
  tcase_add_test(tc, strncmp_20);
  tcase_add_test(tc, strncmp_21);
  tcase_add_test(tc, strncmp_22);
  tcase_add_test(tc, strncmp_23);
  tcase_add_test(tc, strncmp_24);
  tcase_add_test(tc, strncmp_25);
  tcase_add_test(tc, strncmp_26);
  tcase_add_test(tc, strncmp_27);
  tcase_add_test(tc, strncmp_28);
  tcase_add_test(tc, strncmp_29);
  tcase_add_test(tc, strncmp_30);
  tcase_add_test(tc, strncmp_31);
  tcase_add_test(tc, strncmp_32);
  tcase_add_test(tc, strncmp_33);
  tcase_add_test(tc, strncmp_34);
  tcase_add_test(tc, strncmp_35);
  tcase_add_test(tc, strncmp_36);
  tcase_add_test(tc, strncmp_37);
  tcase_add_test(tc, strncmp_38);
  tcase_add_test(tc, strncmp_39);
  tcase_add_test(tc, strncmp_40);
  tcase_add_test(tc, strncmp_41);
  tcase_add_test(tc, strncmp_42);
  tcase_add_test(tc, strncmp_43);
  tcase_add_test(tc, strncmp_44);
  tcase_add_test(tc, strncmp_45);
  tcase_add_test(tc, strncmp_46);
  tcase_add_test(tc, strncmp_47);
  tcase_add_test(tc, strncmp_48);
  tcase_add_test(tc, strncmp_49);
  tcase_add_test(tc, strncmp_50);
  tcase_add_test(tc, strncmp_51);
  tcase_add_test(tc, strncmp_52);
  tcase_add_test(tc, strncmp_53);
  tcase_add_test(tc, strncmp_54);
  tcase_add_test(tc, strncmp_55);
  tcase_add_test(tc, strncmp_56);
  tcase_add_test(tc, strncmp_57);
  tcase_add_test(tc, strncmp_58);
  tcase_add_test(tc, strncmp_59);
  tcase_add_test(tc, strncmp_60);
  tcase_add_test(tc, strncmp_61);
  tcase_add_test(tc, strncmp_62);
  tcase_add_test(tc, strncmp_63);
  tcase_add_test(tc, strncmp_64);
  tcase_add_test(tc, strncmp_65);
  tcase_add_test(tc, strncmp_66);
  tcase_add_test(tc, strncmp_67);
  tcase_add_test(tc, strncmp_68);
  tcase_add_test(tc, strncmp_69);
  tcase_add_test(tc, strncmp_70);
  tcase_add_test(tc, strncmp_71);
  tcase_add_test(tc, strncmp_72);
  tcase_add_test(tc, strncmp_73);
  tcase_add_test(tc, strncmp_74);
  tcase_add_test(tc, strncmp_75);
  tcase_add_test(tc, strncmp_76);
  tcase_add_test(tc, strncmp_77);
  tcase_add_test(tc, strncmp_78);
  tcase_add_test(tc, strncmp_79);
  tcase_add_test(tc, strncmp_80);
  tcase_add_test(tc, strncmp_81);
  tcase_add_test(tc, strncmp_82);
  tcase_add_test(tc, strncmp_83);
  tcase_add_test(tc, strncmp_84);
  tcase_add_test(tc, strncmp_85);
  tcase_add_test(tc, strncmp_86);
  tcase_add_test(tc, strncmp_87);
  tcase_add_test(tc, strncmp_88);
  tcase_add_test(tc, strncmp_89);
  tcase_add_test(tc, strncmp_90);
  tcase_add_test(tc, strncmp_91);
  tcase_add_test(tc, strncmp_92);
  tcase_add_test(tc, strncmp_93);
  tcase_add_test(tc, strncmp_94);
  tcase_add_test(tc, strncmp_95);
  tcase_add_test(tc, strncmp_96);
  tcase_add_test(tc, strncmp_97);
  tcase_add_test(tc, strncmp_98);
  tcase_add_test(tc, strncmp_99);
  tcase_add_test(tc, strncmp_100);
  tcase_add_test(tc, strncmp_101);
  tcase_add_test(tc, strncmp_102);
  tcase_add_test(tc, strncmp_103);
  tcase_add_test(tc, strncmp_104);
  tcase_add_test(tc, strncmp_105);
  tcase_add_test(tc, strncmp_106);
  tcase_add_test(tc, strncmp_107);
  tcase_add_test(tc, strncmp_108);
  tcase_add_test(tc, strncmp_109);
  tcase_add_test(tc, strncmp_110);
  tcase_add_test(tc, strncmp_111);
  tcase_add_test(tc, strncmp_112);
  tcase_add_test(tc, strncmp_113);
  tcase_add_test(tc, strncmp_114);
  tcase_add_test(tc, strncmp_115);
  tcase_add_test(tc, strncmp_116);
  tcase_add_test(tc, strncmp_117);
  tcase_add_test(tc, strncmp_118);
  tcase_add_test(tc, strncmp_119);
  tcase_add_test(tc, strncmp_120);
  tcase_add_test(tc, strncmp_121);
  tcase_add_test(tc, strncmp_122);
  tcase_add_test(tc, strncmp_123);
  tcase_add_test(tc, strncmp_124);
  tcase_add_test(tc, strncmp_125);
  tcase_add_test(tc, strncmp_126);
  tcase_add_test(tc, strncmp_127);
  tcase_add_test(tc, strncmp_128);
  tcase_add_test(tc, strncmp_129);
  tcase_add_test(tc, strncmp_130);
  tcase_add_test(tc, strncmp_131);
  tcase_add_test(tc, strncmp_132);
  tcase_add_test(tc, strncmp_133);
  tcase_add_test(tc, strncmp_134);
  tcase_add_test(tc, strncmp_135);
  tcase_add_test(tc, strncmp_136);
  tcase_add_test(tc, strncmp_137);
  tcase_add_test(tc, strncmp_138);
  tcase_add_test(tc, strncmp_139);
  tcase_add_test(tc, strncmp_140);
  tcase_add_test(tc, strncmp_141);
  tcase_add_test(tc, strncmp_142);
  tcase_add_test(tc, strncmp_143);
  tcase_add_test(tc, strncmp_144);
  tcase_add_test(tc, strncmp_145);
  tcase_add_test(tc, strncmp_146);
  tcase_add_test(tc, strncmp_147);
  tcase_add_test(tc, strncmp_148);
  tcase_add_test(tc, strncmp_149);
  tcase_add_test(tc, strncmp_150);

  suite_add_tcase(s, tc);
  return s;
}
