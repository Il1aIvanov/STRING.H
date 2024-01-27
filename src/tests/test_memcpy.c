#include "test_me.h"

START_TEST(memcpy_1) {
  char str1[] = "12345";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_2) {
  char str1[] = "abcdefghijklmnopqrstuvwxyz";
  char str2[] = "                          ";
  ck_assert_str_eq(memcpy(str2, str1, sizeof(char) * 27),
                   s21_memcpy(str2, str1, sizeof(char) * 27));
}
END_TEST

START_TEST(memcpy_3) {
  char str1[] = "abcdefghijklmopqrstuvwxyz";
  char str2[] = "        2    2   2       ";
  ck_assert_str_eq(memcpy(str2, str1 + 8, sizeof(char) * 9),
                   s21_memcpy(str2, str1 + 8, sizeof(char) * 9));
}
END_TEST

START_TEST(memcpy_4) {
  char str1[] = "111111111111111111111111111111111111111111111111";
  char str2[] = "44444";
  ck_assert_str_eq(memcpy(str1, str2, 4), s21_memcpy(str1, str2, 4));
}
END_TEST

START_TEST(memcpy_5) {
  char str2[] = "                           ";
  ck_assert_str_eq(memcpy(str2, "11111111111111111", 19),
                   s21_memcpy(str2, "11111111111111111", 19));
}
END_TEST

START_TEST(memcpy_6) {
  char str2[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFB";
  ck_assert_str_eq(memcpy(str2, "11111111111111111", 900),
                   s21_memcpy(str2, "11111111111111111", 900));
}
END_TEST

START_TEST(memcpy_7) {
  char str1[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFB";
  char str2[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFB";
  ck_assert_str_eq(memcpy(str2, str1, 100), s21_memcpy(str2, str1, 100));
}
END_TEST

START_TEST(memcpy_8) {
  char str1[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM21111111111111111111111P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~"
      "8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,";

  char str2[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM21111111111111111111111P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~"
      "8$53mzkYd>~u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFBM2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~"
      "u%dk3Y:"
      "hd}tzFB";
  ck_assert_str_eq(memcpy(str2, str1, 537), s21_memcpy(str2, str1, 537));
}
END_TEST

START_TEST(memcpy_9) {
  char str1[] = "4GFR.";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_10) {
  char str1[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFB";
  char str2[] =
      "M2UJ%,xOjY]V]P,)]HPz3P03Z)3$MC`()u,YbIb6U{tL=L)2EC^9~8$53mzkYd>~u%dk3Y:"
      "hd}tzFB";
  ck_assert_str_eq(memcpy(str2, str1, 17), s21_memcpy(str2, str1, 17));
}
END_TEST

START_TEST(memcpy_11) {
  char str1[] =
      "Li[z^@z{ahmW5GA%v#Wl){,x3;_wS$$WN&qP:+&NGP[LW{^n}:E_IMl~+VaI-]7SM.e."
      "D0TWzJr$?_8i}gt+evM#vfd<%Z_~|o?&PNLXG,zT~,Ji";
  char str2[] =
      "                                                                        "
      "                               ;;;;;;;;;";
  ck_assert_str_eq(memcpy(str2, str1, 113), s21_memcpy(str2, str1, 113));
}
END_TEST

START_TEST(memcpy_12) {
  char str1[] =
      ";bN.UE,Ui^d5WAp(>92!+Jk#^DQH=<GOe6yNb[)z,RU!b?gm[!HR)57`R|dzkW]){`lTO=T-"
      "#o;^c-D}D,tqneCExT^NR]9m";
  char str2[] =
      "                                                                        "
      "                                    ";
  ck_assert_str_eq(memcpy(str2, str1, 47), s21_memcpy(str2, str1, 47));
}
END_TEST

START_TEST(memcpy_13) {
  char str1[] = "77a,Zt:/";
  char str2[] = "                    ";
  ck_assert_str_eq(memcpy(str2, str1, 8), s21_memcpy(str2, str1, 8));
}
END_TEST

START_TEST(memcpy_14) {
  char str1[] = "5G*zc+S_beGe}$JVb+LNvU~PBh0q)>heC4y=XSga5W>vG=z<SM:>IcV,kZ";
  char str2[] =
      "                                                                        "
      "                    ";
  ck_assert_str_eq(memcpy(str2, str1, 14), s21_memcpy(str2, str1, 14));
}
END_TEST

START_TEST(memcpy_15) {
  char str1[] =
      "8E7O|Ngjqlv$guF%KZHtEmhW&%7iM14fjI03K[73ey8[cHUP;H>O_70~mC:v#.Idl+"
      "fWTEBw:Z-PP$X4~4h.e:bQAjnF8K@>3V@3Sgo@[O[qQvq}+|i0(X5&!CtzY#y0zDQSsEgX,"
      "Vr8.!Vrv";
  char str2[] =
      "                                                                        "
      "                                                                        "
      "                    ";
  ck_assert_str_eq(memcpy(str2, str1, 31), s21_memcpy(str2, str1, 31));
}
END_TEST

START_TEST(memcpy_16) {
  char str1[] = "s`Zi12HcC)}Y>kPG}5~H-+M_W3Q%Hi2ZWhloiDW[n4,wpBs/^$d";
  char str2[] = " s`Zi12HcC)}Y>kPG};;;;;;;;;;WhloiDW[n4,wpBs/^$d    ";
  ck_assert_str_eq(memcpy(str2, str1, 49), s21_memcpy(str2, str1, 49));
}
END_TEST

START_TEST(memcpy_17) {
  char str1[] = "V-9Yyt";
  char str2[] = "  dsad";
  ck_assert_str_eq(memcpy(str2, str1, 6), s21_memcpy(str2, str1, 6));
}
END_TEST

START_TEST(memcpy_18) {
  char str1[] =
      "64x([C:7zNdnliRHTuVM](dU8!jyE:en(YP8SN_r)G-Q!f#;bvWX#%VE;CX|Vvz#$Z|$H-"
      "OzlV$";
  char str2[] =
      " 64x([C:7zNdnliRHTuVM](dU8!jyE:en(YP8SN_r)G-Q!f#;bvWX#%VE;CX|Vvz#$Z|$H-"
      "Ozlsaa";
  ck_assert_str_eq(memcpy(str2, str1, 9), s21_memcpy(str2, str1, 9));
}
END_TEST

START_TEST(memcpy_19) {
  char str1[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9lH2GNMs;s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 79), s21_memcpy(str2, str1, 79));
}
END_TEST

START_TEST(memcpy_20) {
  char str1[] =
      "NEt@MEe_w,S2jM817++(Gi>qenq][mlWD=K}5cWRGwy7O]q_+KE[jLp3p*JXZ9P1,v?:"
      "3Ynu?_>t-&w%=%B0JN&<-tJnQ1Dz*ZL";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 45), s21_memcpy(str2, str1, 45));
}
END_TEST

START_TEST(memcpy_21) {
  char str1[] = "):b4$?/P)zCB";
  char str2[] = "               ";
  ck_assert_str_eq(memcpy(str2, str1, 7), s21_memcpy(str2, str1, 7));
}
END_TEST

START_TEST(memcpy_22) {
  char str1[] =
      "MnNg*PU5c}M*KUyA/"
      "|cf)UpKYUxw(&z@E*WS~|,}.C6$@`pWdwI&F&)-d~iWrb@1b6sbQ!U(/"
      "x&4Db>j|a+{EYuD)`d-&c-Elz|M56m<%%pX@s%[,";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ;
  ck_assert_str_eq(memcpy(str2, str1, 6), s21_memcpy(str2, str1, 6));
}
END_TEST

START_TEST(memcpy_23) {
  char str1[] =
      "~PiZkaP.My<}NILU}Z{0AJevlt_,CNbSX0/8x^7s$vE`C<=pC>)N}ZEQr/;rD/"
      "k5U0>Hw6LRKQabwXMn<u8/w,qR#/tq#GNp%P&#lw9";
  char str2[] =
      "  ;; ;;; ;;K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 85), s21_memcpy(str2, str1, 85));
}
END_TEST

START_TEST(memcpy_24) {
  char str1[] =
      "!0b,,B=BevnE%w#cZV/MEnDUw)g=1n/)<EXy?CLWb`-p]/WjGAxlp0;Ai4X[B$(/"
      "AqvN1z.b/MV-6BlT4SySTyXKf1:ro|tp!8:&Jq7lZAD~q@#yn9{#lYAgWIV3{ls|g!`";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 98), s21_memcpy(str2, str1, 98));
}
END_TEST

START_TEST(memcpy_25) {
  char str1[] = "7i9`Ct0.ZJ>:~u,!h/ylJbpkw%I586&cabtl!*I+#|=Jf3jiK9B2A}U(EmS3";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_26) {
  char str1[] =
      "GQDyl8^*u8T!No4YT-e+a#hX3d|rcGEXirFrl2:|R[;5MIpi>QMUIUI8D9tF6*}`wIeLfAh?"
      "lT(0e$xyE(/}q:vXTBwO9VCCv5G`M1GvN>3R2?QM@SEPIbb";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 24), s21_memcpy(str2, str1, 24));
}
END_TEST

