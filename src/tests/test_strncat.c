#include "test_me.h"

START_TEST(strncat_1) {
  char s1[30] = "Hello, world!";
  char s2[30] = "Hello, world!";
  char s3[] = "Hello, world!";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_2) {
  char s1[30] = "Hello, world!";
  char s2[30] = "Hello, world!";
  char s3[] = "\0";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_3) {
  char s1[30] = "Hello, world!";
  char s2[30] = "Hello, world!";
  char s3[] = "\n\0\\d\f\\g\7";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_4) {
  char s1[30] = "Hello, world!";
  char s2[30] = "Hello, world!";
  char s3[] = "";
  s21_size_t n = 0;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_5) {
  char s1[30] = "";
  char s2[30] = "";
  char s3[] = "Hello, world!";
  s21_size_t n = 13;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_6) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] =
      "My name is Polina. I hate this, maybe I'm not supposed for this.";
  s21_size_t n = 6;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_7) {
  char s1[30] = "";
  char s2[30] = "";
  char s3[] = "Hello, world!";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_8) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] = "My name is Polina.";
  s21_size_t n = 2;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_9) {
  char s1[100] = "";
  char s2[100] = "";
  char s3[] = "";
  s21_size_t n = 10;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_10) {
  char s1[100] = "Hello\0, world!";
  char s2[100] = "Hello\0, world!";
  char s3[] = "My name is\0 Polina.";
  s21_size_t n = 15;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_11) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] = "\0";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_12) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] = "\0";
  s21_size_t n = 0;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_13) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] = "\0\0\0\0";
  s21_size_t n = 4;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_14) {
  char s1[100] = "Hello, world!";
  char s2[100] = "Hello, world!";
  char s3[] = "";
  s21_size_t n = 2;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_15) {
  char s1[100] = "Hello, world!\0\0\0";
  char s2[100] = "Hello, world!\0\0\0";
  char s3[] = "My name is Polina.";
  s21_size_t n = 0;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_16) {
  char s1[1000] = "!igl=Xng~OqPRkQZ0-!L-kV+l";
  char s2[1000] = "!igl=Xng~OqPRkQZ0-!L-kV+l";
  char s3[] = "|RXxbm6DjKtkjuiZx.qTd0As.";
  s21_size_t n = 25;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_17) {
  char s1[1000] = "pRsd/GD?";
  char s2[1000] = "pRsd/GD?";
  char s3[] = "28[X";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_18) {
  char s1[1000] = "hhEleJ{4htxG+J*IY}J?Ji{.?-01w^";
  char s2[1000] = "hhEleJ{4htxG+J*IY}J?Ji{.?-01w^";
  char s3[] = "*(m";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_19) {
  char s1[1000] = "}&^>^f|%";
  char s2[1000] = "}&^>^f|%";
  char s3[] = "9(1?m;c";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_20) {
  char s1[1000] = ":r3qtt`T(Z2o_(ezJTbwMFd<.RKap";
  char s2[1000] = ":r3qtt`T(Z2o_(ezJTbwMFd<.RKap";
  char s3[] = ":t*0/M?#l";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_21) {
  char s1[1000] = "o<8.|ZdmhnfS$Q{8.X-H|u";
  char s2[1000] = "o<8.|ZdmhnfS$Q{8.X-H|u";
  char s3[] = "Lc9fyLoYQrXAYDQ*#<.N%4Dba2B";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_22) {
  char s1[1000] = "G+FR:6o!GXy%9@xC4W<";
  char s2[1000] = "G+FR:6o!GXy%9@xC4W<";
  char s3[] = "9t0Ov3Ny6(jTD";
  s21_size_t n = 19;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_23) {
  char s1[1000] = "%iWl6/}iW}";
  char s2[1000] = "%iWl6/}iW}";
  char s3[] = "R^mjgUMUM]T%dQ";
  s21_size_t n = 10;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_24) {
  char s1[1000] = "yOM2q4{3TC:g]_MgrK/mB:=";
  char s2[1000] = "yOM2q4{3TC:g]_MgrK/mB:=";
  char s3[] = "1qM.Sw2>7!lW01i&Q";
  s21_size_t n = 23;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_25) {
  char s1[1000] = "2[vID43dS?1%<[Hr";
  char s2[1000] = "2[vID43dS?1%<[Hr";
  char s3[] = "RX3";
  s21_size_t n = 16;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_26) {
  char s1[1000] = "H2EJc$KuInZNwZl-|k(ho!Hf-dgp^";
  char s2[1000] = "H2EJc$KuInZNwZl-|k(ho!Hf-dgp^";
  char s3[] = "xViP6w5HB/";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_27) {
  char s1[1000] = "kq!r";
  char s2[1000] = "kq!r";
  char s3[] = ":r=-sM1E#3HA)y)}acE`vC";
  s21_size_t n = 4;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_28) {
  char s1[1000] = "{7Q";
  char s2[1000] = "{7Q";
  char s3[] = "gbe8jj4tO}?~";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_29) {
  char s1[1000] = "|e`^%>>fU!z2xRM+5]";
  char s2[1000] = "|e`^%>>fU!z2xRM+5]";
  char s3[] = "sXEHKqx2=P@EVT`<=q";
  s21_size_t n = 18;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_30) {
  char s1[1000] = "Jg_$>6pB4G)ps";
  char s2[1000] = "Jg_$>6pB4G)ps";
  char s3[] = "ts:+USPS<w.";
  s21_size_t n = 13;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_31) {
  char s1[1000] = "p2r~";
  char s2[1000] = "p2r~";
  char s3[] = "rr~6";
  s21_size_t n = 4;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_32) {
  char s1[1000] = "cBSgU6*!-93L(56+t=27Y#";
  char s2[1000] = "cBSgU6*!-93L(56+t=27Y#";
  char s3[] = "Iid.V<k#";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_33) {
  char s1[1000] = "o_|kNO-P-[J|jG@L::E?}g`}";
  char s2[1000] = "o_|kNO-P-[J|jG@L::E?}g`}";
  char s3[] = "mp&2#r0w`&+u*(Ao*p$";
  s21_size_t n = 24;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_34) {
  char s1[1000] = "2o<_Qt";
  char s2[1000] = "2o<_Qt";
  char s3[] = "t&(F4O.-S{B}C!]T;8";
  s21_size_t n = 6;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_35) {
  char s1[1000] = "7=@X;z$>g>V(eM(}p-gQ.8>]=.{*";
  char s2[1000] = "7=@X;z$>g>V(eM(}p-gQ.8>]=.{*";
  char s3[] = "jTdf6";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_36) {
  char s1[1000] = "x/_6H";
  char s2[1000] = "x/_6H";
  char s3[] = "T/Rt^Dg@H^fY7";
  s21_size_t n = 5;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_37) {
  char s1[1000] = "We]`u0jNAYA)wG_T!DWAf@&";
  char s2[1000] = "We]`u0jNAYA)wG_T!DWAf@&";
  char s3[] = "z_:/%Zzw}";
  s21_size_t n = 23;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_38) {
  char s1[1000] = "N*u!%$`)T)%~v8>r#+uNZ";
  char s2[1000] = "N*u!%$`)T)%~v8>r#+uNZ";
  char s3[] = "8ko8KRArru)S?";
  s21_size_t n = 21;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_39) {
  char s1[1000] = "NJbqYY=kHEB+!";
  char s2[1000] = "NJbqYY=kHEB+!";
  char s3[] = "b/%A~L_`-Pe[T_B+n";
  s21_size_t n = 13;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_40) {
  char s1[1000] = "|}p&XE:.>m?+KZG";
  char s2[1000] = "|}p&XE:.>m?+KZG";
  char s3[] = "x%0cDg[`p4P(BZ*";
  s21_size_t n = 15;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_41) {
  char s1[1000] = "})z;.*]bw^ZP@OeLO%6nCV";
  char s2[1000] = "})z;.*]bw^ZP@OeLO%6nCV";
  char s3[] = "EKptV~Ck_9&V(vj@c1DrfLrwAp";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_42) {
  char s1[1000] = ")O>/-FG5UOwgo>";
  char s2[1000] = ")O>/-FG5UOwgo>";
  char s3[] = "P[1Yo>%[aFEuJ?4";
  s21_size_t n = 14;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_43) {
  char s1[1000] = "SzurD6N";
  char s2[1000] = "SzurD6N";
  char s3[] = "(eDpy8Uw?";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_44) {
  char s1[1000] = "=$fcq@/bU+fkV0}}I|WWG^N";
  char s2[1000] = "=$fcq@/bU+fkV0}}I|WWG^N";
  char s3[] = "UnvU=p";
  s21_size_t n = 23;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_45) {
  char s1[1000] = "4a?W#BMWn!2+3[a7:v6}#jXi4^aJ*t";
  char s2[1000] = "4a?W#BMWn!2+3[a7:v6}#jXi4^aJ*t";
  char s3[] = "))rD0334<^gOl@XBNy|";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_46) {
  char s1[1000] = "+";
  char s2[1000] = "+";
  char s3[] = "|Jks#!N<zWl[N7Ai6";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_47) {
  char s1[1000] = "PKF:k~kInF:Hj<_g$pQJ";
  char s2[1000] = "PKF:k~kInF:Hj<_g$pQJ";
  char s3[] = "2ehV^UY5MPcSzju1df+/zTjN";
  s21_size_t n = 20;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_48) {
  char s1[1000] = "fpn";
  char s2[1000] = "fpn";
  char s3[] = "[qiTC*-+/V";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_49) {
  char s1[1000] = "Yu7L)_-_jI~@PGAk4L$WG-N@eciY";
  char s2[1000] = "Yu7L)_-_jI~@PGAk4L$WG-N@eciY";
  char s3[] = "/pG%]?l]69P%";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_50) {
  char s1[1000] = "x-zt!!YD";
  char s2[1000] = "x-zt!!YD";
  char s3[] = "J)4ihSoEPzr83K4:^KHJ2@yP8k";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_51) {
  char s1[1000] = "~lzk(#";
  char s2[1000] = "~lzk(#";
  char s3[] = "C*);TCvW:/{1V";
  s21_size_t n = 6;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_52) {
  char s1[1000] = "=IzIO|h#`afxn.fhhAMjWVtJ?";
  char s2[1000] = "=IzIO|h#`afxn.fhhAMjWVtJ?";
  char s3[] = "rvkmm.wzjQ=gf_b4*c$2ne0%v";
  s21_size_t n = 25;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_53) {
  char s1[1000] = "J=WRT8&]RXjG$|6>u]ZO1C";
  char s2[1000] = "J=WRT8&]RXjG$|6>u]ZO1C";
  char s3[] = "bUlJ8oZha9h#=5hBSb%EONi5";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_54) {
  char s1[1000] = "JX1|W7}";
  char s2[1000] = "JX1|W7}";
  char s3[] = "1A)pkf?s{(Zg.$8g0UCFP#";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_55) {
  char s1[1000] = "m!60UjcwV-rIohFRz@x?xR9~a-Oss";
  char s2[1000] = "m!60UjcwV-rIohFRz@x?xR9~a-Oss";
  char s3[] = "@2?m[7TH*)]B@J/(qkUrhmw";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_56) {
  char s1[1000] = "F{Xs;>vk;I|Kw]Q~~+UD";
  char s2[1000] = "F{Xs;>vk;I|Kw]Q~~+UD";
  char s3[] = "77/$m";
  s21_size_t n = 20;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_57) {
  char s1[1000] = "Gn6*Wk-";
  char s2[1000] = "Gn6*Wk-";
  char s3[] = "Zfiy0*Um^H}=Kyf<I";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_58) {
  char s1[1000] = "?>CmUnX6S{1te1W8+=)]kgq";
  char s2[1000] = "?>CmUnX6S{1te1W8+=)]kgq";
  char s3[] = "18s/5ozGM#.{";
  s21_size_t n = 23;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_59) {
  char s1[1000] = "m-c?(jb7o";
  char s2[1000] = "m-c?(jb7o";
  char s3[] = "F@";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_60) {
  char s1[1000] = "I4PjJW|q^m9db3$";
  char s2[1000] = "I4PjJW|q^m9db3$";
  char s3[] = "0_]pBJU`=JqJ>vdy1C5]Jmrd:";
  s21_size_t n = 15;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_61) {
  char s1[1000] = "V!{r";
  char s2[1000] = "V!{r";
  char s3[] = "BlQ*w>#";
  s21_size_t n = 4;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_62) {
  char s1[1000] = "IDCmNzgBzzt1rEuisB.j;f/_djwzE";
  char s2[1000] = "IDCmNzgBzzt1rEuisB.j;f/_djwzE";
  char s3[] = "7HfW*6BfFyp$v(xD1#[2e@sC]l)";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_63) {
  char s1[1000] = "~IJ};}@V%93WqM=z";
  char s2[1000] = "~IJ};}@V%93WqM=z";
  char s3[] = "N";
  s21_size_t n = 16;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_64) {
  char s1[1000] = "Uc>(PI7S8A{2";
  char s2[1000] = "Uc>(PI7S8A{2";
  char s3[] = "6{Q27);qD`lf^/hGzH{K!_D6k0bnK";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_65) {
  char s1[1000] = "WJiK%D/z[c.P";
  char s2[1000] = "WJiK%D/z[c.P";
  char s3[] = "NxKO]J%3Q!p|l?j";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_66) {
  char s1[1000] = "O0<6%WoH^iima>0q[E}8(K";
  char s2[1000] = "O0<6%WoH^iima>0q[E}8(K";
  char s3[] = "wxf?OF@U.@[YQcqj5;n";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_67) {
  char s1[1000] = "Ai@2e@b7}n|R5+Hw1";
  char s2[1000] = "Ai@2e@b7}n|R5+Hw1";
  char s3[] = "Q?uChK@sb";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_68) {
  char s1[1000] = "y2:TqqF}1zIYPg.}-6[2V[t";
  char s2[1000] = "y2:TqqF}1zIYPg.}-6[2V[t";
  char s3[] = "$T)5G;IPCH%-6tX8)s";
  s21_size_t n = 23;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_69) {
  char s1[1000] = "kw@(JB<_JgQ*";
  char s2[1000] = "kw@(JB<_JgQ*";
  char s3[] = "A7p]+Qbanq7@?P5S~wfbO-#Y(#wb}.";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_70) {
  char s1[1000] = "/J-Rp#lV";
  char s2[1000] = "/J-Rp#lV";
  char s3[] = "7>%de?f4I$?VNt;*.}Z";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_71) {
  char s1[1000] = "N]CSrD5CO;NT=v";
  char s2[1000] = "N]CSrD5CO;NT=v";
  char s3[] = "RbS|3n&NGI#@3KI&l`Q{M/";
  s21_size_t n = 14;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_72) {
  char s1[1000] = "/>][]j[BiE$Mj`YxmQ";
  char s2[1000] = "/>][]j[BiE$Mj`YxmQ";
  char s3[] = "vz&Z}uSK!3uLbwc@KLJ2*q=Y@M[G";
  s21_size_t n = 18;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_73) {
  char s1[1000] = "qk{{F~SWAS+";
  char s2[1000] = "qk{{F~SWAS+";
  char s3[] = "x%?Q??";
  s21_size_t n = 11;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_74) {
  char s1[1000] = ".p";
  char s2[1000] = ".p";
  char s3[] = "jK#ckAR";
  s21_size_t n = 2;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_75) {
  char s1[1000] = "]t`JM<P:Y_{]B5<|V+%O6^rW*vv&{";
  char s2[1000] = "]t`JM<P:Y_{]B5<|V+%O6^rW*vv&{";
  char s3[] = "KW*(Q4NoFz_FJiw!6aLfXM_M!l2-a";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_76) {
  char s1[1000] = "}Rm.BlQjfW!fDK8XADRH%`Q(%S5BnY";
  char s2[1000] = "}Rm.BlQjfW!fDK8XADRH%`Q(%S5BnY";
  char s3[] = "okMUDF9!hZ7rdx:";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_77) {
  char s1[1000] = "Qv@M_r_}E*;X>#";
  char s2[1000] = "Qv@M_r_}E*;X>#";
  char s3[] = "Vje3k3YIc^$Scvf-sCW";
  s21_size_t n = 14;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_78) {
  char s1[1000] = "Gb";
  char s2[1000] = "Gb";
  char s3[] = "7EASQ/N*9t|NC";
  s21_size_t n = 2;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_79) {
  char s1[1000] = "go^P`wwP{aRZZB8@qWujpB$LZc5qX/";
  char s2[1000] = "go^P`wwP{aRZZB8@qWujpB$LZc5qX/";
  char s3[] = "&Dk$_ib9/C";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_80) {
  char s1[1000] = "D^F#ej0>{";
  char s2[1000] = "D^F#ej0>{";
  char s3[] = "/DhXj:IvvJt!T`<i(VfQ%~";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_81) {
  char s1[1000] = "=-q1#Fc:]=wb<qJeaH";
  char s2[1000] = "=-q1#Fc:]=wb<qJeaH";
  char s3[] = "CY";
  s21_size_t n = 18;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_82) {
  char s1[1000] = ":ffCKxS6afq^FqFdY";
  char s2[1000] = ":ffCKxS6afq^FqFdY";
  char s3[] = "W]7;#CZulww{~04n5X=3Rt$LkRo_-";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_83) {
  char s1[1000] = "S%L5U>`sP^[#Y~!Bs7trI=F2D4s";
  char s2[1000] = "S%L5U>`sP^[#Y~!Bs7trI=F2D4s";
  char s3[] = "IwL]dT*2yL_f-^|{gC5ot2e}uGE";
  s21_size_t n = 27;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_84) {
  char s1[1000] = "`nwaSw3";
  char s2[1000] = "`nwaSw3";
  char s3[] = "p3J_J=XolPZgt4d@";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_85) {
  char s1[1000] = "+Ie`=NCwq^rgT3d<IC2F[gwH<Q9AJq";
  char s2[1000] = "+Ie`=NCwq^rgT3d<IC2F[gwH<Q9AJq";
  char s3[] = "I1uCXkV@Z91>";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_86) {
  char s1[1000] = "s2V)2";
  char s2[1000] = "s2V)2";
  char s3[] = "C.JFe+`*m-E_Ne~#/AreA.g";
  s21_size_t n = 5;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_87) {
  char s1[1000] = "gP$&WMZ`$Kwv/I0;kLp5#]a@qj";
  char s2[1000] = "gP$&WMZ`$Kwv/I0;kLp5#]a@qj";
  char s3[] = "uo+NyAy";
  s21_size_t n = 26;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_88) {
  char s1[1000] = "=$)D?ywC3h5jt?T]n(Krh6Vpre>";
  char s2[1000] = "=$)D?ywC3h5jt?T]n(Krh6Vpre>";
  char s3[] = "fUhBPX";
  s21_size_t n = 27;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_89) {
  char s1[1000] = "MX";
  char s2[1000] = "MX";
  char s3[] = "rQH4~Ynl$cLAks}kJp)qGwkP(]jgo";
  s21_size_t n = 2;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_90) {
  char s1[1000] = "Zf<";
  char s2[1000] = "Zf<";
  char s3[] = "P4WExcQ*c5uPD.";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_91) {
  char s1[1000] = "t[pk6Mu<r+XTK;dil";
  char s2[1000] = "t[pk6Mu<r+XTK;dil";
  char s3[] = "pb;*n{Je-8QZ)+Qr";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_92) {
  char s1[1000] = "c-NpAz_<tB=Wvf<>@r@zM&2fVQ{&";
  char s2[1000] = "c-NpAz_<tB=Wvf<>@r@zM&2fVQ{&";
  char s3[] = "Dm";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_93) {
  char s1[1000] = "i_@y(vTK^PZ~txw~X:mVrWTKb71n";
  char s2[1000] = "i_@y(vTK^PZ~txw~X:mVrWTKb71n";
  char s3[] = "vzn3f!/D@9HbNga";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_94) {
  char s1[1000] = "T77=";
  char s2[1000] = "T77=";
  char s3[] = "j0snA>Nc%LB.ik>5";
  s21_size_t n = 4;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_95) {
  char s1[1000] = "8D|ZfH|1/B`hoFc7udh;";
  char s2[1000] = "8D|ZfH|1/B`hoFc7udh;";
  char s3[] = "Dp+x?O&*>;";
  s21_size_t n = 20;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_96) {
  char s1[1000] = "_;+q$z:A69pa85";
  char s2[1000] = "_;+q$z:A69pa85";
  char s3[] = "Wv5Y5Ncapg";
  s21_size_t n = 14;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_97) {
  char s1[1000] = "u";
  char s2[1000] = "u";
  char s3[] = "#9UL;QdifXmoY|pP";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_98) {
  char s1[1000] = ";~Qgr<EtS";
  char s2[1000] = ";~Qgr<EtS";
  char s3[] = "aHbq7HoR!";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_99) {
  char s1[1000] = "[X19G^*hR&*jlL";
  char s2[1000] = "[X19G^*hR&*jlL";
  char s3[] = "e`^";
  s21_size_t n = 14;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_100) {
  char s1[1000] = "u*M3%IDN/?I$>rkghwQ~";
  char s2[1000] = "u*M3%IDN/?I$>rkghwQ~";
  char s3[] = "~L[:Q]#]L0V!Y`lP";
  s21_size_t n = 20;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_101) {
  char s1[1000] = "uoi%R3h";
  char s2[1000] = "uoi%R3h";
  char s3[] = "bre{oG<H[[(8:e;602F>t9";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_102) {
  char s1[1000] = "i|(}F*Hl7Z`c@_!4X";
  char s2[1000] = "i|(}F*Hl7Z`c@_!4X";
  char s3[] = "}p;v2qs0G.w9Bg<";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_103) {
  char s1[1000] = "T{35b!$ln";
  char s2[1000] = "T{35b!$ln";
  char s3[] = ";5";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_104) {
  char s1[1000] = "Q5{`2^6";
  char s2[1000] = "Q5{`2^6";
  char s3[] = "(z<++2qx?qCko1GOWzwzE";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_105) {
  char s1[1000] = "!o$_#D2g$fP2";
  char s2[1000] = "!o$_#D2g$fP2";
  char s3[] = "f^SYC>>z_G<fEKX3mwhBHqTq0$VQt";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_106) {
  char s1[1000] = "cxY9=R5_|yIzpJz20#54=mXfyO]";
  char s2[1000] = "cxY9=R5_|yIzpJz20#54=mXfyO]";
  char s3[] = "/3O;RsH.lbskI;!";
  s21_size_t n = 27;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_107) {
  char s1[1000] = "{K~6f.";
  char s2[1000] = "{K~6f.";
  char s3[] = "ER]ND7KH;{x/b4";
  s21_size_t n = 6;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_108) {
  char s1[1000] = "6aJn/&??K%_s5S:Cbm{KhH9jAX{a";
  char s2[1000] = "6aJn/&??K%_s5S:Cbm{KhH9jAX{a";
  char s3[] = "6{SmBQ%]C@}";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_109) {
  char s1[1000] = "Uznm?1cVLz{a[ySDJPc_~";
  char s2[1000] = "Uznm?1cVLz{a[ySDJPc_~";
  char s3[] = "RX%XJvKaaFZ1<cp4txdt.g1|8#ps<)";
  s21_size_t n = 21;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_110) {
  char s1[1000] = "c5!qN1CwWcxe";
  char s2[1000] = "c5!qN1CwWcxe";
  char s3[] = "T&K8^]s5M!o0bHgEBcbh.@XIp";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_111) {
  char s1[1000] = "?c&T?R?%tIyUYnS.6`+%unKr=";
  char s2[1000] = "?c&T?R?%tIyUYnS.6`+%unKr=";
  char s3[] = "?qSq!hhgd]v";
  s21_size_t n = 25;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_112) {
  char s1[1000] = "1VK<Ci85imNt]YLJ).FnFwA*";
  char s2[1000] = "1VK<Ci85imNt]YLJ).FnFwA*";
  char s3[] = "%d9sOQ=3Y`jEA%jM:&.6Qqnz5";
  s21_size_t n = 24;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_113) {
  char s1[1000] = "<l*UTD}x3ais6fn$x";
  char s2[1000] = "<l*UTD}x3ais6fn$x";
  char s3[] = "F2mbh5j[Dx";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_114) {
  char s1[1000] = "jA]#/CGm#Nq";
  char s2[1000] = "jA]#/CGm#Nq";
  char s3[] = "abqsfiEW=?)R{b+0";
  s21_size_t n = 11;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_115) {
  char s1[1000] = "nGG(xxM[onadJbY!rZN5$DDC)bs~4U";
  char s2[1000] = "nGG(xxM[onadJbY!rZN5$DDC)bs~4U";
  char s3[] = "KJ`";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_116) {
  char s1[1000] = "j";
  char s2[1000] = "j";
  char s3[] = "yuR{#.FvKEA_6ic";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_117) {
  char s1[1000] = "fskK$mhFhBk2.c@Cs|;0+(";
  char s2[1000] = "fskK$mhFhBk2.c@Cs|;0+(";
  char s3[] = "yOuE=>;(=BnB-WA9c=;W3IV>l6]U";
  s21_size_t n = 22;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_118) {
  char s1[1000] = "|xJ";
  char s2[1000] = "|xJ";
  char s3[] = "Hk>U=v1/";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_119) {
  char s1[1000] = "/=1bAgzYeBA";
  char s2[1000] = "/=1bAgzYeBA";
  char s3[] = "C4xC_jO-<7c~dP1$xbc.ig{9zfJ";
  s21_size_t n = 11;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_120) {
  char s1[1000] = "[9-fD)nWH5b&i:{";
  char s2[1000] = "[9-fD)nWH5b&i:{";
  char s3[] = "F?)z@pgSJ";
  s21_size_t n = 15;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_121) {
  char s1[1000] = "nm{nxUm8`";
  char s2[1000] = "nm{nxUm8`";
  char s3[] = "].nzLG;?|";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_122) {
  char s1[1000] = "4dM+)_};}";
  char s2[1000] = "4dM+)_};}";
  char s3[] = "_Uo:l(U|3s;W4|={W9c";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_123) {
  char s1[1000] = "@*ths9|tg}(nv4]Jdn";
  char s2[1000] = "@*ths9|tg}(nv4]Jdn";
  char s3[] = "-cc>r^I[@IKh@>B{BspaP7E";
  s21_size_t n = 18;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_124) {
  char s1[1000] = "/o3RG~uDSR-@I5:C@";
  char s2[1000] = "/o3RG~uDSR-@I5:C@";
  char s3[] = "?*_}n/Cb7_6$T$=VS{Q(uP*ya(P]";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_125) {
  char s1[1000] = "gMM7a0^Y@2KiTt:svPowZ)1!o|";
  char s2[1000] = "gMM7a0^Y@2KiTt:svPowZ)1!o|";
  char s3[] = "4I[gbT4~Myyam&e/6[Id~ir1~YXtz";
  s21_size_t n = 26;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_126) {
  char s1[1000] = "a!4";
  char s2[1000] = "a!4";
  char s3[] = "Y_TaS>U)w{xHV^E20KL.QL0{nYS#";
  s21_size_t n = 3;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_127) {
  char s1[1000] = "Tdt_WPIY#579*QGZ:";
  char s2[1000] = "Tdt_WPIY#579*QGZ:";
  char s3[] = "M]Nb@#oG#ii`t_mg*@RNO/hl[!0B";
  s21_size_t n = 17;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_128) {
  char s1[1000] = ";Jl2NUds/-Y#";
  char s2[1000] = ";Jl2NUds/-Y#";
  char s3[] = "c/Bc$V";
  s21_size_t n = 12;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_129) {
  char s1[1000] = "qPG?5{mq";
  char s2[1000] = "qPG?5{mq";
  char s3[] = "W<;hr)";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_130) {
  char s1[1000] = "?xi=52;&x";
  char s2[1000] = "?xi=52;&x";
  char s3[] = "-ubH^4#S)xvmHY";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_131) {
  char s1[1000] = "8(L?&6(O&4BlOW62=f?|j3xZ5S_";
  char s2[1000] = "8(L?&6(O&4BlOW62=f?|j3xZ5S_";
  char s3[] = "1o)hy!j;nj}B4`7JA[15/pTt";
  s21_size_t n = 27;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_132) {
  char s1[1000] = "^@*^ZvbB;";
  char s2[1000] = "^@*^ZvbB;";
  char s3[] = "NPdJ`KTNsGT?>KAh1^<";
  s21_size_t n = 9;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_133) {
  char s1[1000] = "fq1>SjR3u^+bj?f*`E";
  char s2[1000] = "fq1>SjR3u^+bj?f*`E";
  char s3[] = "?Hmowj";
  s21_size_t n = 18;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_134) {
  char s1[1000] = "|";
  char s2[1000] = "|";
  char s3[] = "vZWl~e6BtYucvJSk";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_135) {
  char s1[1000] = "%?}W<.AODW%TPbnk9/(2WIDM:=8IkA";
  char s2[1000] = "%?}W<.AODW%TPbnk9/(2WIDM:=8IkA";
  char s3[] = "yF97M`~~Ym12H1SG;>Mx";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_136) {
  char s1[1000] = "cT)z}1D^T>fqR$+C~uE4^";
  char s2[1000] = "cT)z}1D^T>fqR$+C~uE4^";
  char s3[] = "2%7qKXHtdEN~8Cv";
  s21_size_t n = 21;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_137) {
  char s1[1000] = "RVH]5c{ObIBvmr[cTb3D}`K10";
  char s2[1000] = "RVH]5c{ObIBvmr[cTb3D}`K10";
  char s3[] = ")<Vt6I#xq7A";
  s21_size_t n = 25;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_138) {
  char s1[1000] = "e?@=m)!?TFvM:J4T:h}uia-6}O[Lgx";
  char s2[1000] = "e?@=m)!?TFvM:J4T:h}uia-6}O[Lgx";
  char s3[] = "664?^]9)gs";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_139) {
  char s1[1000] = "`16_`q%6HBd#5>VOpqK+|A`LRAi?=";
  char s2[1000] = "`16_`q%6HBd#5>VOpqK+|A`LRAi?=";
  char s3[] = "P=_K@;kWQE";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_140) {
  char s1[1000] = "THLR;^1";
  char s2[1000] = "THLR;^1";
  char s3[] = "3clr35";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_141) {
  char s1[1000] = "IDe_Z.5";
  char s2[1000] = "IDe_Z.5";
  char s3[] = "C6";
  s21_size_t n = 7;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_142) {
  char s1[1000] = "yyMU3Q:;z1";
  char s2[1000] = "yyMU3Q:;z1";
  char s3[] = "VaE`7`N4nDJ!@NYSvWt?WZE+c?";
  s21_size_t n = 10;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_143) {
  char s1[1000] = "byIc<l&B";
  char s2[1000] = "byIc<l&B";
  char s3[] = "9+4UwrxaR$`^:r^%tWD`B&E$1";
  s21_size_t n = 8;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_144) {
  char s1[1000] = "Vj!>QsQB6]";
  char s2[1000] = "Vj!>QsQB6]";
  char s3[] = "g";
  s21_size_t n = 10;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_145) {
  char s1[1000] = "#";
  char s2[1000] = "#";
  char s3[] = "td]t:t/mD5lx<d%Wt.";
  s21_size_t n = 1;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_146) {
  char s1[1000] = "i74qYoQtNodvc(uow*GFTApzGwzl";
  char s2[1000] = "i74qYoQtNodvc(uow*GFTApzGwzl";
  char s3[] = "L`XRPNF3H6u_E4.Mm~J919o";
  s21_size_t n = 28;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_147) {
  char s1[1000] = "yPK0+Am_[_kJ&4D0l&@W<n8Y7@n`*";
  char s2[1000] = "yPK0+Am_[_kJ&4D0l&@W<n8Y7@n`*";
  char s3[] = "7}{";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_148) {
  char s1[1000] = "!iH|~hM8FaLJ.:[IPNWT6";
  char s2[1000] = "!iH|~hM8FaLJ.:[IPNWT6";
  char s3[] = "9L5";
  s21_size_t n = 21;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_149) {
  char s1[1000] = "z!G*{djbP5@4C|ouoztOS$$5+t%^V|";
  char s2[1000] = "z!G*{djbP5@4C|ouoztOS$$5+t%^V|";
  char s3[] = "2M#iR[oYZ}BtfitU:6D!";
  s21_size_t n = 30;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

START_TEST(strncat_150) {
  char s1[1000] = "7E=&S9|gqI|A+WG|o3SRE!P}L0j8>";
  char s2[1000] = "7E=&S9|gqI|A+WG|o3SRE!P}L0j8>";
  char s3[] = "w~#vjWOdeM";
  s21_size_t n = 29;
  ck_assert_pstr_eq(strncat(s1, s3, n), s21_strncat(s2, s3, n));
}
END_TEST

Suite *test_strncat(void) {
  Suite *s = suite_create("\033[45m-=S21_STRNCAT=-\033[0m");
  TCase *tc = tcase_create("strncat_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncat_1);
  tcase_add_test(tc, strncat_2);
  tcase_add_test(tc, strncat_3);
  tcase_add_test(tc, strncat_4);
  tcase_add_test(tc, strncat_5);
  tcase_add_test(tc, strncat_6);
  tcase_add_test(tc, strncat_7);
  tcase_add_test(tc, strncat_8);
  tcase_add_test(tc, strncat_9);
  tcase_add_test(tc, strncat_10);
  tcase_add_test(tc, strncat_11);
  tcase_add_test(tc, strncat_12);
  tcase_add_test(tc, strncat_13);
  tcase_add_test(tc, strncat_14);
  tcase_add_test(tc, strncat_15);
  tcase_add_test(tc, strncat_16);
  tcase_add_test(tc, strncat_17);
  tcase_add_test(tc, strncat_18);
  tcase_add_test(tc, strncat_19);
  tcase_add_test(tc, strncat_20);
  tcase_add_test(tc, strncat_21);
  tcase_add_test(tc, strncat_22);
  tcase_add_test(tc, strncat_23);
  tcase_add_test(tc, strncat_24);
  tcase_add_test(tc, strncat_25);
  tcase_add_test(tc, strncat_26);
  tcase_add_test(tc, strncat_27);
  tcase_add_test(tc, strncat_28);
  tcase_add_test(tc, strncat_29);
  tcase_add_test(tc, strncat_30);
  tcase_add_test(tc, strncat_31);
  tcase_add_test(tc, strncat_32);
  tcase_add_test(tc, strncat_33);
  tcase_add_test(tc, strncat_34);
  tcase_add_test(tc, strncat_35);
  tcase_add_test(tc, strncat_36);
  tcase_add_test(tc, strncat_37);
  tcase_add_test(tc, strncat_38);
  tcase_add_test(tc, strncat_39);
  tcase_add_test(tc, strncat_40);
  tcase_add_test(tc, strncat_41);
  tcase_add_test(tc, strncat_42);
  tcase_add_test(tc, strncat_43);
  tcase_add_test(tc, strncat_44);
  tcase_add_test(tc, strncat_45);
  tcase_add_test(tc, strncat_46);
  tcase_add_test(tc, strncat_47);
  tcase_add_test(tc, strncat_48);
  tcase_add_test(tc, strncat_49);
  tcase_add_test(tc, strncat_50);
  tcase_add_test(tc, strncat_51);
  tcase_add_test(tc, strncat_52);
  tcase_add_test(tc, strncat_53);
  tcase_add_test(tc, strncat_54);
  tcase_add_test(tc, strncat_55);
  tcase_add_test(tc, strncat_56);
  tcase_add_test(tc, strncat_57);
  tcase_add_test(tc, strncat_58);
  tcase_add_test(tc, strncat_59);
  tcase_add_test(tc, strncat_60);
  tcase_add_test(tc, strncat_61);
  tcase_add_test(tc, strncat_62);
  tcase_add_test(tc, strncat_63);
  tcase_add_test(tc, strncat_64);
  tcase_add_test(tc, strncat_65);
  tcase_add_test(tc, strncat_66);
  tcase_add_test(tc, strncat_67);
  tcase_add_test(tc, strncat_68);
  tcase_add_test(tc, strncat_69);
  tcase_add_test(tc, strncat_70);
  tcase_add_test(tc, strncat_71);
  tcase_add_test(tc, strncat_72);
  tcase_add_test(tc, strncat_73);
  tcase_add_test(tc, strncat_74);
  tcase_add_test(tc, strncat_75);
  tcase_add_test(tc, strncat_76);
  tcase_add_test(tc, strncat_77);
  tcase_add_test(tc, strncat_78);
  tcase_add_test(tc, strncat_79);
  tcase_add_test(tc, strncat_80);
  tcase_add_test(tc, strncat_81);
  tcase_add_test(tc, strncat_82);
  tcase_add_test(tc, strncat_83);
  tcase_add_test(tc, strncat_84);
  tcase_add_test(tc, strncat_85);
  tcase_add_test(tc, strncat_86);
  tcase_add_test(tc, strncat_87);
  tcase_add_test(tc, strncat_88);
  tcase_add_test(tc, strncat_89);
  tcase_add_test(tc, strncat_90);
  tcase_add_test(tc, strncat_91);
  tcase_add_test(tc, strncat_92);
  tcase_add_test(tc, strncat_93);
  tcase_add_test(tc, strncat_94);
  tcase_add_test(tc, strncat_95);
  tcase_add_test(tc, strncat_96);
  tcase_add_test(tc, strncat_97);
  tcase_add_test(tc, strncat_98);
  tcase_add_test(tc, strncat_99);
  tcase_add_test(tc, strncat_100);
  tcase_add_test(tc, strncat_101);
  tcase_add_test(tc, strncat_102);
  tcase_add_test(tc, strncat_103);
  tcase_add_test(tc, strncat_104);
  tcase_add_test(tc, strncat_105);
  tcase_add_test(tc, strncat_106);
  tcase_add_test(tc, strncat_107);
  tcase_add_test(tc, strncat_108);
  tcase_add_test(tc, strncat_109);
  tcase_add_test(tc, strncat_110);
  tcase_add_test(tc, strncat_111);
  tcase_add_test(tc, strncat_112);
  tcase_add_test(tc, strncat_113);
  tcase_add_test(tc, strncat_114);
  tcase_add_test(tc, strncat_115);
  tcase_add_test(tc, strncat_116);
  tcase_add_test(tc, strncat_117);
  tcase_add_test(tc, strncat_118);
  tcase_add_test(tc, strncat_119);
  tcase_add_test(tc, strncat_120);
  tcase_add_test(tc, strncat_121);
  tcase_add_test(tc, strncat_122);
  tcase_add_test(tc, strncat_123);
  tcase_add_test(tc, strncat_124);
  tcase_add_test(tc, strncat_125);
  tcase_add_test(tc, strncat_126);
  tcase_add_test(tc, strncat_127);
  tcase_add_test(tc, strncat_128);
  tcase_add_test(tc, strncat_129);
  tcase_add_test(tc, strncat_130);
  tcase_add_test(tc, strncat_131);
  tcase_add_test(tc, strncat_132);
  tcase_add_test(tc, strncat_133);
  tcase_add_test(tc, strncat_134);
  tcase_add_test(tc, strncat_135);
  tcase_add_test(tc, strncat_136);
  tcase_add_test(tc, strncat_137);
  tcase_add_test(tc, strncat_138);
  tcase_add_test(tc, strncat_139);
  tcase_add_test(tc, strncat_140);
  tcase_add_test(tc, strncat_141);
  tcase_add_test(tc, strncat_142);
  tcase_add_test(tc, strncat_143);
  tcase_add_test(tc, strncat_144);
  tcase_add_test(tc, strncat_145);
  tcase_add_test(tc, strncat_146);
  tcase_add_test(tc, strncat_147);
  tcase_add_test(tc, strncat_148);
  tcase_add_test(tc, strncat_149);
  tcase_add_test(tc, strncat_150);

  suite_add_tcase(s, tc);
  return s;
}
