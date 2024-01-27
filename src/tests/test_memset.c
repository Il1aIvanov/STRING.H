#include "test_me.h"

START_TEST(memset_1) {
  char str1[100] = "1234357890";
  ck_assert_str_eq(memset(str1, '1', 10), s21_memset(str1, '1', 10));
}
END_TEST

START_TEST(memset_2) {
  char str1[100] = "abcdefghijklmopqrstuvwxyz";
  ck_assert_str_eq(memset(str1, '3', 10), s21_memset(str1, '3', 10));
}
END_TEST

START_TEST(memset_3) {
  char str1[100] = "abcdefghijklmopqrstuvwxyz";
  ck_assert_str_eq(memset(str1, '/', 8), s21_memset(str1, '/', 8));
}
END_TEST

START_TEST(memset_4) {
  char str1[10] = "abcdefghi";
  ck_assert_str_eq(memset(str1, '9', 1), s21_memset(str1, '9', 1));
}
END_TEST

START_TEST(memset_5) {
  char str1[100] = "";
  ck_assert_str_eq(memset(str1, '0', 4), s21_memset(str1, '0', 4));
}
END_TEST

START_TEST(memset_6) {
  char str1[0xff] = "";
  ck_assert_str_eq(memset(str1, 0, 0xff), s21_memset(str1, 0, 0xff));
}
END_TEST

START_TEST(memset_7) {
  char str1[0xff] = "";
  ck_assert_str_eq(memset(str1, 'A', 20), s21_memset(str1, 'A', 20));
}
END_TEST

START_TEST(memset_8) {
  char str1[0xff] = "";
  ck_assert_str_eq(memset(str1 + 20, 'B', 20), s21_memset(str1 + 20, 'B', 20));
}
END_TEST

START_TEST(memset_9) {
  char str1[142] =
      "7j|<fu/vpZasmDy<~Zy/"
      ">fk_FJ>TxnyR^L{;Vn*Suv;j>+eVgpqaHz[Z47|GsCJ_aa({&d2^[17!Hvrlfyie`AYzI|~`"
      "v#xV?]MQ7i<Vm+35/-;N|Jg(.2B$F|I>M4^(ygznAlp-";
  ck_assert_str_eq(memset(str1, 'w', 26), s21_memset(str1, 'w', 26));
}
END_TEST

START_TEST(memset_10) {
  char str1[54] = "xyi[_XQQNluv9m,za*@NEf?0ZCLn3>~379";
  ck_assert_str_eq(memset(str1, '@', 5), s21_memset(str1, '@', 5));
}
END_TEST

START_TEST(memset_11) {
  char str1[112] =
      "f<Y4g06(]<Tq`3o[]gb#s6GkwkNy0*^YpeAV[/$^[/"
      "0[(^QI<R]EF|&1K8,g&LaUkBiAnG{Qru!,aRY-XL0,1`VyYDov";
  ck_assert_str_eq(memset(str1, '3', 78), s21_memset(str1, '3', 78));
}
END_TEST

START_TEST(memset_12) {
  char str1[87] = "^a@uI*3V|>e)>2{Aq)=|P7/pj&@5E3~0B2{Qc>5e~}n5,9f<F15xwA";
  ck_assert_str_eq(memset(str1, '6', 26), s21_memset(str1, '6', 26));
}
END_TEST

START_TEST(memset_13) {
  char str1[76] =
      "#n^j>Y)5=YR&;}(|,?PAJiCG8OH^+wz(X7<q}}VM<B5[t&S}4$P}1i{KGP`.tDl5";
  ck_assert_str_eq(memset(str1, ';', 8), s21_memset(str1, ';', 8));
}
END_TEST

START_TEST(memset_14) {
  char str1[87] =
      "yslLf[3,rn]AwG!gX.6*bxwD1Y4CaL!;2mI=YG?--mn0ev#z6k^Kc9E6M#UC=~HGJRwH,1{"
      "h$LR(GK3";
  ck_assert_str_eq(memset(str1, '&', 36), s21_memset(str1, '&', 36));
}
END_TEST

START_TEST(memset_15) {
  char str1[37] = "Q<K0Np1~WAN!njd)j:P?b^n+";
  ck_assert_str_eq(memset(str1, 'O', 24), s21_memset(str1, 'O', 24));
}
END_TEST

START_TEST(memset_16) {
  char str1[76] =
      "f8e|Yx6($/G.^Q$29}{fjhZ8!1WtMiFKo#QCR_G=c]K:~J9q5IC44n)eg&be}";
  ck_assert_str_eq(memset(str1, '|', 42), s21_memset(str1, '|', 42));
}
END_TEST

START_TEST(memset_17) {
  char str1[98] =
      "Nb*F)w?TwUUYB[GSuz-ATE+Q)dyQxFGcl5IJO*(0*3n7[o*nCGUAP9/"
      "lD-D>o6#0f?izs~?qAy(<x+36~f]bZ";
  ck_assert_str_eq(memset(str1, '1', 11), s21_memset(str1, '1', 11));
}
END_TEST

START_TEST(memset_18) {
  char str1[187] =
      "^8CL`<z;/"
      "[SWvsF=ZbKfMwy.Hd+826o8g=gyEDOr|dMy(1~,FGc@uKo[x)08;btHh6E]:wS7=m9}-eP$"
      "KK`x]pj,S0rzPhAWO5Wc/6}amq5ej4o.k8kUs20fq[L>&s";
  ck_assert_str_eq(memset(str1, '2', 58), s21_memset(str1, '2', 58));
}
END_TEST

START_TEST(memset_19) {
  char str1[115] =
      "cco8VuW(6dXSi<~<Q>&.-4:grStELzO:=g};r6QfZC?xB/"
      "Ll3jL^1hDRyvR5$0|`S?]wMN,2n.pZqDbc:{]Vcx:;5<U1>y~X?bX$";
  ck_assert_str_eq(memset(str1, 'c', 99), s21_memset(str1, 'c', 99));
}
END_TEST

START_TEST(memset_20) {
  char str1[112] =
      "Yr(jp.@__H6&8bKXO=aTiGP(Ddy#*+W@A)euX?T/W*s.Fv]G`VyZ8/"
      "9nuGXj82>[xwd(]7Pm^O5M:evBs-6SgD$$ct~;&QS*";
  ck_assert_str_eq(memset(str1, 'w', 6), s21_memset(str1, 'w', 6));
}
END_TEST

START_TEST(memset_21) {
  char str1[126] =
      "or*,/"
      "E3=0{Yi`OmQIVRV(:VjB09lMC*Ta+sn!&MKftPDx{ap*)jO=DT>=kDUyHToIq0g,HX^+"
      "dN1z/1#PYv`g+O;+}@fh,gdLNd20Y!.h*ozAynf=7_!";
  ck_assert_str_eq(memset(str1, 'K', 20), s21_memset(str1, 'K', 20));
}
END_TEST

START_TEST(memset_22) {
  char str1[146] =
      "(,jH<:M;=3WgbC6rzV>Vzs|yhPFugWRZFT}<qP$[rKoulGOMC79[vV=4`<lGgU[Fi_S~vb:"
      "y)@8>wuSxJe-7XETcw0,(/mF[ze(L1b+$yDONC)xA1z{.K.WC|";
  ck_assert_str_eq(memset(str1, 'A', 69), s21_memset(str1, 'A', 69));
}
END_TEST

START_TEST(memset_23) {
  char str1[132] =
      "{_?ONBUt^QybM+*]$B`4!L,zYAXAq[FwOV[n{@9t<JNYI.(gukqLQ=(ef,b7j5#x|SAs~AF]"
      "I5Vd31Z^|vlx30!>=D[-t)MxkBuL~q/*N5Ge(xb!";
  ck_assert_str_eq(memset(str1, 'v', 17), s21_memset(str1, 'v', 17));
}
END_TEST