START_TEST(memcpy_27) {
  char str1[] =
      "x8KeT{~98&gIc;%:B,JuPKA-.mP{-,=}rR#>ObdonsE8I^LXX|fN;f$DY({zD_b+=-0-FU{<"
      "G`!R_w!{z2]|;u+${i[-aG[$/.&os8";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 77), s21_memcpy(str2, str1, 77));
}
END_TEST

START_TEST(memcpy_28) {
  char str1[] = "~$u0@aU8a`1yaO<:(,N}";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 16), s21_memcpy(str2, str1, 16));
}
END_TEST

START_TEST(memcpy_29) {
  char str1[] =
      "N(rg[&_>O!eAIy&qg(1}J!0=S;/"
      "lki7}e.Uf|LRRH_=xzszp_i_26-4q@{$wM2*5]wsVVQK34,Tyb::^;Qtu463|b6JE(3#Ofx;"
      ";r2Oay2ac_!Pxe5>3GYBzi0j<oL&osEjB&G0Q4]uGT[YCcL6|M";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme                        ";
  ck_assert_str_eq(memcpy(str2, str1, 137), s21_memcpy(str2, str1, 137));
}
END_TEST

START_TEST(memcpy_30) {
  char str1[] = "X[X!Za";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 4), s21_memcpy(str2, str1, 4));
}
END_TEST

START_TEST(memcpy_31) {
  char str1[] =
      "w0~xId]5*:ANdw4L/KV}vFBFSDw_xyDkhQ6qm&meZ%FZYx9WCl0}E$d69&Vn2aR8LSRHo";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 43), s21_memcpy(str2, str1, 43));
}
END_TEST

START_TEST(memcpy_32) {
  char str1[] =
      "XwtE21ajQGVA8hLss3R7rih:.:<&%M=>7W=;Ix@e1b8#1&XsjFn6`V!LQz~oE(D";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 46), s21_memcpy(str2, str1, 46));
}
END_TEST

START_TEST(memcpy_33) {
  char str1[] =
      "{dq*se=`~$L+o?-kH#JrQu>_}-}|TZ?)(?qAiz<=gUr-`%`N;T1nkzYjp-UV1k_@3MeJ`"
      "dA9BMPNqe2qVN--?PIUQ,y]!)!ye+<#^.A4^`Inv";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 72), s21_memcpy(str2, str1, 72));
}
END_TEST

START_TEST(memcpy_34) {
  char str1[] =
      "U|t*NWC*Vxb=Sp2pWkzYxUyEqaidOu:]C>rz?P4w6Kw2ZsTMHXViFbv]]aE)"
      "tvFM0n5FDKf6,rV`eq!:0hjs2@R(45tE$$+aIGzE_QTHX~Wl3^X&oTEf]>.|7%n!PHQ";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 123), s21_memcpy(str2, str1, 123));
}
END_TEST

START_TEST(memcpy_35) {
  char str1[] =
      "OPh8DG8kGC8hZpCa2T.K:i>wi4srqY~=s_06Ok={t-Z~OI7muIjn66oL?as~7Zelxro!{LR="
      "{7m{eBwtG(^^c79P=aIOwlF-I!Hy<`5~ndx5G&X3+Ml0.";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 26), s21_memcpy(str2, str1, 26));
}
END_TEST

START_TEST(memcpy_36) {
  char str1[] =
      "KRvy[$gzm|^iQ,;ucv[;,.s#a|po6lOk,aJ6||MmdlU{eH2wdT+b1sJA,NG85oY?]2->&J|@"
      "9{4h>.X4<$LdCr4P-h[`zF9SzH{nVibE<hV)(jUs}nZy8c~D";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 87), s21_memcpy(str2, str1, 87));
}
END_TEST

START_TEST(memcpy_37) {
  char str1[] =
      "llfuBLJM{C_R1:F{dzgw=f3>Zw4W_@dU*U!^bC]/"
      "taLKP~y>kNEg4T$&zDlp^~?~;(CH08DRRac)?cs8Vv/"
      "F2k;~o%r(oQeZ,[]D+^}s(&atW$,I}uggt)m3ZTYyp)DNbbP0TG1vTA/KaQt|O";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 22), s21_memcpy(str2, str1, 22));
}
END_TEST

START_TEST(memcpy_38) {
  char str1[] = "](v";
  char str2[] = "    ";
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_39) {
  char str1[] =
      "H9Bg$tL.c^OIJB/rLUKGyP60AjE:~/"
      "OnG0tr1JDc;knY3P{eY`ry5lfW]wanx.ZGv{sI-dy~X[uQGu]Fzv=:y}sLKZe>^k[;k|Ok&"
      "I/6bogJFdYQQ3l;jf}-?_qZ+XMKvOs,.Me@S_";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 20), s21_memcpy(str2, str1, 20));
}
END_TEST

START_TEST(memcpy_40) {
  char str1[] = "8QQrl`_|(-V9uCnZMWI*zQ?krGE3Ba~*<r:Uw@NJl";
  char str2[] = "                                         ";
  ck_assert_str_eq(memcpy(str2, str1, 32), s21_memcpy(str2, str1, 32));
}
END_TEST

START_TEST(memcpy_41) {
  char str1[] =
      "3v)<s0~twUfJ<p7)feyM,J2vxAae(sJ$3;.Rt3Z-4h:lV!zE>^HJ~nypwOe|O3tw4`po}-?"
      "U-eL3y;+f:>3]tvcdWN!$nR)L7c0Uu";
  char str2[] =
      "K$emJ3=EH|9({$*.7UwH2Nd;OApoR2y<F>j&;1/"
      "LM~F}Ec3z3P}V%%>H]PdZsHk(jgSvG<msn9ldsadasdasdasdasd's'/sd/"
      "a'd];s=SD>:IP#RTYYI(Y?wm_-xdvV]"
      "jme";
  ck_assert_str_eq(memcpy(str2, str1, 31), s21_memcpy(str2, str1, 31));
}
END_TEST

START_TEST(memcpy_42) {
  char str1[] = "]H_A_P:u)b.NpJoH";
  char str2[] = "]H_A_P:u)b.NpJoH";
  ck_assert_str_eq(memcpy(str2, str1, 5), s21_memcpy(str2, str1, 5));
}
END_TEST

START_TEST(memcpy_43) {
  char str1[] =
      "K7q>%j`S$>AzA1cX,ZP^^k+&|mL{KOLt.C.0w>8[HgAW8wIB2zbBAft6pGIt4Sl%t^"
      "yVvEbBio*=zTjRQm4gP:o}$$,7[5hC&j,OW.&GaNesBy~DTE<:2H9?pZS)bE0tGHPnA73q2-"
      "DIlya2";
  char str2[] =
      "K7q>%j`S$>AzA1cX,ZP^^k+&|mL{KOLt.C.0w>8[HgAW8wIB2zbBAft6pGIt4Sl%t^"
      "yVvEbBio*=zTjRQm4gP:o}$$,7[5hC&j,OW.&GaNesBy~DTE<:2H9?pZS)bE0tGHPnA73q2-"
      "DIlya2";
  ck_assert_str_eq(memcpy(str2, str1, 18), s21_memcpy(str2, str1, 18));
}
END_TEST

