#include "test_me.h"

START_TEST(memchr_1) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'a';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_2) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  int ch = 32;
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_3) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = '1';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_4) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  int ch = 65;
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_5) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'Q';
  s21_size_t len = 10;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_6) {
  char str[100] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = ',';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_7) {
  char str[100] = "123456789";
  char ch = '1';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_8) {
  char str[100] = "123456789";
  char ch = '6';
  s21_size_t len = 0;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_9) {
  char str[100] = "123456789";
  char ch = 'g';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_10) {
  char str[100] = "123456789";
  char ch = '\0';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_11) {
  char str[100] = "";
  char ch = '\0';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_12) {
  char str[100] = "";
  char ch = ' ';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_13) {
  char str[100] = "\0";
  char ch = '\0';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_14) {
  char str[100] = "\0";
  char ch = 'a';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_15) {
  char str[325] =
      "E]yrO-`kB,~4vH~slSmLdFS@-_Jh+YS*/"
      "VI@Xq`,Sxt9xlGhG65tkY=,TYevG=Tl^>#k8xrJ]E>ed34o8eDXg?>dpJw`M}Of9*VK(}"
      "0lx7,{t@N(#kpPy.|8_wB3lGUH";
  char ch = 'S';
  s21_size_t len = 4;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_16) {
  char str[251] =
      "^hKzdEEao^E7~7Uwm5sZuPP$]e[!^^.:XgOAtMB*aMUl!|MNs/"
      "E$w;:(Hc;#zjGc]&t$IkY;dsvIP_K1EI7eghC&KzEIhq;qn~[//DDu6_3mVcrI/"
      "0Xs]Jkh4&X";
  char ch = 'k';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_17) {
  char str[146] =
      "EmsJp~jeFi5jEc:2N=e.t}zYF]t9T<&/"
      "}r$r,uS12[[(Vm?OxnM#3rn>gx*_@o(?TyE7c.Kxs_[@m33]nEs@m!un-ll*`<3/1wsh/"
      "{VQ!{:(IaWR";
  char ch = '>';
  s21_size_t len = 22;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_18) {
  char str[100] =
      "/bWXZpc3N6i]_]IJ$oJs=XWhYf<q=kU-o+QzY@@fv&bFh3-p|!yE7ilprUd2uIJxW[*Sd@"
      "fUG";
  char ch = 'g';
  s21_size_t len = 48;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_19) {
  char str[100] = "*![VtYg6sT[8W`El@>{EUBc{AARnw)@*$e[!Fj>)FE.pWIK)~@z";
  char ch = 'u';
  s21_size_t len = 3;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_20) {
  char str[100] =
      "DJnN}EYN>Nlh:8foXDvB0H1hhbY,B|Dl:]`3TE6Ny:#6E,->~fr48M(rC?mZ$Y{h";
  char ch = '4';
  s21_size_t len = 4;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_21) {
  char str[100] =
      "MQEVR&;&.-O1.b.XypY})7hEoc/"
      "gqCSi;8T&La($XM8KXZ]_YhY.Ll-B{Q!z+3Elu6&]x(FM3S>=[i1HesGMtz@63";
  char ch = '&';
  s21_size_t len = 22;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_22) {
  char str[300] =
      "oD6~]0L)L~{J6,C0ZSZ$}.94D-CQ{8{pg<PI}x5aw@*?7VIO&eKSga:i5<=,N|j]:p*99/"
      "q>XvqSrOCyqJ;E0x_H|y$?,_#nkuQ>aID@U<vvsx2e}n9<=T!:FE#x0R7dX<TB`?9te]o,"
      "zb46";
  char ch = 'X';
  s21_size_t len = 19;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_23) {
  char str[200] =
      "=6k0g!JD?xq:]ZqtT3^=O8R8!yv$dt8I.nW+/:l}*qJM2,Gr,5a8{pX|9u:/"
      "Z08YLw0V^q7$u(7&SG6[K2&4SqRhP?YSbTIVk{)[V@";
  char ch = '8';
  s21_size_t len = 4;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_24) {
  char str[100] = "`]tTnxp}~_dI0fmztx^IyQQh`VQ0rV!d.q?;psdPv>*BRWj//J";
  char ch = 'P';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_25) {
  char str[121] =
      "J^o<J:fM-dPXLU9xu.mR;ZH}V]Mkb&8OE]s3l6p`z5&uT#~yPrdJ/"
      "L]|KuF^~6yjo6z[3xaQu9D-:q>[vS<$@L*eRC!XkAj|e;D7&`>I>&";
  char ch = 'q';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_26) {
  char str[100] = "{vTXA";
  char ch = '|';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_27) {
  char str[100] = "#II0M#_:=s?DHj*ddQ1*R^$Xj($<!DpUvM";
  char ch = '!';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_28) {
  char str[100] =
      "U=isiCTm[PzcSy$G`tJG={?&[v{8yQh+|A+#Ql{rVlhC/1M;aYg,JQ7cn~}y$hlek~xx";
  char ch = '8';
  s21_size_t len = 35;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_29) {
  char str[100] = "KWn=;GXz>usP`;fFqY[@>h$wStVxbg<gI";
  char ch = '~';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_30) {
  char str[100] = "3)ogo4DlJJ`.{M8ABkcA>";
  char ch = 'C';
  s21_size_t len = 47;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_31) {
  char str[215] =
      "Vo>d4mI6MWODb;+8VKmY3.2GtB{q[ij^yNC9By2,~dlrkd!|E>{dT(K4G2H=EYyl5/"
      "0_$3Lcg:d@9Enojn?0e$Bje1*6?=+HA|TU?^cf|/"
      "tOW]*`r8|`U,[;VrFl(y,W-u!Sm@k$Du-]C)`,LN?6";
  char ch = 'k';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_32) {
  char str[100] = ")Hm;hRLE2lz[:o0|2LEXet{drGaXStO/{kWvF$(h7&Du573:;,49dxe";
  char ch = '+';
  s21_size_t len = 50;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_33) {
  char str[123] =
      "|G3TziSNb[xGp(&HqrZ$(ZCGzfK]cY^hz(g/yz-|4&o?EEf2+]T`}SF.`ZGJpgNH4]i4X(/"
      ":Yz9J}Wk<~#s]VKq#Zt,h?O+3z)w8QTP";
  char ch = 'N';
  s21_size_t len = 1;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_34) {
  char str[100] = "vpk~V!7}SM1fQrD3CXTc_[Xm4EoHWW+.SpQ6y";
  char ch = 'e';
  s21_size_t len = 25;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_35) {
  char str[253] =
      "y,VzY8Eq@Q8*c6}8&DTG&$n<hwwaj,J]X.a0EOMgAcbOLaq9~&N>2KZgqOMjM+.0$70DI@#"
      "K1`84E]UZ0UImh:~`YcN2.;JBg{-XM}oHd@lp!HF1@Ay";
  char ch = '7';
  s21_size_t len = 11;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_36) {
  char str[100] = "CN(CmqQ>qo~Zw@LYS3`HJ{";
  char ch = '}';
  s21_size_t len = 20;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_37) {
  char str[100] =
      "r;_L-I?ngA4/"
      "P_$}42J~<n=;m1v[d?]SwSr;!u]@1JHAJ_]4T,)ZJI0v0+d2_(R5G64z2~LD7c<`"
      "ImXZSKE3QDGIhfy}.|UIMA[x";
  char ch = 'n';
  s21_size_t len = 27;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_38) {
  char str[100] = ">l32ArO#o/-(^8P;.,";
  char ch = 'H';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_39) {
  char str[100] =
      "KL::oc>|}/B4qDZI|f^;Bmhl@8*/pQ&r:6^#hLp$jo7C5o0E;JB,u<a$9WxHn7oDb";
  char ch = 'h';
  s21_size_t len = 39;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_40) {
  char str[100] = "L`e";
  char ch = 'L';
  s21_size_t len = 16;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_41) {
  char str[216] =
      "lb^V<IT#7M^?Bk}$nIHgN>[HMg3XG}l5nwg?f)iSa.[&xKU|bL+cJNy}+<yPB)}[WbC4kQ[@"
      "!Uo(jF8z@m$F31v0+a{5C.$c/9+?I[$";
  char ch = 'u';
  s21_size_t len = 34;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_42) {
  char str[100] =
      "D~1YLOM|p@e>X$@6I6680^*UzF6,I{GDjktFgBs6uF9t_4guArg2R1;mY`+]Z;tD";
  char ch = '`';
  s21_size_t len = 17;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_43) {
  char str[312] =
      "5x>Szv4iu)6<$(`Zm$O,|uFY0yA3hV)S|<y+j3wK;xfuN!oxoVwGdIh5=g||;(}cfyim*?_"
      "jYGwK2(pUQ~bu;KG4)$mu!h4j{xHa(9nGHK`m6BIo1SN!rX-IosyM?mqPNO.ETm2Gp/"
      "gCE4+y<;";
  char ch = 'n';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_44) {
  char str[100] = "t<`E,hDxb>Hr@is,^vJ>e5-jM-OY>DS`f&cZy)sYL&BP@Be:fP";
  char ch = 'Z';
  s21_size_t len = 32;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_45) {
  char str[100] = "^5n;BkFAZMTWj-M1(R>c-xrvL&U>r;IE";
  char ch = '^';
  s21_size_t len = 3;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_46) {
  char str[211] =
      "RJX(+:S.4TUr8GP7VBI[pk=xop>75~|(i;*|r1WSr`{DHOR5Fr8Kb7ZDzFe(){ry{SI&VX@"
      "W;tV$^=EA&YpdfVtT*g~z(y;XC1+N|?Eh1_^wzWDDm#73KrgV";
  char ch = 'u';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_47) {
  char str[100] = "H[~60@7w+l,d;p6-#M((DniEhb1&r)uI}6H|";
  char ch = 'X';
  s21_size_t len = 14;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_48) {
  char str[129] =
      "a_|e054xr2[R-4E.0grUV<X1ES{nDQ#i_GXuawPO[YG^#N!;hk5DeTOg*$8dQ66mp;y(@&"
      "GXRWut-VEFr7h#Ha~lAsxgm+V!2eIG@(";
  char ch = 'A';
  s21_size_t len = 45;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_49) {
  char str[215] =
      "(4;+3;xkJK4wOGJdiV&l=eJhQ[/[h_&,g:U(,O/"
      "P=?#*l+*B-KP-GPAp:]+oxWW73UAOjlLZz,,30S::^K+(-pTQ?^CS^jdEIL@.@hm9m]{i{"
      "rE0p#<M+GzndIfquibgJ+ZzRi;oKbWNp";
  char ch = 'G';
  s21_size_t len = 49;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_50) {
  char str[100] =
      "]!*d=6r92M{=Z,s;Cb<pG5=W*2]M5$R7P04aQ}^SDwiO@:T{7zdC,|hJr;Khda:#";
  char ch = '{';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_51) {
  char str[124] =
      "8+,$|XSvi#C@b+oX(w5<Io6gijZ$2!YCY_^rN=1K6&l48?QetoNqW^ZKjqKqs(WmevMC@"
      "6B1;bn!q^yC&yZ&rHLo}/_c:ABb)DT~y~oE6*gNS";
  char ch = '1';
  s21_size_t len = 17;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_52) {
  char str[100] = "]nkM>h>1UXltl{b1W<1lXX6ff?F8rWG}RawU;KET;iNU";
  char ch = 'R';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_53) {
  char str[100] = "A;xLY5}?Zn#rP<9FEm@h?&N,Wg(Svhzkv;DD/sa{G,";
  char ch = '#';
  s21_size_t len = 25;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_54) {
  char str[142] =
      ">tjI-g,wcGUSKy06EO(Rs#=T*&:qPh9{;$ks-/"
      "m=]T#Cj?EWqAx@^>uQ7dY2-?x;XPbAY}ln?-e1`xFOQ2dxBWXtX7d{/M)=XeH=o^8G=";
  char ch = 'c';
  s21_size_t len = 27;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_55) {
  char str[100] =
      "`EfOv1ky/Ql>*W(kXcfEZypPU{6-1S;Zrn!w5!p+RQT+H@Mcqi|hP,M{4uvT6JYXTw/"
      "vuIBl=3gst";
  char ch = '-';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_56) {
  char str[183] =
      "tRL3xH&_;v!Jxs;){---cnY-2,GU{QAA.&.E6H}Es;]G,N}I;OH<:Z^.1adzC&K[m]4s1;l("
      "d0;N4{-&Q?uPjU1{L*ZPoGb~h9J6[u2RxwlzM!@lfPTUQ.:0*";
  char ch = '8';
  s21_size_t len = 13;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_57) {
  char str[100] = "}";
  char ch = '*';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_58) {
  char str[100] =
      "UEGi7/"
      "prSWT`P<[@:VW*4G4[+q0toc|1omLR949S=dxlposV.wYDi^z&Ra4j6da^o_@n3tbKw!?:K`"
      "$(X0.B";
  char ch = '`';
  s21_size_t len = 12;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_59) {
  char str[100] =
      "/Rt(R.WNqC!G.<#e3;NTeNb]>alLc?8s[Q{5BHkpq`z~6eDW*^+LWd:dyIXyku3$m0m.`v";
  char ch = 'w';
  s21_size_t len = 2;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_60) {
  char str[100] =
      "X6<P`f00unZpyYdB-t5[$Jry{fk9Y$oR3gI}:#Izz,ZhB$yvXH_>O-n~JaaR4w&?[rf6x&"
      "lr[C+}Q2";
  char ch = '/';
  s21_size_t len = 28;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_61) {
  char str[100] = "wc<H,W;xQ4nH~Fy8[T^!?";
  char ch = 'b';
  s21_size_t len = 14;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_62) {
  char str[100] = "`e=Z0;}M[7";
  char ch = 'F';
  s21_size_t len = 4;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_63) {
  char str[156] =
      "]*`b0+V-m=bu7VAFB#)5-rZI:y+MI@LL^mLr@oR[Phy^p_<rV(`k!VEK+ys7Qv9~R&x)h|r$"
      "IMyXhP!<k|h,13@vgdr;#LlL]g|_@JOxk&k_+Ol7mcIBw4:N-l[t:";
  char ch = ':';
  s21_size_t len = 49;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_64) {
  char str[214] =
      "!ad_p6+N#aBj+=O31dqW:Zp!DgMxJa[A~wYW,1o=#xlzA?wcyVnB;*~;rvY<sG-UZ;5w+]?("
      "!uoKLz;7&S~f*xD_z&B_t|}f$V?IMS<~J:-fDV+*2+$cK]BfTpLp(l*S_pN:EN=&"
      "kjCmeQnU";
  char ch = 'Q';
  s21_size_t len = 21;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_65) {
  char str[100] = "iiRt*gaMy/*-7u7>3ZB}";
  char ch = 'o';
  s21_size_t len = 12;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_66) {
  char str[100] = "0g)xD#aWO#1Q|)Kux!q_eN0@v`[L";
  char ch = '5';
  s21_size_t len = 10;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_67) {
  char str[100] =
      "oO-mg2/"
      "BjuzZyNM,@HUGx8>{F_:]t8_]Ky{pW#+)O{aelOp3*|=9T13-oDn]1O8QZgD*h6*HcjrxV.~"
      "f";
  char ch = 'h';
  s21_size_t len = 26;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_68) {
  char str[125] =
      "Gns~t#VpAr|!!P_?{yJxfHyXx34etiw^rJ5U@pYA$sq7Bwm^NrT97O-TE]l6[/]gAyvNGV/"
      "6.lV}&[;noqE7/eQwYSI.j|b!:=@96P5rX0DVU/uhD?GYUX+rPgE";
  char ch = '|';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_69) {
  char str[149] =
      "WmrcV,k1l.$yaX]>BI0&UH6`)$hSOpp4~,)D;=bR6mgV8;8$>pqQ$BQeH]puELa8*"
      "DHZnGs7811b|n;N36|x$]+#t{HQzvn!ZQ/],B?_qXO_lk$z/!?G(7[.}4Z}I";
  char ch = 'l';
  s21_size_t len = 11;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_70) {
  char str[100] =
      ";<X3VXx>+d;hScbqbKURk^ZeSs/=3{Rj5m4>/"
      "iBIqhfxU>{JS#,(U*aNe=AwQ&f`(H0F0|!Tc";
  char ch = '2';
  s21_size_t len = 50;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_71) {
  char str[100] = "wyc#6qDOJmidNAK!rIX_GYYT.:qCHf@0RoT>b";
  char ch = 'J';
  s21_size_t len = 8;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_72) {
  char str[100] = "_*hJV5it40m?FiM5PGPOPBF18g@w+ctE3-,4!=+";
  char ch = '$';
  s21_size_t len = 40;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_73) {
  char str[100] = "o~;ru+Db@uH8K_e;nUJ_F$ZD2$VNn";
  char ch = 'O';
  s21_size_t len = 11;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_74) {
  char str[100] =
      "Ks^RKVtRb7Z,;{1X*@=JPq63M]`4;TpK!GM{<r9fY^TQ@|WD7Rz`$#+Swvxg";
  char ch = '6';
  s21_size_t len = 31;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_75) {
  char str[210] =
      "Yj2DpomPwtxfr)i0T4UM_o.e3-q,N):;rinTav=J4bJS-h?m|{@iqb`Q;?q>LkYq_:miv;}"
      "8a4s48^GA5Y=zBx)+J[3WW)XUbZi27<3pD(.jJ?O$H6:#-A9*!qKh(.Ady&sxzFv/F`62QW";
  char ch = 'F';
  s21_size_t len = 18;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_76) {
  char str[100] =
      "J>}M*+M[vKZ#?6G5VO+YN9T?U6T3U8ryJVK!4(qoP+EiG*$jCXPHC@,(weNp9j}0l1|oE."
      "OJ(vac]V/F|~3QW6r$&/0";
  char ch = 'X';
  s21_size_t len = 23;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_77) {
  char str[100] = "//<?~x?*!IpT`RoKQm";
  char ch = '}';
  s21_size_t len = 23;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_78) {
  char str[180] =
      "3>XctOmdGW:v-0U;R|$r:;*e}O.4`n-iyVGp6qX]Cy;nDy;j0whMH#75Q]cr2ZxLu<~@"
      "myLDr-lL9_8SQE+5r71w1letff]Ye!L]t:w_5fsL`B*^2P>y^tb+LGG?Ue!g}m:PN8gllT:"
      "e+";
  char ch = 'c';
  s21_size_t len = 44;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_79) {
  char str[160] =
      "C>TTwuphAkW:!-?i{VOe_GXnFx>dPum]zhtL[o8sFRH!;26d4wMtCk>1?meCMqr[eyHX8[:"
      "yi~ScNgQi7:^g?vG,r?5;_-}JBaORBf_cS?_Au$j.I}}rdcQX_uUWzyC1h|QHZ-/t`J";
  char ch = 'I';
  s21_size_t len = 14;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_80) {
  char str[100] = "L[70bq!}Qi/8?";
  char ch = 'M';
  s21_size_t len = 35;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_81) {
  char str[307] =
      "G:CWXA&8V,$~#GL-A<@UgPynHti0mecVI+UY<f}vP);@G`<Jwo8)p=t]1zak3T1d$.E5uz@"
      "abhG8n2,4@_5m:_AQ+eE0Oigmg1aKQvK:okETM~ox#N,WD9`ki{/"
      "<S6_[UYC]LR<mRgQ,3pg&/oP@s2";
  char ch = 'X';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_82) {
  char str[100] = "EVc+Kt?l>]_";
  char ch = 'w';
  s21_size_t len = 34;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_83) {
  char str[100] =
      ")*~@s|xImhBFF97(wlTcySd|+ZwMS+?znDcYml]Q9dJ[ITZ.,7#n3QMc?*zi7quvb$8C3Z?"
      "6Nx4;52&T6&^,d62";
  char ch = '<';
  s21_size_t len = 45;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_84) {
  char str[100] = "8z_ZM?&F-u:]CSoSoed-y;p}2.0";
  char ch = 'f';
  s21_size_t len = 7;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_85) {
  char str[100] =
      "oC$<_zB6160hcK$4o<}qTPp~{<lgSDHu<o4sAQZh[kKj/"
      "m$59K1j^y}9uxv3f}U0>]|>HCcRR5";
  char ch = 'M';
  s21_size_t len = 44;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_86) {
  char str[100] = "!tB$Nf}D_G<K~|nv64RmlWx:~^+d";
  char ch = '.';
  s21_size_t len = 48;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_87) {
  char str[100] =
      "$D12zOMD~F!g5k9>+Rev1tLQi<*y,8!l_]Tz|96gtb.qf#?6BD2ek#(n!By{4z!lFLhd";
  char ch = '_';
  s21_size_t len = 26;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_88) {
  char str[305] =
      "c`$pg4`HkA(`i)(3O7SU,ZP3KFk.P0W0}BV!dVPtp8q-9iPSoi=V}o1bgxc@y.soC{Q~"
      "ZPrLS94nA<Oh&K~kGdlM_r|4`GV@(_bGz*3TaX),vkc}t6.jr9XUCR_Y?UlSA:CsXB6iTR0:"
      "dx;";
  char ch = '8';
  s21_size_t len = 27;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_89) {
  char str[100] = "JrI`l:jYsWs_N;!^=>Dr#CdZ0";
  char ch = '5';
  s21_size_t len = 6;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_90) {
  char str[100] = "e0usBGd2{bYi6ExfInz>J&d&WRDCK[rQ@@7D";
  char ch = '~';
  s21_size_t len = 12;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_91) {
  char str[100] =
      "QdnZ0}-?_Y|NG5A8&+|d6b/Bh*j#7R-su8KHjMGt@wtK0o=f$x5@7k+TqiH-@`4{Z.";
  char ch = ';';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_92) {
  char str[100] =
      "EPKZkF|kZTSo`*9mAiN]4ppqt8N/mAV]aGrzqZm]ns`t~p@<op[X>z@lcB@(aQM[f3+p62h";
  char ch = 'l';
  s21_size_t len = 48;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_93) {
  char str[100] =
      "Nmy[03:q<HtNhd*v(<9ma<}=)j!3{:tq1l<mA;bG`0qn{o(BdAZ<=;#-,OlfxXcY)n7-T6";
  char ch = 'u';
  s21_size_t len = 38;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_94) {
  char str[421] =
      "aN`u=Vy3Z.mYp$o!Hu0P$>Z/"
      "X>Txi3o9WgtkTxSJQH.zj16@tcS$(!PCvgnAw5h^wiJ7sPL8q,#6Quk!IU`z(IDV^!>RJ.@"
      "8dJWkjAk#uZX]?H07A@uyPXnvXpLWM_~gu(c,8AVND$ddLCp0x";
  char ch = 'L';
  s21_size_t len = 19;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_95) {
  char str[100] = "&u}[ny6`caF>H:~.lM#Y&.q*]1682WqA]GjXfFvHU";
  char ch = 'k';
  s21_size_t len = 17;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_96) {
  char str[100] = "~i9:~086u!nV$9eOPNs#:)uyiN@5/-HW]vuv(H[4`";
  char ch = 'w';
  s21_size_t len = 33;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_97) {
  char str[100] = "WMh&8j#wK`C6q&)QyO![Nh75ECz4T+gn${RyRS";
  char ch = '^';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_98) {
  char str[100] =
      "ibk$S=y^p?lY3>Y=0]gzjwp^(YEz#xk:mq5mMaedaAQ#4_pq)0P~/"
      "d_);Wp}WuYVHuQA)+?D@khgVYQ$h~tdL_Derzad";
  char ch = 'V';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_99) {
  char str[341] =
      "~YtF4(-/Mf$0$tDa2;RAP~(QH97bkX|R!(Siwre8E.0+ZKqjP~;xWA[/"
      "8TMcK1flOr3e[oDH1^>ia8+7J3]*gFdy#rh?6K+KovhjRIcixcy!Th+yc84AMeQD?~W`@VN{"
      "=";
  char ch = '[';
  s21_size_t len = 7;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_100) {
  char str[100] = "dH9sT/Ho{Fj!";
  char ch = '.';
  s21_size_t len = 49;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_101) {
  char str[100] =
      "Y}#otC1z]DSS0hlOsUV=C6y2U3NgS74,Mnxtt{Cu#.E)<v_R<Bpl-@D__[FMTKa^J|wh5J;-"
      "3#W/:S9f0N_";
  char ch = 'Z';
  s21_size_t len = 37;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_102) {
  char str[100] =
      "zaMF>)Zv.Ofx86e0fV^h54!?Iu-lsJ$cFX#/,Y_a<MQ,{hSmy|Ut4?C|rOr#/"
      "pX+R0KvEw>Ko@+^3jg0mI^J<#x?";
  char ch = ',';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_103) {
  char str[100] =
      "pLLLIT*.#|#~KLI^5J9GAg#*#_f7DA75WqJ~Ee]>e07?B?u8!6X5$KyQFK3m,vw6+zw_sy&"
      "D{/oWTsJTmc,_Qv";
  char ch = '-';
  s21_size_t len = 3;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_104) {
  char str[212] =
      "prX<V6cY+9Qh7gYB]t;1UY4f$@QoGSBwQl~HwfBm?!DBe^}N5AuyS(-a1*)4F@jOifKh#e;"
      "1Qv_3CdGw8O>SzWqV{Sgy;mbxbSyFZZ{B$:c`r3$>UvFCz_+fokq-c*g$Aej^4!4K<hx";
  char ch = '9';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_105) {
  char str[100] = "1b::XctR,zpAA5[9g!{xfTO@b$.JV{7GAmAX#?CV2pPsg7";
  char ch = '0';
  s21_size_t len = 33;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_106) {
  char str[100] = "p<8?I(umls(y^*5Y";
  char ch = '7';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_107) {
  char str[100] = "YbTr}+iPWNgxXSe/Z_0l?u17/e@m,{xr`";
  char ch = '~';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_108) {
  char str[100] =
      "<haw]dbq5*EQFRTR/"
      "[m$Sqig1)lbe9F.6}uVwB&xMq.*H@PU<2k<]xvU&BmXsi^Njw4GH{Me";
  char ch = ':';
  s21_size_t len = 3;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_109) {
  char str[100] = ".TQYHrwx]0;_^I~,gdK#";
  char ch = '/';
  s21_size_t len = 43;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_110) {
  char str[100] = ";]_?KU2]@BV&},PWrkz6|g$UOH-XH`$<A|HP^vq.}5Y-&?UYQP)qU!6y2";
  char ch = 'W';
  s21_size_t len = 21;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_111) {
  char str[100] = "bWei.V#fC)H(2Dh^gm(J&l2EAY#GeG;W]jxT";
  char ch = ']';
  s21_size_t len = 24;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_112) {
  char str[100] =
      "R$<qH5<jk2mkULcS+tR3c6?cm0a>LGI[uWyTPL}O[:E2APddot{]KeNMS7;_O5fi~kuE<"
      "V76Yac";
  char ch = 'J';
  s21_size_t len = 20;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_113) {
  char str[100] =
      "bHeG3`W!x!cM6Wxr632Pq:FqFpTow]Hg9BNH~PEsom`5#FM;#z0{2cNths>86E/"
      "B<i_:!wSgPZwlIjszH(rLnW1J";
  char ch = '*';
  s21_size_t len = 35;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_114) {
  char str[100] = "v38ixzNsq)r>B/?ZUB_iXbLVCNu;[*klX.LRn)ykxe>ps,[kXSh*St";
  char ch = 'e';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_115) {
  char str[140] =
      "?PM.:<X@E-x*WZ+9A*xC~ywi~IYG=G;B7eqtzdLpP@0F*1gZI<[7@*`el0ES!S|L=>"
      "ufusulEo&bf2oSJV1n;&0!BG/RFw_PC_dz0)v$";
  char ch = 'N';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_116) {
  char str[210] =
      "1v}!RhPU*r_(x}gv@u;fcaw$BG/<-$ZzU3(Dhs,Rwl;H6?DkgO6U/"
      "5$wq]:ww;S@9(_LMW;wg_?K,&RPyn6BW}d#NS|[$Gty}?4Uf{}U9rI_M=;dx7ns3MXjuPD<"
      "25HpSo6(4]G4kycFR9:8Y5DGH";
  char ch = 'n';
  s21_size_t len = 8;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_117) {
  char str[100] = "raXgzC~3?q.,Fixc=Un4tg2]dQ#+Rdz}Rqc{.?B5E]A|7l@dzDGYF;9";
  char ch = '1';
  s21_size_t len = 4;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_118) {
  char str[322] =
      "q(x)7?@Q8&p=wNu+32x:cD,Z(<;snC$6`j!s-j?+A=cAmiQ14IEYIS`D|DwG<pCb."
      "56yx0zv7D0Yesy?x6=<b*.oh|EK49A:X)7TzhE=Y8uU3pjzl+>z]^#/"
      "yNjt#R)yr7^NpFBPTiVJrH+W*;Bjit";
  char ch = '$';
  s21_size_t len = 25;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_119) {
  char str[221] =
      "Fy7Wlw@<[Eiw1G68W{#G5{jAtBlwFqR?A/"
      "fTq)?6on=8v9s[CSOb#TS:3r,zZ*VvggSzOukU|5aC/"
      "w={Rm,IPc)wxjaMOgo9WNpmGh7b##J)bH1-ngH89SEzEi{_e8e6OVyqvZef*1^<";
  char ch = '$';
  s21_size_t len = 32;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_120) {
  char str[100] = ">,Q5iSZMGsIMGN>l/A";
  char ch = 'v';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_121) {
  char str[100] = "-je&mJJs";
  char ch = '8';
  s21_size_t len = 48;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_122) {
  char str[100] = "[etuXb402~&XOh*3v;fJp_PqK2GI)5e(-=d[>z)3-]";
  char ch = 'X';
  s21_size_t len = 35;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_123) {
  char str[100] = "(NK};pDlv#4WxD36yW!Y@d;";
  char ch = '!';
  s21_size_t len = 32;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_124) {
  char str[100] =
      "!Q-Tq1yM.rJ^a16pT^f)`>0*Vd9I,XnJlsS^C^Smm=;v:qbI<SqidAnbj<OcvXIz(V4R";
  char ch = '9';
  s21_size_t len = 41;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_125) {
  char str[100] =
      "fGfpq*7Skg>i8v8AiY)CT1BPQ6Q_*XWBH!+G?Sbe*pjyK;tKK7;K=2e5bd$$3G[G>1M@qt."
      "lwof@Q{,&Fj.aUPd01Y";
  char ch = 'k';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_126) {
  char str[100] = "-1_ZMc@zj/z7]jLowc]*JnD5M#";
  char ch = 'f';
  s21_size_t len = 35;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_127) {
  char str[100] = "6YP_SigwL&W)[}+`K`^`GnfdWS~Cznbgln+56HP_^";
  char ch = 'R';
  s21_size_t len = 24;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_128) {
  char str[210] =
      "L=g;gmJYb>*TeuaN;py?vl:WyP].KNS<}afnnJdxM|KU[QbYz&;k132Xa1Hd[l)/"
      "a+!I<bw*5@2kIPTI-#BmD_iih8t<cN)1.O(P[*wM4}5!i(VzU.:g?~D,$;/"
      "np~2P`neVj<6YQ";
  char ch = 'z';
  s21_size_t len = 40;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_129) {
  char str[100] =
      "[d3}s!7vkRw*yJ2K=V$JSUz@s$<,b0O:f6#?a;1*xB$>/"
      "RKDr7,y6b~{^{2y?O=BIc_>{^~eO8+ctn}2[,}4(Im";
  char ch = '&';
  s21_size_t len = 39;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_130) {
  char str[100] = "GYDnr:`c;6-aR/X>qXP,PQ{7?|nR;{jv*KR#|~E)}4th;=[p*NG/2>zL,i";
  char ch = '$';
  s21_size_t len = 26;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_131) {
  char str[100] =
      "z0}m:_QM[oEhT}i|SC2fb]114bIb6]x#th)[a?GKDNr(zRBc@Wz5{2ln&vX]L*S)g1/"
      "+ePwouvB^D";
  char ch = '`';
  s21_size_t len = 50;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_132) {
  char str[130] =
      ";N.?S!f({Pasv0yneNv:{b7yp||3V{BXD<_t3uN^vD.U=:)`:Sq)+ptWeY8!XTQ+vXiA+i__"
      "/669[St#tfH*6.V{]QF1rb(jot?{lhZnYv";
  char ch = 'e';
  s21_size_t len = 24;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_133) {
  char str[145] =
      "{M-hYGHu=+h;#y|Bn*iG16x}zLm=o~tud[qVI-:j3y@]SbKer+@q()q$HOp@)0J0>-ra;O@"
      "z,p&mG@)#,R8qW;1PxWy|D-R=#b<*h)&IaLRCl!$`-:_+$hY+c<@J0O{F";
  char ch = '8';
  s21_size_t len = 42;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_134) {
  char str[156] =
      "/K)N&}/"
      "?n{j,.gzu<R!T6SS6uk~8zNWLPTA0R&dj>olU#f$275TdMv4OG8bi8QZ4:Dm(p+**0P^"
      "sDEyhnd}(;QIiv5hzxaOhvg_G5o}eqNx0jR-w";
  char ch = 's';
  s21_size_t len = 49;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_135) {
  char str[100] =
      "Ngm8Z`ip#Avt{_4&<Yp0?dcqH9m1ZELrhb.5IQip5^3?U*[!PAP4gDFSPYeJ_/"
      "a@619(M(D^*,?6Y";
  char ch = 'E';
  s21_size_t len = 12;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_136) {
  char str[170] =
      "W}txt8,2Z.4dw4VcZF53Dn[=S{XU+[DU-P{-&!eDk`T1cun.Wxo?V6X##[0KNp]"
      "1WRXndfdsy)5y-ce*X/kRRWICzpO$[0,j~iK:f7lt<LRB@tXK9/MOsiL-v:hLrF[FNb~A";
  char ch = '7';
  s21_size_t len = 19;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_137) {
  char str[100] = "5jzTq=/SVnQjYN9j|<Z9Y,1Q";
  char ch = 'T';
  s21_size_t len = 31;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_138) {
  char str[160] =
      "qh~AH@8NF6dINoO{?LjH+|gv~(LTYJcJ<-3~+Er+Al_kXzkV@*Sgdac;G<kTnFsf}F(;Pc!"
      "mI.uf,SHqVB-J5pBgOGZ,}>BEM+rgu3U:ZBuZC_c&2=a";
  char ch = 'n';
  s21_size_t len = 17;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_139) {
  char str[100] =
      "6C@U58`[{5DywgPupPx_Af@z>A#ViULEMXLUNO(}S_K3kizw6Sy_UX:6pg~m{pRr,4=$&"
      "8WPjJv=$`7!|d#?`m6pimZHriMaK_fD";
  char ch = ';';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_140) {
  char str[150] =
      "&i^(Z0$h[w*)BfxLREg9tYcJU<jtq/K/Y?<RHO&w9=|f;UxRW4rX@7:$Vo7r3(k8m}|/"
      "RzYJAud>E5mn@dp+[{XR&/AE^y!~xAN84YU>R(tN9O1;}jH2X2:x7CpZZ";
  char ch = 't';
  s21_size_t len = 24;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_141) {
  char str[150] =
      ":~}pRn6c$^&uE)xkdL/NF4U+u|*tt5).:<E>+b*r_540GGvf9qq}OErD/"
      "K`b`c&QC00;}q6|2?k)Wnq[TH|x-+f?Wol`>Fiz6nrQ|eWJ4D7Z(r!pa1@;-Y^";
  char ch = 'X';
  s21_size_t len = 27;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_142) {
  char str[100] = "";
  char ch = '{';
  s21_size_t len = 26;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_143) {
  char str[100] =
      "M^r9}/"
      "}lwE+OfwRf@~!=g05gmp_}4=3.TTEsFjS_ez$~^tGsU*b8$QeoVa1.VgbVAJ0ihRftp;^|"
      "Fy^5/q/bR.m[W}=xp";
  char ch = '7';
  s21_size_t len = 36;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_144) {
  char str[100] = "1G#;_2P)L&llUj#r@1Oa=hHDI$#zMK[";
  char ch = 'f';
  s21_size_t len = 10;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_145) {
  char str[100] = "7Z6d+~~wKG+HOL8gy5Yw>fk5A4M#j44c";
  char ch = '+';
  s21_size_t len = 12;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_146) {
  char str[100] = "fUt3{Wq#>6";
  char ch = '!';
  s21_size_t len = 30;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_147) {
  char str[100] = "xG!oBbw^@@pkbe6j<N9(d>T`E*fHr:E:H5YFC8}Gz>cmqwWp}|)";
  char ch = '}';
  s21_size_t len = 20;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_148) {
  char str[100] = "Mc]~adCu0`j[RNaTjpelE^?HC|?<.h>iv,P4Xbv";
  char ch = '}';
  s21_size_t len = 38;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_149) {
  char str[100] = "hW-!T=ZzN;t>`zpaN/zICHYc[:l#:*YfHcJFp,bN+~-,YW";
  char ch = 'g';
  s21_size_t len = 24;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_150) {
  char str[100] =
      "PXl4q##!gMSi5>|y?DVD`zM]U.dfe:RbM7V.RigzUtl[EGc95<jr`Q$kbqc_>9FeE{#sHp,$"
      "QQ74j({lQ;hD)q";
  char ch = '!';
  s21_size_t len = 39;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

Suite *test_memchr(void) {
  Suite *s = suite_create("\033[45m-=S21_MEMCHR=-\033[0m");
  TCase *tc = tcase_create("memchr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memchr_1);
  tcase_add_test(tc, memchr_2);
  tcase_add_test(tc, memchr_3);
  tcase_add_test(tc, memchr_4);
  tcase_add_test(tc, memchr_5);
  tcase_add_test(tc, memchr_6);
  tcase_add_test(tc, memchr_7);
  tcase_add_test(tc, memchr_8);
  tcase_add_test(tc, memchr_9);
  tcase_add_test(tc, memchr_10);
  tcase_add_test(tc, memchr_11);
  tcase_add_test(tc, memchr_12);
  tcase_add_test(tc, memchr_13);
  tcase_add_test(tc, memchr_14);
  tcase_add_test(tc, memchr_15);
  tcase_add_test(tc, memchr_16);
  tcase_add_test(tc, memchr_17);
  tcase_add_test(tc, memchr_18);
  tcase_add_test(tc, memchr_19);
  tcase_add_test(tc, memchr_20);
  tcase_add_test(tc, memchr_21);
  tcase_add_test(tc, memchr_22);
  tcase_add_test(tc, memchr_23);
  tcase_add_test(tc, memchr_24);
  tcase_add_test(tc, memchr_25);
  tcase_add_test(tc, memchr_26);
  tcase_add_test(tc, memchr_27);
  tcase_add_test(tc, memchr_28);
  tcase_add_test(tc, memchr_29);
  tcase_add_test(tc, memchr_30);
  tcase_add_test(tc, memchr_31);
  tcase_add_test(tc, memchr_32);
  tcase_add_test(tc, memchr_33);
  tcase_add_test(tc, memchr_34);
  tcase_add_test(tc, memchr_35);
  tcase_add_test(tc, memchr_36);
  tcase_add_test(tc, memchr_37);
  tcase_add_test(tc, memchr_38);
  tcase_add_test(tc, memchr_39);
  tcase_add_test(tc, memchr_40);
  tcase_add_test(tc, memchr_41);
  tcase_add_test(tc, memchr_42);
  tcase_add_test(tc, memchr_43);
  tcase_add_test(tc, memchr_44);
  tcase_add_test(tc, memchr_45);
  tcase_add_test(tc, memchr_46);
  tcase_add_test(tc, memchr_47);
  tcase_add_test(tc, memchr_48);
  tcase_add_test(tc, memchr_49);
  tcase_add_test(tc, memchr_50);
  tcase_add_test(tc, memchr_51);
  tcase_add_test(tc, memchr_52);
  tcase_add_test(tc, memchr_53);
  tcase_add_test(tc, memchr_54);
  tcase_add_test(tc, memchr_55);
  tcase_add_test(tc, memchr_56);
  tcase_add_test(tc, memchr_57);
  tcase_add_test(tc, memchr_58);
  tcase_add_test(tc, memchr_59);
  tcase_add_test(tc, memchr_60);
  tcase_add_test(tc, memchr_61);
  tcase_add_test(tc, memchr_62);
  tcase_add_test(tc, memchr_63);
  tcase_add_test(tc, memchr_64);
  tcase_add_test(tc, memchr_65);
  tcase_add_test(tc, memchr_66);
  tcase_add_test(tc, memchr_67);
  tcase_add_test(tc, memchr_68);
  tcase_add_test(tc, memchr_69);
  tcase_add_test(tc, memchr_70);
  tcase_add_test(tc, memchr_71);
  tcase_add_test(tc, memchr_72);
  tcase_add_test(tc, memchr_73);
  tcase_add_test(tc, memchr_74);
  tcase_add_test(tc, memchr_75);
  tcase_add_test(tc, memchr_76);
  tcase_add_test(tc, memchr_77);
  tcase_add_test(tc, memchr_78);
  tcase_add_test(tc, memchr_79);
  tcase_add_test(tc, memchr_80);
  tcase_add_test(tc, memchr_81);
  tcase_add_test(tc, memchr_82);
  tcase_add_test(tc, memchr_83);
  tcase_add_test(tc, memchr_84);
  tcase_add_test(tc, memchr_85);
  tcase_add_test(tc, memchr_86);
  tcase_add_test(tc, memchr_87);
  tcase_add_test(tc, memchr_88);
  tcase_add_test(tc, memchr_89);
  tcase_add_test(tc, memchr_90);
  tcase_add_test(tc, memchr_91);
  tcase_add_test(tc, memchr_92);
  tcase_add_test(tc, memchr_93);
  tcase_add_test(tc, memchr_94);
  tcase_add_test(tc, memchr_95);
  tcase_add_test(tc, memchr_96);
  tcase_add_test(tc, memchr_97);
  tcase_add_test(tc, memchr_98);
  tcase_add_test(tc, memchr_99);
  tcase_add_test(tc, memchr_100);
  tcase_add_test(tc, memchr_101);
  tcase_add_test(tc, memchr_102);
  tcase_add_test(tc, memchr_103);
  tcase_add_test(tc, memchr_104);
  tcase_add_test(tc, memchr_105);
  tcase_add_test(tc, memchr_106);
  tcase_add_test(tc, memchr_107);
  tcase_add_test(tc, memchr_108);
  tcase_add_test(tc, memchr_109);
  tcase_add_test(tc, memchr_110);
  tcase_add_test(tc, memchr_111);
  tcase_add_test(tc, memchr_112);
  tcase_add_test(tc, memchr_113);
  tcase_add_test(tc, memchr_114);
  tcase_add_test(tc, memchr_115);
  tcase_add_test(tc, memchr_116);
  tcase_add_test(tc, memchr_117);
  tcase_add_test(tc, memchr_118);
  tcase_add_test(tc, memchr_119);
  tcase_add_test(tc, memchr_120);
  tcase_add_test(tc, memchr_121);
  tcase_add_test(tc, memchr_122);
  tcase_add_test(tc, memchr_123);
  tcase_add_test(tc, memchr_124);
  tcase_add_test(tc, memchr_125);
  tcase_add_test(tc, memchr_126);
  tcase_add_test(tc, memchr_127);
  tcase_add_test(tc, memchr_128);
  tcase_add_test(tc, memchr_129);
  tcase_add_test(tc, memchr_130);
  tcase_add_test(tc, memchr_131);
  tcase_add_test(tc, memchr_132);
  tcase_add_test(tc, memchr_133);
  tcase_add_test(tc, memchr_134);
  tcase_add_test(tc, memchr_135);
  tcase_add_test(tc, memchr_136);
  tcase_add_test(tc, memchr_137);
  tcase_add_test(tc, memchr_138);
  tcase_add_test(tc, memchr_139);
  tcase_add_test(tc, memchr_140);
  tcase_add_test(tc, memchr_141);
  tcase_add_test(tc, memchr_142);
  tcase_add_test(tc, memchr_143);
  tcase_add_test(tc, memchr_144);
  tcase_add_test(tc, memchr_145);
  tcase_add_test(tc, memchr_146);
  tcase_add_test(tc, memchr_147);
  tcase_add_test(tc, memchr_148);
  tcase_add_test(tc, memchr_149);
  tcase_add_test(tc, memchr_150);

  suite_add_tcase(s, tc);
  return s;
}