START_TEST(memset_24) {
  char str1[42] = "k2)tlOd06l&)nsWMUCIY[2{VChjR)k";
  ck_assert_str_eq(memset(str1, ',', 29), s21_memset(str1, ',', 29));
}
END_TEST

START_TEST(memset_25) {
  char str1[76] = "Q*O2Y~Rdg`z33U,[{gwLW[4SUCEf|H91#^0z+(q+=E_(zQ#8.s&{u*.YPL0";
  ck_assert_str_eq(memset(str1, 'y', 3), s21_memset(str1, 'y', 3));
}
END_TEST

START_TEST(memset_26) {
  char str1[156] =
      "hL7feTK?k:J$WVr7]cdfFGD#(=1e/#8ue`;Xem@FpExr#d-H?=kT0cx8.0m/"
      "!(BEIZaQI?oy4PHZU39~3{3su~#97`VaU1phJZlaZ^3lG[AzNuJK{vM|#R$?2rP122cTZFU)"
      "@Ll5t&|F!ak";
  ck_assert_str_eq(memset(str1, 'q', 32), s21_memset(str1, 'q', 32));
}
END_TEST

START_TEST(memset_27) {
  char str1[75] =
      "1I`=I/)z4F,NAOw8LIV;5g3KmXG@z~@!.:yV}RiH~xkye-D)^^5.{j$v}w^@.0~GN6k";
  ck_assert_str_eq(memset(str1, 'n', 12), s21_memset(str1, 'n', 12));
}
END_TEST

START_TEST(memset_28) {
  char str1[118] =
      "B^fU(czjse-~A$t+b@iL`CF(*lWp}CkKw8WP~*qL!/"
      "|E[m3R_B2Ytt@R84D19]cc>Od{QcM~5dDUEm~47nl>}NW|LqC<_!9^T=JS3d<1";
  ck_assert_str_eq(memset(str1, 'j', 21), s21_memset(str1, 'j', 21));
}
END_TEST

START_TEST(memset_29) {
  char str1[99] =
      "jrxr}]4mEJoEERyvc{/"
      "mw5UIe5jg?hJj~.?3d]2j.,u]x+[EFOHKTCa3gDetom[`0s>Oo?DcMZuDmxNupso";
  ck_assert_str_eq(memset(str1, 'z', 1), s21_memset(str1, 'z', 1));
}
END_TEST

START_TEST(memset_30) {
  char str1[63] = "x]R<,1/@5X2tWJyWVI),V4-x(Tp^8Z,#70qBk#7Uj{}`uZ4q=N3v";
  ck_assert_str_eq(memset(str1, 'V', 16), s21_memset(str1, 'V', 16));
}
END_TEST

START_TEST(memset_31) {
  char str1[25] = "i}b*E|}]C-G+5,";
  ck_assert_str_eq(memset(str1, '#', 13), s21_memset(str1, '#', 13));
}
END_TEST

START_TEST(memset_32) {
  char str1[56] = ":ST`77dm[6#p|/lls*R[1cSRgA{Z^1t+jH~9rncIHpMbivCY";
  ck_assert_str_eq(memset(str1, 'I', 20), s21_memset(str1, 'I', 20));
}
END_TEST

START_TEST(memset_33) {
  char str1[82] =
      "$B7rg,,HPPKR~<0d<m`zsx`LKa:+W!T;{ClKR_G>w6ci/!QdooAl-X6IM;@0&@kD~sy0W=m";
  ck_assert_str_eq(memset(str1, 'N', 34), s21_memset(str1, 'N', 34));
}
END_TEST

START_TEST(memset_34) {
  char str1[139] =
      "d!e<GEf{tWlcg7>Vk|MQ#~/"
      "dlj@[ya(v^2Imb_i&wu=6;ws;X9+0iB~-qUzo,xD-f|eqE?*8spHg0!/"
      "aFn>v>y,E)ud=R5|7P71/qsP#+UM7#OEnfD+3Kbw=vH?[3E";
  ck_assert_str_eq(memset(str1, '=', 88), s21_memset(str1, '=', 88));
}
END_TEST

START_TEST(memset_35) {
  char str1[72] =
      "1.F7w[O!#o6QDK5WfYvE3-dWa7{Nfq`C/4<qKR:]h`2-u2JGj/l[AREuhhe~=|XZ2";
  ck_assert_str_eq(memset(str1, '_', 13), s21_memset(str1, '_', 13));
}
END_TEST

START_TEST(memset_36) {
  char str1[57] = "#`w#?$8>uD.<?Z4v<vYv@FLyWT7I[a2YD7nvrsg|vPU5F$1";
  ck_assert_str_eq(memset(str1, '8', 44), s21_memset(str1, '8', 44));
}
END_TEST

START_TEST(memset_37) {
  char str1[49] = "WHNi.nuxz{G!p*nsw[>Q7S)WT.a*#2&j+#>yl~.Fw2C";
  ck_assert_str_eq(memset(str1, '0', 32), s21_memset(str1, '0', 32));
}
END_TEST

START_TEST(memset_38) {
  char str1[162] =
      "E>y,{CNG^0P)00O54j&v/"
      "!zzFWCjWgEHTywY[s:i10Jh<Iw>S6f_74y;ELU8$$Hd-IEL_$bWvBOO_tIo*a9h`dd/"
      "`=D0]xl4b][*ZF/U#Yyt:C-m&|C$20g32lQl7[5IT9c";
  ck_assert_str_eq(memset(str1, 'A', 93), s21_memset(str1, 'A', 93));
}
END_TEST

START_TEST(memset_39) {
  char str1[153] =
      "|<gZ)a(`Y>W<{uE|.SHj,Ve]-~&NZvm3g}mkp<29S0G(I<k+k~W3I|I/"
      "vook?[bOR`7*_eCNvfR[JC$8,tb-f+3kY#7OD0#WYz7Q2V5qrcz1:lauR6mkZQGhb//"
      "=s]?PwzI0kU9=2";
  ck_assert_str_eq(memset(str1, 'I', 53), s21_memset(str1, 'I', 53));
}
END_TEST

START_TEST(memset_40) {
  char str1[121] =
      "(J*hJjQl]fw*39&pE]OJo8(Rd@0;6O^h^YI~MHohXsA)OH.85i8d;Gv@vxyifLcL+/a=ti/"
      "xa<)jGbCI`0m>d&IuSbZ>E&q9rs>x_$Ujw/Tw";
  ck_assert_str_eq(memset(str1, 'R', 69), s21_memset(str1, 'R', 69));
}
END_TEST

START_TEST(memset_41) {
  char str1[167] =
      "n}Vwe?]Za{a[:KM6^k:3ll_UbQRr<g2<R[p9U7TYt(.zICj@s&.Ocy2iLUiU!*^TiWrGP$"
      "fsZN>z8Z6B!,^N~0`~![|lqDjHky<41mpCAZGZ:,c&lUulH^+3#>Ux<)~u]T5>@qL@vLb*t>"
      "${S";
  ck_assert_str_eq(memset(str1, 'u', 31), s21_memset(str1, 'u', 31));
}
END_TEST

START_TEST(memset_42) {
  char str1[74] =
      "{sAeolsHFWon<uM=u_88T]Ou2C6t,/1kEmBv2M*&!Pgg<L=jW+E6Cm5D6U2C(cw";
  ck_assert_str_eq(memset(str1, 'A', 21), s21_memset(str1, 'A', 21));
}
END_TEST

START_TEST(memset_43) {
  char str1[133] =
      ":lr]up}6L2)b6K!c?461TZjEc0icSJ&LR0/"
      "A6JH6@`f,33r(OtL#032.=7#T4G-n7s{zZdxY{dQ{fmO3JgeVJWwnnf|{#WgdyH}eX@B&n<"
      "3Tj#oDx&N*naW2zC";
  ck_assert_str_eq(memset(str1, 'r', 113), s21_memset(str1, 'r', 113));
}
END_TEST