START_TEST(memcpy_44) {
  char str1[] =
      "CKNPX4Lgi7K1HA!YeCfMclntY&VumGZVPQc![&H1p1d<EB{V_iQl:;STLN#rQ2$)^T/"
      "f0|1>";
  char str2[] =
      "CKNPX4Lgi7K1HA!YeCfMclntY&VumGZVPQc![&H1p1d<EB{V_iQl:;STLN#rQ2$)^T/"
      "f0|1>";
  ck_assert_str_eq(memcpy(str2, str1, 12), s21_memcpy(str2, str1, 12));
}
END_TEST

START_TEST(memcpy_45) {
  char str1[] = "iBpLzf<0W3M/=>HhxXt";
  char str2[] = "iBpLzf<0W3M/=>HhxXt";
  ck_assert_str_eq(memcpy(str2, str1, 14), s21_memcpy(str2, str1, 14));
}
END_TEST

START_TEST(memcpy_46) {
  char str1[] =
      "YdG`q=0P.oC(,FY6VNz$s6xNZU:GM^|MqBtL*IZ&0qGX~+b>7|=,2Vq!m18m1AD!lBii,LB~"
      "u|E_hlq6!b`)[S$S|jH8kt:Cz{4}/NmM049e5r";
  char str2[] =
      "YdG`q=0P.oC(,FY6VNz$s6xNZU:GM^|MqBtL*IZ&0qGX~+b>7|=,2Vq!m18m1AD!lBii,LB~"
      "u|E_hlq6!b`)[S$S|jH8kt:Cz{4}/NmM049e5r";
  ck_assert_str_eq(memcpy(str2, str1, 11), s21_memcpy(str2, str1, 11));
}
END_TEST

START_TEST(memcpy_47) {
  char str1[] =
      "}i9Nw,mLIgNwhum(Pib-R3}6?Xm,:<ep>R{QgJHo_zz</"
      "LX{>*|rSg6+Zjc`Xf%~RGD5v!I~$?@5s?L?Xl[CBh!boS~ZmJ{><C}sKq{R~QMIo`f[";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 87), s21_memcpy(str2, str1, 87));
}
END_TEST

START_TEST(memcpy_48) {
  char str1[] = "=RZD.";
  char str2[] = "         ";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_49) {
  char str1[] =
      "FFe&9{H$w>Y!L;|Ljkkwt]tR(e%:aiPb@]}NRXzV/"
      "1SyZDrYKtkw-mNUnQwlIZSO)}~ek$0Fwjm$WemwgwlGX).~au9nU/"
      "*{9|*)aRc!x3qxuzJ1kN";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 103), s21_memcpy(str2, str1, 103));
}
END_TEST

START_TEST(memcpy_50) {
  char str1[] = "qgtbDU+<?TqM;Pz9R&Ft";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_51) {
  char str1[] = ")Q{";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 3), s21_memcpy(str2, str1, 3));
}
END_TEST

START_TEST(memcpy_52) {
  char str1[] =
      "E6Xb{x%w1Q%r0G|1.V^Uwk`YqZPFz{<s@v*{X]F8w*.QZGe}-[f_kccnxg8v[89$dtA[1!"
      "Op+O];2}zl[#85Ru6`MS.o;Ir#IPeEA~ENdgnY*Y-mlzMSWAEZyC|ClV)Jag.yv2H#+sl:-";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 91), s21_memcpy(str2, str1, 91));
}
END_TEST

START_TEST(memcpy_53) {
  char str1[] = "PK!vTD]qQ-A-Ca>ArR,P]exK]k47vwE&M3Ov-~l4ztwG";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 11), s21_memcpy(str2, str1, 11));
}
END_TEST

START_TEST(memcpy_54) {
  char str1[] =
      "z;~yZY99Xu[J9_f`d#VsQD_!~t??6.m}W>X$o:Wj3&.;[%!zK{RU647?&A@WiNy[-&";
  char str2[] = "PJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*Ht";
  ck_assert_str_eq(memcpy(str2, str1, 39), s21_memcpy(str2, str1, 39));
}
END_TEST

START_TEST(memcpy_55) {
  char str1[] =
      "]7Si+6G[9<QNq/Sk9%Bp,D)4Az@q_]j~&MA/"
      "oc`c^s<o@_xp:W^y+Pa9SqzQK#riGd$zE[[v9FIxc]I_i+e:cth:_niyeaGD$|V2+[7!--"
      "gH+[rbE^6v5o#gf6iv#zK%3Cad2Rej$lukqfF<";
  char str2[] =
      " PJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#"
      "3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*Ht ";
  ck_assert_str_eq(memcpy(str2, str1, 100), s21_memcpy(str2, str1, 100));
}
END_TEST

START_TEST(memcpy_56) {
  char str1[] = "Sdwml/=`CBG-O$1d>S`lRYVMQ9})[O;Swe[";
  char str2[] = "PJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*Ht  ";
  ck_assert_str_eq(memcpy(str2, str1, 29), s21_memcpy(str2, str1, 29));
}
END_TEST

START_TEST(memcpy_57) {
  char str1[] =
      "{[jSnzBc(pL2p1PSXW_)[[sUmY.lnf(un]AM/Ar/"
      "o4_!:v7;Dl}!u43vx{+@ow&v}^JkY<(rwt|~,!@A#dU#!GqjQ(_{:7[S[Tp0@i1GNERT";
  char str2[] = " PJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*Ht ";
  ck_assert_str_eq(memcpy(str2, str1, 55), s21_memcpy(str2, str1, 55));
}
END_TEST

START_TEST(memcpy_58) {
  char str1[] = "Q^tR}Ab0k!@5$`U>rmiQEX6y:|3`=-el.j8d2}X:)6H#Dsbb?3>tC_T";
  char str2[] =
      "  PJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*HtPJ;|#3#3*Ht";
  ck_assert_str_eq(memcpy(str2, str1, 3), s21_memcpy(str2, str1, 3));
}
END_TEST

START_TEST(memcpy_59) {
  char str1[] = "#ai_bwYEG-1N<lLu$I`@afmdeXSXd=FvcJ_cK}_xBa9&Car(</x";
  char str2[] = "  PJ;|#3#3*Ht";
  ck_assert_str_eq(memcpy(str2, str1, 6), s21_memcpy(str2, str1, 6));
}
END_TEST

START_TEST(memcpy_60) {
  char str1[] =
      "#pC8:pi0Q37fD/LSB)vp!9-tFF-,HB_nN!i[fZaCSIY?_6l~<~|7/"
      "[jxtk?Mw;`hmxa$0bi%03G4ha?pDoz+,!4ay^40i#5SwCfe^usMLf~$l!uOuzUDFK9KqbH<"
      "gT";
  char str2[] = " PJ;|#3#3*HtPJ;|#3#3*Ht ";
  ck_assert_str_eq(memcpy(str2, str1, 22), s21_memcpy(str2, str1, 22));
}
END_TEST

START_TEST(memcpy_61) {
  char str1[] =
      "BQE./"
      "M5eL)n+)}Xxh;fT4`U2Mh7<p5=e@)u.4s`KAXU|>7K3;zZ#!5CQ=EGo^scN;3QP`B,"
      "tNM4S2-rez>~&t+GN:FMty$V&(,Z+r)e&h!8%bMC*L?X8ePB7)?By-(`)z][7*U{pNm^"
      "I3VK{";
  char str2[] =
      "BQE./"
      "M5eL)n+)}Xxh;fT4`U2Mh7<p5=e@)u.4s`KAXU|>7K3;zZ#!5CQ=EGo^scN;3QP`B,"
      "tNM4S2-rez>~&t+GN:FMty$V&(,Z+r)e&h!8%bMC*L?X8ePB7)?By-(`)z][7*U{pNm^"
      "I3VK{";
  ck_assert_str_eq(memcpy(str2, str1, 141), s21_memcpy(str2, str1, 141));
}
END_TEST

START_TEST(memcpy_62) {
  char str1[] =
      "Gj$BV1ti:y9&6hOzcTspDy?[rXK5<+U&iK~8Oj<+au{;$/"
      "rzX8fKcw8XUiC{.oAE4HI@0jhO^f^qG(,m1_dI";
  char str2[] =
      "Gj$BV1ti:y9&6hOzcTspDy?[rXK5<+U&iK~8Oj<+au{;$/"
      "rzX8fKcw8XUiC{.oAE4HI@0jhO^f^qG(,m1_dI";
  ck_assert_str_eq(memcpy(str2, str1, 13), s21_memcpy(str2, str1, 13));
}
END_TEST

