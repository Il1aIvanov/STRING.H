#include "test_me.h"

START_TEST(memcmp_1) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 7;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_2) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 13;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_3) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 0;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_4) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 14;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_5) {
  char s1[] = "Hello, world!";
  char s2[] = "Hello, world!";
  s21_size_t n = 14;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_6) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  s21_size_t n = 0;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_7) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  s21_size_t n = 2;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_8) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  s21_size_t n = 8;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_9) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  s21_size_t n = 9;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_10) {
  char s1[] = "69917020";
  char s2[] = "6991702H";
  s21_size_t n = 7;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_11) {
  char s1[] = "69917020";
  char s2[] = "6991702H";
  s21_size_t n = 4;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_12) {
  char s1[] = "69917020";
  char s2[] = "6991702H";
  s21_size_t n = 8;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_13) {
  char s1[] = "69917020";
  char s2[] = "6991702H";
  s21_size_t n = 9;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_14) {
  char s1[] =
      "The memcmp() function compares the first n bytes (each interpreted as "
      "unsigned char) of the memory areas s1 and s2.";
  char s2[] =
      "The memcmp() function compares the first n bytes (each interpreted as "
      "unsigned char) of the memory areas s1 and s2.";
  s21_size_t n = 115;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_15) {
  char s1[] =
      "The memcmp() function compares the first n bytes (each interpreted as "
      "unsigned char) of the memory areas s1 and s2.";
  char s2[] =
      "The memcmp() function compares the first n bytes (each interpreted as "
      "unsigned char) of the memory areas s1 and s2";
  s21_size_t n = 115;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_16) {
  char s1[] = "";
  char s2[] = "";
  s21_size_t n = 0;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_17) {
  char s1[] =
      "r61oqd^!Iy6$hzo)?g`#_v,v2]FDGcXIxdCa{r?!_Qo42kSAS+q7cqA]:W#=8sqIo29*D?"
      "Mkr_E,@JAI_zHV3sgaE].oSrv<H=q|)|aK";
  char s2[] =
      "r61oqd^!Iy6$hzo)?g`#_v,v2]FDGcXIxdCa{r?!_Qo42kSAS+q7cqA]:W#=8sqIo29*D?"
      "Mkr_E,@JAI_zHV3sgaE].oSrv<H=q|)|aK";
  s21_size_t n = 97;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_18) {
  char s1[] = "h*+!Z$lm]-B12ZMeNQRJ3@LxnI_JLGK5PAD~b]JU?MxmHd/*3,3]_f;RvV";
  char s2[] = "h*+!Z$lm]-B12ZMeNQRJ3@LxnI_JLGK5PAD~b]JU?MxmHd/*3,3]_f;RvV";
  s21_size_t n = 7;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_19) {
  char s1[] = "eVcfqeSADD/|Rbz?n$tGo?5mq^|d@a";
  char s2[] = "eVcfqeSADD/|Rbz?n$tGo?5mq^|d@a";
  s21_size_t n = 22;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_20) {
  char s1[] = "WMtc=.vi;T";
  char s2[] =
      "C63P4r+fE/;2.pPs&MW!2vnnz;dcQJKIN-nr-2!tnL?QV/o:r*BzsnFGwVN(kqvEik";
  s21_size_t n = 143;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_21) {
  char s1[] = "*W|jYB*zy$K#";
  char s2[] = "c~W{b`Ya";
  s21_size_t n = 78;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_22) {
  char s1[] =
      "~S.}>_{_M<ZPLY5|UXR0+gRJsO7E=77Mk[|<(`}5NTGN}{bd#H@M[hgI=EsEQjvbUB9~(a:}"
      "uj`i]4WTC|u~x^l$d;E]Ei^V(9]-xuR5nn::Y]$4+q3=o)Ess3PxYh49mVm#$hA`77g`+~"
      "Hh9&+/G!";
  char s2[] =
      "~S.}>_{_M<ZPLY5|UXR0+gRJsO7E=77Mk[|<(`}5NTGN}{bd#H@M[hgI=EsEQjvbUB9~(a:}"
      "uj`i]4WTC|u~x^l$d;E]Ei^V(9]-xuR5nn::Y]$4+q3=o)Ess3PxYh49mVm#$hA`77g`+~"
      "Hh9&+/G!";
  s21_size_t n = 83;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_23) {
  char s1[] =
      "MJxOJ0VEy*t:P;6@Wl[S@t>cv?SEp<25X(q!`>Eg;#ng7mNgc/m/"
      "tf|C+3e?yAE@+y#T2$-4SPIWX6}^jpsmVU:#0X)I.mw/MDa5]8m2,/3|MMbj[b";
  char s2[] = "E=-Q[0r|8]Mp(IJgSc2";
  s21_size_t n = 58;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_24) {
  char s1[] = "E";
  char s2[] =
      "Kz87,(asL5_Cxf/"
      "M96d6mRiS06Rlh(.^m4`ua&i(^pI)di7NL(e|-8ED:[5wFIvgg|TtFhUvT<C]w*t{n,fFK_"
      "OL97n1z]DIQPRbk^1Q9h,Y@*]!zA_EsBx`F19]Z*$rXPg";
  s21_size_t n = 39;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_25) {
  char s1[] = "i*uHOar,};#~q;YF^";
  char s2[] = ";E3^_jVdKd!OxE7_s6T<!3NpG(/<M#R`b.nPND$|/JDx,3I+,~NV";
  s21_size_t n = 137;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_26) {
  char s1[] = "[^i";
  char s2[] = "[^i";
  s21_size_t n = 93;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_27) {
  char s1[] = ".UqD";
  char s2[] = ".UqD";
  s21_size_t n = 55;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_28) {
  char s1[] =
      "f}Sh[.RN*$pS_n@r?zB&Ye}Ic|HvyW10vCSKZzGhhg!S-0!=76nH]o#F,g{lJ]f3>P?"
      "SqXhQ:_/[PwQ/|v(`its`/vG(yUf7[`,=!fXIMG!]s7`f=LxR=";
  char s2[] =
      "f}Sh[.RN*$pS_n@r?zB&Ye}Ic|HvyW10vCSKZzGhhg!S-0!=76nH]o#F,g{lJ]f3>P?"
      "SqXhQ:_/[PwQ/|v(`its`/vG(yUf7[`,=!fXIMG!]s7`f=LxR=";
  s21_size_t n = 60;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_29) {
  char s1[] =
      "E4[Ew}pTt51mx1#@2b:0qm5>dh06heiMe*K]y[e1!m-k<q:-?$ARcliWfg?pjxP$";
  char s2[] =
      "E4[Ew}pTt51mx1#@2b:0qm5>dh06heiMe*K]y[e1!m-k<q:-?$ARcliWfg?pjxP$";
  s21_size_t n = 15;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_30) {
  char s1[] =
      "Z>2|UpvB:AInHIU1m@;w6I]8N$:YT~BnJBa>~_Rxo~$*Qf`<Ph#]}[Q~otE;Dy@7Gz{5K7W$"
      "CtNmxS!5Pq~I)&ZO7x23q{SJsJ|l8<]DO;h0Lpfry{LX_pZ[h7n7T";
  char s2[] =
      "Z>2|UpvB:AInHIU1m@;w6I]8N$:YT~BnJBa>~_Rxo~$*Qf`<Ph#]}[Q~otE;Dy@7Gz{5K7W$"
      "CtNmxS!5Pq~I)&ZO7x23q{SJsJ|l8<]DO;h0Lpfry{LX_pZ[h7n7T";
  s21_size_t n = 124;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_31) {
  char s1[] =
      ",(cU>l?Afzvid2)?1**i2^~;Gb=hlo`&#A3o3o{?y}WtUwPXuY1M!?CcB~[4ET/"
      "pLKL;s(_f1]1Y^8o@*,ISFE5Kq=l0tQY~p";
  char s2[] =
      ",(cU>l?Afzvid2)?1**i2^~;Gb=hlo`&#A3o3o{?y}WtUwPXuY1M!?CcB~[4ET/"
      "pLKL;s(_f1]1Y^8o@*,ISFE5Kq=l0tQY~p";
  s21_size_t n = 89;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_32) {
  char s1[] =
      "p^l3PPV$B8^a`Ts[fYkB&z_YX[^.fgLca]3=ICzHmWgxAAPtnRnd,OF7[wu?:*g$]sV@!)"
      "y2|]";
  char s2[] =
      "p^l3PPV$B8^a`Ts[fYkB&z_YX[^.fgLca]3=ICzHmWgxAAPtnRnd,OF7[wu?:*g$]sV@!)"
      "y2|]";
  s21_size_t n = 9;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_33) {
  char s1[] =
      "T$g|g<<t::`f+k)G8h0oa^rNq,M|_,KPkXy~EUonYC45)Y$MzJUmyV4GhvRx4$Ab::y6Iin<"
      "8{-*2!;@vGz>g!I";
  char s2[] =
      "L?_jGcc3yJ?.~z>jdPo?J:xEmbpR=UyJ4cOH;G9lKf~M&zthW][*.(N@iyOkcy?m@i}GB?"
      "at|Xo)+mh/"
      "!+LNXdu4&*H<c;ZK0zRd(l!]stlgVV.Cv:VMW6*6dfXk>T)1I[#u0W$cfkN7xY:";
  s21_size_t n = 49;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_34) {
  char s1[] = "v{RNAYXzSwr~Tah.";
  char s2[] = ">H~w,saSP_JjC5h8J$W@qvG>B`";
  s21_size_t n = 126;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_35) {
  char s1[] = "@h=wPx;-X}g=87l,d";
  char s2[] = "@h=wPx;-X}g=87l,d";
  s21_size_t n = 10;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_36) {
  char s1[] =
      "uHQk{,`O(cvS+Ddrw=AYmL?9U/"
      "2`_q2U,L@7I}}FQ&?h2U6,S#uEaP&Jqs#Wp-<`F8LgD4:R+cid?pHmQjz?a1}T~ZwA`u~;"
      "pmOFU{fxp@`?Z6;i.Lza)3+n+D&bx[RXK$uY7jX";
  char s2[] =
      ".n-.<i1=#nL0sAGzcC2*ldsRMQ?dFnh-)BQ=&90B[|3+nHnY7AEp6i&{JtJVP;oc,UTiej)"
      "FM=0ya5mGAz_XL3V-8!y^oJa}<`+vwU;[*15F:jop";
  s21_size_t n = 45;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_37) {
  char s1[] =
      ",^CthTK+`^f/"
      "I+Tf[ZhsZzutXpEBtM_y{U|ZP;<zbcsZ$Nq?i7tf5s+_lI~S`,NUZ2FV))}ceGS:;CK0SH)"
      "0w?#9,!]/Rb5lU2Ds][";
  char s2[] = "xPi)/hgV&_`&kQW0phXZMdByqk_x;^ffr:7^|j^PF5F";
  s21_size_t n = 76;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_38) {
  char s1[] = "79utCHZm-+uoKFvoP0uqs@TbS)H+";
  char s2[] = "79utCHZm-+uoKFvoP0uqs@TbS)H+";
  s21_size_t n = 12;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_39) {
  char s1[] = "H<@8?99gqSWux7+Nw.#L_+YROhC0z";
  char s2[] =
      "faBi=kmB~,G6@01cYu/7(4LR/-)agKqfW^79M?Ods-S/"
      "a-1A7`L!{$5P{i^;:&#,.hoVDbZQ+xULqL$;.>&tlhk<rqABvG&U&~E<d";
  s21_size_t n = 82;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_40) {
  char s1[] = "z~rLbC|r$Z*";
  char s2[] = "z~rLbC|r$Z*";
  s21_size_t n = 150;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_41) {
  char s1[] =
      "h$S^9>f}}ra]IzL+:[?TVQ&eQ]HbLM5$a.fr6^1smz?7Hq4V`NS*]DO0;FOI828q?=J)pp("
      "wt.y-~L#MWELn9g}@?9yqN+J1YtAuT[V17k";
  char s2[] =
      "adl(Tx8@--`MT`tE8^/#Pvonl$9dT(x}`_i^>r:6jTL2/"
      "eG81^Q58QduNe|sA[UP9Qy=~7WjdwS1Iuefbf=n-8VL;4$g}Pu+&ULzx@P(EjO#cxMMdmtN<"
      "7V9DXislv^#L,ml*NcHOJ4)J|J362}";
  s21_size_t n = 50;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_42) {
  char s1[] =
      "I@/"
      "1&Vqs0@}d3<6pc3[H#~EFP<(eftZHmw^c]eM9XB=Qf19cQwll+OzlHQzva;6hN]QH}G;U6|"
      "lTFs<gt6QFp{7;v-5~c=t?3f1mdrC6R!+=[BjuT;IbqLurh<g$[1MMe+sj(BxY3Ys}t#"
      "E36&";
  char s2[] = "z:jbU=Ywj5eGM|6NTJZD?;7Dj9nQw";
  s21_size_t n = 11;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_43) {
  char s1[] = "{dJ6@G=Lz<7vpDlqhAFH@^&&Pj@o(*";
  char s2[] = "{dJ6@G=Lz<7vpDlqhAFH@^&&Pj@o(*";
  s21_size_t n = 5;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_44) {
  char s1[] =
      "B{Sem?Lr4whR?B{hvz2KgtP]}`|{K5p88O@^/]}|&$^AR4^bp/"
      ">oZ[.b:cxidI1Mrf^CcJq}3@TDa_m8O-)";
  char s2[] = "ufw&[0KM#SlKp=me[9yAP,JLPQe/uGx>";
  s21_size_t n = 54;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_45) {
  char s1[] =
      ")OW;R*&?:+aD/"
      "BuL^zByMx]3D[xe9I^p?GG0-Q)mxId)q)nX*$[Sg9F?L9S?B^!x]x;(;(z]Opd?AcGg.a]K("
      ",05;[clVaj`sy!q2z|<9io*^@L@W?T1dJe@^&Zva3g*";
  char s2[] =
      ")OW;R*&?:+aD/"
      "BuL^zByMx]3D[xe9I^p?GG0-Q)mxId)q)nX*$[Sg9F?L9S?B^!x]x;(;(z]Opd?AcGg.a]K("
      ",05;[clVaj`sy!q2z|<9io*^@L@W?T1dJe@^&Zva3g*";
  s21_size_t n = 82;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_46) {
  char s1[] =
      "`bm,9V&24]u6*4Cq>=t3{Y5H$-SKu?y#efjbKrVKiZcM`]1mM{z,sR(W5g-.VY1kL";
  char s2[] =
      "`bm,9V&24]u6*4Cq>=t3{Y5H$-SKu?y#efjbKrVKiZcM`]1mM{z,sR(W5g-.VY1kL";
  s21_size_t n = 4;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_47) {
  char s1[] =
      "zw{4K($ukgvJ<~u)iQi[`*zX5Xnzx-k[VR-8:DWSqu_2EV&/n:X1`kC@$AxT&.IDqDg5o";
  char s2[] =
      "MV+IhQuA6.2ZxrRUS$iBZ*$Kh[Vbw<?aT1i:6,is)`DG+*q7?o}f2^rfy&?2tSBzs*CR*Ij&"
      "!ELDa#FW;~&}.N=PR;e?;`-yzRMf=$(isC{y1V$~4&es=){RdX(^";
  s21_size_t n = 132;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_48) {
  char s1[] =
      "7,HOA=wThFq2}?X|fMSu{?m*>k[dnhR2F^/"
      "|7|Wy+(tfzuLhf<gOw:Q+MU+`O8jH}UVv`C<},*pxP4{!7#n0_*poj1q#b.vAj:LoLO$?}"
      "KZ<V9uC@_*Or>`AmyI(L1Uw`Rq}[lNdqF|8AO|!X";
  char s2[] = "?La5d;.zNaUm";
  s21_size_t n = 10;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_49) {
  char s1[] =
      "1D7Y#&LLQDNEk2.T!tBdwt:!3VXYd.<o<N3qW^lF=}I@(4y/>(CkTr/"
      "gNGTXDT}r{dzyHx8XaCH}}bt#Oc2-sQ()We+vP6y42xmNE~gG]V9?iG^c^a8@X$gQ?M$@o";
  char s2[] =
      "1D7Y#&LLQDNEk2.T!tBdwt:!3VXYd.<o<N3qW^lF=}I@(4y/>(CkTr/"
      "gNGTXDT}r{dzyHx8XaCH}}bt#Oc2-sQ()We+vP6y42xmNE~gG]V9?iG^c^a8@X$gQ?M$@o";
  s21_size_t n = 100;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_50) {
  char s1[] =
      "R6nxwvJmFGqU$ibQX#G^i{`=-j<i(0p2Ag}~I&@_75JuE3.R_=TD=ylu`.z{0){4fjR$VA~"
      "GGuh]))Jw.rEjeWZ}?~_T|kh=FSxhc@BhB+gS.D";
  char s2[] =
      "R6nxwvJmFGqU$ibQX#G^i{`=-j<i(0p2Ag}~I&@_75JuE3.R_=TD=ylu`.z{0){4fjR$VA~"
      "GGuh]))Jw.rEjeWZ}?~_T|kh=FSxhc@BhB+gS.D";
  s21_size_t n = 61;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_51) {
  char s1[] = "4=WOeiNWo`U$e;}rJ>s";
  char s2[] =
      "$,[gI!$n[Zf7G?.-^6tS.anaK^@b8?#l*.KP(0JN4CI&/"
      "k1!^>}l[*he*4<mJ.djO[a]~iOlQ1n>;SCLA$+cl<^]17xay}qj875G@CRtLHjc**Ad-<";
  s21_size_t n = 27;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_52) {
  char s1[] =
      "R+oR^iA06p,-OnykGrK/z@k3<5PiuhfJ:/4/r.]D~H;((+Aij3..xU[cXYWsmjp5`5.t,oH/"
      "@CMUWM4E!]lmZ@jh6-T:[`,7B!C.rTYvnVXocj3xnly9aP`v2r[";
  char s2[] =
      "uL6D*8B<lovah,bt8@qMr}M([ENi`yWPnY1_L{QUkeq7zxv;)!y~Fu(WPr.}_#PemH0cW_"
      "iQc?/y5c";
  s21_size_t n = 103;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_53) {
  char s1[] = ":8pF3}J|mj;";
  char s2[] = "^!=o&2)ed&@d`a";
  s21_size_t n = 59;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_54) {
  char s1[] = "j`*3UaGxciOS8";
  char s2[] = "j`*3UaGxciOS8";
  s21_size_t n = 141;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_55) {
  char s1[] = "[0;T/>TUZ[.<Z]39D1VHieU5";
  char s2[] =
      "7fi_VAP26h&I9XWW)xJo/"
      "<BzDs5;Lk-zf$Kn3ro2Ez0E0ky3->4X]CXFLL)=QBDN[Yxpw}BPlS!V";
  s21_size_t n = 76;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_56) {
  char s1[] =
      "F5ixM=]PfWc_a[I=W<LuoB;!1b2oQ_Ud#sMPK|#pCYiC#a8^d.M/"
      "$C-OejRwem[*y*cKQV_N*>)cMKjEQE@:V~xyBRn>AKPNz,quDAS/x&f5/w1w4Dym|,9";
  char s2[] = "f&iPi:KEXpSS";
  s21_size_t n = 134;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_57) {
  char s1[] =
      "0*gC<Mi<b^w;,z!7FlR#|qKn}|7b@]4/"
      "DX!yrxa]+(n|NVM_oJUVa},QM>LR#;U~:205tJZ^Re#u#E_`h}7POjo7!aN4E(xh";
  char s2[] =
      "0*gC<Mi<b^w;,z!7FlR#|qKn}|7b@]4/"
      "DX!yrxa]+(n|NVM_oJUVa},QM>LR#;U~:205tJZ^Re#u#E_`h}7POjo7!aN4E(xh";
  s21_size_t n = 79;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_58) {
  char s1[] = ",(Jd1k0L3iaDk.";
  char s2[] = ",(Jd1k0L3iaDk.";
  s21_size_t n = 20;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_59) {
  char s1[] =
      "{dnhmuF#_2qB,aGbv)$v&!~<yW@yA3OQw[CDy/"
      "jU**U-7X:~y^2C,$|aO2BycP72E}TU7~67N;^m]AR6Vym@aM&o):q+Qi7jCD2?"
      "qDCgBJ3ctL/$:LP_|v0(I)fk44uAsM03Xd:ug.Eq#w@!-D";
  char s2[] =
      "{dnhmuF#_2qB,aGbv)$v&!~<yW@yA3OQw[CDy/"
      "jU**U-7X:~y^2C,$|aO2BycP72E}TU7~67N;^m]AR6Vym@aM&o):q+Qi7jCD2?"
      "qDCgBJ3ctL/$:LP_|v0(I)fk44uAsM03Xd:ug.Eq#w@!-D";
  s21_size_t n = 28;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_60) {
  char s1[] =
      ">pmDG6*dV75e6f>>B+rAu:+pqA4^9Jl+LgR#4:+9aeJJ2V~4(9wyKf}G|fn;B_#dIhS8ai";
  char s2[] =
      ">pmDG6*dV75e6f>>B+rAu:+pqA4^9Jl+LgR#4:+9aeJJ2V~4(9wyKf}G|fn;B_#dIhS8ai";
  s21_size_t n = 60;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_61) {
  char s1[] = "Ao_00(oq^I.q1qJa?AzN3C;!Bj,Hp4(c(3-*";
  char s2[] = "Ao_00(oq^I.q1qJa?AzN3C;!Bj,Hp4(c(3-*";
  s21_size_t n = 13;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_62) {
  char s1[] = ".pW@.AIaT3Hk&oe8,$KCc#0#dTvev+x2*8y+E3aC5^2=9";
  char s2[] = ".pW@.AIaT3Hk&oe8,$KCc#0#dTvev+x2*8y+E3aC5^2=9";
  s21_size_t n = 14;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_63) {
  char s1[] = "1z`A=>Qw$L_{QQu1P)_Wp";
  char s2[] =
      "U72jEdwL;mK7Hskn.r&F$/"
      "p`Be&9N1yBVA=eEi!Kk]Zm)9EMSwOe1If=#;Bj~8_]6I-+9(K:u*3}?OUoQ}Owz^f|v}"
      "bVjsUe,";
  s21_size_t n = 70;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_64) {
  char s1[] =
      "Sts:>*r<[^hWGYkTQv0fPnUxYQ@+TvT@EA_|BA$f=Ig&.Jw{i$}O]6i<twnNK<=YGT^NbQ{"
      "qcs.]{Yl)g$c3G6_Vrs6T4IUCXM*Cu19(PVklrcP4z{$>>T:L(";
  char s2[] =
      "$9l$>(SM9R^8|Xm{)1HiHqw+3#`Q~)w]*JvTL+F.raE;@2B!Y<gZygjJ*R,tv6^2}j6d=c0?"
      "a&Yv]?Q+o$Gc!q8(Azt=e)Zh.60S}qWk$W";
  s21_size_t n = 28;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_65) {
  char s1[] =
      "7~GTjv<T~{^y=MLSi[m[2l0_m<)!]a+D|9e3ZU*8E-^k&wZE=~k,Qp,&@(8TyQ^Th-X*MUP;"
      "23+Jq5gk9)u*&rC]H^Dg~xXF:`a";
  char s2[] =
      "9)XG$]8+S.nZXr<>=4xao+9098E@x2TLsvDO*yyRkyw;|MXCwJYT6J+y:$`8n))MZws4$>"
      "6SOhmrDnBl$8zQ^Pt@*Uk)dNSqJ#j1vq*GMDFsIQl*";
  s21_size_t n = 140;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_66) {
  char s1[] = ":rFHK-R/`b3";
  char s2[] = ":rFHK-R/`b3";
  s21_size_t n = 0;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_67) {
  char s1[] =
      "hZMX<Mf^6fu$JOmdC[k]XMGpuKfX4FdhT-{$*Gg`r#1HOrvPP$=FR!rzXp=X~enmg:"
      "1S0jNdU8DJ(KVpZWu$";
  char s2[] =
      "a;DCQ+W|eUK.}V>(Wt]#F21SJ#D-v9Q_[8I@P8H#Qt!W}KRU9pFVC&p}l~UmUw{L]rlpKjj~"
      "WfX,__@x:gu(rcF|]7<Tenx<r)_r*yAmtxGPGTHP";
  s21_size_t n = 87;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_68) {
  char s1[] =
      "Vvje3ThzQx!^n_J$^6;9doYX<t^rQ>J/"
      "B1JlS}kD(}Tp|5PSt[vjX3dbQd:~!(3-f+!7W`ZHUqRR)|#:Z7Y_P3MKd:";
  char s2[] =
      "Vvje3ThzQx!^n_J$^6;9doYX<t^rQ>J/"
      "B1JlS}kD(}Tp|5PSt[vjX3dbQd:~!(3-f+!7W`ZHUqRR)|#:Z7Y_P3MKd:";
  s21_size_t n = 70;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_69) {
  char s1[] =
      "|Tu/"
      "h-?6<jSg6XuMjyN|N33P5@>}=V@.=j@{r=8D1=Sfrw{R4~+vWq_aRDD.`A>(Wuw5Y5-?m2["
      "v,T;b1?j`JIVtmw;nr1}un-?eVcV9SsNq-^Gz}H1<n]Fj?nSH(-n";
  char s2[] =
      "|Tu/"
      "h-?6<jSg6XuMjyN|N33P5@>}=V@.=j@{r=8D1=Sfrw{R4~+vWq_aRDD.`A>(Wuw5Y5-?m2["
      "v,T;b1?j`JIVtmw;nr1}un-?eVcV9SsNq-^Gz}H1<n]Fj?nSH(-n";
  s21_size_t n = 115;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_70) {
  char s1[] =
      "~Nef5G35$!?/7aefN[pTc+i_M}8q=>#,Oa7jG-xhpom>VD9h}7,T!c_nao7lz9HSKJ|>6";
  char s2[] = ";t5&E2q@C|WV0;7pD@";
  s21_size_t n = 124;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_71) {
  char s1[] =
      "7.zJElbv@FBWM9A<SV#A#|nRwM~mN#!EoX@-5eYR]&G4/OL<1Mt{Z!Ob_Ze[kV<5e";
  char s2[] =
      "5ipTxvZBxV}Ng&m6Va.F^7?<!tCNbcVpDqYAN48&bxeB;pqud;&oZ^7L#r!l]Q]@V;f)?"
      "p949vyrmR~20bveig;SiiFQX.&>bF.1A]SEvQ(?g0$V";
  s21_size_t n = 97;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_72) {
  char s1[] =
      ">|c#=/(_(MmB#zd{Hy)P?+k2q/O^Jo(h,_s/RAj[4/"
      "2Jn[<g4}a7?I1.mFYA33!z{&-IVDBB&x|Zsw{H[(`Mam1&HBquuCkJavws>O/"
      "Ba_fQVc#sc.BE";
  char s2[] =
      "H{.aF{RS0twreh>>eX+F>4?E:4no083zD*[^bhXJxk1uSN,pSKK8Yk81v#4~f/"
      "T;M6ELiIcApHZ,)jeA`1`YL-)wB,Q7xt0^ozawfn7?`ixvqk2iIA56EY-:^5u}R[}T!"
      "lP3EzmRhk";
  s21_size_t n = 73;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_73) {
  char s1[] =
      "{zPJa_h^/(5{gW*`XdKlrw7L,j5FC3e|SzHkQpEyv|6_lBk];za{aMw$Xbop=V/"
      "P&gF<l0>O$O7*y![6WQE@s5z3FZ`{mjLaC]:u_2Rb#h6m@xq";
  char s2[] = "h-s2!pLAt*JET&|Q]j@co3SWj94uW1MFtbyZ";
  s21_size_t n = 95;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_74) {
  char s1[] = "Bks>=K:c&|^+G^c~lBBxyECpcuye+";
  char s2[] = "Bks>=K:c&|^+G^c~lBBxyECpcuye+";
  s21_size_t n = 18;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_75) {
  char s1[] =
      "}aBSnn5m::oD4$Ps8NHssO&Eqy89pXTNWunrQz^c~~cw5Zws4Re*r$$=?;]@WbT*ANthJ@"
      "NBe6-as`.FUUJju6k";
  char s2[] = "5NA~|@h5E&sCF.8:uCtkgUnsdkDpXMwH~B?H,4t5A";
  s21_size_t n = 86;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_76) {
  char s1[] = "{J7<BWBUxcKpgfFJ8y;A>}>->Sq8S";
  char s2[] = "EN+#njW|E2Zy5m5?B.&#z^!KQ>1PJ]=NC,N_O@EJn!";
  s21_size_t n = 129;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_77) {
  char s1[] =
      "E?oCGn>P3zbt;va@b4t|VCf.Fpo>w`WXTB:!pdU?TU&BldAIk0.j)Q7=Cvm>z/X#~C@Bo*/"
      "V|Vyt";
  char s2[] =
      "E?oCGn>P3zbt;va@b4t|VCf.Fpo>w`WXTB:!pdU?TU&BldAIk0.j)Q7=Cvm>z/X#~C@Bo*/"
      "V|Vyt";
  s21_size_t n = 30;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_78) {
  char s1[] =
      "y0Lx(BUXwx)u4yAyiMN__m7:g;-_Xj7eSJWBf$8w7=:`rbHk*USUZ=Tn`E6dY9t-C_2`tmK#"
      "9]Fuu;Q!T@)o<9&,eBDa?N)}ZzDH0Lz8nLoAvUX~z6BN";
  char s2[] =
      ",5A@YcqbyQDQd!CcqyFmqNly-!T:3,..Y>UR$RGwTRw35=k.}q_xm19t6*wpR5oi!!"
      "Od6vbRWcho==.$Q>zfA</he";
  s21_size_t n = 136;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_79) {
  char s1[] = "kI>Y]-G,}~.OnfEDDn4}R>$Q(Qr@{/MLFn";
  char s2[] = "kI>Y]-G,}~.OnfEDDn4}R>$Q(Qr@{/MLFn";
  s21_size_t n = 11;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_80) {
  char s1[] =
      "+mwe~En|xwh*>fy)1X<1}{q[XfB|lSBSeE,-|F<1h0(V)r@Z8*6r`t+UJ5MMAS1>TZ2tN_"
      "NAZi7*bc`9tV{m(]|mN#k>b1I=W[vhH9J50(7.d";
  char s2[] =
      "+mwe~En|xwh*>fy)1X<1}{q[XfB|lSBSeE,-|F<1h0(V)r@Z8*6r`t+UJ5MMAS1>TZ2tN_"
      "NAZi7*bc`9tV{m(]|mN#k>b1I=W[vhH9J50(7.d";
  s21_size_t n = 15;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_81) {
  char s1[] =
      "K;aUcdoYt.uSM^CV{`hU)-9#Y:9*]srzBA}RH-X&1$_6f<zajb8D~(TH{v.`YhWki{9p}K~/"
      ")=utLCrehKp=4umTW3w]s-zZI&LBrJz(.r=~JO|x1$hM#P5sH+>=Lm>XD>QyS8[Vjy_CJN#"
      "r*$B?";
  char s2[] =
      "K;aUcdoYt.uSM^CV{`hU)-9#Y:9*]srzBA}RH-X&1$_6f<zajb8D~(TH{v.`YhWki{9p}K~/"
      ")=utLCrehKp=4umTW3w]s-zZI&LBrJz(.r=~JO|x1$hM#P5sH+>=Lm>XD>QyS8[Vjy_CJN#"
      "r*$B?";
  s21_size_t n = 72;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_82) {
  char s1[] =
      ";D)/>91T0&8fYjIMmn9/"
      "sKjE)_=,B;@0uS(t+)a34iq0.$1hKxS(3|Ev`Tla_fQL+phD^|^a32hUj>Hgf/h6}<v";
  char s2[] =
      ";D)/>91T0&8fYjIMmn9/"
      "sKjE)_=,B;@0uS(t+)a34iq0.$1hKxS(3|Ev`Tla_fQL+phD^|^a32hUj>Hgf/h6}<v";
  s21_size_t n = 15;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_83) {
  char s1[] = "7-^8mqLmPVt4,,VGn;t9~9abJ7`*$>+h_=U-SCO/o.1aR?K?)-Zhte[34^oEo";
  char s2[] =
      "fb!ceVL<+5Fp>e2v[(o!R!xhmyt1)6ar7G[2`#uN-l4k=jk7rxVMzSTQoUAZb3qVpER&sW>"
      "m]hb/4zo:etvHxzLA4f9.U;Y";
  s21_size_t n = 76;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_84) {
  char s1[] = "7fwu8p^$m0sQ?(`NmP/p=;3vfJVrVKwp[UrHTC{i`NYV=";
  char s2[] =
      "+ZIL@;No.UgXn]q}M=3G.Dq#:{)MB/7&2BnDi$Lg_Q@lJhJO$a5lCZ6bs|6ec*_#EM[EF]9";
  s21_size_t n = 75;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_85) {
  char s1[] = "yQT/O1UviW`d}p";
  char s2[] = "Q$N7E3tul`b)$PK:Bajh0wZ`1J9NJ6_nQkeC{NLUD]eO!z?}w?ztQ8h";
  s21_size_t n = 117;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_86) {
  char s1[] =
      "Q3xG6v-Md>v~.;]$RN)!~PTNc9i`Q^OHb4fn)9p~UlkwIk;mJBpb{IahmT,.>;fd$"
      "7Mfchmvy:@#z;O|/),f~l=bR/dO7JtX.t)eqc<Wgkq9MAHD9M*HUWqB$:t+G#b_J<X[r";
  char s2[] =
      "V{x=TGkP3t@827;Qd~nuOSGkyj|f|]ir2(I^))k}uMM@LVRYxynVt_eld8m&OJ/]-@@r}/l/"
      ":7Uz-[";
  s21_size_t n = 26;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_87) {
  char s1[] =
      "^H3)Niok;mRu:_U4mO?K.Vwn5|LPnB;tmHd[C;WOH3:KGIHCSmK.!P/"
      ".UaEj6)7~$R{FgY{aOFDFfI((+#^FlU-(NZC$p";
  char s2[] =
      "kk|pjV$v2ind<X_X_/tMoyM+@Rv0wm]wM_bRpid;lAAVRt)b{wD4&,+=cB+s/"
      "+k~q@gTjg_GDpWj::>";
  s21_size_t n = 53;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_88) {
  char s1[] =
      "Pi3a/"
      ">kE6j:.i,I-m-e(]HyW3^XioW9zD<YT.J3}VO(CiDnvYQ#KP1OI)G$PT98RYWx0EzzZ!_]j~"
      "=U0JyQ/X5w13:*(/wZ;NaU)f~m(+qRW9$>GHM+[H^_2]fDmmtJkfzM07.~f)Qtc[?6ih}V";
  char s2[] =
      "=zhnW?WntE6-T~fYDMg:(7K+N-zI+[gmI0o,pnfrBd!GM]53yJxd+{B6zXLO/"
      "pHbF)p$8<5HNQ~nQGP<I]M)/"
      "0;0F4`VwxX$3;bO<L}L~@;g(Pwsgw<WI&}O=n&gaO(w<q$`.:#HuCg-NfdBSuavK~";
  s21_size_t n = 54;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_89) {
  char s1[] =
      "=|_uJCvfD0^bu]!Ir/>.=p1gHoMw,wP6r-DZ!iEYJ-{M|76Ii$/"
      "ywS>4{BS~?ab<m^E!4*!?5A(|X=P(Vv?NtDC_P)8[R;Ee>WRYej`{i_g<._";
  char s2[] =
      "=|_uJCvfD0^bu]!Ir/>.=p1gHoMw,wP6r-DZ!iEYJ-{M|76Ii$/"
      "ywS>4{BS~?ab<m^E!4*!?5A(|X=P(Vv?NtDC_P)8[R;Ee>WRYej`{i_g<._";
  s21_size_t n = 39;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_90) {
  char s1[] =
      "ACtWmiHeyw9,R>Au$Mr.+G{/"
      "o8Q{?m[^cpqoPY!)8c?)uY8@HY|C]pBlN:GLjTu5bZ<?v?(NnCK+*|Gud$x}9->$Q-PxeOj|"
      "^l3s}!kuwf.LGP)";
  char s2[] =
      "DJiP|}oA~>PUXBC#Xi-THxa$48l51flb)y_{0SKYmUNp0k$78HlVhzI^wcLLo|~w{W|OTK.="
      "(x77l(+^&vIK-VKy9(Uqs$JPmliTwwxc$T~:?W6[.Q_HbeRB^CZU0lo8Pa__,aXRL3*18";
  s21_size_t n = 121;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_91) {
  char s1[] = "Fg3b+H[Z3lEO0$cfds``EZ3U+P#?oh467wTk*Ck4p";
  char s2[] =
      "f@6}U=okCwPLPS_>5{=b0TG;o__C5p0g1WJ,_XS{^@LPN4-a$,eNup+y&QZC_K]#dQyjIOM$"
      "w)W3&G~X;hKI}Nf0D}119t{^z}C/gYxTBH=WQt!p$!,n#M7aGIvD=mvWULLcwu`pgc";
  s21_size_t n = 69;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_92) {
  char s1[] =
      "SeXu2n1A[A6)I3oGavqh10{=rV*eC=Ue?yb*WI&u#6)Gy=kEY~-mFoc8{k>VbMOW}5:W^j.~"
      "LNP~pX~Uu+xlL7F(Ab8p=$tr@-7TWdyi*9$9n";
  char s2[] =
      "SeXu2n1A[A6)I3oGavqh10{=rV*eC=Ue?yb*WI&u#6)Gy=kEY~-mFoc8{k>VbMOW}5:W^j.~"
      "LNP~pX~Uu+xlL7F(Ab8p=$tr@-7TWdyi*9$9n";
  s21_size_t n = 84;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_93) {
  char s1[] = "A#lR3}U7xJ>{qP|r6U@*[[[z`A,eWe}BXP";
  char s2[] =
      "R<GCw`m}q;;zT*u8mjPH!_Mdha-vw{:fSeT.WVikA:8~Kdipu|>_}G4Xy-u#AEud,7@`"
      "8lpm)]2?xFMZ?9-dosgt";
  s21_size_t n = 77;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_94) {
  char s1[] =
      "lIdM[*n:a7x]/cTtY}02e*0[6|n6/"
      "?TM+8p[_a*8rAGj=?K&=~~$T8`?cQK6W0M$fn!~DCRw0BnBx{T2Knx|oMtF]sFB[POCx+?}"
      "FkZSHtP_Jvf";
  char s2[] = "Z4,nWm:gQqG[R9G>6_].-gKRaV6lTyka7";
  s21_size_t n = 29;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_95) {
  char s1[] =
      "F[GO#{OuP9RkY)a~S6belOZJ>b[N5dNx$Ngj4*Qi)joBv!lEIs,#M.,[O&W0J7Tn-c-"
      "x36fmBpukY/";
  char s2[] =
      "F[GO#{OuP9RkY)a~S6belOZJ>b[N5dNx$Ngj4*Qi)joBv!lEIs,#M.,[O&W0J7Tn-c-"
      "x36fmBpukY/";
  s21_size_t n = 74;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_96) {
  char s1[] =
      "]^6grDC=):U[q.vGL/"
      "T:IyC5C-Mk0i?1Fm*!*R$$EDGr2DfHlC<!2t1^vk|qa8H(^>g+t6$XcWmXSqi9-}Z#q!f>e>"
      "JQD>do@y<[@q`Go03(XhIGR@j[J+jK<_7r";
  char s2[] = "x<8E9Y6fnY0";
  s21_size_t n = 21;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_97) {
  char s1[] =
      "b:ZSr&:BkLSU8(e(H#rjHLW<=c@T*I@T{Ho!4|>~jLn9KL9HX75&/"
      "2F<,Ynx{mR?dpeJ{i|pqXLP?jD[u!znm.*ZFaSR:|VOE)kGs+k.";
  char s2[] =
      "2v38{&<`wLf@=uptPAgWfyX-l?t1p4wXA)g1d99Y/MCR32^wPJidMtg:(=SbG6?uJ";
  s21_size_t n = 47;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_98) {
  char s1[] = "p6V4PJ$[)NW`B,?{]cm9#8[q`=##1*};wg";
  char s2[] = "0hKo(^F8V^0f_or{8Rkm]$ydfGitG>yxa.@+nggxwsm&F=t[R>@Z.uRsS(/*-,";
  s21_size_t n = 92;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_99) {
  char s1[] =
      "idhj|J;d{1qlS{hB2GwPs9^Dob?~UAYMe#0+z93Sje&(mJLbwui4pj;uhT(wpov/*=ozy$e";
  char s2[] =
      "sup9,;Gx:TDtSf_UoTES:3NjOv|t55$opG(tk&c5-.b!1:cIZ:@t?[/"
      "NS`8PiJa.NPLx}s]>h$!qK:)Dn4`q]_26j;QM8;C<c/zz0>_";
  s21_size_t n = 15;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_100) {
  char s1[] = "Sb:=4w";
  char s2[] = "GHX";
  s21_size_t n = 11;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_101) {
  char s1[] = "?|Ny))!i";
  char s2[] =
      "e_5G^D+|HI<u}wRm:Q-S@-3;,bP]pO+O)<L8,^)VXULn;!S;K]}_)-5Ff}xMc-;zi|Xi*"
      "mHt^g3m2_o96G3BlbR>/3ByD][ZFF=xi3ZA_";
  s21_size_t n = 25;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_102) {
  char s1[] =
      "~l-a,,Jdpe`&&#&Xr|wF+ffyc!F[HC[P!Pf4A8q?GpSep`dXA$#}5FbCR>;3rQ@K}@fMJKP."
      "o!PIy<I&O3Q+<S8od$*)P|lwWIE8Arn,=A]o9P;*<_,o";
  char s2[] =
      "yv~PevK=eV:5kau)Gh*M72;/"
      "GLnH8qiu#bjQ~To8l;gTg(g$ZMnD}gJ:3poZ;@yV7e^M7(k(2|nqsa)qgQB:RH/"
      "sZB7I]h03(AQ@K[~Zoi6TI";
  s21_size_t n = 80;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_103) {
  char s1[] =
      "_><uHtaugQMlY_|bl0b5$G&sd_u9I82Sd&/"
      "LYrH*7bH[9aELXrGS6Ko]L;W&`EXg1={l>sxULp";
  char s2[] =
      "&i$4m1DX5a?dU?j#@jn,QQa+^?gCR&jx)lyH=HIf:r@7^A1w9LQ@ZIyV4e*r.I?>ehSoMa]"
      "Yn}d|kYj|r@x";
  s21_size_t n = 132;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_104) {
  char s1[] =
      "ur$K]Y(K{b9]nqn~5MWPmHUGlhZKF^R.=5qZsV,pYoC/?B1h)tO/"
      "KX2?kG0lZf`(y$XGu~8ik;_K$]dSSDgB:]pHukzH+kV8M6ov-!8U<:MnN4$&H3DbD,Y:NP.)"
      "l`UQH]pkPUV^7";
  char s2[] =
      "ur$K]Y(K{b9]nqn~5MWPmHUGlhZKF^R.=5qZsV,pYoC/?B1h)tO/"
      "KX2?kG0lZf`(y$XGu~8ik;_K$]dSSDgB:]pHukzH+kV8M6ov-!8U<:MnN4$&H3DbD,Y:NP.)"
      "l`UQH]pkPUV^7";
  s21_size_t n = 136;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_105) {
  char s1[] = ";q*sGa:?`vdn=|$jLPU+";
  char s2[] = ";q*sGa:?`vdn=|$jLPU+";
  s21_size_t n = 10;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_106) {
  char s1[] = "g`dDHs;QN4jYT7bJ9M,!eI8|2{[iK}*KUz~qr15*mQZX2U<wC.?A";
  char s2[] = "WiJsXUt0ar*f_gm>Lh=8DHF-!]>}9&p|+2oe&";
  s21_size_t n = 53;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_107) {
  char s1[] =
      "(!.4MH+n~IcFeoa~$yV{kZ=a)>$/"
      "g{)s3ygN+28R?QSbTDdxl>#]CGHi4GTgY>xQUeb|4|s$|g!^,=<g=z?PWt5N)72_mpII`D5&"
      "o{";
  char s2[] =
      "(!.4MH+n~IcFeoa~$yV{kZ=a)>$/"
      "g{)s3ygN+28R?QSbTDdxl>#]CGHi4GTgY>xQUeb|4|s$|g!^,=<g=z?PWt5N)72_mpII`D5&"
      "o{";
  s21_size_t n = 61;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_108) {
  char s1[] =
      "A-`Q,|~MVSG*zL_Rnu+vy;j3{-c@/L;]Q*j7j&9SqT/"
      "[|^b@~n_HbyEU7L}]0a8uQ[-lw}<(iF}jK1&3}ogF[tRLl&5jY&XX#a}]DzaHxFM_0{,_"
      "NGP`}x4m|TCL;}{T~1QJ1G9g+ti~m!vJuJua";
  char s2[] =
      "A-`Q,|~MVSG*zL_Rnu+vy;j3{-c@/L;]Q*j7j&9SqT/"
      "[|^b@~n_HbyEU7L}]0a8uQ[-lw}<(iF}jK1&3}ogF[tRLl&5jY&XX#a}]DzaHxFM_0{,_"
      "NGP`}x4m|TCL;}{T~1QJ1G9g+ti~m!vJuJua";
  s21_size_t n = 6;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_109) {
  char s1[] =
      "B!:Qw|8RE}BiOjr&>_yu;:j.k9A[KH<98e3$gtkEor|O=^v.U.J]O1E@iJCEq?ZmUWA;["
      "XPWCy._VM7*UV)arOmV:9V";
  char s2[] =
      "hs[=TM`q3K:2:js[k3$*aA6<9N=2AV=A!eIyDoRNqljJ||6wIvdc[<{#s&*-{/+6n/"
      "HIWBxBL?7ilyL57/l#(no~-j+Fi";
  s21_size_t n = 64;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_110) {
  char s1[] = "~Zd";
  char s2[] = "~Zd";
  s21_size_t n = 56;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_111) {
  char s1[] =
      "UO1;P=?Kzo!*2b.$9`+GB!,B4|y;)Uhv?>+Ue!Kh`@qd[{t1!fMXDy(-/"
      ";C{u2>0IA*Q7$!2TAjP-e_$0+q|qAnDCo:ceIyPBSDVL_wq2k/_6*x*[_cr>LmSozr6&W2d";
  char s2[] = ":*ny;UlG9)q.<5-8|AC`IDTgT,C2$<Qfi;1y";
  s21_size_t n = 73;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_112) {
  char s1[] = "b|l].FF$/l9yXbap.ts^~R?Sp02YC$`r!hyp`qc|!zEN<;.<]$N";
  char s2[] =
      "YVT;hT~|7u*/ZVRfhgZAhg^TRXB[IpFtVrI{yBlDOab(=14qT)ppo^G7GHF_-7eqLg/"
      "w>aPz+={Ehh6#fj&LHJ]X~+YK`$b9|9]$j?PkONTh}>,{w0WqRmQ0P";
  s21_size_t n = 70;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_113) {
  char s1[] =
      "z1.T(dt9mOo<hKS0Ux]zS<j{mfYjnIZ3F/"
      ")Q3wx3u,BNg2)bAlNN[IyhUVX7o.vc3:fW9`b]$GOm8-9=MXsY)1rz]<f*Dd2(&,]Z|XY,";
  char s2[] =
      "z1.T(dt9mOo<hKS0Ux]zS<j{mfYjnIZ3F/"
      ")Q3wx3u,BNg2)bAlNN[IyhUVX7o.vc3:fW9`b]$GOm8-9=MXsY)1rz]<f*Dd2(&,]Z|XY,";
  s21_size_t n = 68;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_114) {
  char s1[] =
      "tLM0RW74L==H!-*8!u>/"
      "x.6_Pvlm6Q1,4d^,}P>IlFE>(N(ky|>4i8)z>D{7e`T{.4+DBbhA~lG0Yb1dGK.MR`~Y;u,`"
      "+ZqmeS>wo>aw";
  char s2[] =
      "v^@J*D,>w8PL&&#@.4L)#lft8&JclVD,aty`nkzy=)4-#ErXG92J~7&WH&0oFjC/"
      "h@G|weQTUp-s#<Pc/yPK4EZz)#qfUwp<+=Rm9G@|c<hBVK";
  s21_size_t n = 26;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_115) {
  char s1[] = "zs-xK6xkYf]#>.@hW$1AAxFh:::h8`I@ow_";
  char s2[] =
      "N${*n|@9i!G:v{uFm+iEZaO.d@x&x(5-M&7-Fps7UPg5zoyE_*s;Lo(uF/"
      ".jt(;3I)lS@LC5;PfVP$#ElrPsr=N";
  s21_size_t n = 72;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_116) {
  char s1[] =
      "EGb3z@3I=1h&tcHZ{$>+!?3zF3}PhGV]hLf_R=B5KFh+v_leZJF(O-Cn:KCY8{ac{g#"
      "lEmSMKg*t7pKM(?KALQ5`^U0nR$i6t*6xb@a,H*gcGfEEV?+vy";
  char s2[] = "*9.3;PTDjESS<#4>R";
  s21_size_t n = 144;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_117) {
  char s1[] =
      "C~[i``Q(M|a$S9,K414RAmT]/"
      "D`SrM4I.m9vWbq04PhSg3zy.wOm&7^6{!7rU1$U4iXFwz#<uN&[w";
  char s2[] =
      "C~[i``Q(M|a$S9,K414RAmT]/"
      "D`SrM4I.m9vWbq04PhSg3zy.wOm&7^6{!7rU1$U4iXFwz#<uN&[w";
  s21_size_t n = 68;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_118) {
  char s1[] = "TTH*h2ctvd6/FbBa73";
  char s2[] = "TTH*h2ctvd6/FbBa73";
  s21_size_t n = 2;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_119) {
  char s1[] =
      ">8J=upO$Rx@alLOb:=40P7OB*I=6xRZ+m/"
      "EdK1iNArAypp`mZ?WT1L`F7@$e]|e`LK<dxQhV`^DAt=>[S^2bPUcdiM>Hh?w>jiU*!I?vc*"
      "Iq81/RCgMR/O)iURp&-SC^qK[lv";
  char s2[] =
      ">8J=upO$Rx@alLOb:=40P7OB*I=6xRZ+m/"
      "EdK1iNArAypp`mZ?WT1L`F7@$e]|e`LK<dxQhV`^DAt=>[S^2bPUcdiM>Hh?w>jiU*!I?vc*"
      "Iq81/RCgMR/O)iURp&-SC^qK[lv";
  s21_size_t n = 119;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_120) {
  char s1[] = "[zvh<TPvkUl3s";
  char s2[] =
      "|s0)~uw,Ct+L9G-QmE?G.klLv6HS9}PH~^E?9q<ywSNk*|_|v*a1Dv=q6qx8/"
      "+~N<E$R7PP#,R@9|$RX^^21y~t9_`U?{@3L]@JwH=`rMH:n#usC:ow/iQma-K*|";
  s21_size_t n = 34;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_121) {
  char s1[] =
      "A{nQF3|&)dO:-k~<S:CfqGqc5cln_|~1L[PlT8eFTN|*O_/"
      "FrS:=r^8bpw4T$A.Mbm0{]HLPNOQfccK*zDR*4^E#geri{n<k/"
      "dm{[45zTDJ+6maGn|:4(;pce";
  char s2[] =
      "A{nQF3|&)dO:-k~<S:CfqGqc5cln_|~1L[PlT8eFTN|*O_/"
      "FrS:=r^8bpw4T$A.Mbm0{]HLPNOQfccK*zDR*4^E#geri{n<k/"
      "dm{[45zTDJ+6maGn|:4(;pce";
  s21_size_t n = 60;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_122) {
  char s1[] =
      "GCajx8r-Kglznmu;&2e;<t-axK+S^rWzeKO^hyx2e}xbjPc~FgjGsBz~`{Bkm`TxXPi(."
      "W3SZejx|Y1zS4^";
  char s2[] =
      "(o6/"
      "r81o7=mY+s$&Fpw8]=cc[S,0+Or(D{Ic<Bs]Wn`89_!K}ue^b]--5mC)l>9_cCO,D;{"
      "vv2VMmUx(z2-GSL;nLUV3!V3Uh]2:z6g)m_Wr*Ca3VCjx*+AV+pHGMvt&7nL^$rf5";
  s21_size_t n = 1;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_123) {
  char s1[] =
      "a5V6$x@4:&`~n$+Ial|KcJx1]iL*Q|pYa_K>HBB/Lrr,;C0F00~OQ/"
      "zug#Tgi~5XV,=WtMtUQCyB(~-LE!cFqs]Xo?|Q&]Mdjy.fvT1<{cZ)nDx@VLq1@._"
      "920hx2C7>D";
  char s2[] =
      "a5V6$x@4:&`~n$+Ial|KcJx1]iL*Q|pYa_K>HBB/Lrr,;C0F00~OQ/"
      "zug#Tgi~5XV,=WtMtUQCyB(~-LE!cFqs]Xo?|Q&]Mdjy.fvT1<{cZ)nDx@VLq1@._"
      "920hx2C7>D";
  s21_size_t n = 35;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_124) {
  char s1[] = "}yRXNA>K-{0IB(9/t;5U#i<nvkcHih1oxdxRx^*.V0G63";
  char s2[] =
      "W>ITR2r_v!GLBr<5?ty*f_}?0I;CO>,l&aW:b;tb0>LP[rTW2DhL)cgQ:u!~=Q^<nS$^#@8*"
      "8-p:C1_m{;JjHI+qWY&X^Dvtr=L(lrf+wqI&wEXrL?46hNl)JmFo|[BJR3[)s";
  s21_size_t n = 8;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_125) {
  char s1[] =
      "xYF<=r,Rk[:kE.=UAr:@E!+[HYBLRb<{!q`@T,|[)6bk<8$O`F}mZD0.ZH*9tnXGQ9Y1ZmC:"
      "2q#pZz*PI^T;*wy]`~CuSc!d&.Wx`n~068?UF&V_T+Yk~tx";
  char s2[] =
      "xYF<=r,Rk[:kE.=UAr:@E!+[HYBLRb<{!q`@T,|[)6bk<8$O`F}mZD0.ZH*9tnXGQ9Y1ZmC:"
      "2q#pZz*PI^T;*wy]`~CuSc!d&.Wx`n~068?UF&V_T+Yk~tx";
  s21_size_t n = 41;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_126) {
  char s1[] = ")O)^XY7MFGB6:,>@d29:lQ09,*y)[xMF2Z(.s";
  char s2[] = ")O)^XY7MFGB6:,>@d29:lQ09,*y)[xMF2Z(.s";
  s21_size_t n = 17;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_127) {
  char s1[] =
      "t!xxEW;gr*nb#;Y}Q`Zn@uF6)]mL==PvV(Zr6<=Wi=eUc-/"
      "n}YIV:,f6P3p]6S{68k64Rz+qz{~odd}&7(UJDXL*a>5&VW";
  char s2[] =
      "t!xxEW;gr*nb#;Y}Q`Zn@uF6)]mL==PvV(Zr6<=Wi=eUc-/"
      "n}YIV:,f6P3p]6S{68k64Rz+qz{~odd}&7(UJDXL*a>5&VW";
  s21_size_t n = 31;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_128) {
  char s1[] = "q[sc*qj$pYh/>i+i+WAZns>Z+ZKnPUHmEH.rziD=^J7|A`UK:;";
  char s2[] = "q[sc*qj$pYh/>i+i+WAZns>Z+ZKnPUHmEH.rziD=^J7|A`UK:;";
  s21_size_t n = 34;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_129) {
  char s1[] =
      "BELTFM0x]4Bf|j+9~HK6r#dVR.C/"
      "!OC-!4L-2b]XI6PoutFV1Z@`~&OjUFJ5`W<+)@lM0$4Qs/"
      "wQGpTQ(*E$:@F:O<!s@C}!6fhWdJ7u-l(<3<RM6ySxT-c:#b+J^&";
  char s2[] = "YZr*UN{Sw_.e7TXEoL*TJY?M,T?)SvMzIzXNQy5q{0^`-LcQ@KR@@b$h";
  s21_size_t n = 14;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_130) {
  char s1[] = "`41H-";
  char s2[] = "T0d?l!R";
  s21_size_t n = 122;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_131) {
  char s1[] = "s2K,x>#Pf|$p9XvIQD]w=ms.^C@XoD-Vy6b~^";
  char s2[] = "s2K,x>#Pf|$p9XvIQD]w=ms.^C@XoD-Vy6b~^";
  s21_size_t n = 12;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_132) {
  char s1[] =
      "GrjvTK`~c|(HR~mFTy/"
      "k<:IqHbv{Y(?7HWiq-n5RhAIAjWtt^u7=(fQW}.8QygngVqV8W:PvJslbgdLz2Z5ZqjW8^"
      "0xS>^m9gqwOTP+,.lvF_PJZ&3-{V.44n$1t..{4t]?k9x;[&{Q8MKDT3*";
  char s2[] =
      "GrjvTK`~c|(HR~mFTy/"
      "k<:IqHbv{Y(?7HWiq-n5RhAIAjWtt^u7=(fQW}.8QygngVqV8W:PvJslbgdLz2Z5ZqjW8^"
      "0xS>^m9gqwOTP+,.lvF_PJZ&3-{V.44n$1t..{4t]?k9x;[&{Q8MKDT3*";
  s21_size_t n = 38;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_133) {
  char s1[] =
      "vG[D,,HDXF2>+AB0hi>7}A87[6[z[n3^qD@t{Y^9V:GgNhvF6<=?Xphbp66pbxf|QdUg$h."
      "q;t(";
  char s2[] =
      "vG[D,,HDXF2>+AB0hi>7}A87[6[z[n3^qD@t{Y^9V:GgNhvF6<=?Xphbp66pbxf|QdUg$h."
      "q;t(";
  s21_size_t n = 31;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_134) {
  char s1[] = "";
  char s2[] =
      "v6D5_8RUY)_N8`P`DQwd/=t;>pOrZ8~<+pFuA/"
      "3@I5?^=0*C9G5x3GD@kqbbZJQuP6o|Z`L0.aPW0Q`g[JrWzx/"
      "2jmL3GGh}T9D&5B+kjD_&:Gw?!$V8#{rI:At?baBuSO<@D3,$!c8MYWam9";
  s21_size_t n = 36;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_135) {
  char s1[] =
      "&lS~A.M?oiK!|c.Tw,aKgTqLt3=08kx=^DEIq{`V#MSgFF^ES@>_$Rq8LV9QeLf91_"
      "PKBD4ES[|}M&4_;EL=M7Wx@U@[l:WMmX|B";
  char s2[] = "iPT7_BI@m,!d.h";
  s21_size_t n = 91;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_136) {
  char s1[] =
      "K#6y=aYYJqy,(9<O/"
      "t&rmA.}W)TlZZ4j3wPw`T$|uQfuYfq<+sTvRc@e&0Pl!IgPJ_$SYU#vO45v[tiWqsz[p+"
      "hmG$D+i[q";
  char s2[] = "1nB$eH&*HXObY-z*oZw]e0C|Jn)a|JCz=F0eKNyIi0";
  s21_size_t n = 36;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_137) {
  char s1[] =
      "<Auhk[;P,f;]x_[&^}pI`:y#Ke*hKB-e8aU(Pms:XP[E1oHrEdg|+tFC9jH`R(980";
  char s2[] = "-p<";
  s21_size_t n = 28;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_138) {
  char s1[] =
      "P@BOBx?N.HkHX$78yLRm`m>T@/"
      "6nWwBr4pEK9K`B<592Gf{Q{AV=-VC!y@9GMqWdAT;]2KfR~M5~K!(";
  char s2[] = "Y+ocqux;_sky5WtK=e]`";
  s21_size_t n = 17;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_139) {
  char s1[] = "kRuQVI1W)-xkO(izLK0f@Mwds&PCO`:=UA&f^l?eihHR5UU7D3";
  char s2[] =
      "?3ftyWG_`>qEuB!s1kFz{K<r43<@IcD-|/"
      "{qrd>d?C2>Y,MdGRBa-Xqv*XSMZ=e,<<zxIBmoN*Rdx,`VNEXfUgDN-WSpYQb(rGr3:"
      "tPc8JRO";
  s21_size_t n = 109;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_140) {
  char s1[] = "4vUX^Ep^nsuERDw(~[LIMj";
  char s2[] = "4vUX^Ep^nsuERDw(~[LIMj";
  s21_size_t n = 10;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_141) {
  char s1[] =
      "@F.lp;L_#Yki|7eIMwV+hjWyKcY;*bT#9CclVAMj|~<mXd}X6;RIJhXiJ:R!Sh{=@Kcwca^"
      "nN?NDkADNB7";
  char s2[] =
      "c$*Ur::Nsq6N$E2y67L?vVY/"
      "kr5ex]0uxq63r:]_=F2qD`&LKweWBP[|UoPq&ZPs]>[]We9C(zAfGmM4z-=z?-_`o$2;C+x{"
      "o5QG8te|#Vrk3sHe!SM8LgpPRNT~8gutSSL;w?@?lQoU4O";
  s21_size_t n = 122;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_142) {
  char s1[] = "$pHl7Hl!x<m^tZauy?o=7eX20z@.S:u|2bv=<Ru";
  char s2[] =
      "r]5gVB;f;jOS&|Pg^F!Ilt?S71-O]_)~[5!]vkg,499ht=DP9+DOVtujM7_hov`_q<|_"
      "YlTK1MJ<CC7(YqZI!CqD0rs02Bg~z$1-jB*0j}R~2YSY;,Sz#55)`um6r54E$0>wu[zR";
  s21_size_t n = 109;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_143) {
  char s1[] =
      "RE3E*PZ6<a9:bIITj4w}8}HSTR<y<Q|SAZ!p2zWeA6}lp`;P=NZ>TOeO9Iz[qn&FlD(HoT|("
      "ocT6xbivr6";
  char s2[] =
      "g2i+=Qs~40,I{31UmVmqGM2o/"
      "8`]v!U`3|$1e_ZpDB-#b:9K{EW{@|]_hb`ji~>20F2XLn~A[$6_-h+KBKu@osL({38RPSGL+"
      "E#";
  s21_size_t n = 144;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_144) {
  char s1[] =
      "xA].oa`YtG@do[L8iO$8+@NVKr@fvJnSz^T2Qw#l>{#`7#a^cRC4hmINm!dd&VJqYNdw{"
      "J9iHM|OakAQ6{,rpq/Z{c+b7)H||=lrhzD3|PREB.";
  char s2[] =
      "xA].oa`YtG@do[L8iO$8+@NVKr@fvJnSz^T2Qw#l>{#`7#a^cRC4hmINm!dd&VJqYNdw{"
      "J9iHM|OakAQ6{,rpq/Z{c+b7)H||=lrhzD3|PREB.";
  s21_size_t n = 8;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_145) {
  char s1[] =
      "P3m4Z#.q+ek{pbe7zUopN$P-A_1M0#|F|m^/G}8~$t!2<TzH<_B7[W<.QhtIoFTL!.O./"
      "r8!1}1~Z[qpk46&[rvjKW}X4xDG`h-$6YhHMf1pmp";
  char s2[] = "E_y[nwb&]4*Wu8gZ8sjOq$_N*(@4/PZ^|4Jxx1]J!W:<H|[K!Z{.b?TO";
  s21_size_t n = 123;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_146) {
  char s1[] =
      "9,Rh3!zzvFq7GOP8V6S8n#|/efuH)./rQz`>.ubs5[I>Af9O@P}>q-xF/"
      "oqkIJdL6LHWf-Ag~Cb*W`bD5D0_;R&}Vw<dim_R.tNnP_k<B$+^`-4@aDwAi[";
  char s2[] = "+^e`_Z5Dh:O=m(+6dK4}`x.f/lz_U`ww0Q4hao}w*s}M9/f7GTt/0(koEr";
  s21_size_t n = 66;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_147) {
  char s1[] = "N?,;^wC}Gwk";
  char s2[] = "N?,;^wC}Gwk";
  s21_size_t n = 94;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_148) {
  char s1[] = "1,E^j";
  char s2[] = "1,E^j";
  s21_size_t n = 18;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_149) {
  char s1[] = "0G9*>JRm-q6H/P6?{C9Ko13cQdOm=eS]o}8W`7i1fW#=zn#:|w;}BPdTnV";
  char s2[] =
      "?FN6U$|I.!`<NDx#@l42R<5T]+C~x14K^]8jWB^w8E*Bya=vx-lYwnevdq.5]:nOvs^OqY_"
      "DYa+V[$|d]0[`[zswyu=U;]nngK;2.p/$-wj$`88Dvood=,4Q~~#&87Q=_A.v*eUN";
  s21_size_t n = 119;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

START_TEST(memcmp_150) {
  char s1[] =
      "|2VjOpNKQiK#zN^(5]EI66*a29~T22oen!ua3<zU,*L0taJ2GqKBB}P53t^o0x/"
      "hY96m4bQc5yc*qv&v}I8(;klAzrVt|8gpy:Rvk@!8d5nyZBWVS/HoRSgqs}qSO}V|Kk";
  char s2[] =
      "|2VjOpNKQiK#zN^(5]EI66*a29~T22oen!ua3<zU,*L0taJ2GqKBB}P53t^o0x/"
      "hY96m4bQc5yc*qv&v}I8(;klAzrVt|8gpy:Rvk@!8d5nyZBWVS/HoRSgqs}qSO}V|Kk";
  s21_size_t n = 35;
  int n1 = memcmp(s1, s2, n);
  n1 = n1 > 0 ? 1 : n1 == 0 ? 0 : -1;
  int n2 = s21_memcmp(s1, s2, n);
  n2 = n2 > 0 ? 1 : n2 == 0 ? 0 : -1;
  ck_assert_int_eq(n1, n2);
}
END_TEST

Suite *test_memcmp(void) {
  Suite *s = suite_create("\033[45m-=S21_MEMCMP=-\033[0m");
  TCase *tc = tcase_create("memcmp_tc");

  tcase_add_test(tc, memcmp_1);
  tcase_add_test(tc, memcmp_2);
  tcase_add_test(tc, memcmp_3);
  tcase_add_test(tc, memcmp_4);
  tcase_add_test(tc, memcmp_5);
  tcase_add_test(tc, memcmp_6);
  tcase_add_test(tc, memcmp_7);
  tcase_add_test(tc, memcmp_8);
  tcase_add_test(tc, memcmp_9);
  tcase_add_test(tc, memcmp_10);
  tcase_add_test(tc, memcmp_11);
  tcase_add_test(tc, memcmp_12);
  tcase_add_test(tc, memcmp_13);
  tcase_add_test(tc, memcmp_14);
  tcase_add_test(tc, memcmp_15);
  tcase_add_test(tc, memcmp_16);
  tcase_add_test(tc, memcmp_17);
  tcase_add_test(tc, memcmp_18);
  tcase_add_test(tc, memcmp_19);
  tcase_add_test(tc, memcmp_20);
  tcase_add_test(tc, memcmp_21);
  tcase_add_test(tc, memcmp_22);
  tcase_add_test(tc, memcmp_23);
  tcase_add_test(tc, memcmp_24);
  tcase_add_test(tc, memcmp_25);
  tcase_add_test(tc, memcmp_26);
  tcase_add_test(tc, memcmp_27);
  tcase_add_test(tc, memcmp_28);
  tcase_add_test(tc, memcmp_29);
  tcase_add_test(tc, memcmp_30);
  tcase_add_test(tc, memcmp_31);
  tcase_add_test(tc, memcmp_32);
  tcase_add_test(tc, memcmp_33);
  tcase_add_test(tc, memcmp_34);
  tcase_add_test(tc, memcmp_35);
  tcase_add_test(tc, memcmp_36);
  tcase_add_test(tc, memcmp_37);
  tcase_add_test(tc, memcmp_38);
  tcase_add_test(tc, memcmp_39);
  tcase_add_test(tc, memcmp_40);
  tcase_add_test(tc, memcmp_41);
  tcase_add_test(tc, memcmp_42);
  tcase_add_test(tc, memcmp_43);
  tcase_add_test(tc, memcmp_44);
  tcase_add_test(tc, memcmp_45);
  tcase_add_test(tc, memcmp_46);
  tcase_add_test(tc, memcmp_47);
  tcase_add_test(tc, memcmp_48);
  tcase_add_test(tc, memcmp_49);
  tcase_add_test(tc, memcmp_50);
  tcase_add_test(tc, memcmp_51);
  tcase_add_test(tc, memcmp_52);
  tcase_add_test(tc, memcmp_53);
  tcase_add_test(tc, memcmp_54);
  tcase_add_test(tc, memcmp_55);
  tcase_add_test(tc, memcmp_56);
  tcase_add_test(tc, memcmp_57);
  tcase_add_test(tc, memcmp_58);
  tcase_add_test(tc, memcmp_59);
  tcase_add_test(tc, memcmp_60);
  tcase_add_test(tc, memcmp_61);
  tcase_add_test(tc, memcmp_62);
  tcase_add_test(tc, memcmp_63);
  tcase_add_test(tc, memcmp_64);
  tcase_add_test(tc, memcmp_65);
  tcase_add_test(tc, memcmp_66);
  tcase_add_test(tc, memcmp_67);
  tcase_add_test(tc, memcmp_68);
  tcase_add_test(tc, memcmp_69);
  tcase_add_test(tc, memcmp_70);
  tcase_add_test(tc, memcmp_71);
  tcase_add_test(tc, memcmp_72);
  tcase_add_test(tc, memcmp_73);
  tcase_add_test(tc, memcmp_74);
  tcase_add_test(tc, memcmp_75);
  tcase_add_test(tc, memcmp_76);
  tcase_add_test(tc, memcmp_77);
  tcase_add_test(tc, memcmp_78);
  tcase_add_test(tc, memcmp_79);
  tcase_add_test(tc, memcmp_80);
  tcase_add_test(tc, memcmp_81);
  tcase_add_test(tc, memcmp_82);
  tcase_add_test(tc, memcmp_83);
  tcase_add_test(tc, memcmp_84);
  tcase_add_test(tc, memcmp_85);
  tcase_add_test(tc, memcmp_86);
  tcase_add_test(tc, memcmp_87);
  tcase_add_test(tc, memcmp_88);
  tcase_add_test(tc, memcmp_89);
  tcase_add_test(tc, memcmp_90);
  tcase_add_test(tc, memcmp_91);
  tcase_add_test(tc, memcmp_92);
  tcase_add_test(tc, memcmp_93);
  tcase_add_test(tc, memcmp_94);
  tcase_add_test(tc, memcmp_95);
  tcase_add_test(tc, memcmp_96);
  tcase_add_test(tc, memcmp_97);
  tcase_add_test(tc, memcmp_98);
  tcase_add_test(tc, memcmp_99);
  tcase_add_test(tc, memcmp_100);
  tcase_add_test(tc, memcmp_101);
  tcase_add_test(tc, memcmp_102);
  tcase_add_test(tc, memcmp_103);
  tcase_add_test(tc, memcmp_104);
  tcase_add_test(tc, memcmp_105);
  tcase_add_test(tc, memcmp_106);
  tcase_add_test(tc, memcmp_107);
  tcase_add_test(tc, memcmp_108);
  tcase_add_test(tc, memcmp_109);
  tcase_add_test(tc, memcmp_110);
  tcase_add_test(tc, memcmp_111);
  tcase_add_test(tc, memcmp_112);
  tcase_add_test(tc, memcmp_113);
  tcase_add_test(tc, memcmp_114);
  tcase_add_test(tc, memcmp_115);
  tcase_add_test(tc, memcmp_116);
  tcase_add_test(tc, memcmp_117);
  tcase_add_test(tc, memcmp_118);
  tcase_add_test(tc, memcmp_119);
  tcase_add_test(tc, memcmp_120);
  tcase_add_test(tc, memcmp_121);
  tcase_add_test(tc, memcmp_122);
  tcase_add_test(tc, memcmp_123);
  tcase_add_test(tc, memcmp_124);
  tcase_add_test(tc, memcmp_125);
  tcase_add_test(tc, memcmp_126);
  tcase_add_test(tc, memcmp_127);
  tcase_add_test(tc, memcmp_128);
  tcase_add_test(tc, memcmp_129);
  tcase_add_test(tc, memcmp_130);
  tcase_add_test(tc, memcmp_131);
  tcase_add_test(tc, memcmp_132);
  tcase_add_test(tc, memcmp_133);
  tcase_add_test(tc, memcmp_134);
  tcase_add_test(tc, memcmp_135);
  tcase_add_test(tc, memcmp_136);
  tcase_add_test(tc, memcmp_137);
  tcase_add_test(tc, memcmp_138);
  tcase_add_test(tc, memcmp_139);
  tcase_add_test(tc, memcmp_140);
  tcase_add_test(tc, memcmp_141);
  tcase_add_test(tc, memcmp_142);
  tcase_add_test(tc, memcmp_143);
  tcase_add_test(tc, memcmp_144);
  tcase_add_test(tc, memcmp_145);
  tcase_add_test(tc, memcmp_146);
  tcase_add_test(tc, memcmp_147);
  tcase_add_test(tc, memcmp_148);
  tcase_add_test(tc, memcmp_149);
  tcase_add_test(tc, memcmp_150);

  suite_add_tcase(s, tc);
  return s;
}
