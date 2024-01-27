#include "test_me.h"

START_TEST(strtok_1) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  char s3[] = "!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_2) {
  char s1[] = "";
  char s2[] = "";
  char s3[] = "";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_3) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  char s3[] = "\0";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_4) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  char s3[] = "";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_5) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  char s3[] = "Hello, world!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_6) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  char s3[] =
      "My name is Polina. I hate this, maybe I'm not supposed for this.";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_7) {
  char s1[] = "ABABABABABBABABABBABABABABABBA";
  char s2[] = "ABABABABABBABABABBABABABABABBA";
  char s3[] = "B";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_8) {
  char s1[] = "\0ABABABABABBABABABBABABABABABBA";
  char s2[] = "\0ABABABABABBABABABBABABABABABBA";
  char s3[] = "A";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_9) {
  char s1[] = "\0Hello, world!";
  char s2[] = "\0Hello, world!";
  char s3[] = "\0";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_10) {
  char s1[] = "\0Hello, world!";
  char s2[] = "\0Hello, world!";
  char s3[] = "";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_11) {
  char *s1 = S21_NULL;
  char *s2 = S21_NULL;
  char s3[] = "";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_12) {
  char s1[] = "tuz-tuz-tuz";
  char s2[] = "tuz-tuz-tuz";
  char s3[] = "z-tuz-tuz";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_13) {
  char s1[] = "Hello, world! And other people";
  char s2[] = "Hello, world! And other people";
  char s3[] = "\0Come here";
  char s4[] = "\0Come here";
  char s5[] = "";

  ck_assert_pstr_eq(strtok(s1, s5), s21_strtok(s2, s5));
  for (int i = 0; i < 5; i++) {
    ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  }
  ck_assert_pstr_eq(strtok(s3, s5), s21_strtok(s4, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
}
END_TEST

START_TEST(strtok_14) {
  char s1[] = "Hello,       world! And other people";
  char s2[] = "Hello,       world! And other people";
  char s3[] = "Come here";
  char s4[] = "Come here";
  char s5[] = " o";

  ck_assert_pstr_eq(strtok(s1, s5), s21_strtok(s2, s5));
  for (int i = 0; i < 5; i++) {
    ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  }
  ck_assert_pstr_eq(strtok(s3, s5), s21_strtok(s4, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
}
END_TEST

START_TEST(strtok_15) {
  char s1[] = "Hello,      worllllllllllld! And lother people      ";
  char s2[] = "Hello,      worllllllllllld! And lother people      ";
  char s3[] = "Come here";
  char s4[] = "Come here";
  char s5[] = " l";

  ck_assert_pstr_eq(strtok(s1, s5), s21_strtok(s2, s5));
  for (int i = 0; i < 5; i++) {
    ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  }
  ck_assert_pstr_eq(strtok(s3, s5), s21_strtok(s4, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
  ck_assert_pstr_eq(strtok(S21_NULL, s5), s21_strtok(S21_NULL, s5));
}
END_TEST

START_TEST(strtok_16) {
  char s1[] = "Helllllllo,      worllllllllllld! And lother people      ";
  char s2[] = "Helllllllo,      worllllllllllld! And lother people      ";
  char s3[] = "Come here";
  char s4[] = "Come here";
  char s5[] = "l";
  char s6[] = " ";

  ck_assert_str_eq(strtok(s1, s5), s21_strtok(s2, s5));
  for (int i = 0; i < 5; i++) {
    ck_assert_pstr_eq(strtok(S21_NULL, s6), s21_strtok(S21_NULL, s6));
  }
  ck_assert_pstr_eq(strtok(s3, s6), s21_strtok(s4, s6));
  ck_assert_pstr_eq(strtok(S21_NULL, s6), s21_strtok(S21_NULL, s6));
  ck_assert_pstr_eq(strtok(S21_NULL, s6), s21_strtok(S21_NULL, s6));
}
END_TEST

START_TEST(strtok_17) {
  char s1[] = "ROROROROMA!!!!!!!!!";
  char s2[] = "ROROROROMA!!!!!!!!!";
  char s3[] = "R";
  strtok(s1, s3);
  strtok(NULL, s3);
  s21_strtok(s2, s3);
  s21_strtok(NULL, s3);
  ck_assert_pstr_eq(s1, s2);
}
END_TEST

START_TEST(strtok_18) {
  char s1[] = "AGONIA";
  char s2[] = "AGONIA";
  char s3[] = "A";
  strtok(s1, s3);
  strtok(NULL, s3);
  strtok(NULL, s3);
  s21_strtok(s2, s3);
  s21_strtok(NULL, s3);
  s21_strtok(NULL, s3);
  ck_assert_pstr_eq(s1, s2);
}
END_TEST

START_TEST(strtok_19) {
  char s1[] = "MYPHONENUM68697317172648";
  char s2[] = "MYPHONENUM68697317172648";
  char s3[] = "MYPHONENUM6869";
  char *s4 = strtok(s1, s3);
  char *s6 = strtok(S21_NULL, s3);

  char *s5 = s21_strtok(s2, s3);
  char *s7 = s21_strtok(S21_NULL, s3);

  ck_assert_pstr_eq(s1, s2);
  ck_assert_pstr_eq(s4, s5);
  ck_assert_pstr_eq(s6, s7);
}
END_TEST

START_TEST(strtok_20) {
  char s1[] = "AAAAAAGOONIAAAAA";
  char s2[] = "AAAAAAGOONIAAAAA";
  char s3[] = "A";
  strtok(s1, s3);
  strtok(NULL, s2);
  strtok(NULL, s2);
  s21_strtok(s2, s3);
  s21_strtok(NULL, s3);
  s21_strtok(NULL, s3);
  ck_assert_pstr_eq(s1, s2);
}
END_TEST

START_TEST(strtok_21) {
  char s1[] = "g!>";
  char s2[] = "g!>";
  char s3[] = "zrJ.~";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_22) {
  char s1[] =
      "o`8vN}N-FF[bX:_UBx);*+W-x|qcVn#&dw9X*P^nY!Y@AgbZ8{Bd]T;Q4<EN8m:T>}?p!"
      "pBBKQfo}*(X/>rX1en3JP;WY-N|x^6=~D^DPD|";
  char s2[] =
      "o`8vN}N-FF[bX:_UBx);*+W-x|qcVn#&dw9X*P^nY!Y@AgbZ8{Bd]T;Q4<EN8m:T>}?p!"
      "pBBKQfo}*(X/>rX1en3JP;WY-N|x^6=~D^DPD|";
  char s3[] = "4";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_23) {
  char s1[] =
      "[$Xt,a=3a#};6~/"
      "LNfE48lgG${5aK*MT)|7Iw&Im7}^ox,_9Qp-<t%NsP|Y-is:~#xDICZvEGX=Xp2PK`@%0Ul|"
      "6O$MM{^vFUiMiRZgZwGlKh1!@IJL50F/O{M";
  char s2[] =
      "[$Xt,a=3a#};6~/"
      "LNfE48lgG${5aK*MT)|7Iw&Im7}^ox,_9Qp-<t%NsP|Y-is:~#xDICZvEGX=Xp2PK`@%0Ul|"
      "6O$MM{^vFUiMiRZgZwGlKh1!@IJL50F/O{M";
  char s3[] = "F7-9i";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_24) {
  char s1[] =
      "=#hy,#}8!J0S2RLi:-QqZN=xF=rQ:_B@(J?@k,;A!b}-R*THlXF3[)3${**_]dXeJpz!`,"
      "Laz}~+<i27_wBhXGaa&.AoZLn8o,kHhAwNj(Lm}}0YzwePB.*)ukV~G@A-La/";
  char s2[] =
      "=#hy,#}8!J0S2RLi:-QqZN=xF=rQ:_B@(J?@k,;A!b}-R*THlXF3[)3${**_]dXeJpz!`,"
      "Laz}~+<i27_wBhXGaa&.AoZLn8o,kHhAwNj(Lm}}0YzwePB.*)ukV~G@A-La/";
  char s3[] = "vA";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_25) {
  char s1[] =
      "l@wi%P:(#/&;-cq;)%f2P8@:|!&=D39}A>-rsdf+m@5m1y)kFRO)+H>Cs-d/"
      "H`6<Yw+{uOJYjVfx0hU1:N|]F$E062";
  char s2[] =
      "l@wi%P:(#/&;-cq;)%f2P8@:|!&=D39}A>-rsdf+m@5m1y)kFRO)+H>Cs-d/"
      "H`6<Yw+{uOJYjVfx0hU1:N|]F$E062";
  char s3[] = "5";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_26) {
  char s1[] =
      "65$?yejVlyucltR=cv1r*-i6DOhbyKh;V`#>K^.`Zbqzzt8R0el5ytb8otlhFK?./0@g";
  char s2[] =
      "65$?yejVlyucltR=cv1r*-i6DOhbyKh;V`#>K^.`Zbqzzt8R0el5ytb8otlhFK?./0@g";
  char s3[] = "9K";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_27) {
  char s1[] =
      "w>8P4n<zzBlN!f2I?Y>$#@lom(Lb(>yA%a=LxaPIRfh}T4]D<B_>S.Y/B/"
      "6EOxq3>?.1z!L#WM:h}+:X)}.~}:cJUK52~7whs?8FtWxvBhtAVm1nB+SfS8LR&%}!/"
      "J*$[QW`m5{qQ/T(VSZ0.3+*&{";
  char s2[] =
      "w>8P4n<zzBlN!f2I?Y>$#@lom(Lb(>yA%a=LxaPIRfh}T4]D<B_>S.Y/B/"
      "6EOxq3>?.1z!L#WM:h}+:X)}.~}:cJUK52~7whs?8FtWxvBhtAVm1nB+SfS8LR&%}!/"
      "J*$[QW`m5{qQ/T(VSZ0.3+*&{";
  char s3[] = "MU";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_28) {
  char s1[] =
      "1Jes9*#hji;1y-fu}}1*yV*g{h3>D7pTpKmRyE[B]y|vapOH,xUVZp~nFSeIFA?e;r|[.<"
      "sVU:nHYl+Z7(SOn7f6+S$W-J<Y-H&<3[0";
  char s2[] =
      "1Jes9*#hji;1y-fu}}1*yV*g{h3>D7pTpKmRyE[B]y|vapOH,xUVZp~nFSeIFA?e;r|[.<"
      "sVU:nHYl+Z7(SOn7f6+S$W-J<Y-H&<3[0";
  char s3[] = "%2{2";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_29) {
  char s1[] =
      "J)B#N=bGF+%lI*i|f</"
      "bt@BMKr7?4D4a@Cg[sNw#`bJB5j0tO?3-Qw{2(GuVQEj72vVS3OZ>.]p}p6u$`[-CO?%me~&"
      "2S*V1YF]<ugYAr!KSLU";
  char s2[] =
      "J)B#N=bGF+%lI*i|f</"
      "bt@BMKr7?4D4a@Cg[sNw#`bJB5j0tO?3-Qw{2(GuVQEj72vVS3OZ>.]p}p6u$`[-CO?%me~&"
      "2S*V1YF]<ugYAr!KSLU";
  char s3[] = "Acw";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_30) {
  char s1[] = "&<f&1riRvyblr39MYpx2cs7N_X51;By}$7a@{YqBtdGQ6DU--N/*@};vuSg";
  char s2[] = "&<f&1riRvyblr39MYpx2cs7N_X51;By}$7a@{YqBtdGQ6DU--N/*@};vuSg";
  char s3[] = "g|";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_31) {
  char s1[] =
      "WxhTpr_NS4&2&Nad#<wz,WSQ6xbZwYG*)i96t6RSl+@-(FG$&rVP&vvaL.|d4N~?hH74S@%"
      "1yx~ieC;z5k";
  char s2[] =
      "WxhTpr_NS4&2&Nad#<wz,WSQ6xbZwYG*)i96t6RSl+@-(FG$&rVP&vvaL.|d4N~?hH74S@%"
      "1yx~ieC;z5k";
  char s3[] = "_k=";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_32) {
  char s1[] =
      "B3EwDJ<MptD@%sej-`r1c<cLlsc*(0=j%|][^0^cfKA66r?BE2Zzx>e_MoE~yIP{oMyOsJ.("
      "pfi$HL,~PVW5L(,=|->d7x]zrZ|?f{(2B!(sOL%dTuicG&0%!fPEK#^8)fp";
  char s2[] =
      "B3EwDJ<MptD@%sej-`r1c<cLlsc*(0=j%|][^0^cfKA66r?BE2Zzx>e_MoE~yIP{oMyOsJ.("
      "pfi$HL,~PVW5L(,=|->d7x]zrZ|?f{(2B!(sOL%dTuicG&0%!fPEK#^8)fp";
  char s3[] = "pX";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_33) {
  char s1[] = "h3@/n8H}1)s`<Z(m2@C.(x8;fqnp@u_#5Kx+_2zvTQ|}M";
  char s2[] = "h3@/n8H}1)s`<Z(m2@C.(x8;fqnp@u_#5Kx+_2zvTQ|}M";
  char s3[] = "]uX.1";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_34) {
  char s1[] =
      "]I/"
      "UZAnTIXo3hwn<r)#%NqDWx;I@P5FsA<B%0EdY4Bw,miQ#0;GO@PbG2awLZ!y=6}#+a^!S3w+"
      "w2iU^KezYjF|}]H";
  char s2[] =
      "]I/"
      "UZAnTIXo3hwn<r)#%NqDWx;I@P5FsA<B%0EdY4Bw,miQ#0;GO@PbG2awLZ!y=6}#+a^!S3w+"
      "w2iU^KezYjF|}]H";
  char s3[] = "L$Z";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_35) {
  char s1[] = "xgWlR<GRn`-kU|Wr``Uzy2UPq";
  char s2[] = "xgWlR<GRn`-kU|Wr``Uzy2UPq";
  char s3[] = "Yy";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_36) {
  char s1[] =
      "u*:6O)}19(j_jdWrdM]su)OPtCwv@>jBOZ$E;$An_Q<4;`Nnd{G%KqugciRozY=kb?:gdz#"
      "2WO__u!_t.k&-ffW!dgkB,p-,&{@m6>`R";
  char s2[] =
      "u*:6O)}19(j_jdWrdM]su)OPtCwv@>jBOZ$E;$An_Q<4;`Nnd{G%KqugciRozY=kb?:gdz#"
      "2WO__u!_t.k&-ffW!dgkB,p-,&{@m6>`R";
  char s3[] = "T!v{";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_37) {
  char s1[] = "[|&Br:uQ1ir1kgU=5S!8%v";
  char s2[] = "[|&Br:uQ1ir1kgU=5S!8%v";
  char s3[] = "P5AB|";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_38) {
  char s1[] =
      "aBK)^n6wYyA7>BO~+uTqZ`AvIHb;T:e6d+v1DLft`Bs-+4Uh;bI&$vZhiXo|MgGiEm]`E:"
      "1fRZ]6/?wsGdo+cVoUJB}tQJdFx^|Me71*L5^#$9SZi?t*wB0";
  char s2[] =
      "aBK)^n6wYyA7>BO~+uTqZ`AvIHb;T:e6d+v1DLft`Bs-+4Uh;bI&$vZhiXo|MgGiEm]`E:"
      "1fRZ]6/?wsGdo+cVoUJB}tQJdFx^|Me71*L5^#$9SZi?t*wB0";
  char s3[] = "}_W";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_39) {
  char s1[] = "2D.:dz^$|M_L[rx;r+!6Sfvkgo?m@ecLHzvp0M~E(rk";
  char s2[] = "2D.:dz^$|M_L[rx;r+!6Sfvkgo?m@ecLHzvp0M~E(rk";
  char s3[] = "/mAt";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_40) {
  char s1[] =
      "Jm:,%>$_pm7*W]IFJ2R:<w$_;,<|RHXtgA-4Qw9Byti@Y{-c)lT/"
      "w-}hhxa1LmC8+9FN,!LoJU7J?a8;)&(W>USf/_gOlvU9Oc{/"
      "D[RBhHPR}P..G;j&#ZbK#Mavm-HU$?.";
  char s2[] =
      "Jm:,%>$_pm7*W]IFJ2R:<w$_;,<|RHXtgA-4Qw9Byti@Y{-c)lT/"
      "w-}hhxa1LmC8+9FN,!LoJU7J?a8;)&(W>USf/_gOlvU9Oc{/"
      "D[RBhHPR}P..G;j&#ZbK#Mavm-HU$?.";
  char s3[] = "_";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_41) {
  char s1[] =
      "jnH1^6IIH!_^zvQ/<wn}fbO4S4Lpm5L_wsTIT7Q%,s$Ev1^Kf8@{Ro)Df!9bqJ~_Tg<cbEs";
  char s2[] =
      "jnH1^6IIH!_^zvQ/<wn}fbO4S4Lpm5L_wsTIT7Q%,s$Ev1^Kf8@{Ro)Df!9bqJ~_Tg<cbEs";
  char s3[] = "|zqSD";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_42) {
  char s1[] =
      "|oZg,lMc;DP:VwxD-OE-%eXzQ:.J0EEr]L2)1Sr.y9]s};)_VWx)`}!!!5Y/"
      "PY?kTBpV$IlYz}8<{<pTZfGPE!3K9w@!DzE#|$bAizGG./";
  char s2[] =
      "|oZg,lMc;DP:VwxD-OE-%eXzQ:.J0EEr]L2)1Sr.y9]s};)_VWx)`}!!!5Y/"
      "PY?kTBpV$IlYz}8<{<pTZfGPE!3K9w@!DzE#|$bAizGG./";
  char s3[] = "S<D";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_43) {
  char s1[] =
      "J+gQ}D]<#~yyUT1e`8LZ?^Dp<BtFOj7D_~B/"
      "JE1-Y<vBGdDDhU;>kN(RbQNu5N+7FxCDYK2kT/"
      "[d>iI{baWA|k{Cl*T7o&m?UkowQV82:b>qb^;_;&mi12T4!";
  char s2[] =
      "J+gQ}D]<#~yyUT1e`8LZ?^Dp<BtFOj7D_~B/"
      "JE1-Y<vBGdDDhU;>kN(RbQNu5N+7FxCDYK2kT/"
      "[d>iI{baWA|k{Cl*T7o&m?UkowQV82:b>qb^;_;&mi12T4!";
  char s3[] = "t^";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_44) {
  char s1[] = "U#P6F6)~~HV";
  char s2[] = "U#P6F6)~~HV";
  char s3[] = "1x";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_45) {
  char s1[] =
      "^$qq/e1_r43Vb7NNnjtZXOH(sK#b>-S,pK2`s(wnK])y9+qTDwQ*Pl.3;8AicNYf^,9&1y";
  char s2[] =
      "^$qq/e1_r43Vb7NNnjtZXOH(sK#b>-S,pK2`s(wnK])y9+qTDwQ*Pl.3;8AicNYf^,9&1y";
  char s3[] = "m3";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_46) {
  char s1[] = "Nq^}^3?SC<Q8x]]7RJq";
  char s2[] = "Nq^}^3?SC<Q8x]]7RJq";
  char s3[] = "-}H0t";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_47) {
  char s1[] =
      "dipfMh:&+)MoR)hH$*(zo3+i^~JG3;17W436Cp#eR/"
      "+[^ra7VYwEl)vgf00]Y4jT+T)cw=;?)2uEi.X9nT`v+R|PS`uZ3cW>a3$Q)Phbiid2nHe&"
      "Zx";
  char s2[] =
      "dipfMh:&+)MoR)hH$*(zo3+i^~JG3;17W436Cp#eR/"
      "+[^ra7VYwEl)vgf00]Y4jT+T)cw=;?)2uEi.X9nT`v+R|PS`uZ3cW>a3$Q)Phbiid2nHe&"
      "Zx";
  char s3[] = "1#Y";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_48) {
  char s1[] = "z$_|yDyRELsB>lFb:";
  char s2[] = "z$_|yDyRELsB>lFb:";
  char s3[] = "H";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_49) {
  char s1[] =
      "+~ard$n`|f(#f6<SWIB|1cl;_O9^z})wov6+@F:a[?vG(G~=.d,U/"
      "WJ?W!(oRQ)Zv[LG#MFAWCtwz0OAfKWFCCE~cbFQ{-+b;;H}:C}dy,yt(RD~$i]<,]I6x$#"
      "LxpSpq^3nxX/U}laV.[OnPx>";
  char s2[] =
      "+~ard$n`|f(#f6<SWIB|1cl;_O9^z})wov6+@F:a[?vG(G~=.d,U/"
      "WJ?W!(oRQ)Zv[LG#MFAWCtwz0OAfKWFCCE~cbFQ{-+b;;H}:C}dy,yt(RD~$i]<,]I6x$#"
      "LxpSpq^3nxX/U}laV.[OnPx>";
  char s3[] = "(W|,:";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_50) {
  char s1[] = "&og-6p~?!$$wF+X-_QCU0L9ta3S(eCPV";
  char s2[] = "&og-6p~?!$$wF+X-_QCU0L9ta3S(eCPV";
  char s3[] = ")Jm+j";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_51) {
  char s1[] =
      "yLu@/3TO9>&st!cSgR*bg0VpFS7t(6=eLnZ,+&k:?1GfC{I$l6m<^^%nhN.Zt)F$";
  char s2[] =
      "yLu@/3TO9>&st!cSgR*bg0VpFS7t(6=eLnZ,+&k:?1GfC{I$l6m<^^%nhN.Zt)F$";
  char s3[] = "?k";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_52) {
  char s1[] =
      "N<f}@S3pCzE8sA3bDBWsqD2,T=dNy4p5%,e:DO$_4lINHrKHk[MF#},X0{>zlmchHzv<,"
      "eMzbl6@4D5H)v*gzU3&q*uRZsoy:B.%5`ceW]0*#wlvT-e%*kpNs4ug)wB6XhP1TAw{b%CQ("
      "r11[4Td";
  char s2[] =
      "N<f}@S3pCzE8sA3bDBWsqD2,T=dNy4p5%,e:DO$_4lINHrKHk[MF#},X0{>zlmchHzv<,"
      "eMzbl6@4D5H)v*gzU3&q*uRZsoy:B.%5`ceW]0*#wlvT-e%*kpNs4ug)wB6XhP1TAw{b%CQ("
      "r11[4Td";
  char s3[] = "2o";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_53) {
  char s1[] =
      "!prQQwGS^y?E1cQdBWMH!]V2[Zc4L&)*yh:1kO}`C)mbj|,[}F[*R1?3_]U,9o`g8:m2=-/"
      "v>7(AzU5pyjSq,H@O?G[B#hrX7KgTNx}Ug8&6)EH7J/"
      "h++)3k=^aC?!ZFGbLM7T^hv3+ZQzD";
  char s2[] =
      "!prQQwGS^y?E1cQdBWMH!]V2[Zc4L&)*yh:1kO}`C)mbj|,[}F[*R1?3_]U,9o`g8:m2=-/"
      "v>7(AzU5pyjSq,H@O?G[B#hrX7KgTNx}Ug8&6)EH7J/"
      "h++)3k=^aC?!ZFGbLM7T^hv3+ZQzD";
  char s3[] = "z";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_54) {
  char s1[] =
      "FUlA8;e+^9bf-7+q+R|+<ojH5w2Ic_iAiAia-*SpxRB~`M5mP-#[o7U<QTQmV7Ne*RT]~o";
  char s2[] =
      "FUlA8;e+^9bf-7+q+R|+<ojH5w2Ic_iAiAia-*SpxRB~`M5mP-#[o7U<QTQmV7Ne*RT]~o";
  char s3[] = "P";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_55) {
  char s1[] =
      "+lr)2eiooo_#M$l<MbnuSg}x:S[~H+V:{HGg7%js-7*do}g|XLCJ)$ARQ>eM4t5Ua0$WZB_"
      "so0.!~~i`}oG7*%CHEjvq1A@o877~{x!|Yu;vt?ZCL1G~FJI1t{tBqo70eDq>%Xw71n7p_J]"
      "C4";
  char s2[] =
      "+lr)2eiooo_#M$l<MbnuSg}x:S[~H+V:{HGg7%js-7*do}g|XLCJ)$ARQ>eM4t5Ua0$WZB_"
      "so0.!~~i`}oG7*%CHEjvq1A@o877~{x!|Yu;vt?ZCL1G~FJI1t{tBqo70eDq>%Xw71n7p_J]"
      "C4";
  char s3[] = "03:7";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_56) {
  char s1[] =
      "K(m6~8}%u=mB$c3Cu9||?[n2^Vv6BP4>fz]Q%-<<V_(l,TwKuuU*):Yg-QM1+JuaG*ikf0l;"
      "!CK!a8y";
  char s2[] =
      "K(m6~8}%u=mB$c3Cu9||?[n2^Vv6BP4>fz]Q%-<<V_(l,TwKuuU*):Yg-QM1+JuaG*ikf0l;"
      "!CK!a8y";
  char s3[] = "O";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_57) {
  char s1[] =
      "@x06b-0aRgTIfXE3|PLhyqp.ktMBpc2WzZ[W.Dd+(dc+RQ=eD2]dfWC:U`~!(!"
      "UxiJBE7pwBx?zl@XeAS{uvIj3LtHq|ra$[fOfr<D>|L";
  char s2[] =
      "@x06b-0aRgTIfXE3|PLhyqp.ktMBpc2WzZ[W.Dd+(dc+RQ=eD2]dfWC:U`~!(!"
      "UxiJBE7pwBx?zl@XeAS{uvIj3LtHq|ra$[fOfr<D>|L";
  char s3[] = "QG>7";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_58) {
  char s1[] =
      ":81Fp?I`DX:0-L./"
      "Bt7s*1R3lxm]U.DC&5IuYSWaWDF*%$w=;mXm|s.{hXPSJU-e.Hux$s`*|>3G|";
  char s2[] =
      ":81Fp?I`DX:0-L./"
      "Bt7s*1R3lxm]U.DC&5IuYSWaWDF*%$w=;mXm|s.{hXPSJU-e.Hux$s`*|>3G|";
  char s3[] = "!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_59) {
  char s1[] =
      "8f/Gi%$lNU7e5]8Q01Gg*/XK)!AGD4b(3nP^v^a}@pM2aq1>5mz:1J=(`]8(,[9m/dhU-u/"
      "AO?^";
  char s2[] =
      "8f/Gi%$lNU7e5]8Q01Gg*/XK)!AGD4b(3nP^v^a}@pM2aq1>5mz:1J=(`]8(,[9m/dhU-u/"
      "AO?^";
  char s3[] = "5";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_60) {
  char s1[] =
      "Q$_7ZZs%oHG3D$vt.^xC4!2&I7_7(0v`aJ^U:v*o)=9nxuyl1AY/5,>:P/"
      "mPXbFop`N#2#mV|W=WM,?,>";
  char s2[] =
      "Q$_7ZZs%oHG3D$vt.^xC4!2&I7_7(0v`aJ^U:v*o)=9nxuyl1AY/5,>:P/"
      "mPXbFop`N#2#mV|W=WM,?,>";
  char s3[] = "dnm:";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_61) {
  char s1[] = "/^OI[;H%5Y.K4ygYxyNqr4<}8W";
  char s2[] = "/^OI[;H%5Y.K4ygYxyNqr4<}8W";
  char s3[] = "8;V";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_62) {
  char s1[] = "c5p(4_m9KNV/-j@H:jz8<p3UTz~]2rg%BV=@pJ0C^8!1z!%Z4T~";
  char s2[] = "c5p(4_m9KNV/-j@H:jz8<p3UTz~]2rg%BV=@pJ0C^8!1z!%Z4T~";
  char s3[] = "H>Oc";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_63) {
  char s1[] = "|adN+M8GSn$&/.!1u7+(HI-I3VP-N*ECW";
  char s2[] = "|adN+M8GSn$&/.!1u7+(HI-I3VP-N*ECW";
  char s3[] = "g)";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_64) {
  char s1[] = "Km6~T=yQblQiyOWEOMs^1T,dJk6(hhIK0ksH^>fw3wynb$;Ggb}+W+d";
  char s2[] = "Km6~T=yQblQiyOWEOMs^1T,dJk6(hhIK0ksH^>fw3wynb$;Ggb}+W+d";
  char s3[] = "3}a";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_65) {
  char s1[] = "{kB!eUm<~_)/O-g(!WO{MqwGD^_OsGDr";
  char s2[] = "{kB!eUm<~_)/O-g(!WO{MqwGD^_OsGDr";
  char s3[] = "GHw";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_66) {
  char s1[] =
      "~ER7]ut5R6|N=q^KG(18MDy-98qW%tubm5l$xcwNhCH:2O{(b6Y3u+-oOy=Vde{%"
      "bFdikFoJ*]F==HrRG$!mljTk";
  char s2[] =
      "~ER7]ut5R6|N=q^KG(18MDy-98qW%tubm5l$xcwNhCH:2O{(b6Y3u+-oOy=Vde{%"
      "bFdikFoJ*]F==HrRG$!mljTk";
  char s3[] = "]F";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_67) {
  char s1[] = "OPbBVQ]~)sUbmd$dpPJqP/9p)t!_6`iF>EG_x&`#`@";
  char s2[] = "OPbBVQ]~)sUbmd$dpPJqP/9p)t!_6`iF>EG_x&`#`@";
  char s3[] = ";:";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_68) {
  char s1[] =
      "&/r;K*?mUQQ0b:7nAKZ`=]2Q1)9l&(+@$k4axcdY6xzDY9IYb@qIeq$0}DK:mO#J";
  char s2[] =
      "&/r;K*?mUQQ0b:7nAKZ`=]2Q1)9l&(+@$k4axcdY6xzDY9IYb@qIeq$0}DK:mO#J";
  char s3[] = "Hf%d";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_69) {
  char s1[] =
      "XAkd|1LoW@3nXkQqA<|s$x$8e0Hg6.:E(k3M;$}3e^!OGP(V==1!2g.Hs1@fZv,!1>Cc_"
      "k4ilrw7W%rZl!ydA>Qr@:jlDJ$d5iv_BK-:i^PY_J;R?<&X]0";
  char s2[] =
      "XAkd|1LoW@3nXkQqA<|s$x$8e0Hg6.:E(k3M;$}3e^!OGP(V==1!2g.Hs1@fZv,!1>Cc_"
      "k4ilrw7W%rZl!ydA>Qr@:jlDJ$d5iv_BK-:i^PY_J;R?<&X]0";
  char s3[] = "(/WT";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_70) {
  char s1[] = ">VfLJ_/w<[)(k+u+to[o|*XCk*72!9X0(#<M(DNK!u";
  char s2[] = ">VfLJ_/w<[)(k+u+to[o|*XCk*72!9X0(#<M(DNK!u";
  char s3[] = "9._)e";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_71) {
  char s1[] =
      "uD[gv0U2F0JXmW9+c*`FSREr+g6lUg.()c`U996*&[+gWE-D2^5YG$-(X;cwY!@>$bh<F";
  char s2[] =
      "uD[gv0U2F0JXmW9+c*`FSREr+g6lUg.()c`U996*&[+gWE-D2^5YG$-(X;cwY!@>$bh<F";
  char s3[] = "NV";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_72) {
  char s1[] =
      "jH947/O>A3$i3xz<*&qN%5N[&Y-:+8qf%lzhmG;Oa?H8%M5axT9_*kJ}.u&_YST/"
      "UH~xMd:#ve4gqR;nPEAV0.)p[0Jg/G}:x9W!V/5cJOLiyY";
  char s2[] =
      "jH947/O>A3$i3xz<*&qN%5N[&Y-:+8qf%lzhmG;Oa?H8%M5axT9_*kJ}.u&_YST/"
      "UH~xMd:#ve4gqR;nPEAV0.)p[0Jg/G}:x9W!V/5cJOLiyY";
  char s3[] = "(_(";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_73) {
  char s1[] = "`;w}PJS1j$!Xu@0[$0^(qGq_zW:oN}b$F3/hyS5;2$";
  char s2[] = "`;w}PJS1j$!Xu@0[$0^(qGq_zW:oN}b$F3/hyS5;2$";
  char s3[] = "W&D>";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_74) {
  char s1[] =
      "I7mWUTF4pULzMKW`{q8W`I/"
      "D:Hh=LhK4652fQG3V=}xL:l_Pl?JXo.jk8,[ohv(jQURpAaVdi}SJ4(-G`Bk@9rE)"
      "TZFCCgPab^J#3&8ZCt7K7^L^%75";
  char s2[] =
      "I7mWUTF4pULzMKW`{q8W`I/"
      "D:Hh=LhK4652fQG3V=}xL:l_Pl?JXo.jk8,[ohv(jQURpAaVdi}SJ4(-G`Bk@9rE)"
      "TZFCCgPab^J#3&8ZCt7K7^L^%75";
  char s3[] = ")";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_75) {
  char s1[] =
      "%~.#V.?9&35-BM8C;t<&/|bAh$fPJ.IA08iYA;:/"
      "d0z.S+vR#nIsP+A3n*T&YDubek7I{!5&z$|f0";
  char s2[] =
      "%~.#V.?9&35-BM8C;t<&/|bAh$fPJ.IA08iYA;:/"
      "d0z.S+vR#nIsP+A3n*T&YDubek7I{!5&z$|f0";
  char s3[] = "l!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_76) {
  char s1[] = "_g2U%@/ZmB~8Uc}17wG=qvXZTs2x$oSdzD%(eCoY`";
  char s2[] = "_g2U%@/ZmB~8Uc}17wG=qvXZTs2x$oSdzD%(eCoY`";
  char s3[] = "v[*";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_77) {
  char s1[] =
      "V6NzTS/O+/js[k3c];yv!wBz,_A&R@j?i=MQ5|3+P;2*7~V9d1rIk)kBc~HF^J8V/"
      "_{hlS+U}n8#~Z41+;M{;nM~i$-BvnR";
  char s2[] =
      "V6NzTS/O+/js[k3c];yv!wBz,_A&R@j?i=MQ5|3+P;2*7~V9d1rIk)kBc~HF^J8V/"
      "_{hlS+U}n8#~Z41+;M{;nM~i$-BvnR";
  char s3[] = "N4#u9";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_78) {
  char s1[] =
      "Ao+JjGA+ZiXRTdSL$u.^}wp<+;Qaw!pV|4#0*0|RvMs-5_d^q*]bdZk],jk*NM]c(HQ~"
      "U2Kll7of7z2acOHKE@B$JVp*cPlR5$PTV57t7s$Z59c>3Q_R:*wx#)Jt5a+#tm!%+f_";
  char s2[] =
      "Ao+JjGA+ZiXRTdSL$u.^}wp<+;Qaw!pV|4#0*0|RvMs-5_d^q*]bdZk],jk*NM]c(HQ~"
      "U2Kll7of7z2acOHKE@B$JVp*cPlR5$PTV57t7s$Z59c>3Q_R:*wx#)Jt5a+#tm!%+f_";
  char s3[] = "rJ";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_79) {
  char s1[] =
      "bU7!ZwM*}<936S>wc0pP=ZZr%Bz)W6BAW:IGeG$B*KS-U^<K2bQ3vJffTQ7FGs:`x#uA_k$"
      "a_1p$7g4]$ts)b{=1$JV@GbT~znR={";
  char s2[] =
      "bU7!ZwM*}<936S>wc0pP=ZZr%Bz)W6BAW:IGeG$B*KS-U^<K2bQ3vJffTQ7FGs:`x#uA_k$"
      "a_1p$7g4]$ts)b{=1$JV@GbT~znR={";
  char s3[] = "L";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_80) {
  char s1[] =
      "m=zMFzJB]ZcRjb7l-|8qP8#9}>vgPm4CD)U,QOF|[N]WIbry*784hd[5O3nmL2W*hL$-"
      "wBo5rVpMI";
  char s2[] =
      "m=zMFzJB]ZcRjb7l-|8qP8#9}>vgPm4CD)U,QOF|[N]WIbry*784hd[5O3nmL2W*hL$-"
      "wBo5rVpMI";
  char s3[] = "=";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_81) {
  char s1[] = "1j(U}ZqBJMI9cKDzV4=qSgF)L$4k-{Qb0";
  char s2[] = "1j(U}ZqBJMI9cKDzV4=qSgF)L$4k-{Qb0";
  char s3[] = "aPIJ";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_82) {
  char s1[] =
      "wm9Ye<V8Awh5>Qr6MUXw5vMOdIMS|c~B5+xP#/"
      "y4Hke`@f-nL_SIH~dc#<}er>CTP9!VbMeqC&|n!gzq(Od|*qH,}7}OO1*]]<y*hePu?n{"
      "yEZiZ$elS%c}D.t";
  char s2[] =
      "wm9Ye<V8Awh5>Qr6MUXw5vMOdIMS|c~B5+xP#/"
      "y4Hke`@f-nL_SIH~dc#<}er>CTP9!VbMeqC&|n!gzq(Od|*qH,}7}OO1*]]<y*hePu?n{"
      "yEZiZ$elS%c}D.t";
  char s3[] = "JlF$";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_83) {
  char s1[] = "U=u";
  char s2[] = "U=u";
  char s3[] = "=z`S";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_84) {
  char s1[] =
      "Y3S1;71P0n@_>;hfhf9)89p{>MyH~UVi^jmY+$$hQGWQSz#Ddsb1$kM0nOu2;!gk&"
      "XP3LfU5YU)OC:YV/ZTx`?-2:P8v}Mn#4:S&s&?&{";
  char s2[] =
      "Y3S1;71P0n@_>;hfhf9)89p{>MyH~UVi^jmY+$$hQGWQSz#Ddsb1$kM0nOu2;!gk&"
      "XP3LfU5YU)OC:YV/ZTx`?-2:P8v}Mn#4:S&s&?&{";
  char s3[] = "(cu";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_85) {
  char s1[] = "99~3l.VU$zzb159ZPc~]5jRZwY%2y9/*^ZX:G&b";
  char s2[] = "99~3l.VU$zzb159ZPc~]5jRZwY%2y9/*^ZX:G&b";
  char s3[] = "2";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_86) {
  char s1[] = "-i3HLNb(1b<-dc!H;3L|0U&pbfiC9kun8v1+-z@:<EbfiZ,ICJc>";
  char s2[] = "-i3HLNb(1b<-dc!H;3L|0U&pbfiC9kun8v1+-z@:<EbfiZ,ICJc>";
  char s3[] = "3z>k";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_87) {
  char s1[] = "rlFj;A#";
  char s2[] = "rlFj;A#";
  char s3[] = "[jt%";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_88) {
  char s1[] =
      "j3QB2&t0kZpShx-S2H*|cHRs=qrVv97iu@Ss}8|MGYVcx_iRQ6!(eY=G{w_[3K8oAQ(%"
      "fmuP8";
  char s2[] =
      "j3QB2&t0kZpShx-S2H*|cHRs=qrVv97iu@Ss}8|MGYVcx_iRQ6!(eY=G{w_[3K8oAQ(%"
      "fmuP8";
  char s3[] = "})C8";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_89) {
  char s1[] =
      "u3mQvK(gjp{0>yP2S)O?Vce(4y8`#oJmilk.?WEy31[PnSk>RWN}]t~HM[bVySB1m#[o!@j$"
      "uXAEq4$mudRpDTpnl^rK3kEDCYDZOnV7)o.:Ia5!5Wf";
  char s2[] =
      "u3mQvK(gjp{0>yP2S)O?Vce(4y8`#oJmilk.?WEy31[PnSk>RWN}]t~HM[bVySB1m#[o!@j$"
      "uXAEq4$mudRpDTpnl^rK3kEDCYDZOnV7)o.:Ia5!5Wf";
  char s3[] = "~5]X";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_90) {
  char s1[] = "ss)N!3.rNi!/";
  char s2[] = "ss)N!3.rNi!/";
  char s3[] = "U";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_91) {
  char s1[] = "Jo@Wc[?.*K)/=I/gG&ho#dy}1]oCQ8s`t]5<(bo^g49JN";
  char s2[] = "Jo@Wc[?.*K)/=I/gG&ho#dy}1]oCQ8s`t]5<(bo^g49JN";
  char s3[] = "e";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_92) {
  char s1[] =
      "f;(fd:!V!)jB/"
      "|E!Idqpdxf~N!V|M%_A1xVh].-Chfm3R&F_^8C;4|L>`F(+q>7Oyy(HPx>Q%@r|oHL>efj|"
      "v71{2|Y`+!%Ho&2RF;$BD<aA#`v/+hoG=h?q";
  char s2[] =
      "f;(fd:!V!)jB/"
      "|E!Idqpdxf~N!V|M%_A1xVh].-Chfm3R&F_^8C;4|L>`F(+q>7Oyy(HPx>Q%@r|oHL>efj|"
      "v71{2|Y`+!%Ho&2RF;$BD<aA#`v/+hoG=h?q";
  char s3[] = "_m[";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_93) {
  char s1[] =
      "kM-)sVvZ$eWd%+rxM8p*o,49WhG0%Nmky&.p4w96D9UH1KA$7&J{*Zfq;J-}H?l-RA<%"
      "Vp9f9`Ej=`D7hn~g,`EyrOB!X6[E#yb>A";
  char s2[] =
      "kM-)sVvZ$eWd%+rxM8p*o,49WhG0%Nmky&.p4w96D9UH1KA$7&J{*Zfq;J-}H?l-RA<%"
      "Vp9f9`Ej=`D7hn~g,`EyrOB!X6[E#yb>A";
  char s3[] = "De[$O";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_94) {
  char s1[] =
      "?>?fLZg*R1?%s{H{UHk_*B#~)fSPZ|7<G_9w6>v%52E59B9cXR/"
      "76,9ROSVDFf:K_]r&M4x@R(Ah:A;^TgMFE7E4_ocOsu7Awiwj8H$$e:E6PH*l,vd[c~.e~@"
      "8u(1TpNZHKdcCFu0Ee&)Pw";
  char s2[] =
      "?>?fLZg*R1?%s{H{UHk_*B#~)fSPZ|7<G_9w6>v%52E59B9cXR/"
      "76,9ROSVDFf:K_]r&M4x@R(Ah:A;^TgMFE7E4_ocOsu7Awiwj8H$$e:E6PH*l,vd[c~.e~@"
      "8u(1TpNZHKdcCFu0Ee&)Pw";
  char s3[] = "&p$";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_95) {
  char s1[] = "(Jj3S";
  char s2[] = "(Jj3S";
  char s3[] = "Kvn(";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_96) {
  char s1[] =
      "-|>b_lmq27mnxlAmkcS*RwXJP4QPaIka`z[YKIsH)V53Y<qID(>XT2MFRi|<@(ZgcG]}Fy#`"
      "tmdBwW#|$3oRP8ltm1GBr}fAeZ&3Xg/$Hl";
  char s2[] =
      "-|>b_lmq27mnxlAmkcS*RwXJP4QPaIka`z[YKIsH)V53Y<qID(>XT2MFRi|<@(ZgcG]}Fy#`"
      "tmdBwW#|$3oRP8ltm1GBr}fAeZ&3Xg/$Hl";
  char s3[] = "rc";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_97) {
  char s1[] = "l.suW:WXImf!EjQ+]qe^";
  char s2[] = "l.suW:WXImf!EjQ+]qe^";
  char s3[] = ")";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_98) {
  char s1[] =
      "IMH[KG6XCj4rk/w(Y]Mkxq3.,8EbHy9%}PG9ZUsdVla10RxY<c}s_<{#E6/"
      "}^#y>*148PX6>Ht.OvZ(xfC:LW&R44{gI60=Zig=gk}g:B]i9COHZ)|yhnMNC&-:5js@^";
  char s2[] =
      "IMH[KG6XCj4rk/w(Y]Mkxq3.,8EbHy9%}PG9ZUsdVla10RxY<c}s_<{#E6/"
      "}^#y>*148PX6>Ht.OvZ(xfC:LW&R44{gI60=Zig=gk}g:B]i9COHZ)|yhnMNC&-:5js@^";
  char s3[] = "i?";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_99) {
  char s1[] = "_jo>&XX.WbK0L(gtH!h;-cbw$sA";
  char s2[] = "_jo>&XX.WbK0L(gtH!h;-cbw$sA";
  char s3[] = "</TGY";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_100) {
  char s1[] =
      "2%IZ48d+G^O6BNl@c6Y&OTKQyK/T{WW.@l7WD|wa&kQmLdf;3+6N+9x7^H9aZB4ZRXif/"
      "Re[~[iH/_xgJVsC6^Y#[Ou?BJB;>&?";
  char s2[] =
      "2%IZ48d+G^O6BNl@c6Y&OTKQyK/T{WW.@l7WD|wa&kQmLdf;3+6N+9x7^H9aZB4ZRXif/"
      "Re[~[iH/_xgJVsC6^Y#[Ou?BJB;>&?";
  char s3[] = "lYm";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_101) {
  char s1[] = "TZ=,LBZ>x-6xc+,t/Y-^&B";
  char s2[] = "TZ=,LBZ>x-6xc+,t/Y-^&B";
  char s3[] = "f4&";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_102) {
  char s1[] =
      "TvF;WZWPNrnEjq~9T4Hl=UR~$*^b>RV)@j_|XXU=<Sx~AzKv~w5FT`sdI*jLkS*i#:Jo9|"
      "Hqz&eDalVrXdtvc<JB@DpCwDc/LI9Ep*p%<7~tF!~]4zZ&WKIKO4ZxZklS";
  char s2[] =
      "TvF;WZWPNrnEjq~9T4Hl=UR~$*^b>RV)@j_|XXU=<Sx~AzKv~w5FT`sdI*jLkS*i#:Jo9|"
      "Hqz&eDalVrXdtvc<JB@DpCwDc/LI9Ep*p%<7~tF!~]4zZ&WKIKO4ZxZklS";
  char s3[] = ";:";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_103) {
  char s1[] = "w=m*Am8cYG.8}T0Py:M|^";
  char s2[] = "w=m*Am8cYG.8}T0Py:M|^";
  char s3[] = "aa*";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_104) {
  char s1[] =
      "XR_qk5&li.#t_%br|PhPiU/"
      "Ix=Z=IbYdr|3#7R}~u|VO:c2}H`$6XOU}8oi`WCEuOvlG(Ztknae(1JgOVL2*;j;o@7j0ow*"
      "3.&^$:-jT=I_/&.gm;20K>9;:aBk";
  char s2[] =
      "XR_qk5&li.#t_%br|PhPiU/"
      "Ix=Z=IbYdr|3#7R}~u|VO:c2}H`$6XOU}8oi`WCEuOvlG(Ztknae(1JgOVL2*;j;o@7j0ow*"
      "3.&^$:-jT=I_/&.gm;20K>9;:aBk";
  char s3[] = "s|6";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_105) {
  char s1[] =
      "%2$+$,<Z/"
      "[2J8!67r`@B]W(j;=u.8#kuKL&+G+Uiu<RQ-&<^lx6i$2?+7-YLl)iaS{GSMk_!^S^WIQ!||"
      ".VvD)wIR4TMH^&RLy2uM-0%>X)Ze:sQ+VFu2pDt(2W<H<%;5/E}odn";
  char s2[] =
      "%2$+$,<Z/"
      "[2J8!67r`@B]W(j;=u.8#kuKL&+G+Uiu<RQ-&<^lx6i$2?+7-YLl)iaS{GSMk_!^S^WIQ!||"
      ".VvD)wIR4TMH^&RLy2uM-0%>X)Ze:sQ+VFu2pDt(2W<H<%;5/E}odn";
  char s3[] = "p;t";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_106) {
  char s1[] = "=sgM1N%@lS>zEb;DFfvZJHzm,k`T(Jy*x!~+/k%cu,Srp}k`~tI,X.";
  char s2[] = "=sgM1N%@lS>zEb;DFfvZJHzm,k`T(Jy*x!~+/k%cu,Srp}k`~tI,X.";
  char s3[] = "rl(";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_107) {
  char s1[] =
      "s_%=o$3@GA[ytBD{:-GV5o:nxuVUNm?tFBjaq^ql{X:0Y]#&F4+Yz&^h#WuE;((vaYV{Jq{"
      "GDE4PUyg+<kD^2*l,-~#s+,?g>dUBtbJ6Gji-eM@FMQx[$35A@:-.yaZTL5fp&Y";
  char s2[] =
      "s_%=o$3@GA[ytBD{:-GV5o:nxuVUNm?tFBjaq^ql{X:0Y]#&F4+Yz&^h#WuE;((vaYV{Jq{"
      "GDE4PUyg+<kD^2*l,-~#s+,?g>dUBtbJ6Gji-eM@FMQx[$35A@:-.yaZTL5fp&Y";
  char s3[] = "qxf";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_108) {
  char s1[] = "o$m;UA+Ot{A{uO+D*y@3t";
  char s2[] = "o$m;UA+Ot{A{uO+D*y@3t";
  char s3[] = "1H";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_109) {
  char s1[] =
      "qI690?Lx!Qx{U>y~^hDC4w@Z,~t?hZdiq**;CtXYvCa<2IBiZjhDY[Iu8dmWw41eA`-Xgq["
      "87R8r6<{r!#ti";
  char s2[] =
      "qI690?Lx!Qx{U>y~^hDC4w@Z,~t?hZdiq**;CtXYvCa<2IBiZjhDY[Iu8dmWw41eA`-Xgq["
      "87R8r6<{r!#ti";
  char s3[] = "lR<0";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_110) {
  char s1[] = "Nz;A`vT(nexM_9P6Qa4,W;}Mt=c^7`t/VvW`1h7|-]{`KdP2jvk";
  char s2[] = "Nz;A`vT(nexM_9P6Qa4,W;}Mt=c^7`t/VvW`1h7|-]{`KdP2jvk";
  char s3[] = "I,V";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_111) {
  char s1[] = "~=bSAzp$]D12:of{-nj$h1k_M?<:YVv4y-AkXo&n{nib~$;IhL)]_]";
  char s2[] = "~=bSAzp$]D12:of{-nj$h1k_M?<:YVv4y-AkXo&n{nib~$;IhL)]_]";
  char s3[] = "E!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_112) {
  char s1[] = "XG*[[@#shIhP";
  char s2[] = "XG*[[@#shIhP";
  char s3[] = "#xUl";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_113) {
  char s1[] =
      "{Ep_3iYEEaRfae($_Ov)=y/-R>w^#AS0EME+pf&,Gd#,S1]J/"
      "FAh:Ofee]T&7kIE=yvVC);Z<Eb.t^%";
  char s2[] =
      "{Ep_3iYEEaRfae($_Ov)=y/-R>w^#AS0EME+pf&,Gd#,S1]J/"
      "FAh:Ofee]T&7kIE=yvVC);Z<Eb.t^%";
  char s3[] = "~";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_114) {
  char s1[] = "AAw=(AqNN^dR5Qs.y^Qz0l,Xi9~";
  char s2[] = "AAw=(AqNN^dR5Qs.y^Qz0l,Xi9~";
  char s3[] = "/";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_115) {
  char s1[] =
      "dW;Yh<a^0mE<B[^vFd0}ka]Xjf|2V5^sinVm7&.U{twdpG!4Hg/DH(|[aTj?I#s{u`w;#E/"
      "z|IJ-/16R:+]rCPh0*S|dg`-v_r=-Kmf%;7gx{%Si?_e3y7`eTL`dBa/PRF@}itHY";
  char s2[] =
      "dW;Yh<a^0mE<B[^vFd0}ka]Xjf|2V5^sinVm7&.U{twdpG!4Hg/DH(|[aTj?I#s{u`w;#E/"
      "z|IJ-/16R:+]rCPh0*S|dg`-v_r=-Kmf%;7gx{%Si?_e3y7`eTL`dBa/PRF@}itHY";
  char s3[] = "_";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_116) {
  char s1[] = "~k~y7D~K5LIB@<7b(rd~kE>_oN+GjzHC";
  char s2[] = "~k~y7D~K5LIB@<7b(rd~kE>_oN+GjzHC";
  char s3[] = "RE";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_117) {
  char s1[] =
      "uls4#.?y+mAU&uFQH[9s4vR(L=6@#U/"
      "8@xbY,>Z8+vyDz>wU]GkDt1O(F=POuI7~G]|d{#|S.";
  char s2[] =
      "uls4#.?y+mAU&uFQH[9s4vR(L=6@#U/"
      "8@xbY,>Z8+vyDz>wU]GkDt1O(F=POuI7~G]|d{#|S.";
  char s3[] = ":K_";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_118) {
  char s1[] =
      "dNa87:P3{FEH`lxmYO!RcyX9pya2E#i}q,EhX)7H+2#3?CdB8t!Gi~`xnnjc20{F<|cm*m:"
      "fVCX*:6elR/H^0x2W172FAyk>Py2_S/Tvlo%aMH^;W!(6,aX6`7ikAQm{";
  char s2[] =
      "dNa87:P3{FEH`lxmYO!RcyX9pya2E#i}q,EhX)7H+2#3?CdB8t!Gi~`xnnjc20{F<|cm*m:"
      "fVCX*:6elR/H^0x2W172FAyk>Py2_S/Tvlo%aMH^;W!(6,aX6`7ikAQm{";
  char s3[] = "5";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_119) {
  char s1[] = ".h&h`8Jh1IL}vOvCw5b{8}9p[eR6vbowm0avJp~#x/;Tl~YOYFm";
  char s2[] = ".h&h`8Jh1IL}vOvCw5b{8}9p[eR6vbowm0avJp~#x/;Tl~YOYFm";
  char s3[] = "]";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_120) {
  char s1[] =
      "Y2v:d~7a(Wa5,gFk4DB?U8D^EX8K~**h/"
      "aFe>.{FEcBO=FO??ygS.X3?is)*$#O|M4PjPOxqKiX|5+|/"
      "W*zzdhu8grQ9+=E{[UyYDuj?>-J,c?ypJkh.97p4+ZkCjlr~3v`=2g?.L^~Y";
  char s2[] =
      "Y2v:d~7a(Wa5,gFk4DB?U8D^EX8K~**h/"
      "aFe>.{FEcBO=FO??ygS.X3?is)*$#O|M4PjPOxqKiX|5+|/"
      "W*zzdhu8grQ9+=E{[UyYDuj?>-J,c?ypJkh.97p4+ZkCjlr~3v`=2g?.L^~Y";
  char s3[] = ":%C~";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_121) {
  char s1[] = "<L#nq9>";
  char s2[] = "<L#nq9>";
  char s3[] = "fit.l";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_122) {
  char s1[] = "):]|yBv:/%xePa9nHfYT^`!f{1mtQ#XBHiI;ee";
  char s2[] = "):]|yBv:/%xePa9nHfYT^`!f{1mtQ#XBHiI;ee";
  char s3[] = "/&";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_123) {
  char s1[] = "*M@F=V=hn~V>Z1uH]`-tp}LhE$hL}b6>)Qf5(>.7yhQ]VL#s!h^Jdy%h&;:";
  char s2[] = "*M@F=V=hn~V>Z1uH]`-tp}LhE$hL}b6>)Qf5(>.7yhQ]VL#s!h^Jdy%h&;:";
  char s3[] = "+";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_124) {
  char s1[] = "h@lkR7ZPLXGH_K7)}GQDbsv,?+t<t$L+?Kkv;)UJ|%A5#&,tB3S$m$VX,6H";
  char s2[] = "h@lkR7ZPLXGH_K7)}GQDbsv,?+t<t$L+?Kkv;)UJ|%A5#&,tB3S$m$VX,6H";
  char s3[] = "!DI-";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_125) {
  char s1[] =
      "k&Ne/<*d-RUAam@<3z/GloN.!yy5<ePq8Z&IQGC02%|>M^J,AlZ?x`W`S)t`X)pncn";
  char s2[] =
      "k&Ne/<*d-RUAam@<3z/GloN.!yy5<ePq8Z&IQGC02%|>M^J,AlZ?x`W`S)t`X)pncn";
  char s3[] = "p";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_126) {
  char s1[] =
      "t0fLGM4v`]hCfD^#~(;j|Q]![^bC-K;G?qA3LmN(yf3<yMfou6n]y&YS7j$2js.V+"
      "KNCOSf5&H}.y;9dLH4YrDWU>8&<7@+y]yx|F}?gqc0<}sjiv{zvT:xZc4?V{B;1D&C1@n>)}"
      "@%b7";
  char s2[] =
      "t0fLGM4v`]hCfD^#~(;j|Q]![^bC-K;G?qA3LmN(yf3<yMfou6n]y&YS7j$2js.V+"
      "KNCOSf5&H}.y;9dLH4YrDWU>8&<7@+y]yx|F}?gqc0<}sjiv{zvT:xZc4?V{B;1D&C1@n>)}"
      "@%b7";
  char s3[] = "gf$K";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_127) {
  char s1[] =
      "hDqKL%.T)6m%X8D]bi(~|Fk)jP<91e%EHIP/"
      "O:%`~EW~hW9$YkK3vdyu`7_8}-FTdhRvFIDV;o!$poGWP*Sl!3),#gR_V{OIA(rp9(=!wo$"
      "rUy:f-A.pm-DpgK*+>M)<C_,zGT}=Hm7<ceYJ";
  char s2[] =
      "hDqKL%.T)6m%X8D]bi(~|Fk)jP<91e%EHIP/"
      "O:%`~EW~hW9$YkK3vdyu`7_8}-FTdhRvFIDV;o!$poGWP*Sl!3),#gR_V{OIA(rp9(=!wo$"
      "rUy:f-A.pm-DpgK*+>M)<C_,zGT}=Hm7<ceYJ";
  char s3[] = "+`9(0";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_128) {
  char s1[] = "$VL6v(G?0-*9,c;dm$#L,%2+OF%G";
  char s2[] = "$VL6v(G?0-*9,c;dm$#L,%2+OF%G";
  char s3[] = "{";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_129) {
  char s1[] =
      "$fG<IB/V{$N%L7=5/"
      "FrQiGf#mGMqshyUs_8EmE_z{*&sl+&QKoVz-M^3)<@Mbn3p+HcMZ8kk!+a.W_hV22g)("
      "R9vjMM!MAn5Xc@Uq1X";
  char s2[] =
      "$fG<IB/V{$N%L7=5/"
      "FrQiGf#mGMqshyUs_8EmE_z{*&sl+&QKoVz-M^3)<@Mbn3p+HcMZ8kk!+a.W_hV22g)("
      "R9vjMM!MAn5Xc@Uq1X";
  char s3[] = ":IC";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_130) {
  char s1[] =
      "%?2g2hpTz|?`(-`~O*{w<:ApR[v(K)#C]1mq^0:+;:j0asP#L6~YBr&tq9^K~Tn>-"
      "MajKWiIaAnKRQq[=fXHR@W4CjC@f(zcR~2{w2Bt*vRqWLIP.fcP~Xb!zYjay$O^|evb!";
  char s2[] =
      "%?2g2hpTz|?`(-`~O*{w<:ApR[v(K)#C]1mq^0:+;:j0asP#L6~YBr&tq9^K~Tn>-"
      "MajKWiIaAnKRQq[=fXHR@W4CjC@f(zcR~2{w2Bt*vRqWLIP.fcP~Xb!zYjay$O^|evb!";
  char s3[] = "tumM7";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_131) {
  char s1[] = "n{1zF#Ef++T1sj{IU2,FhC)g4";
  char s2[] = "n{1zF#Ef++T1sj{IU2,FhC)g4";
  char s3[] = ".F@Mc";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_132) {
  char s1[] = "m#0Y^aiYs?k^2D^9qx?a/}l<pcYx0K{.QS{]X;u(_AFwD;IZWgg~hOu9";
  char s2[] = "m#0Y^aiYs?k^2D^9qx?a/}l<pcYx0K{.QS{]X;u(_AFwD;IZWgg~hOu9";
  char s3[] = "q,nMn";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_133) {
  char s1[] =
      "Iv{-qI<gTQhlFI/"
      "5Y#N!kWBNa-LRXK9]xLaqA+N!.u5H.L2(z8xa.LcQ?9U.D4u>{<+&qplry!zgkL*P1JDs@D`"
      "UHv/Ui*-/sBA_B_t.04||B37yDvm<rcXr&";
  char s2[] =
      "Iv{-qI<gTQhlFI/"
      "5Y#N!kWBNa-LRXK9]xLaqA+N!.u5H.L2(z8xa.LcQ?9U.D4u>{<+&qplry!zgkL*P1JDs@D`"
      "UHv/Ui*-/sBA_B_t.04||B37yDvm<rcXr&";
  char s3[] = "2C{";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_134) {
  char s1[] = "a%fELAp9umj?VAuG-}Z/(|HVP-0Jn#=T%jJuRPZj])7M2{cW@g6GIkD+0B,";
  char s2[] = "a%fELAp9umj?VAuG-}Z/(|HVP-0Jn#=T%jJuRPZj])7M2{cW@g6GIkD+0B,";
  char s3[] = "p]O{";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_135) {
  char s1[] = "~>_62@<D6zOj=9`>aQgrz";
  char s2[] = "~>_62@<D6zOj=9`>aQgrz";
  char s3[] = "64";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_136) {
  char s1[] = "dIAnK5=QG";
  char s2[] = "dIAnK5=QG";
  char s3[] = "T";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_137) {
  char s1[] = "ky07l=Z1Ybw1n(SB]]l:ve*G;2->uBAwF";
  char s2[] = "ky07l=Z1Ybw1n(SB]]l:ve*G;2->uBAwF";
  char s3[] = "lp/!";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_138) {
  char s1[] = "X?E_n6ZV!9QA";
  char s2[] = "X?E_n6ZV!9QA";
  char s3[] = "!W:k";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_139) {
  char s1[] = "jaeM4|tIq*+ozAqRrz?B9C`J{w<wc[C0iQeait>]<,P1f,I0m}rXa_s:A58>}5s";
  char s2[] = "jaeM4|tIq*+ozAqRrz?B9C`J{w<wc[C0iQeait>]<,P1f,I0m}rXa_s:A58>}5s";
  char s3[] = "(";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_140) {
  char s1[] =
      "54u%MI>!R1VCSm.lTy{lD4BpTIvp>V2r=l9`s6A*qEzc30FHK<HvAL+L+qX@f:_%EGwP_"
      "bkjd(GkG_f9#;![g}}Eq]>%VU*SPV^KHG,@}3";
  char s2[] =
      "54u%MI>!R1VCSm.lTy{lD4BpTIvp>V2r=l9`s6A*qEzc30FHK<HvAL+L+qX@f:_%EGwP_"
      "bkjd(GkG_f9#;![g}}Eq]>%VU*SPV^KHG,@}3";
  char s3[] = "HJKG";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_141) {
  char s1[] = "%+,nf:~CDkY%Gf[Y(o5B$1[Xk:~1*NUS1f6Z";
  char s2[] = "%+,nf:~CDkY%Gf[Y(o5B$1[Xk:~1*NUS1f6Z";
  char s3[] = "ZzE";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_142) {
  char s1[] = "O95+0(|eSf<)k|Mhs?fn4w%VUb4|@De[9h,Fpl";
  char s2[] = "O95+0(|eSf<)k|Mhs?fn4w%VUb4|@De[9h,Fpl";
  char s3[] = "Kt*";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_143) {
  char s1[] = ":I0m?Pn.*x/wwg27FH-g^Uw|";
  char s2[] = ":I0m?Pn.*x/wwg27FH-g^Uw|";
  char s3[] = "`9X";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_144) {
  char s1[] =
      "#MjluOlSn[Rj4pY|=n]dFMe},SnOeSSI-3ELOd?~j>dYf]AoCP(o_Y?Fy@Z%Y]h:ehbY>[8("
      "e>fw.g9/%r&u-g)|r3$uV_hP#w{-K-T_hKA@K!eJ$O?%q`";
  char s2[] =
      "#MjluOlSn[Rj4pY|=n]dFMe},SnOeSSI-3ELOd?~j>dYf]AoCP(o_Y?Fy@Z%Y]h:ehbY>[8("
      "e>fw.g9/%r&u-g)|r3$uV_hP#w{-K-T_hKA@K!eJ$O?%q`";
  char s3[] = "eO@M{";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_145) {
  char s1[] = "y/6XfEn/1-Kq*pop~:!7U8{H39CL74SM.MZ80njnK>eAF)BgA5";
  char s2[] = "y/6XfEn/1-Kq*pop~:!7U8{H39CL74SM.MZ80njnK>eAF)BgA5";
  char s3[] = "DW.";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_146) {
  char s1[] =
      "aXr^+hdhr-Q<AB95J#p)Z+(A88$BXD6NhCIk7}CxkdV5m!d@ndh.=M$E;0W("
      "KqvFZNidkdXs$z%@m=bW4MtB?N3j)S[*E}cvyLrQj=:Z!>QD){DE~C/Ku/gQg][=7=2";
  char s2[] =
      "aXr^+hdhr-Q<AB95J#p)Z+(A88$BXD6NhCIk7}CxkdV5m!d@ndh.=M$E;0W("
      "KqvFZNidkdXs$z%@m=bW4MtB?N3j)S[*E}cvyLrQj=:Z!>QD){DE~C/Ku/gQg][=7=2";
  char s3[] = "I-AE";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_147) {
  char s1[] =
      "QJp_>?1vusKh*9oJp`51`;fZHMEB/"
      "h1e=<mMToPr{|k),GA4i{{X1tOw}6QwZCW~}x$ZQ*oOl;:Fdq^z=},x8&3Y0]DInwVN0X@@"
      "vcR3";
  char s2[] =
      "QJp_>?1vusKh*9oJp`51`;fZHMEB/"
      "h1e=<mMToPr{|k),GA4i{{X1tOw}6QwZCW~}x$ZQ*oOl;:Fdq^z=},x8&3Y0]DInwVN0X@@"
      "vcR3";
  char s3[] = "x$-<";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_148) {
  char s1[] =
      "7t3zCtX#iE*ID<R#sTPT?$v7L]v{i^<vuW#q_.RNDN#aiNN`0drg/y5-pzHKt[k/"
      ")6hZo:}y%I1#QE1";
  char s2[] =
      "7t3zCtX#iE*ID<R#sTPT?$v7L]v{i^<vuW#q_.RNDN#aiNN`0drg/y5-pzHKt[k/"
      ")6hZo:}y%I1#QE1";
  char s3[] = "WRb";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_149) {
  char s1[] = "1_$KCX3X^Z80@3m=";
  char s2[] = "1_$KCX3X^Z80@3m=";
  char s3[] = "7";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

START_TEST(strtok_150) {
  char s1[] = ":o#HIQ5PAOi1*(XO";
  char s2[] = ":o#HIQ5PAOi1*(XO";
  char s3[] = "bnPF(";
  ck_assert_pstr_eq(strtok(s1, s3), s21_strtok(s2, s3));
}
END_TEST

Suite *test_strtok(void) {
  Suite *s = suite_create("\033[45m-=S21_STRTOK=-\033[0m");
  TCase *tc = tcase_create("strtok_tc");

  tcase_add_test(tc, strtok_1);
  tcase_add_test(tc, strtok_2);
  tcase_add_test(tc, strtok_3);
  tcase_add_test(tc, strtok_4);
  tcase_add_test(tc, strtok_5);
  tcase_add_test(tc, strtok_6);
  tcase_add_test(tc, strtok_7);
  tcase_add_test(tc, strtok_8);
  tcase_add_test(tc, strtok_9);
  tcase_add_test(tc, strtok_10);
  tcase_add_test(tc, strtok_11);
  tcase_add_test(tc, strtok_12);
  tcase_add_test(tc, strtok_13);
  tcase_add_test(tc, strtok_14);
  tcase_add_test(tc, strtok_15);
  tcase_add_test(tc, strtok_16);
  tcase_add_test(tc, strtok_17);
  tcase_add_test(tc, strtok_18);
  tcase_add_test(tc, strtok_19);
  tcase_add_test(tc, strtok_20);
  tcase_add_test(tc, strtok_21);
  tcase_add_test(tc, strtok_22);
  tcase_add_test(tc, strtok_23);
  tcase_add_test(tc, strtok_24);
  tcase_add_test(tc, strtok_25);
  tcase_add_test(tc, strtok_26);
  tcase_add_test(tc, strtok_27);
  tcase_add_test(tc, strtok_28);
  tcase_add_test(tc, strtok_29);
  tcase_add_test(tc, strtok_30);
  tcase_add_test(tc, strtok_31);
  tcase_add_test(tc, strtok_32);
  tcase_add_test(tc, strtok_33);
  tcase_add_test(tc, strtok_34);
  tcase_add_test(tc, strtok_35);
  tcase_add_test(tc, strtok_36);
  tcase_add_test(tc, strtok_37);
  tcase_add_test(tc, strtok_38);
  tcase_add_test(tc, strtok_39);
  tcase_add_test(tc, strtok_40);
  tcase_add_test(tc, strtok_41);
  tcase_add_test(tc, strtok_42);
  tcase_add_test(tc, strtok_43);
  tcase_add_test(tc, strtok_44);
  tcase_add_test(tc, strtok_45);
  tcase_add_test(tc, strtok_46);
  tcase_add_test(tc, strtok_47);
  tcase_add_test(tc, strtok_48);
  tcase_add_test(tc, strtok_49);
  tcase_add_test(tc, strtok_50);
  tcase_add_test(tc, strtok_51);
  tcase_add_test(tc, strtok_52);
  tcase_add_test(tc, strtok_53);
  tcase_add_test(tc, strtok_54);
  tcase_add_test(tc, strtok_55);
  tcase_add_test(tc, strtok_56);
  tcase_add_test(tc, strtok_57);
  tcase_add_test(tc, strtok_58);
  tcase_add_test(tc, strtok_59);
  tcase_add_test(tc, strtok_60);
  tcase_add_test(tc, strtok_61);
  tcase_add_test(tc, strtok_62);
  tcase_add_test(tc, strtok_63);
  tcase_add_test(tc, strtok_64);
  tcase_add_test(tc, strtok_65);
  tcase_add_test(tc, strtok_66);
  tcase_add_test(tc, strtok_67);
  tcase_add_test(tc, strtok_68);
  tcase_add_test(tc, strtok_69);
  tcase_add_test(tc, strtok_70);
  tcase_add_test(tc, strtok_71);
  tcase_add_test(tc, strtok_72);
  tcase_add_test(tc, strtok_73);
  tcase_add_test(tc, strtok_74);
  tcase_add_test(tc, strtok_75);
  tcase_add_test(tc, strtok_76);
  tcase_add_test(tc, strtok_77);
  tcase_add_test(tc, strtok_78);
  tcase_add_test(tc, strtok_79);
  tcase_add_test(tc, strtok_80);
  tcase_add_test(tc, strtok_81);
  tcase_add_test(tc, strtok_82);
  tcase_add_test(tc, strtok_83);
  tcase_add_test(tc, strtok_84);
  tcase_add_test(tc, strtok_85);
  tcase_add_test(tc, strtok_86);
  tcase_add_test(tc, strtok_87);
  tcase_add_test(tc, strtok_88);
  tcase_add_test(tc, strtok_89);
  tcase_add_test(tc, strtok_90);
  tcase_add_test(tc, strtok_91);
  tcase_add_test(tc, strtok_92);
  tcase_add_test(tc, strtok_93);
  tcase_add_test(tc, strtok_94);
  tcase_add_test(tc, strtok_95);
  tcase_add_test(tc, strtok_96);
  tcase_add_test(tc, strtok_97);
  tcase_add_test(tc, strtok_98);
  tcase_add_test(tc, strtok_99);
  tcase_add_test(tc, strtok_100);
  tcase_add_test(tc, strtok_101);
  tcase_add_test(tc, strtok_102);
  tcase_add_test(tc, strtok_103);
  tcase_add_test(tc, strtok_104);
  tcase_add_test(tc, strtok_105);
  tcase_add_test(tc, strtok_106);
  tcase_add_test(tc, strtok_107);
  tcase_add_test(tc, strtok_108);
  tcase_add_test(tc, strtok_109);
  tcase_add_test(tc, strtok_110);
  tcase_add_test(tc, strtok_111);
  tcase_add_test(tc, strtok_112);
  tcase_add_test(tc, strtok_113);
  tcase_add_test(tc, strtok_114);
  tcase_add_test(tc, strtok_115);
  tcase_add_test(tc, strtok_116);
  tcase_add_test(tc, strtok_117);
  tcase_add_test(tc, strtok_118);
  tcase_add_test(tc, strtok_119);
  tcase_add_test(tc, strtok_120);
  tcase_add_test(tc, strtok_121);
  tcase_add_test(tc, strtok_122);
  tcase_add_test(tc, strtok_123);
  tcase_add_test(tc, strtok_124);
  tcase_add_test(tc, strtok_125);
  tcase_add_test(tc, strtok_126);
  tcase_add_test(tc, strtok_127);
  tcase_add_test(tc, strtok_128);
  tcase_add_test(tc, strtok_129);
  tcase_add_test(tc, strtok_130);
  tcase_add_test(tc, strtok_131);
  tcase_add_test(tc, strtok_132);
  tcase_add_test(tc, strtok_133);
  tcase_add_test(tc, strtok_134);
  tcase_add_test(tc, strtok_135);
  tcase_add_test(tc, strtok_136);
  tcase_add_test(tc, strtok_137);
  tcase_add_test(tc, strtok_138);
  tcase_add_test(tc, strtok_139);
  tcase_add_test(tc, strtok_140);
  tcase_add_test(tc, strtok_141);
  tcase_add_test(tc, strtok_142);
  tcase_add_test(tc, strtok_143);
  tcase_add_test(tc, strtok_144);
  tcase_add_test(tc, strtok_145);
  tcase_add_test(tc, strtok_146);
  tcase_add_test(tc, strtok_147);
  tcase_add_test(tc, strtok_148);
  tcase_add_test(tc, strtok_149);
  tcase_add_test(tc, strtok_150);

  suite_add_tcase(s, tc);
  return s;
}