START_TEST(memcpy_63) {
  char str1[] = "maFCqhty=o";
  char str2[] = "maFCqhty=o";
  ck_assert_str_eq(memcpy(str2, str1, 3), s21_memcpy(str2, str1, 3));
}
END_TEST

START_TEST(memcpy_64) {
  char str1[] =
      "ZEs*-(h58<@TQlh{7MJKUzxnRu?JYPMED~zFR`kDF$?FDZ7x(p:#IO#%7XfA{}="
      "fHv2Fhelauq:@HM,hq[]";
  char str2[] =
      "ZEs*-(h58<@TQlh{7MJKUzxnRu?JYPMED~zFR`kDF$?FDZ7x(p:#IO#%7XfA{}="
      "fHv2Fhelauq:@HM,hq[]";
  ck_assert_str_eq(memcpy(str2, str1, 69), s21_memcpy(str2, str1, 69));
}
END_TEST

START_TEST(memcpy_65) {
  char str1[] = "UF9^gM#S|qiiy1:=6c?dzW%F<P&/@hhFu+pZuw3sUIJ9DLMJPdLT:s4";
  char str2[] =
      "ZEs*-(h58<@TQlh{7MJKUzxnRu?JYPMED~zFR`kDF$?FDZ7x(p:#IO#%7XfA{}="
      "fHv2Fhelauq:@HM,hq[]";
  ck_assert_str_eq(memcpy(str2, str1, 49), s21_memcpy(str2, str1, 49));
}
END_TEST

START_TEST(memcpy_66) {
  char str1[] =
      "L@&V_uRGqf[t4{A||zO@xM;->@tr&%.kSBcR]/kuir4,NL,.z.cW|.;2jFULF!GupP=/"
      "c4@T+7x8Vi@u)(spA/X!D*7q=*&mHO}.[+XLg?dFEwZ1$O:m/"
      "sq.v@IYO.pK[.fY4YOK?Td7rTA0RBrf";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10    ";
  ck_assert_str_eq(memcpy(str2, str1, 137), s21_memcpy(str2, str1, 137));
}
END_TEST

START_TEST(memcpy_67) {
  char str1[] =
      "s8k(HJbFsHDW(uS8$}?x&_!X;p8mx3GtPS!NIe)0f)k-`L5<;*pu}sf-Rqq-YWH";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 33), s21_memcpy(str2, str1, 33));
}
END_TEST

START_TEST(memcpy_68) {
  char str1[] = "p|$1BI4*6!k^?S>1Ku+]~gx%6^-TkF:p";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_69) {
  char str1[] =
      "jtN],6M%xw=[|0h26bSl3k1el+g@mu{ZKGt9v|{s8nSs,D(w*p;aACD;NS!y>n]go(x<6Qw`"
      "66:#2s3R9]W";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 65), s21_memcpy(str2, str1, 65));
}
END_TEST

START_TEST(memcpy_70) {
  char str1[] = "D84Oj>5zZSW|/U+Pz2g%,,sL_B*/$fsarL9H*l3;TCMic%h!1HlI";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 17), s21_memcpy(str2, str1, 17));
}
END_TEST

START_TEST(memcpy_71) {
  char str1[] =
      "nw0>T921P!TWJt)#}GA@#$pB?+Ac!W1@ih=T#&JYQ?Kc^22g&G,^Ad>^7FB&??Sv05)mzkw{"
      "1SvJco#PD,DG:";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 29), s21_memcpy(str2, str1, 29));
}
END_TEST

START_TEST(memcpy_72) {
  char str1[] =
      "e`x~/2`7of(6mU7A8NF9C_mim2{XXq=xW%Ujlk^*<h~Dkp:dE[vs&HT_o}W}YZNH5G*";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 21), s21_memcpy(str2, str1, 21));
}
END_TEST

START_TEST(memcpy_73) {
  char str1[] =
      "P>WvC94UvB)Pj/"
      ">WH<D^k{_`#V8KL+59FX%!yEu{@<XWP{V0<P8k3a3bB83?9x*iw?<DxBIu6Gpr}<2QmQ`"
      "DEPW6XYwOi+jp2qC+*KsGJaV>]N=`r&J+@:dF3(`k_xB!<fc@uO:s:8;+=~c8Z";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10                                  ";
  ck_assert_str_eq(memcpy(str2, str1, 116), s21_memcpy(str2, str1, 116));
}
END_TEST

START_TEST(memcpy_74) {
  char str1[] = "Xp=wLVnzhW:qWDi=vhdomz^+,3{9L}!4dGdCd>Oh+F!i7r,ycQfA";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 12), s21_memcpy(str2, str1, 12));
}
END_TEST

START_TEST(memcpy_75) {
  char str1[] =
      "?^VsuoAH(g<>9}W-w8tw/"
      "S$Jl4aZ1JS(!s1QU2I-$~>or+#sY(`bAGyW2u;{<q`_%MKm=-nuL.(yRhJ9,W&poEWj~L7T`"
      "l7";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 13), s21_memcpy(str2, str1, 13));
}
END_TEST

START_TEST(memcpy_76) {
  char str1[] =
      "Slr}IB7F-#_]Fd9%]?)k/"
      "U?oxcfJJ4;VSUAJ6Y$Zb?=Uj!G+6Et)r]JG-R%wU=p(MfgK`_^kb/"
      "{a=fJ++I+Z>qgb+oj<(6YE^>Erhs((L9n8dcTe`7tl}=vfXE*OV>gc";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 49), s21_memcpy(str2, str1, 49));
}
END_TEST

START_TEST(memcpy_77) {
  char str1[] = "Ucxa=xHOXDS@v7Dck|]wvsLCFS0D_A>`TqA~^hl6]%Z{p#wS";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 35), s21_memcpy(str2, str1, 35));
}
END_TEST

START_TEST(memcpy_78) {
  char str1[] =
      "_V~Yx9=jvM$BQQi(LcQ=tPHAKDzc/"
      "j,|EQz:m5M1dfKK.9<659dnqRK<)tf9Qu`QOtoZwl`s}PqSIp";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 22), s21_memcpy(str2, str1, 22));
}
END_TEST

START_TEST(memcpy_79) {
  char str1[] =
      "xwdA,>Xe]dilGq{^^6r=Re:A/"
      "(kOzl&SZk=xa*tvxbdSXu|Fp8NAYoA|b.hlV+;6ozzC-:Zt<^EEb}YQeo#=Q>@;jj@3mOdD~"
      "|3tGk+sgKDiI6.hFRvmyLFa[A36";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 80), s21_memcpy(str2, str1, 80));
}
END_TEST

START_TEST(memcpy_80) {
  char str1[] =
      "TxQwe6]WI;~wQ.n$]Ot@GI!Wz3fg~ugyZNo$3su7cMuidUUG-e5fy~19tdP8QB=h{hOr__L{"
      "@3PF6e3X@*TZxpy%Q`v;+j[bf";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 58), s21_memcpy(str2, str1, 58));
}
END_TEST

START_TEST(memcpy_81) {
  char str1[] =
      "x28x!FT@5ElKRFUt,9!5WTQ8HaCW$L4TmV(.pmGkp]!RlG|QXd~+40yJZgbp|I:ICBbFik("
      "ou_xv*{CSm";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 9), s21_memcpy(str2, str1, 9));
}
END_TEST

START_TEST(memcpy_82) {
  char str1[] =
      "+eP,RzXo-iGglq~K4K|m^Ax_otKUf}|NUFkz8)%,?&/b)nlM=QGxKcsY)J>Chl8=/"
      "vD{PN~Z<)o}O}4QpTo2z~bb1=5}#pKMr)Zc7mP$W_ojOFPd/qm";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 69), s21_memcpy(str2, str1, 69));
}
END_TEST

START_TEST(memcpy_83) {
  char str1[] =
      "yw&nWU+EHqFKE8DSR}V-MHsI/wyl8xrn6VSIx!?*&8dXAFb<an@Ze^aV8M#~^#`)Kvi:uT/"
      "[47?$f=3atnELI<2}4Zr52:oDXNMZ$$x4@a14$S.Vi+hf(~`Xgs}d{}^q/+@a?F*a_";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 17), s21_memcpy(str2, str1, 17));
}
END_TEST