START_TEST(memset_44) {
  char str1[62] = "V}!C(tXk;tU(^[a]~xd0DExO=H$:Tx_H,Mb}|./C{.+W=xSmmV5C>*ptd";
  ck_assert_str_eq(memset(str1, 'I', 10), s21_memset(str1, 'I', 10));
}
END_TEST

START_TEST(memset_45) {
  char str1[142] =
      "VvmmQdkW]+.-V](012-}(5vNE$!K4eH4gy]/"
      "Gi<T3,iJ8d!s9W^>d@#u95[#3ZT2JOL=ErOVMQH(iK[$3>1@4][zP3Z?VNAf4w`!IFQlxh4>"
      "n$^,@J3P3?g}UH?RgX5bvMc6PiED";
  ck_assert_str_eq(memset(str1, 'C', 61), s21_memset(str1, 'C', 61));
}
END_TEST

START_TEST(memset_46) {
  char str1[82] =
      "]SX*&xO5$*estc+VXfDrzwh9ip<0AiYm&0I_aAq(9Rr@mnxPL4AqT<ujv(8u5d[1GR^OH";
  ck_assert_str_eq(memset(str1, 'V', 67), s21_memset(str1, 'V', 67));
}
END_TEST

START_TEST(memset_47) {
  char str1[132] =
      "pNDm;?)ftcgUki6(&nqhBok2bgC1p41{;{IwczapV,i5c0BF(oq7j#v`.q(k@OBkk4PpN/"
      "&by^.+iybdt_{-}d2|GoZA3cLiC@>dcuvi23i|8:^7[wC&nAB46eDE<";
  ck_assert_str_eq(memset(str1, 'M', 110), s21_memset(str1, 'M', 110));
}
END_TEST

START_TEST(memset_48) {
  char str1[129] =
      "!09ZbF[+KvbE!;oRyd<j?nkNs`q++I0OOe.U<o,_ui)Hxx&Nw,|Ss@u+H.u{:EXz9@q_"
      "n3BFPjzj7W3AI.ihaok*BWQ!|^zi#ff*/&zSUot3ncx/90d-5fC><)_@L";
  ck_assert_str_eq(memset(str1, '-', 23), s21_memset(str1, '-', 23));
}
END_TEST

START_TEST(memset_49) {
  char str1[52] = "5&xnoNm]lZJS/QB-{9[dw}uvNEdNiUs!^~6[V|m";
  ck_assert_str_eq(memset(str1, 'w', 23), s21_memset(str1, 'w', 23));
}
END_TEST

START_TEST(memset_50) {
  char str1[46] = "JdK2)o_m=U|RPOaqt_).u-6g,?]T<0+?D~(in|:/";
  ck_assert_str_eq(memset(str1, '.', 26), s21_memset(str1, '.', 26));
}
END_TEST

START_TEST(memset_51) {
  char str1[38] = "wJmUD$I;JKvnO`Lf0LR,ms*dm{fD*|.";
  ck_assert_str_eq(memset(str1, 'S', 16), s21_memset(str1, 'S', 16));
}
END_TEST

START_TEST(memset_52) {
  char str1[29] = "6`d-`:zT+l3<fC+o&1dp:";
  ck_assert_str_eq(memset(str1, 'P', 13), s21_memset(str1, 'P', 13));
}
END_TEST

START_TEST(memset_53) {
  char str1[89] =
      "90u;VD{/"
      "8Dpxy4}X4}P#Obp_=+J}*3(UZXnW@z!+egM!eGFMK{&UE~k<4m[Xw.}4.IsT`|@_a]iR7h;"
      "Cr$w";
  ck_assert_str_eq(memset(str1, '[', 75), s21_memset(str1, '[', 75));
}
END_TEST

START_TEST(memset_54) {
  char str1[78] =
      "}Q12@K+U-_+U)tZ#`L~KI@n3<7wBg.xkVt|<5N2z==!|JMcj4Jrb#_|_jrAuX30M?uIh2wi";
  ck_assert_str_eq(memset(str1, '+', 28), s21_memset(str1, '+', 28));
}
END_TEST

START_TEST(memset_55) {
  char str1[74] =
      "z#*BkHbt_q+r(0CQ;.EqYvvd8:!;Rl0-.x&LERQlt:msUom],FFC_Xre0F[Q7vqr<^/";
  ck_assert_str_eq(memset(str1, '3', 36), s21_memset(str1, '3', 36));
}
END_TEST

START_TEST(memset_56) {
  char str1[142] =
      "P+^+~+v{]wyDrv+na^1@VuPuW+`(($K,:A`i#y!OYk>sUPo]?GQY$a<7Nh5]p`8NEqyaJ{{"
      "nWQPF.rF33PT6o;6N*I1h$](+~S1Hm{~;=MvL01Q0O$Xc(vJ!Q|gW9Xo>Tijow?9";
  ck_assert_str_eq(memset(str1, 'Q', 117), s21_memset(str1, 'Q', 117));
}
END_TEST

START_TEST(memset_57) {
  char str1[152] =
      "`c]G7t16b:EvXXp/"
      "2qJM^d@8TsU(f5GC=(t5@.-63}$1^LZ=x@)14U37T^Q]|H=Q]`Im@o7@Oz5;e4Ji)@ZPr-"
      "vAN5,Do}bc23oYu;[w(1QN6W1{!@>PGzFO9pR?S@tN=l*2c<2vJ3(A";
  ck_assert_str_eq(memset(str1, 'a', 70), s21_memset(str1, 'a', 70));
}
END_TEST

START_TEST(memset_58) {
  char str1[82] =
      "mt.2k-V1?-751&Yzk/"
      "yo8bYo.,iuJ9R(H3E?}AIxW7UBT0[!z|?K}za^N]23g_q?M~v{=;YEQhh;";
  ck_assert_str_eq(memset(str1, 'c', 64), s21_memset(str1, 'c', 64));
}
END_TEST

START_TEST(memset_59) {
  char str1[73] =
      "^}/$z=`zB^367<^}51.iOc<BkBu?:X?dM,R9K|Z/N95PmL:ITeuV(CQgpwN;/XvMv(F";
  ck_assert_str_eq(memset(str1, 'L', 57), s21_memset(str1, 'L', 57));
}
END_TEST

START_TEST(memset_60) {
  char str1[23] = "h?hFGe!7Yj91L,x(0";
  ck_assert_str_eq(memset(str1, '`', 1), s21_memset(str1, '`', 1));
}
END_TEST

START_TEST(memset_61) {
  char str1[112] =
      "B=wL;_g],Zhk}9(<n{]ssx]uZ2)NO:sa&pMXu&?YkaK(R}db8p`15Y#OomvEH<Uux:fi6P}"
      "6ezsG~Cjc:/V5>v9bg(jVG,-r-Bx/sk}<";
  ck_assert_str_eq(memset(str1, 'H', 72), s21_memset(str1, 'H', 72));
}
END_TEST

START_TEST(memset_62) {
  char str1[29] = "<=r4*90NwRS274)@h4[K7SBUO";
  ck_assert_str_eq(memset(str1, '1', 7), s21_memset(str1, '1', 7));
}
END_TEST

START_TEST(memset_63) {
  char str1[72] =
      "J)gD9bWdl0L`9]3{7p;PjF$zSG;+jL)0WAA=c*JhEvkv&4/KaK|J~dM>0_~fFFMH8hI";
  ck_assert_str_eq(memset(str1, 'y', 54), s21_memset(str1, 'y', 54));
}
END_TEST

START_TEST(memset_64) {
  char str1[32] = "oiT{:sE*zhs`E*hG8X@`-`GiSvl";
  ck_assert_str_eq(memset(str1, '0', 4), s21_memset(str1, '0', 4));
}
END_TEST

