#include "test_me.h"

START_TEST(strchr_1) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'z';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_2) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = '\0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_3) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'a';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_4) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  int ch = 32;
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_5) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'R';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_6) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = ',';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_7) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = '0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_8) {
  char s[] = "";
  char ch = 'a';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_9) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = ' ';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_10) {
  char s[] = "";
  char ch = '\0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_11) {
  char s[] = "";
  char ch = 'a';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_12) {
  char s[] = "\0";
  char ch = 'a';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_13) {
  char s[] = "\0";
  char ch = '\0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_14) {
  char s[] =
      "26u^oFV^AwM1`{,PC?>-MU,4[:8sqxppfu?vA`X3Vu=s<K(63[hqP46X4z:Ka0]z$SjWxfw]"
      "8cCL8ieV;p,/HJ0";
  char ch = 'q';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_15) {
  char s[] = "";
  char ch = 'y';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_16) {
  char s[] =
      "]1)Dpfr-*Oy!yhm*2<>c+rAwk{[*t,P0J04kK1}oM(d29rNz$]FPx7Mn`u4ybQYmWyl^*k7~"
      "bYT";
  char ch = ']';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_17) {
  char s[] =
      "~Y+5xIx5,)&1}xW&*aw,5Qk!Ry_&El:P>>oL(@4ww/"
      "q]s,,gNs>[WaN-|I(eq@mg3[ekl<[8kl6e7ApiKXD^7f7k#&!oK5a0GyA4Y)5WJB8Y)Ve3^_"
      "Rl~9CLdEW,>fP";
  char ch = 'k';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_18) {
  char s[] =
      "!y/"
      "*YJM;=QSg{fKC0zoXR]Tc3p{8[D1fH1sE@[=oZycpe*`ioBT:1F:BGd`DRp84;+)NHxX}cr{"
      "qTO&O#;xlXJ!A/EN`b#]*mR=9+V,OOo<j.#f9v8Sx!Vh";
  char ch = 'F';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_19) {
  char s[] =
      "<tQ6<>hMx*XvM4MOD4HkWJ75Rx.[kZReuxe:3W.tN9Z3]FJ|9F6Ct^.FlZ+iFJAm88b";
  char ch = 'D';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_20) {
  char s[] = "Gc.t.7";
  char ch = '-';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_21) {
  char s[] =
      "_V6D,;4WT/~S#PQbeTG~?b^,:IXps[Bedp5>@6lII~eEEA<L1=}U!FDJ/"
      "@tURcSON0krtDhHOQKh&}7s8odvh;|:&C1iKnEi=";
  char ch = '9';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_22) {
  char s[] =
      "0Xqti,=!<5Popszry@S*+u=1LlVb|kN4sItpgZ$YX-!(e9f(V>*4F1h/"
      "bpsr`o|d$vf7m|33@Tqq#jA~k/"
      "{mf~-p37@pp=j^M5q[,UI)wUKWpuX]0luB~jJYcd#Wp.zQ&hF2G_*";
  char ch = 'S';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_23) {
  char s[] = "}D{=#&OMk@!}nbuKbdGO77RPPS]v";
  char ch = '-';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_24) {
  char s[] =
      "~Cj]F>2QYOw>q<~m>[_-5:BCHAx3N-/"
      "WQAPb&eUT&_Qa]M5R]S6Flsjf)k{Oa+0!X^;I[wlHFS>w`ZL.$?4:[w,B|hv~6yE0TG";
  char ch = 'h';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_25) {
  char s[] = "c=dG~eF";
  char ch = '7';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_26) {
  char s[] = "G3.@mb:XG*";
  char ch = '#';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_27) {
  char s[] =
      "JJlm*8hc!$o-Chp;)woeVE(nR~ha3DtO(1F)igX$^b.K=Kf:)9Ms71iLJyY.RTlw=A@|"
      "O8fg$d|/~Zi>_.$(f;ktU}AJE5~AdM3@I=nDlQF[o9Bp";
  char ch = '3';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_28) {
  char s[] =
      "-&W#HtGLsgE@HH970$o,jxqG#^F1R^FTGtThP7#dOx}wv0ImyEHT|&qCj-6)@)d*Hq";
  char ch = '3';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_29) {
  char s[] = "~DbFsP";
  char ch = 'd';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_30) {
  char s[] =
      "kKtv4Jj^/"
      "hAj;-<V3G#4oX>QoR[W-`V1?6)hH&D4uVq<8pZKLOQ@,&WQ[-N#:Ia!=uK.{4$p6SuXK#XW>"
      "=;VC7&?MPM+WlODX,7ZqC_-_ZY4pe1_|qfM";
  char ch = ',';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_31) {
  char s[] = "5}>96";
  char ch = 'U';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_32) {
  char s[] =
      "(y7{<wo1H/ibig}x3.jFHi*&6LX6HWTJB[HEK:h?]w9Z$=(-KcquEw/"
      "YHDf@8Xt=fVh?$u6VK>cVH!z|i1K=~(@Z<0[j+2>iJNMnm5GC+`SX~VRiDMEOh]Mxvc12.+"
      "Gi4`J;Z:kKitE";
  char ch = '@';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_33) {
  char s[] = "LCcf";
  char ch = '(';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_34) {
  char s[] = "(pj|VigXh))d)&,^#X~x&[)H#L02s-j23nz_y)|3GU$TBA@C`e&X";
  char ch = '>';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_35) {
  char s[] =
      "d@AZ1xf^7XPzTUs.0T[V!bA|(nKm3{K3hH:Q6`y+va&w-HSb|o,!Tx[.gn=]0s||G><4T*"
      "d9.nBdIO5uSay0aurws?4rM>d7k@t<d|cRUF";
  char ch = 'S';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_36) {
  char s[] =
      "NtED*e4,5=~lFzzKMJsN=49;|(v=#+]*K(J;OeLb[uGy>BpD?<Yt2$8E;!XPcZ{(0=E="
      "lJoWrLy[YQLzW[!k.aT7B+JFTX@S}#LdogD!lQb|1H{#}n|i~f7@CSa(z`(z8";
  char ch = '?';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_37) {
  char s[] = "H01*!~T*k3F]&gLn44u*";
  char ch = 'P';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_38) {
  char s[] = "?&f[)B";
  char ch = '&';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_39) {
  char s[] = "14>QwEV?=YD>KyKAuMzhHt&&1+~`C].U5csL";
  char ch = '^';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_40) {
  char s[] =
      "v:?|5L=#)wBidqlrIQT8+|s@XwLqY5B<kEA(t76u-o{t#lh:/"
      "rp=-Y*j]<D5J,1wD)eLVU0+v$aD?N3comW30ZoY!jluK1`[<^6HguuOXN9XbMoHZEkj=(_@"
      "a,,J.mNWJ1CTtMF.TO";
  char ch = 'x';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_41) {
  char s[] =
      "E[D-q(3Tv+wlo`{i:TC3u?a?clyuOV$b7e12$!M)9WJH^MvR0DWUc3Pc)Ilq^;NhMCQgg";
  char ch = 'm';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_42) {
  char s[] =
      "ucGtF1VqE-nGTPIR!xOA4&fga;14+9kBTWGWEe<=Q*FB(~1Is8t=hbFrD(t($<75Z9-DZs{"
      "X(;$$NH|ZQOHx/x8ZRtu1s2Rx)*c1(goGwGVDL][-pR@pBm/aA3!Yj=31rgh";
  char ch = '?';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_43) {
  char s[] =
      "Z<2w+I*Vj!~?eWusHJ>jh`FLug$ZVRwi?3CV7DB5}T{cCNuVF^[PCNs[c.5DTxha|5A.4/"
      "Ja(gScf&l8@!>Gcw}YY)`;dUZ7cKII]vat";
  char ch = '7';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_44) {
  char s[] =
      "QkYWn.(v^|.3*A71a]|>a$~UqqYvoQ*@zxjlZ!F]@>RC&X4+<y7ZN*<fO:*Br("
      "ENKGMGRbrLe70A+v8VpCj32$a:8f`UD)b|4y9E?_bK-!JPd=pmg5T$)Q*NC!A)Hb4{BL|J`"
      "Zc-CG*8QaiJ";
  char ch = 'F';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_45) {
  char s[] = "83YFl1mI-1c2o~?F^utgw@vW!R|gfr";
  char ch = 'E';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_46) {
  char s[] =
      ")1X4?tX$R.1Cg@S|2o?E4Zm1n.=b|4(G}T3F]jC.ahKjL7ej#UC4crJMZ&=P8V3(m`w^&!"
      "qDa^B#=im8;RV6Y|VD,#";
  char ch = 'r';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_47) {
  char s[] = "/HJX@]vZiwn>lyDJD@96}W{*J)Xlj<tx.g@iURWu]I";
  char ch = '$';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_48) {
  char s[] = "w~:X-wgKbiBU(72GT[(zY=/,uLw07/2[2;0[Bd4h_xRP@A?*4/;Z#(Rl?aa";
  char ch = 'o';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_49) {
  char s[] =
      "eaPTslemOE[C,[5L^w`NBxz}1>rzzmL+VcjdkZ~aPh{#.!]t8a~9tr~:IGW&w^x5zTl]NS&"
      "5d<?}B:L]UaSlJ@Ji@;vvYzF{Eg-&ha#r";
  char ch = 'f';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_50) {
  char s[] = "IM;o:hXSl";
  char ch = 'K';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_51) {
  char s[] =
      "rWaQ^IeUUJV9=wAO7p[|gi=uIYh48B@@EHHvzJh-A4D)Rsu7qBy&s>v)|c9pd>i}Ah]"
      "q40oPXv:L.q<6MF]b,Jf1QwzI7U[e|$8JMIYG*xH2ql$";
  char ch = 'n';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_52) {
  char s[] =
      "C&k{iv*+jK@Z/|##Qw>Lw:YO0OR/"
      "pZ<^bW>zS<;q)9ln>CcHOAPVg-F#IiR);uO-ktby&I#k+f_$1Z(RgS.i817i^(BgyI+[Iu`"
      "tN02,):1H)4B7J6=Q.yp0KOW*gd{d&!:$,S>k&7C/w";
  char ch = 'i';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_53) {
  char s[] =
      "utJ9|qSeToO23UeYY}|^A4U`r~l]NC,PN[|H}z5,KEyb#bWHoFIl0N3?l=!D{SveRK(O6-"
      "SbrU<8E}u!hY0u#A2+CQyHUq8=906=l26T";
  char ch = '.';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_54) {
  char s[] = "Nrj9A*qcQPRtt(yK6w0^$N(3B+#C6UQa|sd51@K4|Dw0hx]g*o)@cntr+n2/o";
  char ch = 'N';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_55) {
  char s[] =
      "MT:54&X+?/xi[>2,{At-@3m:&#-/$0IZbuvjgCPv$1t>r$>kv}ug)Y[@2}*MH^bM,R=[./"
      "Y:nm+dABbAZCj#N1i!9#=1-`z6xg_PR*-(^S$gGe$ae_oES1//a.vuL>l}.!N@u";
  char ch = 'T';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_56) {
  char s[] =
      "2i&E/"
      "AX&HBJjAB01#h.(#EeDZ?d0Dc!4<ZM:1!Q_,0zrz<u+4j0Rf[9oA=Du1*hhNZ5;"
      "CkNapsaLt,?Q/"
      "2RgbE6#&R?m8>e?*SEftsm5HcI4xT1`3#lk[qS|jL&6*_zO^:*vDsVW-klz9h0qU";
  char ch = 'l';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_57) {
  char s[] = "]";
  char ch = '{';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_58) {
  char s[] =
      "11md}Bg8!Jn//T{Gmaf]yCcv//,#9D0>@snn//"
      "RV#i=-B}qitTCg6Rv`M5Sa,4(}&`3SL$B^2Zca;(3GXl$x0IGjvj4APVFDc]C}Zu`2@>c}"
      "g4e,6nsSUz>(sx^0UsV~]<.>H[3kmaT0Y8]/GrpM";
  char ch = '0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_59) {
  char s[] = "L-J+_hkgI#&&-fz8I?EDILsEw#E:$)KpS_Cfv[m/EMqFt1pVLA5|+s[l@.9";
  char ch = 'r';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_60) {
  char s[] =
      "}Ej,i*&x~^9II{3ZDrnMZp!:/"
      "gHiOpP>Q=k}K18!}`fJ+8,CqKi>8JeEz&}`neS{Y]o`R.SR{wTA";
  char ch = '_';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_61) {
  char s[] =
      "SN1/"
      "U!T8Rti2[[;jX]F5H!62zcb4P2Z~[brzoh2..+0p2SyqC0nHb!yX]f={ij+6h)PFDq8;|*"
      "9G<FuZ_&*AT-3sowkHzJ)}tS]HE8C>5?siQ/ARA__QdR.EkY,";
  char ch = '-';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_62) {
  char s[] =
      "z2LL-DV7NVVahkX@2Z78DYWoA:XKdrr]wo$EWB6oTzL+GNB~Hw#$uqKa?qI$]-"
      "zfnfYmgFclN9{Eue^JF0q5im}LA&";
  char ch = '=';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_63) {
  char s[] =
      "7sKnHp_5-Zg[5a3`._]SP7[cA81$A6YMqBSe|GM5pQwV9_9]ohnygTr$xM&s>g@1=hz?_l?"
      "12yx{`ZJe2,gfx):-FjIYl?QMFWyqYD*W0+Sq$5|L";
  char ch = 'O';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_64) {
  char s[] =
      "d1oIZ+z2~/"
      "vboJ{agtsg|94[zc9cxE?aTnsDw^>jHO<+8N&<4!-w,0X:!Fz!l!*Y@vFRmA-*cc`=Zs7/"
      "Ep!J";
  char ch = 'N';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_65) {
  char s[] =
      "qf)?b1;Dx|*<0f75WzfI?1z-0W[rYpH&Wbp(P~4cDFd`;W_NWv!2(~V1:{y3Y~g2LH*"
      "DE4rSyxyQ>t8i|7_{Q$_.fq0L.qdv-yZ+s!x!XxA55~;IRC@|jb";
  char ch = '<';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_66) {
  char s[] =
      "x^(4_eqm=]b/E^>6$t9]}WE77>.#hl^<wLFM{(kW!u8sCm<Z0HBTi)+@5R8mlK#X},s";
  char ch = 'J';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_67) {
  char s[] =
      "H5_vYh[r9lpF&NYqVz09>f<P4Jxe[|Jyh18U^>5NOb7T|6EvbYz]s7^z5?NKYZTdl~"
      "QPFbXF:pYFYfaOF}ho)4D:QN";
  char ch = 'O';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_68) {
  char s[] = "ahICTk#h1bO";
  char ch = 'M';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_69) {
  char s[] =
      "_MVM-0vb,>+Dk&h?^W!vC_o|r]7d(YOvLbex6rZrU$4wdc[:a|x<ZtemW0o/"
      "(TzB>?V6ES{51&AQKur<hVg03.)5#Zjz<KS^3$cmB}MM03]eWo~.9r0/"
      "+n=1Hc`TUE^6ozcWT";
  char ch = '!';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_70) {
  char s[] =
      "zM=F2_Te|cyrSUq:gZ~SE$,;[;o?1r`S#b{dVkG$vGMDCZ/"
      "T<RAG9Y9Z>.d#;z2|+zB}P{$&)ks5pvg<$(4DB";
  char ch = '^';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_71) {
  char s[] =
      ",k@[!!aCU90^NOy>GqK7TZ4TepK9&4kWZat=a{81((u;N!^A/"
      "PqXYWUGjQS$F3xld9AU*Z5aLVLtl8pGeP{)|h9s7&eWfJd6#jh=o(H0";
  char ch = '*';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_72) {
  char s[] = "bCda)/k@vSW+`H8w(1!`m)cC3Hvg?u!&;Ao";
  char ch = '2';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_73) {
  char s[] = "uJ3A&+=[Qfi$nL(u{g;2_fbCG4CBz7_7KeW0IOx@u~SS+`HOsFg!~j$mF.Q2S|";
  char ch = 'n';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_74) {
  char s[] =
      "I=1*PKtGlZDUnR)c.HJ.IT[aa{/<C)E,q0vgt2{T#Cfk[8j#e9n||LgN74t/"
      "iM.Wdc^o-{:q]{&SD8HDcboU";
  char ch = 'R';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_75) {
  char s[] = "U:]z4$.>0S?LiwkAdlmGl$?m)b4J)(z&";
  char ch = '~';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_76) {
  char s[] = "u?|Hw{p#E;";
  char ch = 'V';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_77) {
  char s[] =
      "e0rO&f`@_!L?X-Cp?].>z2vpdQ^};,wwo.JD9c7(xzJz`51PT<7e@3!mP;!l`U2P,"
      "Tk5Ncxrjk+F41}";
  char ch = 'X';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_78) {
  char s[] = "m|yu=Qu#rBf7UG*13ufw.:9i?S8;^rZsaZ#Pxa`p}68<AkUwywBO!Jxb";
  char ch = '_';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_79) {
  char s[] =
      "~oV9^Q;[fR-vdh05vWutzdQiT&Tp7-5x4D-{BnkC<o}wIeC2wa8P&[(Z39_PL~6xoj7*"
      "wuVM|/q.>T6/C:dhEblbY]?M?3V?_+$0z:X";
  char ch = '/';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_80) {
  char s[] =
      "gjCr`].<P@|e}d*)#hHHo*q8[kcLjsG~mu0Fg8ujEUwl3&+2t6?s&h-i!*Q1(s)1:snh>}"
      "FW";
  char ch = '7';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_81) {
  char s[] =
      "b&,]zX,l:XRW,^@sl8OwS_6j5<w[wfyY:g1lS-B8;h(:JX]M613|RpUP0W94DM=Z,_KlN}<"
      "D6{ZP>TZQnJdxW0FX8(/uUq.S-_pHbVA@m$S_tTul8S}qK9b";
  char ch = '}';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_82) {
  char s[] =
      "5JM)6NBY&/"
      "=8h-rJTQtspw$1k4!6Ky1)5nE*((Q9fQ}T?edi{#d:1TJW2G1hvgqf;i{^OQGLpH1l+5z5["
      "No7j=aDx?4";
  char ch = 'Q';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_83) {
  char s[] =
      "iEyFEN2(&KApFX~q1y6>wl&F.qGv-7*&+ER}7erfp3M3X6S9$ymwvsTvgrf1OQv1|R<4R?]"
      "lyiWJpM{!jZcp#rQ|c<9|YXpIL{*j0jMo8lt;qo]";
  char ch = '-';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_84) {
  char s[] = "Hw:rr<D6[-FeQ[e|lY6T725HoT3GO~tpy-0&1As}9w";
  char ch = '{';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_85) {
  char s[] =
      "T^5p^0LO)cd@K8;.5]j@h=JyfQKD1~e4nMQ;kd.)>/"
      "2So4rCj06ufHX3LU5;->p.}8TS1w[EOuU~>1u*+||btERYeYf8wjwL/"
      "25mS8*jUJA^k=#B[RUk<.zVH(Wr,r|iuT/";
  char ch = '<';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_86) {
  char s[] = "T#CU9Dy}|&2,o(oNot~VZ7";
  char ch = 'J';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_87) {
  char s[] = "W+5A>a37*JlyUG(^9Ui=GK";
  char ch = '2';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_88) {
  char s[] =
      "4&2t2cw=37}5KQ,35so`Be$4@oB|v8FW,w]fOnla)6N`pv:.Idmr={(7lNAAm>5j~v[)gxs+"
      "0Z1^Sk7+(]/SX6a[3Avq:xmywe]vSUqJzKq!yjQ;{lIZ6x:;#g>ZdD[)zzs^";
  char ch = 'A';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_89) {
  char s[] =
      "?klD2(;@vmM?74~=]|.Hx],L,.HM5V5lFK$CPbILgvjnh|cU}.JBVJi(UA|o[_7S./"
      "H^S_zOeI~FIm:[>|LIMUS*5FUvIV{Ry4Ct}9P!}C$^TY64f@TcS";
  char ch = '|';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_90) {
  char s[] =
      "ROA[2YF0iJ1!+Y9GDLl_B|yBK5cq^cTf!0G,Swy?K>{2zmpz5-`b^<vy2OGHj84NW-^f@[^|"
      "z(&}>P;_*8Q+lpZ`EH)q#,e*0O7&|";
  char ch = '#';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_91) {
  char s[] =
      "p_X!1<pXvX>qt|PtAsc?ofBAcTd}~f/@fj1~]|._~uo${cu.0G;s-}/"
      "bp796m]U,xjXn:0=WhiD?s";
  char ch = '|';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_92) {
  char s[] =
      "Q+MUsWp($$GRvSRq,)r+_8rsUT|P<rGaIJPLgd!N$K~oxL2xb80c=Q.hNq=G[kFG+u*Hy:@"
      "d0J2/,Awej<E$yqNtj3{rxu9";
  char ch = 'X';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_93) {
  char s[] =
      "ozEXVIO_b<^gtq!*q!pOwOQ?(&!{CyMO&JYxWFJ~1)xjsVjzg;9nWx(9PLnHkCb;f_VQ.PC["
      ".5@-Gbzyq+:o^d2n6h*}tYy?#aq1vHaWiPu=`qUGDPwdT+y;K>@";
  char ch = 'k';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_94) {
  char s[] =
      "NdY_8>mXTAtqT80M1UxY0!&1!Z@0#Wb}t?^_MOd0<5B__AV}^],nA&p-M${AzsYH6d@w1?G,"
      "|4+#[![FV*4";
  char ch = '~';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_95) {
  char s[] =
      "/HSf]-rf*^dJXX38k|UR?gY9W4a<=Km~ycvQXIv+w-GEd0`o(K,2[qtlki-bfS^p2JKHZF";
  char ch = '}';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_96) {
  char s[] = "C";
  char ch = 's';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_97) {
  char s[] =
      "~3|::(LE+_EuqKw+`y7<v}e~2,s6aazti2h``}+cZU:G1qwEY/~?L*N:!^/"
      "E,XVuy{.I7`fs;oZfYA:e)oORY==7?(+*fP7;7-@s";
  char ch = 'V';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_98) {
  char s[] = "tn`#=I7";
  char ch = '+';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_99) {
  char s[] =
      "(Ig6[cacb5j7,DD6f&rfW0j9&n~;F~3HxHiPO](u6}gg589K~2{xP/"
      "Kx.XW.Dp8:H;WWTax{V=s$^9=i~FotDBRD,.KjbnL*<J/"
      "3KeK9AL?xf.89xStHkL[D><$rmS}:H2^+-8!";
  char ch = 'S';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_100) {
  char s[] = "22}$kU<p{!Ix$wSC8z$`gM,R[8wui|0P~m`i4O&#";
  char ch = ';';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_101) {
  char s[] = "eDZL`{.yeCp|:Ow44i_PV1onL_hG6C!PN!~V=";
  char ch = '}';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_102) {
  char s[] = "4DBM~;dR#|B:+Q+l*GN6{=k74Ej}fM.[";
  char ch = ')';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_103) {
  char s[] =
      "E@Z97&./,-zO{p?dEBvxrniPc</*@V{aaECY-YmnK=W_~/"
      ",jw._ZF<xIXPbR2)Jk82lJqMD0)=-wo?g_*(eB0h&w?_/O7eBeG|ET]5*u,u{=eI";
  char ch = 'L';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_104) {
  char s[] = "0a(i][Ytgr.o8p{4D{kZGMuko3Piw((do?];T3pN&<.5m:|.N<";
  char ch = 'J';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_105) {
  char s[] =
      "s(KTlo3y(VExA{PLwl]YK?UFg#$jJ<~U4QLISnw=bVurY{t{KvtE>v7#KJ1r`u>2u;d9E|"
      "AWM]*:N`Q~zp#vc9G4UBfR6r:D,LjT7?zsrp9~l&{|hc&exH;KZy|N-,zA.^>Tr88!N:";
  char ch = 'X';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_106) {
  char s[] =
      "(UN<n;gwaSmy^:v3}9eX}}R^Kh`u&/"
      "pv[,88!>h@GUMCoGM[RC1~iGJuTX!4wn,xXiWzVaGjMB0yjHFyB{b7&rx-12!+L_8IFq)Va]"
      "wsPq@G,}ke<";
  char ch = '{';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_107) {
  char s[] =
      "HM]XqN[Y_AIR[jlEFDdxa[L6yNJ*Fl9BrifW#_:j,e/>UFc,Si+dEyDIu<Kj#_Hz?C<`/"
      "l$0=-u/F^$;)?Q`;0eS9,xZ?-5_{^=R";
  char ch = '3';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_108) {
  char s[] = "W=R5iGe-~b4kuYbnW*cIcZpVX~5s0+dKjkPyIn6M4pr5;evS4-_)]R;$utj[L)";
  char ch = 'c';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_109) {
  char s[] =
      "MG-E/)lyVU5Hf9uEU8Okcq]U5(u/"
      "`rDufE!y&v3jG.,?1Z#xG5(WiCrU?[o_~RdydaG=]ko4y1kPbpt(r!v";
  char ch = 'Z';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_110) {
  char s[] = "n7N*KL;1!{5vu}3]mE*uNny1Y.QJ~tEF;#&cof|bjiUC0";
  char ch = 'H';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_111) {
  char s[] = "_S#I?H[F*JOA";
  char ch = 'Q';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_112) {
  char s[] =
      "?)@O.1#ZrXR,3Fc[mpOeK<D}>{x>kc^._y02-Z-f3Y<;S}T{.mYSIcid5T:GS}!Yn>8G3l."
      "5E?@3`Lv:T;{QUAla#XHNwhKaS";
  char ch = '@';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_113) {
  char s[] =
      "4~a4GY>To!$zl@f:n~95REdxt)&QDPL-oIP>37i+AQJ8kz|>z/"
      "?g3pt@U>?+b{)Y:jF7_n_7NVRJ2)4wIKfTx-/aOyF|WdMpGC/H^_dhsS4Pm4>,p+@g";
  char ch = '(';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_114) {
  char s[] =
      "q7E^u`nZm<QN1VatA?emC0HY>G/_g1Ya,$|s^X;CYR#C|j=yVQw/"
      "i,0]&{xSi]kfRefc(d^Dknxu);W&+L2b!u,eJ[M+CcX";
  char ch = '}';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_115) {
  char s[] =
      "r{o[LOADBSXhm4lxC!&vwAGtnJZGFYX>-_vz#v5hzstov)~Zq)ikRR1>&Bdn_$n<ey|cJvE("
      "(*sThPj1xS#g8*XQ~KJ.#BOiu)i3_l8woF#r";
  char ch = 'x';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_116) {
  char s[] =
      "ms/"
      "x9`d4!w7i,03:Vh6h5OM2zYDcI7yfiwbX|W0lj$ek_(jyn;:t:~RFH}Cc^$6^U:Jx,L-"
      "aT8J5g9bgCq6Nx$I2bJDUvle2z])tS$6^]`D-f;$Uo=sQZ";
  char ch = 'w';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_117) {
  char s[] =
      "L6uw8JIS[vu~$tLkHgl!/e8K]<Nh92T<s<HX1aoF1PHxuYet54.OQ|/"
      "`(M4>hxzT*kkeO@a=OYDyb";
  char ch = 'r';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_118) {
  char s[] =
      "$>4xJ&aY^`@X:d9AKkt>)pn1@Bp}+Jl9bmKHgo3G*Rw=b;=AqQ/"
      "A.WbcKY#~NS&SduPqH_GvC~330)0-lMeov@rl1+>v|8";
  char ch = 'f';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_119) {
  char s[] =
      "RL:&I//!-CLk>*5`fQbHUhBz:l6I;{n}CPFHz(?sHJv7c>#Ln*Di/"
      "yJG5_GO;F4hU).ZDf?)KHi-^h6:U1t{R1hR8v[:yd|=>0aPA5i0Q[6Xh6GzP="
      "R9DEjiVFjv0@?soUaILxUWu@rGN4H}B>";
  char ch = 'k';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_120) {
  char s[] =
      "zxJIhDb{=WKWg4):{<U,}`W[GSD$iceO+xqPQ24&FMr0I~92ygJo=;cP*F29Ph/Tj#*rxWs";
  char ch = '0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_121) {
  char s[] = "URF1/!-!f/L$~{]RIE~OdP^Im]Pk@[!&aa`";
  char ch = 'e';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_122) {
  char s[] = "+U$zqm4P99fc6*[mYt-mHRZ6c^3EVdGBpj=SCS0";
  char ch = '?';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_123) {
  char s[] = "uXB_k@]>&X!L|S1,0FJsIydjMa@GRq-[awEhQkqL;p:u#j9`a)h5(PZo/+7J";
  char ch = '*';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_124) {
  char s[] =
      "V|)XU)hF@:FIfje_0.r9e,:)Rp<q55J~Yl.?<o4g*zYQ>/"
      "RDWsngEm=tb3pun_jc#W0C=&b!0pw8qs`!qI5oK.;qBS=N6S7F-z6afM~(n~kk6vhMvWI0#"
      "IgX`&,1bqrGsmC[vK7Ul!G)*HSGGLTd}a";
  char ch = '0';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_125) {
  char s[] =
      ")Y6:vcfHjTsfjHQsH#D-Iz68[LXWV4MCs?=Zkz}v3Q-VL6.jypXe:CBHm51.*y?#aaeah`$<"
      "rr!L=JM>EM/:}VgJd_8a9Ciu@w=&5KuXL?i+i";
  char ch = 'P';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_126) {
  char s[] = "E>{1Qi`.6|hC@06f8f.^u```cE}IQ)S`";
  char ch = '=';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_127) {
  char s[] = "pH~8c)ldYFO@Knmkd#xn4B-R#[YvswvQ]Q/*kxk+*eFzt/2Z@N]8Zjw;LED";
  char ch = 'N';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_128) {
  char s[] = ".$t;Sg]N_D<.!:Scxn.@=1Q";
  char ch = 'g';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_129) {
  char s[] = "*;Vsmw}aoL@EW9L[RJSEYN|&te-}e@s|Ife3hm;L;_JNQf4Oc+0]7__{";
  char ch = 'q';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_130) {
  char s[] =
      "NC@wapSPTcw>nwp6_mt1?FG;~/"
      "b>6cX2rJK9=G8~`rw_+Vw>R,y)N4LqC,}`t03s[5+Tc7$xz6,XJ;Sh(-<<Lp1rK(6!bZ";
  char ch = 'J';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_131) {
  char s[] =
      "#6jdTJ<wM5Fn7NH`W+5B-ERb2VKyI]n8>D/qGwv8`iP.kVyc>@zp1#/"
      "<wWPkDUjv|:SnT$}BBqn4?7^1/,9*-+l*kU@;kk~?z+0mE";
  char ch = '~';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_132) {
  char s[] = "}1/IQbjqzhXpRSPhz]$!?`)=8&-Fg#E((NhE5wSrrwq}dXnuU@Ck<Fhs?nJQIK";
  char ch = '/';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_133) {
  char s[] =
      "&40r)Uc-P+7)k2yzlN$aKCKiUUch>apS2n_4`sBEL$sq@]Fa+|:L{j=*K^HhUXRA:ClV]?a-"
      "6x{caZQKz5ZjK)9]j7G]8xT4m.L|^tM0)wk():n<lUK9:=HiB{Ew@0cO";
  char ch = '*';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_134) {
  char s[] =
      "vOTVAPjew4c|a2-=>t4x0Lk:{hnw|GJdRt$76@4x77cSLk.Tz]uEs{v:t4L!w*:vFx]S!]"
      "552Lsim}a;@6r;";
  char ch = '^';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_135) {
  char s[] = "RWc-9qQ]}ZU].#ZNJzLga{3l0MN@B2u8N|92q[qu]+os}Z0u3knbbe`i1(_YfzC.";
  char ch = '|';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_136) {
  char s[] = "6lve~Ey(/4wwA7A_@&6Bp8n<D$*=[$tY}2e;h]ag";
  char ch = ':';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_137) {
  char s[] = "@vIDI?UUz1pX1jb";
  char ch = 'e';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_138) {
  char s[] =
      "_Ej*y:lG`&s>?R.V_WH/"
      "z})WdD![L_]a203i*k@@QzV|8!()Tpb;MT(XgNp)t#umcEGB(_zQQ=Y[3T5{";
  char ch = 'f';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_139) {
  char s[] = "bx/1+{F5{8h4r4;F(>X71HO[T&QqgQ^P6{}KdWU0u3hF`!l[RRF}RP[2U#CtIA5p";
  char ch = 's';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_140) {
  char s[] = ")>O;AE5ttp.n^}Sdag-bQ?*Xc<P*Wj7E]17";
  char ch = '>';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_141) {
  char s[] =
      "F.1~.-_F6;A9XB3g*WS<tR0Lk/"
      "4u3Oi`P}p@NQzBm@c_MS)`EzY!-M;M2iI,Ug.9H.v:mWNp9^]s";
  char ch = 'b';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_142) {
  char s[] =
      "XtRboPj9:Qtpn[MKpOkbl:6F@9,V>SJ5o@e=>>Y;kaz/"
      "Iq1(CslWlKNwcMw3j?]a+onE078m<ATbm&:.)yF_mRJtC!]KCqA`N/=]BV0S=";
  char ch = 'F';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_143) {
  char s[] =
      "^7z*Z],W@hp,vRk5GG$+[2M.c^ZEF++f4BkNDsC/"
      "XQG`X!gaza(^cQD9{]6X}cjiMOv>k2)fq4vgIst+@_wu-";
  char ch = 't';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_144) {
  char s[] = "j[";
  char ch = 'm';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_145) {
  char s[] = ")LLZE~&kP.#(";
  char ch = '1';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_146) {
  char s[] =
      "5B*BVNEY7]Wmht+2SekT$_{eRYfsY-DlX$8_U$uHO:&O#2nb:1X;=vvK&f>{C>x~39uQe*&"
      "G#Wye98>FFv,sql{,eO_";
  char ch = 'i';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_147) {
  char s[] =
      "o[&#Y!;)ZY7jQfP]h|7-,8w^vm_@t<p8x{b&!(eXqt9zCLVyawn=_*$g8Hfv,4}SU`rqPa-"
      "B<!ZG;fd4$)5k~`D2_.g-Eq9kCR!thIV/"
      "&r1Anjn5Y6(]mpZOi-0C*eq!y9hIu?,oCgoZh-Ec?]";
  char ch = 'E';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_148) {
  char s[] =
      "Uhw=5*A|g&c>atm.GH8.54YEIp5PK.2Yew)e0i`.mt}eR6bgsG3URPj5I(jpk4Tmu;?"
      "k254Tj:~6PnC0-?^T";
  char ch = 'W';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_149) {
  char s[] = "!x8Y2&~iRO-ZOdmlq:Lx?R?~UPD4ewjy_[{9tR1(So#vjq6:qD+#o$p~61,ZU";
  char ch = 'G';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

START_TEST(strchr_150) {
  char s[] = "H{}TB8j>iql|$x";
  char ch = 'Y';
  ck_assert_pstr_eq(strchr(s, ch), s21_strchr(s, ch));
}
END_TEST

Suite *test_strchr(void) {
  Suite *s = suite_create("\033[45m-=S21_STRCHR=-\033[0m");
  TCase *tc = tcase_create("strchr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strchr_1);
  tcase_add_test(tc, strchr_2);
  tcase_add_test(tc, strchr_3);
  tcase_add_test(tc, strchr_4);
  tcase_add_test(tc, strchr_5);
  tcase_add_test(tc, strchr_6);
  tcase_add_test(tc, strchr_7);
  tcase_add_test(tc, strchr_8);
  tcase_add_test(tc, strchr_9);
  tcase_add_test(tc, strchr_10);
  tcase_add_test(tc, strchr_11);
  tcase_add_test(tc, strchr_12);
  tcase_add_test(tc, strchr_13);
  tcase_add_test(tc, strchr_14);
  tcase_add_test(tc, strchr_15);
  tcase_add_test(tc, strchr_16);
  tcase_add_test(tc, strchr_17);
  tcase_add_test(tc, strchr_18);
  tcase_add_test(tc, strchr_19);
  tcase_add_test(tc, strchr_20);
  tcase_add_test(tc, strchr_21);
  tcase_add_test(tc, strchr_22);
  tcase_add_test(tc, strchr_23);
  tcase_add_test(tc, strchr_24);
  tcase_add_test(tc, strchr_25);
  tcase_add_test(tc, strchr_26);
  tcase_add_test(tc, strchr_27);
  tcase_add_test(tc, strchr_28);
  tcase_add_test(tc, strchr_29);
  tcase_add_test(tc, strchr_30);
  tcase_add_test(tc, strchr_31);
  tcase_add_test(tc, strchr_32);
  tcase_add_test(tc, strchr_33);
  tcase_add_test(tc, strchr_34);
  tcase_add_test(tc, strchr_35);
  tcase_add_test(tc, strchr_36);
  tcase_add_test(tc, strchr_37);
  tcase_add_test(tc, strchr_38);
  tcase_add_test(tc, strchr_39);
  tcase_add_test(tc, strchr_40);
  tcase_add_test(tc, strchr_41);
  tcase_add_test(tc, strchr_42);
  tcase_add_test(tc, strchr_43);
  tcase_add_test(tc, strchr_44);
  tcase_add_test(tc, strchr_45);
  tcase_add_test(tc, strchr_46);
  tcase_add_test(tc, strchr_47);
  tcase_add_test(tc, strchr_48);
  tcase_add_test(tc, strchr_49);
  tcase_add_test(tc, strchr_50);
  tcase_add_test(tc, strchr_51);
  tcase_add_test(tc, strchr_52);
  tcase_add_test(tc, strchr_53);
  tcase_add_test(tc, strchr_54);
  tcase_add_test(tc, strchr_55);
  tcase_add_test(tc, strchr_56);
  tcase_add_test(tc, strchr_57);
  tcase_add_test(tc, strchr_58);
  tcase_add_test(tc, strchr_59);
  tcase_add_test(tc, strchr_60);
  tcase_add_test(tc, strchr_61);
  tcase_add_test(tc, strchr_62);
  tcase_add_test(tc, strchr_63);
  tcase_add_test(tc, strchr_64);
  tcase_add_test(tc, strchr_65);
  tcase_add_test(tc, strchr_66);
  tcase_add_test(tc, strchr_67);
  tcase_add_test(tc, strchr_68);
  tcase_add_test(tc, strchr_69);
  tcase_add_test(tc, strchr_70);
  tcase_add_test(tc, strchr_71);
  tcase_add_test(tc, strchr_72);
  tcase_add_test(tc, strchr_73);
  tcase_add_test(tc, strchr_74);
  tcase_add_test(tc, strchr_75);
  tcase_add_test(tc, strchr_76);
  tcase_add_test(tc, strchr_77);
  tcase_add_test(tc, strchr_78);
  tcase_add_test(tc, strchr_79);
  tcase_add_test(tc, strchr_80);
  tcase_add_test(tc, strchr_81);
  tcase_add_test(tc, strchr_82);
  tcase_add_test(tc, strchr_83);
  tcase_add_test(tc, strchr_84);
  tcase_add_test(tc, strchr_85);
  tcase_add_test(tc, strchr_86);
  tcase_add_test(tc, strchr_87);
  tcase_add_test(tc, strchr_88);
  tcase_add_test(tc, strchr_89);
  tcase_add_test(tc, strchr_90);
  tcase_add_test(tc, strchr_91);
  tcase_add_test(tc, strchr_92);
  tcase_add_test(tc, strchr_93);
  tcase_add_test(tc, strchr_94);
  tcase_add_test(tc, strchr_95);
  tcase_add_test(tc, strchr_96);
  tcase_add_test(tc, strchr_97);
  tcase_add_test(tc, strchr_98);
  tcase_add_test(tc, strchr_99);
  tcase_add_test(tc, strchr_100);
  tcase_add_test(tc, strchr_101);
  tcase_add_test(tc, strchr_102);
  tcase_add_test(tc, strchr_103);
  tcase_add_test(tc, strchr_104);
  tcase_add_test(tc, strchr_105);
  tcase_add_test(tc, strchr_106);
  tcase_add_test(tc, strchr_107);
  tcase_add_test(tc, strchr_108);
  tcase_add_test(tc, strchr_109);
  tcase_add_test(tc, strchr_110);
  tcase_add_test(tc, strchr_111);
  tcase_add_test(tc, strchr_112);
  tcase_add_test(tc, strchr_113);
  tcase_add_test(tc, strchr_114);
  tcase_add_test(tc, strchr_115);
  tcase_add_test(tc, strchr_116);
  tcase_add_test(tc, strchr_117);
  tcase_add_test(tc, strchr_118);
  tcase_add_test(tc, strchr_119);
  tcase_add_test(tc, strchr_120);
  tcase_add_test(tc, strchr_121);
  tcase_add_test(tc, strchr_122);
  tcase_add_test(tc, strchr_123);
  tcase_add_test(tc, strchr_124);
  tcase_add_test(tc, strchr_125);
  tcase_add_test(tc, strchr_126);
  tcase_add_test(tc, strchr_127);
  tcase_add_test(tc, strchr_128);
  tcase_add_test(tc, strchr_129);
  tcase_add_test(tc, strchr_130);
  tcase_add_test(tc, strchr_131);
  tcase_add_test(tc, strchr_132);
  tcase_add_test(tc, strchr_133);
  tcase_add_test(tc, strchr_134);
  tcase_add_test(tc, strchr_135);
  tcase_add_test(tc, strchr_136);
  tcase_add_test(tc, strchr_137);
  tcase_add_test(tc, strchr_138);
  tcase_add_test(tc, strchr_139);
  tcase_add_test(tc, strchr_140);
  tcase_add_test(tc, strchr_141);
  tcase_add_test(tc, strchr_142);
  tcase_add_test(tc, strchr_143);
  tcase_add_test(tc, strchr_144);
  tcase_add_test(tc, strchr_145);
  tcase_add_test(tc, strchr_146);
  tcase_add_test(tc, strchr_147);
  tcase_add_test(tc, strchr_148);
  tcase_add_test(tc, strchr_149);
  tcase_add_test(tc, strchr_150);

  suite_add_tcase(s, tc);
  return s;
}