START_TEST(memcpy_84) {
  char str1[] = "o=64M>yROeXUwjvQg(iuy[ACpP`";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 14), s21_memcpy(str2, str1, 14));
}
END_TEST

START_TEST(memcpy_85) {
  char str1[] =
      "bNIj~aTQ!d#2q*IgbLiNpj=(~gVx3)ha&Xeykf!xAv:4kT,==TayWmBoS#$,qo]%)@|"
      "KVKtr[";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 53), s21_memcpy(str2, str1, 53));
}
END_TEST

START_TEST(memcpy_86) {
  char str1[] = "?cUD62tAHaWq_Iw+<={W_q.L2EoEhe<1fNt-?#E";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_87) {
  char str1[] =
      "Y8j#=o5%hp>.9pvY}9`AE5MMZFV`ECx[w8eZbZ/"
      "mR`J_27_K(2gz._Ow]ry6{?wzHo2^lgYf{_bb^g?nLoX;Ts}/@5dezmE){/"
      "r6sCON_d#wUQxVJt6OK";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 40), s21_memcpy(str2, str1, 40));
}
END_TEST

START_TEST(memcpy_88) {
  char str1[] =
      "fJ??$st7V17eV#o^Y6<$Ki4@Eww`^Nc`%F&+BRH@iZ#0giby*,HckX<Ksg?I_c*g`.>&"
      "40KIyK)i2HH(Q/k|CH$`)HKu21";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 21), s21_memcpy(str2, str1, 21));
}
END_TEST

START_TEST(memcpy_89) {
  char str1[] = "!uURJw.w!FgYN]G63Bm[!{ZBq7-2;LK_3uvLx_&vj=GYMkfC(j4";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 46), s21_memcpy(str2, str1, 46));
}
END_TEST

START_TEST(memcpy_90) {
  char str1[] = "T%|X=yr)&6g@e3`VCL(>B0DU2<>fX8?gaKTd$L}mTpr0P9L";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 47), s21_memcpy(str2, str1, 47));
}
END_TEST

START_TEST(memcpy_91) {
  char str1[] = "vZF,}S~TX!N#aabFplc78sATpp+*nUB[fanr!";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 30), s21_memcpy(str2, str1, 30));
}
END_TEST

START_TEST(memcpy_92) {
  char str1[] = "sJc";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ;
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_93) {
  char str1[] =
      "~;@d$(B+7jl#7/"
      "DaJ(voQ>p;>>;C!=2GbTVR)>PHL{m?^Y]ezyQ3^PKpprO}W$5e)GHBncnP[+t)KD@-y34e*"
      "EP=P5c@-KHUIY0Ga03+_>TS,=^Osm0~8u(HCI*Q9r($TkS2HVw_5";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 37), s21_memcpy(str2, str1, 37));
}
END_TEST

START_TEST(memcpy_94) {
  char str1[] =
      "L@&pImQ5}>x-b8{FbG;5v6/"
      "QdoIiv}@)6GE_}W*2},GB!AF+1H2y1.OIA#LXc8;DSJ#I%U#x[N/99NiTEj}</"
      "[P<y#+g&k.K%c<+|2I:2V";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 14), s21_memcpy(str2, str1, 14));
}
END_TEST

START_TEST(memcpy_95) {
  char str1[] =
      "ETx9VjPM,oD[X;A~?F]Pl*2-g3NOIv0B,X=kiN?+}RBXXd/"
      "(=,A3Z!):KBU]x=A_NRauR#4|LJ!ZFPl&wNDL3J(kFQ)";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 23), s21_memcpy(str2, str1, 23));
}
END_TEST

START_TEST(memcpy_96) {
  char str1[] =
      "(2f.#W;K>)2`aS6gvFPxJ/"
      "JxOQ0mS|Q^GzS+B&+l<0%k~kN-o)|TH#v_`]MGHFDrjI?%VP@*hmEq5!_y!$";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 76), s21_memcpy(str2, str1, 76));
}
END_TEST

START_TEST(memcpy_97) {
  char str1[] =
      "Nd#Fm/68$j*6S_~Tyadc5S1HTq_SQd&(b?xTuN3ZM>1(|y6tpM%4~NuU]knjzR%!VO=/"
      "X8kOy||jpOqSMS!-oCZ_gQ;XGndC(hd%w-F4/Lc~:}HEeHzyJ$DhWRY!~.~";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 95), s21_memcpy(str2, str1, 95));
}
END_TEST

START_TEST(memcpy_98) {
  char str1[] =
      "^Df7=*+`=th/"
      "dN1EQ%$,t~YtG>gk,ysKMv-UaQT<uarjcNAEM}6ml+UDHjN.IHqE%HFv*O=_!:"
      "UXNxmFEkmfM-P)_-;<M|vx4zvgEJO7+W>A9m6]dnB!_YQ9H#C-K,>9=31yo";
  char str2[] = "         ";
  ck_assert_str_eq(memcpy(str2, str1, 8), s21_memcpy(str2, str1, 8));
}
END_TEST

START_TEST(memcpy_99) {
  char str1[] = "S3jq&7_u!";
  char str2[] = "         ";
  ck_assert_str_eq(memcpy(str2, str1, 6), s21_memcpy(str2, str1, 6));
}
END_TEST

START_TEST(memcpy_100) {
  char str1[] =
      "KAc>M@vwI`6A-~#?7eJwt>TF{f/TdnjYRg)/5/"
      "4dk&sEFO|lsX)kP5kdT=cJjlBbWCz~^|&.]./"
      "p.@ASZgFK~=t0GT7gr5RVNGbA~*gOtf=I<Uni!Z";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 4), s21_memcpy(str2, str1, 4));
}
END_TEST

START_TEST(memcpy_101) {
  char str1[] =
      "FtpNfDH}HrF0!O3=1KLwQ]M5Bw6J:i)Yh(SK]^V:F2i{UC}Ign=~ndl&E(xrjrNhjw9c";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 30), s21_memcpy(str2, str1, 30));
}
END_TEST

START_TEST(memcpy_102) {
  char str1[] = "M>";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_103) {
  char str1[] =
      "9X,<:vVxTt-GmtG}1CEW=?4nIN8C;}mHBUfY|+|D_(3w@btF@>Nzn0?]bmdtP~gts^d6hoj-"
      "n,M<+F";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 77), s21_memcpy(str2, str1, 77));
}
END_TEST

START_TEST(memcpy_104) {
  char str1[] =
      "V@jcLnE%GU$]F]n]FaWXkLy^l?mQ@4nYW5ZuDk%v-.>!pCjBG6qu=CBY2Ckh,W,]2Ky!bs@("
      "h3oMM8s3";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 77), s21_memcpy(str2, str1, 77));
}
END_TEST

START_TEST(memcpy_105) {
  char str1[] =
      "VLM%pehF=w:d>dk~<5~Vn5}@)cVNmR9k25ir.C:jFsw(R|z=t)dO2`d9<z/~-<_u&/"
      "`t93pwktuRp<@1Lx9iFNf4!!HPk5F";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 33), s21_memcpy(str2, str1, 33));
}
END_TEST

START_TEST(memcpy_106) {
  char str1[] =
      "_MESl4TWpk#a4R{_s;zYT{^!d3K0-c$w`4g#5d%sEN!B<}H4Q4YNOW}gEQ9Cl4N^~"
      "ustjpav";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 44), s21_memcpy(str2, str1, 44));
}
END_TEST

START_TEST(memcpy_107) {
  char str1[] =
      "Sk7j0WM73%gYGKvZO%3P4W1LncT4I2gSQvl;d|l^#5zW8~=}s<6]mm/"
      "SxbHW(Lq#4zmnf_i3BVT$Xv_?ws}Y&!cq^AjYG,w08k;1%6<u<$D1U!Q";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 82), s21_memcpy(str2, str1, 82));
}
END_TEST

START_TEST(memcpy_108) {
  char str1[] =
      "Q^]A!}O2I%kSQK,nANsVN(*MfWJq5y=QF>ue,s{fkwOMB!g*$%7q){uU-{EiPdY,8?lR]"
      "brg#FZFo~0miqz;15P)OFZU-RMM{pN*/e*2#&v/:H:kzHs,h[hClu/eY[Jb3NA/<Rufxoq";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_109) {
  char str1[] =
      "|JZQ%LwW?1u[[GxsKs&${!+It>juukuX>,?Al}T97bkg>1V*jF7zSA3L:5bS0i6_.["
      "gmaXgI,$5,<`DqW7%:";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 62), s21_memcpy(str2, str1, 62));
}
END_TEST