START_TEST(memset_65) {
  char str1[49] = ")n?dA_IupO4mB_^XA)x9,R/3(tW@U<8Cp){MW^!Lo";
  ck_assert_str_eq(memset(str1, 'd', 22), s21_memset(str1, 'd', 22));
}
END_TEST

START_TEST(memset_66) {
  char str1[8] = "H";
  ck_assert_str_eq(memset(str1, 'b', 1), s21_memset(str1, 'b', 1));
}
END_TEST

START_TEST(memset_67) {
  char str1[118] =
      "G2UlvnRbwU6CF4<!5,k9_:Mj$Y&cU,cKmbX{.;dux$sz)TLJ7fx,*xmEm+cmV!FcY5~CK;?"
      "M:EN^*si:+y2IkBHc3aa_vneGqaw=}c#(3_jG$?d)";
  ck_assert_str_eq(memset(str1, 'p', 5), s21_memset(str1, 'p', 5));
}
END_TEST

START_TEST(memset_68) {
  char str1[58] = ":zjQvM~j&>lh;BvrK#MWx!OZN]-dx$i;dqOd/_XVVley(rFSuo2";
  ck_assert_str_eq(memset(str1, 's', 1), s21_memset(str1, 's', 1));
}
END_TEST

START_TEST(memset_69) {
  char str1[38] = "w~Zb{!.&Fy(64D4*T)X3mV9Ba@z$GkRjPdDq5";
  ck_assert_str_eq(memset(str1, 'C', 8), s21_memset(str1, 'C', 8));
}
END_TEST

START_TEST(memset_70) {
  char str1[94] =
      "@ei}c@<3!M?$[M,=.cetF01G),r@tl7[ieZd,2d~)R.YFc$luLTd&B;YoXgE4xJ`x|!1`7^"
      "l]5PSG&cC*|^8@K;tw";
  ck_assert_str_eq(memset(str1, 'i', 79), s21_memset(str1, 'i', 79));
}
END_TEST

START_TEST(memset_71) {
  char str1[57] = "TR8(eOWiqhWq;5(NO$DI$@A0DV@ySvn467[UH~6ng`kPWY1o+yknQ";
  ck_assert_str_eq(memset(str1, 'm', 38), s21_memset(str1, 'm', 38));
}
END_TEST

START_TEST(memset_72) {
  char str1[132] =
      "!O{9y)Pz4ySNk|HtWcHFYh/"
      ".z@U,9`zq}BNqLMYaRb)M:8m8nJhU=1;N$G*OkiJf&8v]uxuAQ_YV+N9JWz]yoJ{|w]"
      "Ggd0BPg}FD/yZ[a-)ko1|cx$$lI~QXQ~yU|";
  ck_assert_str_eq(memset(str1, '6', 1), s21_memset(str1, '6', 1));
}
END_TEST

START_TEST(memset_73) {
  char str1[149] =
      "a)C0gqn#W^6gQgUm;/`J{a{|!2nY5Pc1.<U;Y*#?BWV@DayvE2AlXMc{<z/"
      "hSmq8ZL(e|nRr$a$,JF>>5tr&g&@-kNRds8nIq7yWU}DR]/"
      "0*H-BCXL^Sjd;HhC-fWxGIT#ATw.v@>9+4{";
  ck_assert_str_eq(memset(str1, 'H', 131), s21_memset(str1, 'H', 131));
}
END_TEST

START_TEST(memset_74) {
  char str1[159] =
      "dJ09ZLN7tbEZ]HuOHLAv7<v_Afw`>CiTF1]v-~bDh2GX-Ab=jDu+}:Q]B*gJe:]kpi6qMX_"
      "WSzu-y=bnN=/SevbK!{H]Xv,z*Y`N*O,&{2gC+PtPXj:2b&5Zji*N94/"
      "D`X]c.y_xXZ.?eSu9)}E&Ct";
  ck_assert_str_eq(memset(str1, '&', 100), s21_memset(str1, '&', 100));
}
END_TEST

START_TEST(memset_75) {
  char str1[117] =
      "N#[N??EB&f_=?G^>b:TSo8.Na*W>97;?d&u5f;|*SIYq&W_&F8zh7hYnd_*"
      "pyGVByGL20W3Hed#@3X*hN0jt+Hhn6Y<ijD93XSaQq1r{P{<~3B";
  ck_assert_str_eq(memset(str1, '{', 101), s21_memset(str1, '{', 101));
}
END_TEST

START_TEST(memset_76) {
  char str1[124] =
      "~)us$A1r$XtWk^b=L]~C:~Pm?]yJp$xqO5jzEjIU4VsL+,./"
      "{W1`9S`Pm6s_[I28f{4(tC^mU,`z5?mR*:/oVF{@GY|Yt=`FWUFo5?}CHRpmv:&<!YA!y5";
  ck_assert_str_eq(memset(str1, 'l', 82), s21_memset(str1, 'l', 82));
}
END_TEST

START_TEST(memset_77) {
  char str1[149] =
      ":sqi3lf3al0Dsi}huv{*N),Gy]zuPR:?Ojr]pgzw50QXa>t}96;j3z7]XQV>>SzBYnqTW["
      "Bd$1utS2}eZ*<k8CA,dmXa$)jA!5u6h~`xBkfR&ncD;C:ZgHW:thCa8kf;@C5H[yGq9i{49";
  ck_assert_str_eq(memset(str1, '{', 106), s21_memset(str1, '{', 106));
}
END_TEST

START_TEST(memset_78) {
  char str1[149] =
      "M*YBxW3m-!g$4-geH/"
      "E<?k2qaS&BtJ{MykO2Gw^KHNMp>HW{{DzzUMCxVKKEZN(OgLjGp.N(8Q_l=B_|y`yDN`"
      "xK5ZaS@)PKxSL@ghBdvAlYlu82=(Md[yNBLmU.ajmdd[VZi0OYligDr";
  ck_assert_str_eq(memset(str1, ';', 125), s21_memset(str1, ';', 125));
}
END_TEST

START_TEST(memset_79) {
  char str1[87] =
      "*>J.u}0&5oW[0g?L_pxfd5i04=9GL_3i4Qrt7081a8Bj:grB,z$!7kv,xR:4$R=[Fhn!?W_"
      "7b]O)I,s|";
  ck_assert_str_eq(memset(str1, '_', 9), s21_memset(str1, '_', 9));
}
END_TEST

START_TEST(memset_80) {
  char str1[92] =
      ">&Hw1MLjkfK(Fz+AWJK)-1@5!qn)EpVJG|F@fKI@;C}rvF|dNpSxvY#ip<gTdVVO>4uB@"
      "zpdh)^ib6v[I?W+z<&";
  ck_assert_str_eq(memset(str1, '}', 62), s21_memset(str1, '}', 62));
}
END_TEST

START_TEST(memset_81) {
  char str1[98] =
      "mD,!3}8EU[3d!of`9cDz`?!s0wulDp-^L@KzVk_iVX5SUb|{ymD)*2et#KuQ5{:?7=Ht&!"
      "BJcuh{z7bGa|#c1Tvy~:g</";
  ck_assert_str_eq(memset(str1, 'm', 78), s21_memset(str1, 'm', 78));
}
END_TEST

START_TEST(memset_82) {
  char str1[59] = ">2fq]!L~9SRwkjHk7j`VH`8?rzlkmKt9DwNb##t*wlL#|lH>LyQmOH";
  ck_assert_str_eq(memset(str1, 'f', 11), s21_memset(str1, 'f', 11));
}
END_TEST

START_TEST(memset_83) {
  char str1[126] =
      "O`ueX@J-nc84:rTKf&YguGTWJMIRojQ[bEzSx8?vv3k!=5Fz9cz[QA0Cojg8)XwG.!<Ii;&`"
      "kaZjU8Uej;T=wA^tWUI.8R9AdrqhAs_[>lHuUkv9c`+5EZO*rF";
  ck_assert_str_eq(memset(str1, 'E', 88), s21_memset(str1, 'E', 88));
}
END_TEST

START_TEST(memset_84) {
  char str1[129] =
      "~3ajs3l)h;1}3cV;[N_REM?8F70zEl<NAB|4H/"
      "#J+D&y!i}NiCtmVZE6qt+~wT>|CoAH2C+c$N&tgU{bP{g2)UrJZ6-^|={dbJUnMk!S96ra~"
      "X&|EE<Jc.XAs*ph";
  ck_assert_str_eq(memset(str1, '-', 64), s21_memset(str1, '-', 64));
}
END_TEST

START_TEST(memset_85) {
  char str1[87] =
      "w.ddEj$sAR4:bYb/"
      "WUrSOdKf;$R)W5SToWPbSy)]4cJJvYf,D1^#Y7g$hTl+c^l+L;OStLRUv0^ULfI#]NE";
  ck_assert_str_eq(memset(str1, '0', 45), s21_memset(str1, '0', 45));
}
END_TEST

START_TEST(memset_86) {
  char str1[29] = "DTPUM4)2+s}mo{D:>O)Ym-+C";
  ck_assert_str_eq(memset(str1, '~', 6), s21_memset(str1, '~', 6));
}
END_TEST

START_TEST(memset_87) {
  char str1[128] =
      "BFoRvoN{wO{pzMt1#F{xQRlu?FL,MXdidO$*mS1]-AEu-ii,eLVfm.gZUMHBNLK!B26C*/"
      "r#S/}@8D5CnUqs<d,@,`/MW7,Y!z3i6vPR[E/=gTp}o^.IzSjm-}";
  ck_assert_str_eq(memset(str1, '3', 89), s21_memset(str1, '3', 89));
}
END_TEST

START_TEST(memset_88) {
  char str1[98] =
      "3qAKI5t!7@o@qpv/"
      "A7t(&4.oae.:.|,I`&*c;;xod?!Nyq#+W*ntjldC1!:;2K[eQAsPl[YanjrW3q6_G$"
      "BeY5RaB;$xc";
  ck_assert_str_eq(memset(str1, '9', 88), s21_memset(str1, '9', 88));
}
END_TEST

START_TEST(memset_89) {
  char str1[129] =
      "~}>#@LpuOV?_(L#3k{v5Lv{*e`:,4yp!cm13+aL{kW?f6h4T6H;-v=/?S4!tC3I&?>q5U6l/"
      "#SvBgkq@<w2*,A@ZT+M{sh<NXlYp[^vrH$_l;8s#2j`7VQ9m";
  ck_assert_str_eq(memset(str1, 'n', 96), s21_memset(str1, 'n', 96));
}
END_TEST

START_TEST(memset_90) {
  char str1[27] = "x{JF/@d>~N^?^q`p:9!8B";
  ck_assert_str_eq(memset(str1, 'E', 8), s21_memset(str1, 'E', 8));
}
END_TEST

START_TEST(memset_91) {
  char str1[92] =
      "LrsRm@2+QUk[`v*e4LM[-N`av=qaE?lO2Dn>6(Jq?XpLjwf:C1+)wi1N@JyBo{CvL_YL;="
      "PIRZ}yu/gvG/&9`EgCS";
  ck_assert_str_eq(memset(str1, 'Q', 45), s21_memset(str1, 'Q', 45));
}
END_TEST

START_TEST(memset_92) {
  char str1[139] =
      "gijDREIn<Ya&gYY1b;XTB(L7c2t{(G~Ko4{U9;BH`L`.I)8ahoQeddA?]H(/"
      "eXaHqgfm:RhgQ~,}}I[m.U`0wOcf&8#HqiQk#uuj!B<pWJ*C0HP,uBJHzZ`[7)pY2o9q8]"
      "hv";
  ck_assert_str_eq(memset(str1, 'W', 12), s21_memset(str1, 'W', 12));
}
END_TEST

START_TEST(memset_93) {
  char str1[48] = "9$-t0h[9m7rkwL=W9*/F)A:`Vm]C9`&W)kY#HXbpIC";
  ck_assert_str_eq(memset(str1, 'Z', 24), s21_memset(str1, 'Z', 24));
}
END_TEST

START_TEST(memset_94) {
  char str1[19] = ">V<k}b?B=KFPDWUV";
  ck_assert_str_eq(memset(str1, '|', 5), s21_memset(str1, '|', 5));
}
END_TEST

START_TEST(memset_95) {
  char str1[17] = "ns|=K=38r?XuC";
  ck_assert_str_eq(memset(str1, '-', 10), s21_memset(str1, '-', 10));
}
END_TEST

START_TEST(memset_96) {
  char str1[155] =
      "RZ#f)>nR?9;yftxhT=~2rP</"
      "glb8*)4wUA.y0|-Z8^VbD[4*Hr{CBG-2BF7|=Zj0)QS_IuW^1~zj,T0rhDlP3=b~Jsh=$L!"
      "1YQ!HynJpf`{XLwel47`5hXede09x^dvCZeO0ani!g=6NgtYC-{hh]w";
  ck_assert_str_eq(memset(str1, '&', 101), s21_memset(str1, '&', 101));
}
END_TEST

START_TEST(memset_97) {
  char str1[35] = "?lVQTq^HD4ZfK4]m;~AwJn{rNKdoT[t,A";
  ck_assert_str_eq(memset(str1, '0', 27), s21_memset(str1, '0', 27));
}
END_TEST

START_TEST(memset_98) {
  char str1[92] =
      "Nd7>rQ5;E<.A<DvZ~5lUr|5t)Dl$mHg+RaL>*vl;{AR7n3lG22jK]b5[<GnwD4`<|KTw`"
      "wTV(]9z[$h-Is<M=WHb";
  ck_assert_str_eq(memset(str1, '2', 55), s21_memset(str1, '2', 55));
}
END_TEST

START_TEST(memset_99) {
  char str1[63] =
      "DcOdw=DQ<Y&0B{i7T3-x1,[}:f]RCYsQ-#9M/lUHp=m2p,WuUi+gM6$BDIuOT";
  ck_assert_str_eq(memset(str1, 'T', 51), s21_memset(str1, 'T', 51));
}
END_TEST

START_TEST(memset_100) {
  char str1[154] =
      "xUoYW.}koEj#f3fUGHSYpy3HR?h9H_w|h*Eelk2I#T#0S,^(>9^a<d}Peq!]vZqn8Qc7jV>"
      "mkW/ght:elJGS.Y;@+j//>_DDj(c<Z9Hu.Z>dVFU=I(6<RCK#d`fHBe7EMV)SX2IQ]M/"
      "3SUt";
  ck_assert_str_eq(memset(str1, 'B', 47), s21_memset(str1, 'B', 47));
}
END_TEST

START_TEST(memset_101) {
  char str1[32] = "AFm63QA7t9`[)QuMIbe:MxVO?pan";
  ck_assert_str_eq(memset(str1, ',', 17), s21_memset(str1, ',', 17));
}
END_TEST

START_TEST(memset_102) {
  char str1[39] = "Lm.S_:f?$gL/>muOhgjkPo><k#gnW]Qn9j8";
  ck_assert_str_eq(memset(str1, '&', 29), s21_memset(str1, '&', 29));
}
END_TEST

START_TEST(memset_103) {
  char str1[78] =
      ">4CADUmL~GA>tP7_bzP[{fL!ALrL~+/1Z/"
      "jC67]aa.nlnUpN:-I01F.ir-Q}*Jf~vE!pxT^&6sKt";
  ck_assert_str_eq(memset(str1, '*', 43), s21_memset(str1, '*', 43));
}
END_TEST

START_TEST(memset_104) {
  char str1[72] = "XD7L._Ya-Cg&jGO9HJW*x)QDX/6/1$^IJ-)i$?56{u!+,i>C2vqkT#>*r&,";
  ck_assert_str_eq(memset(str1, '{', 11), s21_memset(str1, '{', 11));
}
END_TEST