START_TEST(memcpy_110) {
  char str1[] = "VvnYIkPh?/^`n*YXG34L";
  char str2[] = "                                   ";
  ck_assert_str_eq(memcpy(str2, str1, 18), s21_memcpy(str2, str1, 18));
}
END_TEST

START_TEST(memcpy_111) {
  char str1[] = "[[uJsdYafSld*E3*xl";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 4), s21_memcpy(str2, str1, 4));
}
END_TEST

START_TEST(memcpy_112) {
  char str1[] = "u(o|NBHhF|b>.jx5khNn:4";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 20), s21_memcpy(str2, str1, 20));
}
END_TEST

START_TEST(memcpy_113) {
  char str1[] = "i#2M.H5R.W~dmWi[2@~M&HzFl,q=Gtn%B[6:xq7";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 35), s21_memcpy(str2, str1, 35));
}
END_TEST

START_TEST(memcpy_114) {
  char str1[] =
      "v}o@iQSNQPhX/G&E!4O0NM:&-]vjx$Ci}[,/"
      "<0ZD+QFp2caBr?bqSwKn1)K`jr*=Gp0#!8~wSEBCwt6B_&`ar3>)(Z]fVjUKQ-{M#9vFH8/"
      "OCh0?C81";
  char str2[] = "                                                    ";
  ck_assert_str_eq(memcpy(str2, str1, 52), s21_memcpy(str2, str1, 52));
}
END_TEST

START_TEST(memcpy_115) {
  char str1[] = "W-1dbg%$JX8P]gHQ%[T}Y}r<sR)h$!yx.r/Ux:";
  char str2[] = "                                                    ";
  ck_assert_str_eq(memcpy(str2, str1, 29), s21_memcpy(str2, str1, 29));
}
END_TEST

START_TEST(memcpy_116) {
  char str1[] =
      "A$P0@i1W{Kv{`+SwBj%JluG#oOaHse(y!]/~u~Zi$Sfq6E{]iAo*:^[rumrB2=[j_/"
      "Ay;JQq&-=xG!!RJ@yvV*/s,Pn}]a1MEWJp~Fbo@-L#";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 6), s21_memcpy(str2, str1, 6));
}
END_TEST

START_TEST(memcpy_117) {
  char str1[] =
      "$4J_@KDIf_K<#o#luduggYK+z{(#V;r;CLR`L5wxLqAd=h&iswznQBC>cLd%{5=g.#"
      "11Oi6gY2E9)R?Ush^}_OsYIrj)-iy<ATt6/32-*bE)slPOPw^GK<Spex|*EC3.cs(GSbRq";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 51), s21_memcpy(str2, str1, 51));
}
END_TEST

START_TEST(memcpy_118) {
  char str1[] = "zrSQjMu@M(QS~-GxDG~(1ly:u%7s-E_Ubx~jnxJ";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 39), s21_memcpy(str2, str1, 39));
}
END_TEST

START_TEST(memcpy_119) {
  char str1[] = "Xe#|ev%6h[%8qy6RUM4M?UBA<-k1EV~@mT<]n5lf&Pq[$)q;xz";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_120) {
  char str1[] =
      "*RNA35.]*9vN|))mhHI#/"
      "4*<ZI6@mGI{,eK,Yr[k!&GWH.p?AZjetY=e#S5XrgwbgiB<:K%R";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 22), s21_memcpy(str2, str1, 22));
}
END_TEST

START_TEST(memcpy_121) {
  char str1[] = "4dird1l%PugKlrY|mt_0Pz6k,`(D?Qo_+I9kWF~";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 18), s21_memcpy(str2, str1, 18));
}
END_TEST

START_TEST(memcpy_122) {
  char str1[] =
      "|-5lRzsm<Z~_S:R$40r/"
      "@>!P.FPXY7YmE,]yr,[)fT5G)M-mr^2&(Y74rwqK@.lSIdk50P1bE9+(mYvbJa&Zfe]`8Rf]"
      "G";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 21), s21_memcpy(str2, str1, 21));
}
END_TEST

START_TEST(memcpy_123) {
  char str1[] = "yGs#)*1qr";
  char str2[] = "            ";
  ck_assert_str_eq(memcpy(str2, str1, 5), s21_memcpy(str2, str1, 5));
}
END_TEST

START_TEST(memcpy_124) {
  char str1[] =
      "xmdZ?@{mhs9H&!6h3+kbb#mML%~t|8PjYiS<93]%qmO^*I`Ae,?:t%=|0$bXpd[INQ$QA]"
      "rSV51Y9E&,oLyuq6PS8qtsvp8z!;gKO6vfHRp{zJvXOoag@Of";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 21), s21_memcpy(str2, str1, 21));
}
END_TEST

START_TEST(memcpy_125) {
  char str1[] =
      "[QQp)Q;=8+tpM1sd5[}D:2aM!;2<&`1G>FPzbqLGhDTEuqIzQh_esyx^/"
      "=J=r,34pP,UF|P)EWJe";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 33), s21_memcpy(str2, str1, 33));
}
END_TEST

START_TEST(memcpy_126) {
  char str1[] = "Zh/RTUA)`rbl2J_XX5^Td4]zGyzvx6G_~%QtW.-B8-ZX*cDNl#]rU`!";
  char str2[] = "Zh/RTUA)`rbl2J_XX5^Td4]zGyzvx6G_~%QtW.-B8-ZX*cDNl#]rU`!";
  ck_assert_str_eq(memcpy(str2, str1, 35), s21_memcpy(str2, str1, 35));
}
END_TEST

START_TEST(memcpy_127) {
  char str1[] =
      "s4Kt]{0Zq]Q$FwqX>7H_B1J4^ie2|KKkR|@7Yw_`mnJN42t3vuPvIT|v|AhuX@w/"
      "wJk:p|(u?WtrcVS=<?W_2S3B*9+um(nn/Vg4LmeiRR%x@`1k()qYiiTC8qZhgrM!)";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 56), s21_memcpy(str2, str1, 56));
}
END_TEST

START_TEST(memcpy_128) {
  char str1[] =
      "dcv|@-4F3k!cqUW&`e;YAO^ipe5ZvGYtuF|hGoR;nRj^BF&Z~<ZruM]IQM>[RT`nkbhC}@m:"
      "AMoU<5gWji}9zB~R.HPb=el?t74P5r&h~hg&E)Y|t%:Tw";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 114), s21_memcpy(str2, str1, 114));
}
END_TEST

START_TEST(memcpy_129) {
  char str1[] =
      "R6P-4yTSM(`cYN$%4UTy)mLz0|wF8O(3d*-EG}4s$`gNXNZ4}<D8|9RgCYkh?K^DtI$F_5-";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 66), s21_memcpy(str2, str1, 66));
}
END_TEST

START_TEST(memcpy_130) {
  char str1[] =
      ".,oXaHE3pS*i}W;9jtUS<!/Yz8sUu*<w[Xtg,qkXY6HJQo,aVJEe3Ejz7C?vD+jCH|7W&/"
      "_D9QOJfmQ1$[XFy+hhw<<2NQ.=k7:n6A:RN";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 55), s21_memcpy(str2, str1, 55));
}
END_TEST

START_TEST(memcpy_131) {
  char str1[] =
      "]bC)]FZ!:N@usJ6L[`V6iU_V/"
      "wl^L<CM>*O&ws*T5$I].n)`Uu[A^o_l6|d].513i@R[x#d.BG&.hPgXzmE]*q@Te3~n?"
      "dQOaG/Ebo.gU*XeM3W!t7<SS98Ehy#$i$1lu@";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 88), s21_memcpy(str2, str1, 88));
}
END_TEST

START_TEST(memcpy_132) {
  char str1[] = "bANyT}]Z#:#byJH-mM9bz@@&&";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 2), s21_memcpy(str2, str1, 2));
}
END_TEST