START_TEST(memset_105) {
  char str1[119] =
      "l1`xQtU$Zz2Ne`vo)07np93n;@H_H+O.3b|ui./b/"
      "g6VOtjeQQg.[k>sU.nbsQ@c#TIO+Y9_b8P/"
      "<TrESy)#qO3)2npkhspnz!>Ieu4X&w*j_LQ;`&>";
  ck_assert_str_eq(memset(str1, '*', 99), s21_memset(str1, '*', 99));
}
END_TEST

START_TEST(memset_106) {
  char str1[86] = "?_gD>Ued3(}^^:G?e1MliJinH+e<Z_IH{Q~h.E<I0:lWgiXS!";
  ck_assert_str_eq(memset(str1, '0', 1), s21_memset(str1, '0', 1));
}
END_TEST

START_TEST(memset_107) {
  char str1[137] =
      "p(y*{glDSo!wKB651w=;P:Y@TzbBFdRjU3:p*1~rW)TfVNW_@[GcsNPOLzIz)W_(,-Y=g]"
      "43sxQBS(LgJpbA-*jbFGGrvR41TwVfvsQH?;pMW{2Gn08ug{ZK]1KeQ:Se=o";
  ck_assert_str_eq(memset(str1, '3', 57), s21_memset(str1, '3', 57));
}
END_TEST

START_TEST(memset_108) {
  char str1[97] =
      "^^$QXP]x/lisx6d]6u9{!L*dqF/"
      "CR94|7uNN{oYSD!S)>G-N[rSd#eGin8YsJAlC.AYb9e_m}J87?40;9J9mPtbV=|";
  ck_assert_str_eq(memset(str1, 'g', 29), s21_memset(str1, 'g', 29));
}
END_TEST

START_TEST(memset_109) {
  char str1[84] =
      "Wmz{=HG6;`~;:;B)j2^ZoWsxwFI6_Hv)UP(-)m_t2otiSZJ4g0fF3]^)1k,caf3KvwLg+TN>"
      "XL56U";
  ck_assert_str_eq(memset(str1, '(', 63), s21_memset(str1, '(', 63));
}
END_TEST

START_TEST(memset_110) {
  char str1[128] =
      "`qk}fHx&viZqq|{1*5(r+9Wi6kbyb;ct`OX~+&axY<(,X-xvw<bu:Ku`WEYia.GiIf-6gb*"
      "NH2@n9Fmk}yPDB};@}4^P5(C,RzVSTxQi`$a50sgH/IL@*`?C*1.-";
  ck_assert_str_eq(memset(str1, 'y', 72), s21_memset(str1, 'y', 72));
}
END_TEST

START_TEST(memset_111) {
  char str1[45] = "{@NflJj`EU]S}NKoGE*rWRqj/}:{rWHwE]*^*Q=*";
  ck_assert_str_eq(memset(str1, '=', 13), s21_memset(str1, '=', 13));
}
END_TEST

START_TEST(memset_112) {
  char str1[29] = "wjqyYi=A?40<OW^Li#D";
  ck_assert_str_eq(memset(str1, 'Y', 4), s21_memset(str1, 'Y', 4));
}
END_TEST

START_TEST(memset_113) {
  char str1[65] = "mfk-CMtz=9B,(2kmDHW,>o{>F,TMV)hVVd-e]DJq$q4Ct>R(#^uCbopIc+";
  ck_assert_str_eq(memset(str1, '[', 2), s21_memset(str1, '[', 2));
}
END_TEST

START_TEST(memset_114) {
  char str1[27] = "L,wN3W9$.O?6<],Zz7{Hm!o";
  ck_assert_str_eq(memset(str1, 's', 7), s21_memset(str1, 's', 7));
}
END_TEST

START_TEST(memset_115) {
  char str1[154] =
      "X`^r^faP$.k0R?9BVk8;hly9cgve_-g}aS)W=HmCs/OOhdU$`E2jUI$$v.22y,$d+/"
      "ZSB3|f9(~oHkrP!99=].pV,N#VgKJ(es$6O/"
      "yE!rAEjz6`?[5S72Nvb!AO9(){O)|)[X+{0Gpi[8>qH<I|^@";
  ck_assert_str_eq(memset(str1, 'e', 120), s21_memset(str1, 'e', 120));
}
END_TEST

START_TEST(memset_116) {
  char str1[15] = "Jqn-k&L9~YDz";
  ck_assert_str_eq(memset(str1, '&', 10), s21_memset(str1, '&', 10));
}
END_TEST

START_TEST(memset_117) {
  char str1[10] = "$42AK";
  ck_assert_str_eq(memset(str1, 'j', 4), s21_memset(str1, 'j', 4));
}
END_TEST

START_TEST(memset_118) {
  char str1[62] = "Iun0Vr_5bDHM#a`/F_hgkzws/`D;(XL`w[73IlN~e;E|;,W-,$x^fN>q";
  ck_assert_str_eq(memset(str1, 'X', 46), s21_memset(str1, 'X', 46));
}
END_TEST

START_TEST(memset_119) {
  char str1[78] =
      "rSa]I.p-5;nY8P6B<pOmWgb9BUgEF<0ZN?uZR710kSj=g3>8>eF0?gz8sO}Z)TUR4tQ5]g";
  ck_assert_str_eq(memset(str1, 'd', 44), s21_memset(str1, 'd', 44));
}
END_TEST

START_TEST(memset_120) {
  char str1[120] =
      "QFL*{P5Hra6BwNmX1:U-+cyTYi9Ex_3SjMn?~fll)DjzwE(pxqTsKA4B=440:q3uXp1vq;"
      "r7[ttOZW<,?F}hE.F,NnL3Tee?TC";
  ck_assert_str_eq(memset(str1, 'k', 95), s21_memset(str1, 'k', 95));
}
END_TEST

START_TEST(memset_121) {
  char str1[78] =
      "uu|Om:wsGBAmWxeG|0Jli]C-6,u]Ls>:fiG0*;HArLr+wo.bzqwx8{ITxxJ$ugp|_NCvFl";
  ck_assert_str_eq(memset(str1, 'k', 37), s21_memset(str1, 'k', 37));
}
END_TEST

START_TEST(memset_122) {
  char str1[83] =
      "-sfkc-36rGw$Cn*3?K;.u@6m9Boa~:|{h-$eb!|G@9!:}D~Hs]Zp9df6P4#@GyIP)jv";
  ck_assert_str_eq(memset(str1, 'm', 24), s21_memset(str1, 'm', 24));
}
END_TEST

START_TEST(memset_123) {
  char str1[167] =
      "@8(M&b0pt8lI>D{GUE+XhT,G,s?z50QV05xr*RAnlx(w<mpanK=-{/"
      "pTH1@EXE7hXYh7BW70JI`j3ifKnb0+ka|T,rUqbN3*:x/"
      "Dc;R;cvBXK<N7]CY.P76:U60ehL4DH6:_tL8#hIxFC2}WuM";
  ck_assert_str_eq(memset(str1, '&', 84), s21_memset(str1, '&', 84));
}
END_TEST

START_TEST(memset_124) {
  char str1[53] = ")fxwmae4<J+dg{V.^HOu]QEp4?|C(k9|H{to4?d";
  ck_assert_str_eq(memset(str1, '.', 29), s21_memset(str1, '.', 29));
}
END_TEST

START_TEST(memset_125) {
  char str1[89] =
      "=Za<eR{={DtIuqq`3Xf!d.*b));P>{O7~5TIxra9mt7RbCL&[d2GEMr!$N/"
      "Jr7]euPU#p9+lr]ZND40I";
  ck_assert_str_eq(memset(str1, '`', 26), s21_memset(str1, '`', 26));
}
END_TEST

START_TEST(memset_126) {
  char str1[15] = "MjQ#P4*,+M@jG";
  ck_assert_str_eq(memset(str1, 'Q', 4), s21_memset(str1, 'Q', 4));
}
END_TEST

START_TEST(memset_127) {
  char str1[11] = "ap5fNB*J";
  ck_assert_str_eq(memset(str1, '>', 7), s21_memset(str1, '>', 7));
}
END_TEST

START_TEST(memset_128) {
  char str1[56] = "R!K7OWPC_CXYVX~D;^`j9Ygz15nbs5";
  ck_assert_str_eq(memset(str1, ':', 22), s21_memset(str1, ':', 22));
}
END_TEST

START_TEST(memset_129) {
  char str1[120] =
      "6bDt)Vyi7X!9ZJyaj-fvM3z/o`]?Ifyux+X^&s/pH2G8t/3|Eui$)r@/pEIeghgH+G)/"
      "2GByQbySZ~=}#sGc,j5.zY*-}W&7>2@NOGxv+>YQ=Xm$";
  ck_assert_str_eq(memset(str1, 'G', 85), s21_memset(str1, 'G', 85));
}
END_TEST

START_TEST(memset_130) {
  char str1[139] =
      "kdn_2laya($+~z<HxDi~350+D#C/"
      "^nsvA0$`V6VN*4Kt8{&tg,@cnv{xXZbfdgp;#]rd7E0EFpSzaK+Q,eI2>{|]z7n>]n=>^m~"
      "gRb:(8;bfXQ}FRpLef~7{tObO(3&ZtIekA";
  ck_assert_str_eq(memset(str1, 'd', 108), s21_memset(str1, 'd', 108));
}
END_TEST

START_TEST(memset_131) {
  char str1[96] =
      "!L}=l?shH97juhK.P:D^g#+yfQ^2)iZ|Dzx.IBj~$dty[iVyQgam{(XC/+SY{/"
      "LE<bMBdg*5dB>{zyu~c";
  ck_assert_str_eq(memset(str1, 'z', 68), s21_memset(str1, 'z', 68));
}
END_TEST

START_TEST(memset_132) {
  char str1[160] =
      "24uu^FzpPq>tJ2VADD.}Y?Yje~yidl:&9M2JH{!&gf}+ae~OlhNd{8(xnj6SseFK5ClVgFD["
      "y0c@|*UL,+91J?Az*q=nQ/"
      "^}NM^GH6xqrX$Wk{~P~2vk>&`?0NM[Xzj0{l^>iwq#qG3ISK.T&qn";
  ck_assert_str_eq(memset(str1, 'X', 25), s21_memset(str1, 'X', 25));
}
END_TEST

START_TEST(memset_133) {
  char str1[120] =
      "Uy|hsk]cK~Szys`Z5^X8o-}G+V;K;4gM~1XBRn7th-v)2DBnnS4Wq<0MVVVe*mpCNw+_,V#"
      "Tu5G/&rusy&+`/3H1uI*T;_XY9[;V6d7bwG~Q";
  ck_assert_str_eq(memset(str1, ']', 8), s21_memset(str1, ']', 8));
}
END_TEST

START_TEST(memset_134) {
  char str1[69] =
      "mQw6<P,d@zGsj}k<M_m<OIGwmt?!J=IhB.^7cpm+,OB8>fQOkCJ1f{q:hl?IL9&A";
  ck_assert_str_eq(memset(str1, '?', 63), s21_memset(str1, '?', 63));
}
END_TEST

START_TEST(memset_135) {
  char str1[20] = "]Zpe[b747_f2]Y";
  ck_assert_str_eq(memset(str1, 'w', 2), s21_memset(str1, 'w', 2));
}
END_TEST

START_TEST(memset_136) {
  char str1[95] =
      "]#HnQ[{wXwtShpTS3W~pB15IhlO6C6qy~VKXP)vB4&Oqep>k#m!i;reF/|/"
      "rQMZha[QHUs9.i@Oy2;JH3!O9jYms~";
  ck_assert_str_eq(memset(str1, 'S', 73), s21_memset(str1, 'S', 73));
}
END_TEST

START_TEST(memset_137) {
  char str1[36] = "5EGT+!)8Y(]!!J<iXO4G>8>dWM!pVDP?Q";
  ck_assert_str_eq(memset(str1, '|', 12), s21_memset(str1, '|', 12));
}
END_TEST

START_TEST(memset_138) {
  char str1[52] = "Pc$vBQ>C:#:Dy1MB5]W#z>pcfV$g29crQ]Hx_j18^~4#@(4-";
  ck_assert_str_eq(memset(str1, 'P', 3), s21_memset(str1, 'P', 3));
}
END_TEST

START_TEST(memset_139) {
  char str1[97] = "^#fJ#;RN3m@sGbi`<|0tl=/73WtjcVWPX_J.d[k*?=[cz+e*Jojc?b";
  ck_assert_str_eq(memset(str1, 'F', 9), s21_memset(str1, 'F', 9));
}
END_TEST

START_TEST(memset_140) {
  char str1[89] =
      "iFIU$<T/T(5DK)==GsKC/"
      "#a:&Ywn7l4r&eAOFVK0c~$DjCym{O:HEy$r>Ov]7go?Q!B(:bo,[4A^aV";
  ck_assert_str_eq(memset(str1, 'v', 67), s21_memset(str1, 'v', 67));
}
END_TEST

START_TEST(memset_141) {
  char str1[109] =
      "<8}!]Ri>la=1rNMde2FMSEvLFfQS/MS}^W#H6O0+j#;if~AGEGhF_!7^k*/"
      "2Hq8&T@I}=Sf$zj8[,+U}}IJl?;0dRSUAHwyWYA9y";
  ck_assert_str_eq(memset(str1, '7', 33), s21_memset(str1, '7', 33));
}
END_TEST

START_TEST(memset_142) {
  char str1[148] =
      "J9+GPmQKq44/"
      "`fRec`=S4z[k{4=+?|OB`.|i48>F},;_6t]n(gl<4XxOresO<#.=Aks.RTN0t0G-(|Vm<k$"
      "2)V9RVcm<F#,Tfh)h61wi`<YTu>|!)KWUPN<Cd/WY::}n[5i/n3N1Fo3{ZTqJ";
  ck_assert_str_eq(memset(str1, '{', 24), s21_memset(str1, '{', 24));
}
END_TEST

START_TEST(memset_143) {
  char str1[35] = "Y1AXeNV1KDnIExng5.y*h!@VT@Xs=7";
  ck_assert_str_eq(memset(str1, 'q', 9), s21_memset(str1, 'q', 9));
}
END_TEST

START_TEST(memset_144) {
  char str1[89] =
      "$?{iO/:~ZCWak6|mQ];WM]m`gw|$_t_=,0Es)>)eEI}13+{j:X>Ia/"
      "8T-)[+;HPD*t95D_Oq.U5+B/B~,)4Qwd";
  ck_assert_str_eq(memset(str1, '.', 20), s21_memset(str1, '.', 20));
}
END_TEST

START_TEST(memset_145) {
  char str1[5] = "?#";
  ck_assert_str_eq(memset(str1, '!', 2), s21_memset(str1, '!', 2));
}
END_TEST

START_TEST(memset_146) {
  char str1[77] =
      "!gG5OO@(MkbZ*e(*/"
      "`t]pdCk}+mH6hQ#w,|;3]VNlv+MPa#wNdU0sQDLfUCD)u=k96?n&es?gWdU";
  ck_assert_str_eq(memset(str1, '~', 52), s21_memset(str1, '~', 52));
}
END_TEST

START_TEST(memset_147) {
  char str1[9] = "m!CeDZKgy";
  ck_assert_str_eq(memset(str1, 'B', 7), s21_memset(str1, 'B', 7));
}
END_TEST