START_TEST(memcpy_133) {
  char str1[] =
      "H?OSd^|/"
      "`dI68Mhm8gN(uFuCef(%,;bmBGta@Sd2i^bic=4,k{J:jk2JvE5HCAB@:?sGGeEsz?qiSWU~"
      "(/u{CcFsfD!E}K&QvAI6uZ)B{1{)rzR}e,Z@Z*GyLGi]+t.1_ImrF~7?C)QBm^r.i|N+Bk";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 84), s21_memcpy(str2, str1, 84));
}
END_TEST

START_TEST(memcpy_134) {
  char str1[] =
      "15kIzmtt!C>vMZ#}3;J}4K9`C[=&sq:gZ;)4o={!GB4:K18]ulHEm1f:l{ivUD)v";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 52), s21_memcpy(str2, str1, 52));
}
END_TEST

START_TEST(memcpy_135) {
  char str1[] = "e:34vge]no-4Ez}H9YDgwd49wi+7cW;8Qw{r53R-9hL(s0-jUhe;F";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 44), s21_memcpy(str2, str1, 44));
}
END_TEST

START_TEST(memcpy_136) {
  char str1[] =
      "w~*VhkIvxxFoZ8PZ|wha.8&{lwu[3?]DlP=[#zO_1I74()uv,j@1)AN~AgSaaMOhZx/3fR$/"
      "=<P8o.gHL{mkXE+2>a~~,p%IR?PDu3-VTs=x[*2+.=*WDZO/"
      "q^?M#z|cf<!5a7xv<=lbPFZ^]";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 116), s21_memcpy(str2, str1, 116));
}
END_TEST

START_TEST(memcpy_137) {
  char str1[] =
      "})>oHm}.;mA;Hxl1*JO/"
      "mm^al@=`62NoE9?lbBFR-(3*A@{bxHf~cf(M-j-kgV1#h])?l1m+:$4b7A3BEi1ZZ[)"
      "4Zl8Q-2qxqd?QT8!]h5@L9@QH~YuUCBbn)FZT2d";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 50), s21_memcpy(str2, str1, 50));
}
END_TEST

START_TEST(memcpy_138) {
  char str1[] =
      "c*nG5-R5|tK+1B7/"
      "PM({)a.DOXb2_^2G~#~D-TT,QZRflP_u+L}[4!HPST@~;A#5wCMN(o,BU.qgskqIzDZbD2h|"
      "Me|l2Pj-[>`>k%BC<|q9P=@A;24+$dx3wC_!UeT=P3[qD0x";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 13), s21_memcpy(str2, str1, 13));
}
END_TEST

START_TEST(memcpy_139) {
  char str1[] =
      "<+M8i_0%#weS{iHZO6EcXLeu&qa3Judj=.Y,WMvo&D2PvVMURX>PN89vOP#0pz6A,Ah$E+q,"
      "wGChb=dEn?vhm#P]2dBst$Ut~R>}ELygaj";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 58), s21_memcpy(str2, str1, 58));
}
END_TEST

START_TEST(memcpy_140) {
  char str1[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  char str2[] =
      "PJo;|#3#3*Htwe5*7N*l;7L(Iq.u2a3bBlq7TG+Thmb0P9`(chQ1/"
      "h33Y{t~rx&5,P&tq^+Ms,JCgA5m6@=k#,GvhaBY*K}C)C8MwM~c>-m%M2F@3:yVyL3Alg;"
      "kyTWjmC>10";
  ck_assert_str_eq(memcpy(str2, str1, 13), s21_memcpy(str2, str1, 13));
}
END_TEST

START_TEST(memcpy_141) {
  char str1[] = "VcqBu$2ywpLij$M5qy!x2reUqwRS.&t?l8=T`<:eX)fT8h8,E)=";
  char str2[] = "VcqBu$2ywpLij$M5qy!x2reUqwRS.&t?l8=T`<:eX)fT8h8,E)=";
  ck_assert_str_eq(memcpy(str2, str1, 28), s21_memcpy(str2, str1, 28));
}
END_TEST

START_TEST(memcpy_142) {
  char str1[] = "434>@&^nsdmb,{3Yt/{oKod@P#_1}JtEKa[!x@^$Z";
  char str2[] = "Zh/RTUA)`rbl2J_XX5^Td4]zGyzvx6G_~%QtW.-B8-ZX*cDNl#]rU`!";
  ck_assert_str_eq(memcpy(str2, str1, 37), s21_memcpy(str2, str1, 37));
}
END_TEST

START_TEST(memcpy_143) {
  char str1[] = ")";
  char str2[] = ")";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_144) {
  char str1[] =
      "X|JWAD@`eL=>+R2RnKoCa>aSQ0%VqZuq<2;-:dBE{)7cpjq<G=69VGby}-.cgxA*>sB=#(_="
      "{P*.GPCg}_zynDVijL8@r;Bc^;B(trlPMMuM,[g{{/TF1yj+^.MfVb%0=O";
  char str2[] =
      "X|JWAD@`eL=>+R2RnKoCa>aSQ0%VqZuq<2;-:dBE{)7cpjq<G=69VGby}-.cgxA*>sB=#(_="
      "{P*.GPCg}_zynDVijL8@r;Bc^;B(trlPMMuM,[g{{/TF1yj+^.MfVb%0=O";
  ck_assert_str_eq(memcpy(str2, str1, 16), s21_memcpy(str2, str1, 16));
}
END_TEST

START_TEST(memcpy_145) {
  char str1[] = "&,LQw+9oE_ZfbZo_o&0Q>I.?(j";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 1), s21_memcpy(str2, str1, 1));
}
END_TEST

START_TEST(memcpy_146) {
  char str1[] =
      "iQObt):f/"
      "gxIihV*~Y@85J[zjsOa^eU~&0E6t4-F`4exV]!J?MWOsnarhY=w~+Cded.&1f6!8CxO2#A<{"
      "Y;|!%.Q&~uQq~j.ELVfQ-KAT+REXXRsX0El+(lo_6[a^.";
  char str2[] =
      "iQObt):f/"
      "gxIihV*~Y@85J[zjsOa^eU~&0E6t4-F`4exV]!J?MWOsnarhY=w~+Cded.&1f6!8CxO2#A<{"
      "Y;|!%.Q&~uQq~j.ELVfQ-KAT+REXXRsX0El+(lo_6[a^.";
  ck_assert_str_eq(memcpy(str2, str1, 71), s21_memcpy(str2, str1, 71));
}
END_TEST

START_TEST(memcpy_147) {
  char str1[] = "?ziM0):O=FDelOwfm";
  char str2[] = "?ziM0):O=FDelOwfm";
  ck_assert_str_eq(memcpy(str2, str1, 8), s21_memcpy(str2, str1, 8));
}
END_TEST

START_TEST(memcpy_148) {
  char str1[] =
      "}.`vt]$X)v~$C~YW|)ej=MK`A`n?{D-knOd+ZiCl2i29UrF`hfV4?Y?iR_BD293]?=Aa@Qx)"
      "-PpqIq@/m,Y=k=LR6_u=z5o}hNf?v98cXYgrU(:xe^Dn`h";
  char str2[] =
      "}.`vt]$X)v~$C~YW|)ej=MK`A`n?{D-knOd+ZiCl2i29UrF`hfV4?Y?iR_BD293]?=Aa@Qx)"
      "-PpqIq@/m,Y=k=LR6_u=z5o}hNf?v98cXYgrU(:xe^Dn`h";
  ck_assert_str_eq(memcpy(str2, str1, 70), s21_memcpy(str2, str1, 70));
}
END_TEST

START_TEST(memcpy_149) {
  char str1[] =
      ">EM{^NZcKo>9=KfrM#r6e1Xc0w)+G+^C,daH~Hi1#o@so~3fDv(<_~ot75r(c)]nmrPc:"
      "vG8=t`<6Wnxn3O/%Dg^8[wU6,UQr8uf7a&4Xs~UDa-<SN&1VSw*)Vjp}t0W2}{~]CYo";
  char str2[] =
      ">EM{^NZcKo>9=KfrM#r6e1Xc0w)+G+^C,daH~Hi1#o@so~3fDv(<_~ot75r(c)]nmrPc:"
      "vG8=t`<6Wnxn3O/%Dg^8[wU6,UQr8uf7a&4Xs~UDa-<SN&1VSw*)Vjp}t0W2}{~]CYo";
  ck_assert_str_eq(memcpy(str2, str1, 137), s21_memcpy(str2, str1, 137));
}
END_TEST