START_TEST(memset_148) {
  char str1[120] =
      "Re=C|Qs(DI$C@xyC$2y0FQyCo6Oby#&lYJdu@roku0n0WhMe:l+^u5Zci1y{<W,<I[&r_"
      "ueR.hB#2^tOM3t;]dAo|M`8I<U>gth?1LOz?q*X=3lXpU:[|s";
  ck_assert_str_eq(memset(str1, 'C', 23), s21_memset(str1, 'C', 23));
}
END_TEST

START_TEST(memset_149) {
  char str1[35] = "r[iA!$zAK[`T@e,;8PhjC_ddl6^IPoU";
  ck_assert_str_eq(memset(str1, 'Y', 7), s21_memset(str1, 'Y', 7));
}
END_TEST

START_TEST(memset_150) {
  char str1[20] = "!^4jO.*T>,r_W~K*Jn";
  ck_assert_str_eq(memset(str1, 'S', 8), s21_memset(str1, 'S', 8));
}
END_TEST

Suite *test_memset(void) {
  Suite *s = suite_create("\033[45m-=S21_MEMSET=-\033[0m");
  TCase *tc = tcase_create("memset_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memset_1);
  tcase_add_test(tc, memset_2);
  tcase_add_test(tc, memset_3);
  tcase_add_test(tc, memset_4);
  tcase_add_test(tc, memset_5);
  tcase_add_test(tc, memset_6);
  tcase_add_test(tc, memset_7);
  tcase_add_test(tc, memset_8);
  tcase_add_test(tc, memset_9);
  tcase_add_test(tc, memset_10);
  tcase_add_test(tc, memset_11);
  tcase_add_test(tc, memset_12);
  tcase_add_test(tc, memset_13);
  tcase_add_test(tc, memset_14);
  tcase_add_test(tc, memset_15);
  tcase_add_test(tc, memset_16);
  tcase_add_test(tc, memset_17);
  tcase_add_test(tc, memset_18);
  tcase_add_test(tc, memset_19);
  tcase_add_test(tc, memset_20);
  tcase_add_test(tc, memset_21);
  tcase_add_test(tc, memset_22);
  tcase_add_test(tc, memset_23);
  tcase_add_test(tc, memset_24);
  tcase_add_test(tc, memset_25);
  tcase_add_test(tc, memset_26);
  tcase_add_test(tc, memset_27);
  tcase_add_test(tc, memset_28);
  tcase_add_test(tc, memset_29);
  tcase_add_test(tc, memset_30);
  tcase_add_test(tc, memset_31);
  tcase_add_test(tc, memset_32);
  tcase_add_test(tc, memset_33);
  tcase_add_test(tc, memset_34);
  tcase_add_test(tc, memset_35);
  tcase_add_test(tc, memset_36);
  tcase_add_test(tc, memset_37);
  tcase_add_test(tc, memset_38);
  tcase_add_test(tc, memset_39);
  tcase_add_test(tc, memset_40);
  tcase_add_test(tc, memset_41);
  tcase_add_test(tc, memset_42);
  tcase_add_test(tc, memset_43);
  tcase_add_test(tc, memset_44);
  tcase_add_test(tc, memset_45);
  tcase_add_test(tc, memset_46);
  tcase_add_test(tc, memset_47);
  tcase_add_test(tc, memset_48);
  tcase_add_test(tc, memset_49);
  tcase_add_test(tc, memset_50);
  tcase_add_test(tc, memset_51);
  tcase_add_test(tc, memset_52);
  tcase_add_test(tc, memset_53);
  tcase_add_test(tc, memset_54);
  tcase_add_test(tc, memset_55);
  tcase_add_test(tc, memset_56);
  tcase_add_test(tc, memset_57);
  tcase_add_test(tc, memset_58);
  tcase_add_test(tc, memset_59);
  tcase_add_test(tc, memset_60);
  tcase_add_test(tc, memset_61);
  tcase_add_test(tc, memset_62);
  tcase_add_test(tc, memset_63);
  tcase_add_test(tc, memset_64);
  tcase_add_test(tc, memset_65);
  tcase_add_test(tc, memset_66);
  tcase_add_test(tc, memset_67);
  tcase_add_test(tc, memset_68);
  tcase_add_test(tc, memset_69);
  tcase_add_test(tc, memset_70);
  tcase_add_test(tc, memset_71);
  tcase_add_test(tc, memset_72);
  tcase_add_test(tc, memset_73);
  tcase_add_test(tc, memset_74);
  tcase_add_test(tc, memset_75);
  tcase_add_test(tc, memset_76);
  tcase_add_test(tc, memset_77);
  tcase_add_test(tc, memset_78);
  tcase_add_test(tc, memset_79);
  tcase_add_test(tc, memset_80);
  tcase_add_test(tc, memset_81);
  tcase_add_test(tc, memset_82);
  tcase_add_test(tc, memset_83);
  tcase_add_test(tc, memset_84);
  tcase_add_test(tc, memset_85);
  tcase_add_test(tc, memset_86);
  tcase_add_test(tc, memset_87);
  tcase_add_test(tc, memset_88);
  tcase_add_test(tc, memset_89);
  tcase_add_test(tc, memset_90);
  tcase_add_test(tc, memset_91);
  tcase_add_test(tc, memset_92);
  tcase_add_test(tc, memset_93);
  tcase_add_test(tc, memset_94);
  tcase_add_test(tc, memset_95);
  tcase_add_test(tc, memset_96);
  tcase_add_test(tc, memset_97);
  tcase_add_test(tc, memset_98);
  tcase_add_test(tc, memset_99);
  tcase_add_test(tc, memset_100);
  tcase_add_test(tc, memset_101);
  tcase_add_test(tc, memset_102);
  tcase_add_test(tc, memset_103);
  tcase_add_test(tc, memset_104);
  tcase_add_test(tc, memset_105);
  tcase_add_test(tc, memset_106);
  tcase_add_test(tc, memset_107);
  tcase_add_test(tc, memset_108);
  tcase_add_test(tc, memset_109);
  tcase_add_test(tc, memset_110);
  tcase_add_test(tc, memset_111);
  tcase_add_test(tc, memset_112);
  tcase_add_test(tc, memset_113);
  tcase_add_test(tc, memset_114);
  tcase_add_test(tc, memset_115);
  tcase_add_test(tc, memset_116);
  tcase_add_test(tc, memset_117);
  tcase_add_test(tc, memset_118);
  tcase_add_test(tc, memset_119);
  tcase_add_test(tc, memset_120);
  tcase_add_test(tc, memset_121);
  tcase_add_test(tc, memset_122);
  tcase_add_test(tc, memset_123);
  tcase_add_test(tc, memset_124);
  tcase_add_test(tc, memset_125);
  tcase_add_test(tc, memset_126);
  tcase_add_test(tc, memset_127);
  tcase_add_test(tc, memset_128);
  tcase_add_test(tc, memset_129);
  tcase_add_test(tc, memset_130);
  tcase_add_test(tc, memset_131);
  tcase_add_test(tc, memset_132);
  tcase_add_test(tc, memset_133);
  tcase_add_test(tc, memset_134);
  tcase_add_test(tc, memset_135);
  tcase_add_test(tc, memset_136);
  tcase_add_test(tc, memset_137);
  tcase_add_test(tc, memset_138);
  tcase_add_test(tc, memset_139);
  tcase_add_test(tc, memset_140);
  tcase_add_test(tc, memset_141);
  tcase_add_test(tc, memset_142);
  tcase_add_test(tc, memset_143);
  tcase_add_test(tc, memset_144);
  tcase_add_test(tc, memset_145);
  tcase_add_test(tc, memset_146);
  tcase_add_test(tc, memset_147);
  tcase_add_test(tc, memset_148);
  tcase_add_test(tc, memset_149);
  tcase_add_test(tc, memset_150);
  suite_add_tcase(s, tc);
  return s;
}