START_TEST(memcpy_150) {
  char str1[] =
      "i%UF~^;f{T|ynvkZLaUq4*^)j=~}Z,LsMx`-HgnAmma3|:8ra;!3{K#j7>nFC$WHzZ]_!n*("
      "pcc[JYU/Ry75;8U!*`=`7JmXugXH/OVy";
  char str2[] = "  ";
  ck_assert_str_eq(memcpy(str2, str1, 3), s21_memcpy(str2, str1, 3));
}
END_TEST

Suite *test_memcpy(void) {
  Suite *s = suite_create("\033[45m-=S21_MEMCPY=-\033[0m");
  TCase *tc = tcase_create("memcpy_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memcpy_1);
  tcase_add_test(tc, memcpy_2);
  tcase_add_test(tc, memcpy_3);
  tcase_add_test(tc, memcpy_4);
  tcase_add_test(tc, memcpy_5);
  tcase_add_test(tc, memcpy_6);
  tcase_add_test(tc, memcpy_7);
  tcase_add_test(tc, memcpy_8);
  tcase_add_test(tc, memcpy_9);
  tcase_add_test(tc, memcpy_10);
  tcase_add_test(tc, memcpy_11);
  tcase_add_test(tc, memcpy_12);
  tcase_add_test(tc, memcpy_13);
  tcase_add_test(tc, memcpy_14);
  tcase_add_test(tc, memcpy_15);
  tcase_add_test(tc, memcpy_16);
  tcase_add_test(tc, memcpy_17);
  tcase_add_test(tc, memcpy_18);
  tcase_add_test(tc, memcpy_19);
  tcase_add_test(tc, memcpy_20);
  tcase_add_test(tc, memcpy_21);
  tcase_add_test(tc, memcpy_22);
  tcase_add_test(tc, memcpy_23);
  tcase_add_test(tc, memcpy_24);
  tcase_add_test(tc, memcpy_25);
  tcase_add_test(tc, memcpy_26);
  tcase_add_test(tc, memcpy_27);
  tcase_add_test(tc, memcpy_28);
  tcase_add_test(tc, memcpy_29);
  tcase_add_test(tc, memcpy_30);
  tcase_add_test(tc, memcpy_31);
  tcase_add_test(tc, memcpy_32);
  tcase_add_test(tc, memcpy_33);
  tcase_add_test(tc, memcpy_34);
  tcase_add_test(tc, memcpy_35);
  tcase_add_test(tc, memcpy_36);
  tcase_add_test(tc, memcpy_37);
  tcase_add_test(tc, memcpy_38);
  tcase_add_test(tc, memcpy_39);
  tcase_add_test(tc, memcpy_40);
  tcase_add_test(tc, memcpy_41);
  tcase_add_test(tc, memcpy_42);
  tcase_add_test(tc, memcpy_43);
  tcase_add_test(tc, memcpy_44);
  tcase_add_test(tc, memcpy_45);
  tcase_add_test(tc, memcpy_46);
  tcase_add_test(tc, memcpy_47);
  tcase_add_test(tc, memcpy_48);
  tcase_add_test(tc, memcpy_49);
  tcase_add_test(tc, memcpy_50);
  tcase_add_test(tc, memcpy_51);
  tcase_add_test(tc, memcpy_52);
  tcase_add_test(tc, memcpy_53);
  tcase_add_test(tc, memcpy_54);
  tcase_add_test(tc, memcpy_55);
  tcase_add_test(tc, memcpy_56);
  tcase_add_test(tc, memcpy_57);
  tcase_add_test(tc, memcpy_58);
  tcase_add_test(tc, memcpy_59);
  tcase_add_test(tc, memcpy_60);
  tcase_add_test(tc, memcpy_61);
  tcase_add_test(tc, memcpy_62);
  tcase_add_test(tc, memcpy_63);
  tcase_add_test(tc, memcpy_64);
  tcase_add_test(tc, memcpy_65);
  tcase_add_test(tc, memcpy_66);
  tcase_add_test(tc, memcpy_67);
  tcase_add_test(tc, memcpy_68);
  tcase_add_test(tc, memcpy_69);
  tcase_add_test(tc, memcpy_70);
  tcase_add_test(tc, memcpy_71);
  tcase_add_test(tc, memcpy_72);
  tcase_add_test(tc, memcpy_73);
  tcase_add_test(tc, memcpy_74);
  tcase_add_test(tc, memcpy_75);
  tcase_add_test(tc, memcpy_76);
  tcase_add_test(tc, memcpy_77);
  tcase_add_test(tc, memcpy_78);
  tcase_add_test(tc, memcpy_79);
  tcase_add_test(tc, memcpy_80);
  tcase_add_test(tc, memcpy_81);
  tcase_add_test(tc, memcpy_82);
  tcase_add_test(tc, memcpy_83);
  tcase_add_test(tc, memcpy_84);
  tcase_add_test(tc, memcpy_85);
  tcase_add_test(tc, memcpy_86);
  tcase_add_test(tc, memcpy_87);
  tcase_add_test(tc, memcpy_88);
  tcase_add_test(tc, memcpy_89);
  tcase_add_test(tc, memcpy_90);
  tcase_add_test(tc, memcpy_91);
  tcase_add_test(tc, memcpy_92);
  tcase_add_test(tc, memcpy_93);
  tcase_add_test(tc, memcpy_94);
  tcase_add_test(tc, memcpy_95);
  tcase_add_test(tc, memcpy_96);
  tcase_add_test(tc, memcpy_97);
  tcase_add_test(tc, memcpy_98);
  tcase_add_test(tc, memcpy_99);
  tcase_add_test(tc, memcpy_100);
  tcase_add_test(tc, memcpy_101);
  tcase_add_test(tc, memcpy_102);
  tcase_add_test(tc, memcpy_103);
  tcase_add_test(tc, memcpy_104);
  tcase_add_test(tc, memcpy_105);
  tcase_add_test(tc, memcpy_106);
  tcase_add_test(tc, memcpy_107);
  tcase_add_test(tc, memcpy_108);
  tcase_add_test(tc, memcpy_109);
  tcase_add_test(tc, memcpy_110);
  tcase_add_test(tc, memcpy_111);
  tcase_add_test(tc, memcpy_112);
  tcase_add_test(tc, memcpy_113);
  tcase_add_test(tc, memcpy_114);
  tcase_add_test(tc, memcpy_115);
  tcase_add_test(tc, memcpy_116);
  tcase_add_test(tc, memcpy_117);
  tcase_add_test(tc, memcpy_118);
  tcase_add_test(tc, memcpy_119);
  tcase_add_test(tc, memcpy_120);
  tcase_add_test(tc, memcpy_121);
  tcase_add_test(tc, memcpy_122);
  tcase_add_test(tc, memcpy_123);
  tcase_add_test(tc, memcpy_124);
  tcase_add_test(tc, memcpy_125);
  tcase_add_test(tc, memcpy_126);
  tcase_add_test(tc, memcpy_127);
  tcase_add_test(tc, memcpy_128);
  tcase_add_test(tc, memcpy_129);
  tcase_add_test(tc, memcpy_130);
  tcase_add_test(tc, memcpy_131);
  tcase_add_test(tc, memcpy_132);
  tcase_add_test(tc, memcpy_133);
  tcase_add_test(tc, memcpy_134);
  tcase_add_test(tc, memcpy_135);
  tcase_add_test(tc, memcpy_136);
  tcase_add_test(tc, memcpy_137);
  tcase_add_test(tc, memcpy_138);
  tcase_add_test(tc, memcpy_139);
  tcase_add_test(tc, memcpy_140);
  tcase_add_test(tc, memcpy_141);
  tcase_add_test(tc, memcpy_142);
  tcase_add_test(tc, memcpy_143);
  tcase_add_test(tc, memcpy_144);
  tcase_add_test(tc, memcpy_145);
  tcase_add_test(tc, memcpy_146);
  tcase_add_test(tc, memcpy_147);
  tcase_add_test(tc, memcpy_148);
  tcase_add_test(tc, memcpy_149);
  tcase_add_test(tc, memcpy_150);

  suite_add_tcase(s, tc);
  return s;
}