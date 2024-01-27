#include "test_me.h"

START_TEST(strrchr_1) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'h';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_2) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = '\0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_3) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'R';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_4) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  int ch = 44;
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_5) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'Q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_6) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = 'R';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_7) {
  char s[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char ch = '0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_8) {
  char s[] = "";
  char ch = '\0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_9) {
  char s[] = "";
  char ch = 'a';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_10) {
  char s[] = "\0";
  char ch = '\0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_11) {
  char s[] = "\0";
  char ch = 'a';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_12) {
  char s[] = "l$TGWK_!HQ:ad?GM=))4Pt^R3Sj2!2GB<g-Ib>k[}nt~R7j9}+qc(v6B9BzgU7";
  char ch = '[';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_13) {
  char s[] =
      "[^Rv4k+^~V3nO~H`H&wd@ZU%/"
      "KzzW}[w(!ahQb`CDFqE([A&<vxfoIGf2J&3H^K`lAEwu7V21twhVwGGI1|@^*7eV!4PclT/"
      "sq1G>Z[,)vENpwi[0CrqD?+D[X";
  char ch = 'j';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_14) {
  char s[] =
      "l|e4X;aB0s${RZ&&3$XEN[oWyT5zfk|KIw%1,vW].&z,~4sWF}{H_HFChdl#5pXkx(,"
      "V328GxbRMeMk&Du,>3Q~B2.{>=>9cFXw<f28.D/_1BMejgqG(*fFxO%#F+H";
  char ch = 'v';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_15) {
  char s[] =
      "rskUqo1s.&z=X.lxPU1Ch84>IV@!#YH6~8xb2mw^X%+UaY+0m28d9e[*w9JIf#&Yh9?d>UG#"
      "kw*r@[eRn";
  char ch = '>';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_16) {
  char s[] = "&?&,eR981OR-EqmVm@I08)s.orxEW[$Pz1/&)`$i`wjugT?TLP3xPO/AsP6m";
  char ch = 'q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_17) {
  char s[] =
      "m4x-;mkml0#WGLMv!QdUX($YZ!y975*SCm:$3%i.F8d5ta(.,.h;r/3yOWb2T/"
      "%LQt;A_Y9qD|BHrmJHDNfP[ksgjDAdRRLypoE4gUP9ej&<";
  char ch = '8';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_18) {
  char s[] =
      "[-pE}j5a<{S^&Ni`)b{B+*x)05+#^>oR~gN!C/"
      "8N>elzU+&|Rt~g^|+jsyZ4.THX!u}6M~KPlVhN{Ub#bbyTwdvd2@r%{H[vK)Ez)oX6^lV!_#"
      "TREQ!?RfYl!*eB{5s+-^<l:%.";
  char ch = 'N';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_19) {
  char s[] = "g&s5AB0^sgch+-Z41,C{O5C9:XJ(1Ue!A=0+>^SL*7";
  char ch = 'I';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_20) {
  char s[] = "(q";
  char ch = 'w';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_21) {
  char s[] = "UQ6+2jsw{q@&4z_l;R|.WC3KDMIHJ<<hd~,?;`s|.udF*u";
  char ch = 'b';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_22) {
  char s[] =
      "K4e1OUij->]TUpxxv}:}^RaYVOvPK!rM%XfRs9x,4>9o>?<B0W&pw+S:xqjJD%fF#bWJ8ji&"
      "?D3zE07o}9P0zffp>^?H+8%VF?E(Nuwv,)I#^sd(Xnw(y";
  char ch = '5';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_23) {
  char s[] =
      "NX5QYhu{`a71)rB`*HDR$@U!7Qcg|lswd**s,aZg)lO6mo2zPooTJaE[=dh}c+ITCPo5cC&"
      "hIT;|F~}jmx$&Fe.EsuWK2Uv.&rUZi#2hI#Zh~1R^8sxwo!1,X,pWt*-!K";
  char ch = ':';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_24) {
  char s[] =
      "Y_MMo6*jVFpU}NOashU$NlR%e(>p3,X@D|1.M&nI4|fUG*aDm)V<^5-z2nG9$0/"
      "c0qp@ehh#`+_u|ovoFunV#MV*n{di[vXq[ZJ";
  char ch = 'g';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_25) {
  char s[] = "v&/:xl*[G;[GxbF/xPkJ45[%mSoqo%Nq4UMkr+jzu>o7>D";
  char ch = 'q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_26) {
  char s[] = "y*FUyehOOsGq^3";
  char ch = 'Y';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_27) {
  char s[] =
      "THUL;=UVVr[MPBW;W.2c`=LxQ;SLPZpXp;<(i;EQR]TlA(NY%GRilo^oFd@TWdv(S?^$=ZH}"
      "JmbmB)[snrVqF-{3E_;=)(Ss$sA>eq!do$@V0|z@{*==m43A2f;q;l-}Es5Q&n&";
  char ch = 'l';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_28) {
  char s[] =
      "u9=@ZW|Mat60LAb:/G8Qq=^JX-ez_BfLd>fl0:%;AwXoKWE()^4/"
      "a6FkmZ(-<z@Oztfvi=@IWCq5@^_fiqn^am,ARxu]|{_o#Ia:f$1?Yu!O%LA0d&";
  char ch = '2';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_29) {
  char s[] =
      "PbvY;/"
      "TJ$>V2HgAv6X<,ylZ:o+1aa?zD,[lzIwlV76@w1|hvNkUKTMeUJkp}@9@#426Ox}ruxd`F,"
      "xh@;qV8aGGaL<NyE-J5o)E(O2Ts{K;@(z`";
  char ch = 'X';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_30) {
  char s[] =
      "-nn4`>gLuP=$3)g@8`0rkT~;[9dGSs=6xg+Iz5I4exVz#W)Gkj;Y9v7;CG|.ywQedovRz!%"
      "FW4e}[,fT";
  char ch = 'A';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_31) {
  char s[] = "RW,]+FZzn!gf[E>3z#WTbA&bvPVzi|C>N:^7_}L#~(2wa,At--Mn-CfI";
  char ch = ',';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_32) {
  char s[] =
      "9-tnK*SG**zrIq,?t=_x-*p=A1Bmu:kFk=Fx0<vd82@X}mmi2S`d:Hhg,M/"
      "FQlrg}m23[X`il=M<s{B=8alT5Ii8~D5`Jo_GG%K22Bz-H:a";
  char ch = '&';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_33) {
  char s[] = "*p*h7erWg#MpQYhJH^3-b+tYRb68`N*8};yQeWJM|Yon62Sa;XHP(5@t5";
  char ch = '^';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_34) {
  char s[] = "8;)uO4T{n{.~/_S{X%V*a9,s<^h4VaO~-/wu";
  char ch = 'U';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_35) {
  char s[] =
      "m,N7x?RjA|iZyCww!|$tG8D]^UW]x21ze(XC&?^FKs$/,9q|(8%=/"
      "<*5`4:}0Xhu.]0xlxSJ)/f375>Q+v%=R.0bw<}O-wC@b`-mS8g4yA-lrmub1k0";
  char ch = '(';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_36) {
  char s[] = "dfV%Fs7.w^?4slav=#H8N_a<]H./GCwJTZ%9jG";
  char ch = '`';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_37) {
  char s[] =
      "?.lPq9xjAFLrb`V$7$$G>;;vP}w/33r,(yzafaON^.nspHhJID@/g|1S10QrDOnX[E/"
      "(vL$%$]kH[ve,J4vC*/=;ta$qwOve5>7XJY/#okw]:b8<6<~L|imT4{r-j]o";
  char ch = '9';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_38) {
  char s[] =
      "EYN,Z//"
      "w1V!!uz_#zj$PVn8E|J%6ZSiJ&wP$z>fML[N:xFKdvtLD_WKc05)l&1|;#38m&B85=nu,ll_"
      "L9mu-@v|ttk,9-lm-]06ne4na.hV,Xn5VLqz";
  char ch = 'I';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_39) {
  char s[] = "}:kjcHOS#^q;5LJC";
  char ch = 'm';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_40) {
  char s[] = "?_}Ao&EN~Q89_A._";
  char ch = 'X';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_41) {
  char s[] =
      "(;?B4LNi%^owTq1DwueZEtTd?SJ&Pe>yFautKy?4LpN3.*C`z>&(>1^_}o;j9&O2AZximFh]"
      "VC8cMd`m%gM2d7Q~e%U.vPfAeEPS+>byzG3ssE7g|C;ny](P{N";
  char ch = 'c';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_42) {
  char s[] =
      "H,sWRN5zQ,2%#;q<.27|ah+d63J2JQFCD<@rRYxoyeEI84.oOn`4/"
      "s^Cu.piv?&uR54.7vTzLIct3vCCy0n]bM]80fF~#-OyQ&}C~5C|U{;19FoU{T;l>AT|4cNf!"
      "^1";
  char ch = '8';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_43) {
  char s[] =
      "|0c~jz}H,<,7P2}iaVX6@Q^S;n_fQS(ymW/9_n]rl4`eohBi>>&(VqecV-eV[o$)x,V>mtO";
  char ch = '-';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_44) {
  char s[] = "jII,oMwCN6}M7;IsC&&MC=)21u3SYO#8(.aRT8";
  char ch = 's';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_45) {
  char s[] = "4!2+a5st,M3,-n-oDH~DcZ";
  char ch = 'w';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_46) {
  char s[] =
      "C?X-pnjQVyJ]=t!t=~hx:>=<mKG<CDIyuZHql-.=uy0ec{W+W5|<pKKT;V5}oInB~q1~Hii,"
      "1?nZQ.g,5vb{Z(FM#D>Fm#C!jVOiP/@&rS^VM^G|?x4I4QTIzp}*!x8Wa8%Q>:]B8+OPk";
  char ch = '%';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_47) {
  char s[] =
      "lUZ}q&d3f^]22,5a{JVV@VWA+R`#C[^u@J,_e:ZKaz},EK|6+Ni]%iXXqu{zUeBK(h8L/"
      "]65h<]HW2&,zWnLZ#-@Pa%;;@7:<AD!qnJHuMzzx`cpP_1jm{{3<mT/"
      "_D*$N4Ta_g$eN!;9Zo~wdqOO";
  char ch = '2';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_48) {
  char s[] =
      "VD95!R5eUa6O#$e5)c^srHIn@=WYMHt$)HZclk2@JkAcf*vgn{r52r>-[V?U~F:?"
      "SPPZOWbFJcHo`t7>M[s]c&3|$!)HvC";
  char ch = '3';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_49) {
  char s[] =
      "p6+n6_Q`$kbj6tz^Io`oCmkN~7{%/.@ps1&ityFygF.k!PsRjAN#iW2Y<Zb5bpmPV[.)E";
  char ch = 'u';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_50) {
  char s[] =
      "P7d75<yznl4xK9:|55:-&yj:dN&EBJ@wPU)vb%YN|R*)*HlH:6pDoHb]rGqMpu>7@XJ0[v9~"
      "_u&aB";
  char ch = 'f';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_51) {
  char s[] =
      "^e.15Irz$4u99=y($id6%%j1qh8K%^U6Mt@6/JP6i]1r3}-=LIG6P0>s524I3<2{qR/"
      "NzS6zVpXr=K(7m^WzQi~z|`0z=;>Dx@2{E(<;,h!u1oZb#}9OV^m)Y$YkcAqn";
  char ch = '%';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_52) {
  char s[] =
      "|({O}f8AOI.12z}l2R(#%4sI7~zVV81mzZ*!P]j`d8iD63+E<_,nxsk>=[O|@L):=#"
      "TMBS1a8R^B(juA8O4p}>%d[,yS]T#qCftPdvjfb$g";
  char ch = '6';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_53) {
  char s[] =
      "NKRL[ZnH?Ij7gp@,j1B$5!193A4g69CQ<,vN;>KFUZqt+$T+mA#*]8HTw89oK4>eF6onE`K{"
      "XW]Rcy?hNdGH$is1t;B&aD=U3FYiY%Gk>u92QvVeiBG-)EN%D78/"
      "N{,>7|f&<|GcFqe>d+H6c!<jw$";
  char ch = 'X';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_54) {
  char s[] =
      "jj5K#LJM]U*,hGF&&:NB[~)rNj|Y{O^S,!L]ie0%WZ0m4p`UA]kU!OUCU!Vj6/"
      "mkM:Jmpzz:w9L`y`~H8wx>h(JJY&?2c0v(UV}q!fe_X#XjO,2K/d;-t6%HxB4/"
      "+7i}p@@1#q=4WzR!3O3g]01k^)";
  char ch = '9';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_55) {
  char s[] =
      "86oe926@3{>e1o&{OjI!HA:vF~-UvKt~-z(Nqn7cu,FDsuF_(:BwXh6X9bLXe-@^N4sNxG#"
      "A`S";
  char ch = '|';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_56) {
  char s[] = "?2tV";
  char ch = 'S';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_57) {
  char s[] = "3q.@";
  char ch = '=';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_58) {
  char s[] =
      "mlxe*Oi2lLQT31&0Nbx@IQYq-#`7AA]Pj?Zs|u<G-W~P)AOuK@8D}Ym*J4fuhTi5zln[{"
      "Wfd8zh50SJGP^l>|5hA0o8y4[)(xe+kWm~;j>W;?BJK%|6cm";
  char ch = 'Q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_59) {
  char s[] =
      "cw2]o~ys+HPrn]Je%QS_GGUwR-UXX:xhgFC;0~3)rAH>pD/"
      "UoaF;wKP!3ze*W$m<U]_o@H~j$,kd;@~?6`.tWFltcFR)avc;R,0k(##}fpy:7zA";
  char ch = 'J';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_60) {
  char s[] =
      "<g{gFn$}E2]hWhECUN=ZN4&3%mSh[Yew|b+plbn1`HBe(KQ>=1.zt>eiH^0<TXyg;o[/"
      "%|^F3v4iF&#wrXN";
  char ch = '>';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_61) {
  char s[] = "Pv#&6<T%LR12]n:hrI5#1Y3o+]*rj8e,>;q6F1hq7D;=`:7fpxs[<8ajjU$j0d";
  char ch = 'H';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_62) {
  char s[] = "=";
  char ch = '}';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_63) {
  char s[] = "jj`Ju{!nu=xjTj%PFrYrTX5yJ?>7T;";
  char ch = 'S';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_64) {
  char s[] = "wd3^DpzMs-.Q&QCIp5(|`B.XoD[i1P9fs.B6]+v>HK;WR)n5P";
  char ch = '`';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_65) {
  char s[] =
      "~1zjyXlN2o)SV`~32c4T4jX+:AsY#DlcZd4l$N|>dfMx;rBX=X5sKgy7DC3LH<37%d-^W.o}"
      "n[m~v<B&t1W#]nokAyIa?,+gfZqh(iZvtB@eOJ>a`7$Ku]i?TmxdoY$";
  char ch = '}';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_66) {
  char s[] = "j@+c(1,L~6VvXn]z@Hg9cD{keN$Um-3I-E:nYBzm1v";
  char ch = 'd';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_67) {
  char s[] = "a(D^/3jf";
  char ch = 'G';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_68) {
  char s[] =
      "6PV6j(vcRS&^`txf{~MKsN`>,T9oJs${g~8yOI,X5z-4>PM6wbB>^.t(Grw1;yg7+(="
      "2Ie3I%P/%L8K4h,4hiq]0duT?@u|/";
  char ch = '[';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_69) {
  char s[] =
      "l%~-`z2QbY7|L4Y]d;qorc{r8vOtvEc@:If5$0LUbwA!j=!!A8(a&%2b10C%~>:CB}`"
      "NR6r1HYYc&%V}2n_anO-g3dkMkG(Y#YU-e@p!l$z*=V&S!cFY[l;#Js";
  char ch = 'd';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_70) {
  char s[] =
      "3b>OPDeNL#JJ]9q!RFq<|t)15t;AsJ*iJ$+1zM;|O>pMcz#vEB5u(B},e.4WoaHn{M`"
      "BOL7fI?U}!oMQQLeD#8%g";
  char ch = '?';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_71) {
  char s[] =
      "Wrc9^m)xmFeo?/>nn)ZJx/"
      "]>,Z@dc9wxbOayp~T>C}^Fx,XA!VUT>p&Uc-gzq$^{<MC8bR,@(jK.ghC63Y9-Dy_.=n+"
      "FLej";
  char ch = '<';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_72) {
  char s[] =
      "fj){g#r?o5t69hWjThmqHne@h.?WWvOHI+Atg]Q~~:&wziE1`h8Fzcy[fl~5x&YyZ?n54]Z."
      "%B>FMJ5!<K`~0<%3os<UeFMI&^u#HSf]l,q5dV|>Szn5dYl+$bKw<<)@lc5#K#mwxNh,uk{"
      "H6>";
  char ch = 'F';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_73) {
  char s[] =
      "cDZixVcOh*=gRZMMWWYv6lw*w!m|-.J6XkYcBM!F>3ubkTY9OJ,-5Hv7D(~P#?i$@|*Bp_/"
      "vAd_x*0NeS%&c[Wz`B(ZZ+O?PUIMnJq{HKj9eC>g]UF%7Nkx!kK,*u;Pl]v<:cNl";
  char ch = '|';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_74) {
  char s[] = "RwCptC=xZE##M";
  char ch = 'Q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_75) {
  char s[] = "pNnGilI.>7=.l.Nl;p?~ls6YLO";
  char ch = '1';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_76) {
  char s[] =
      "1*N3u+(-ts9J5KHt;7#@4R,^T3Vy)nAk9%.}gLku6Y2,=1<]MjA=[Egk],o3yOx@aB=-Iz`";
  char ch = 'G';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_77) {
  char s[] = "z%!bW6=h0w&XCeM;8sI}tgUVK@(un~_`9=]NExpk_ZXEt7d*32p2.ZHyG)CNc";
  char ch = '2';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_78) {
  char s[] = "uvh&R,Cn2Qjd:cF6?g";
  char ch = '&';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_79) {
  char s[] =
      "lwr1SKG5ep$x}b.cRmB>LyBV$AB/"
      "esEU;?*~xSBIo4qejTcxABdAl&.X?):Ns%`*.S;ac$!b|C@ZX1$x+w_s{h`shecN*g26u^"
      "Mg)pa0K%iL#R8&Y!K}N,##)";
  char ch = '4';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_80) {
  char s[] =
      "Iaj@WF&GNx3Ymq>OrIS!cxt81(G;7$;nf|<*%Z+0,$?0g~>33fG50LK69b]N4}z!,l?eM_"
      "G5)Pc4|7>d`(;k+NY^TB<t,{DiiICRLq?`Ps/f.d)$S<0%q6LnX_JWB:Hqe/{iawn";
  char ch = 'L';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_81) {
  char s[] =
      "#in?UQ]l|m437Fm^pAo6S~88i`8VkfCV~{HPNqxu^l.V&O1dgkv!|A:2Y,5{QN?[#"
      "oMoA6ie1PS%D}lI3.[QHzM2x+d6/"
      "xi,]&udx>;K]@.G!}o:Iah<*kKpeO5e;>eC^:Y--IhkE8%K,Lt";
  char ch = '&';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_82) {
  char s[] = "yy";
  char ch = 'U';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_83) {
  char s[] = "w04omaq_>c(I)_{ging-pstUNV-";
  char ch = 'g';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_84) {
  char s[] = "y&s}2k/WpY38rN8T~Cr{qF=vdnf4?#Mn_tHQMwPL0F>=m^D8/";
  char ch = 'M';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_85) {
  char s[] =
      "P{BgtOY<(UbZWRH$/fZvd,,F_2aIP`p?C}87-DoYvG$o=/"
      "Y<AC0Z7@HS$NAKz{hpDs%:9)c(f9D$*)!Fyue%:vL}O-u;SOF~`3+w^=vR|o_Lo>@ud]L:|"
      "x4q4@up_lf";
  char ch = '(';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_86) {
  char s[] =
      ":+Pm3CM|-Z4Avf.&Oo,bE*bMNOQh6|RmaSyBvifGViP!Sa`oU9:`$iPc=^w!Y-P2:*f=sQ}"
      "G9IWH:(W^ZN=o]hoMN!1sVCu&9ZEVEi-Vy&yU}c8>eCl,eFJLUD";
  char ch = 'C';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_87) {
  char s[] =
      "Af7jd)M_C!gEIg,/ibc#JY;/"
      "x$Dp!C~ukzP)&cj>OvN!$}zsPjop>*zYQI4^-KbLj;sWI+]p;vA";
  char ch = 'a';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_88) {
  char s[] = "gl@xnCI<BHp1Bi?MI1/0EZK3,?tprJ;#cje50>!Zyn4b02=dYq<J>Zp<B4~FZax";
  char ch = 'D';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_89) {
  char s[] =
      "(Jh1lX;Fo}LGP2W9QgYB05l>hvlE49)q#;dQKS:Lz`U{DYWr{1+yDY<#yk}DLLv^iORG:~"
      "onP8";
  char ch = 'p';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_90) {
  char s[] = "rsP=P0P.dYeX/K&+P.{;81j9#En1)QWsv]41Jc_d85a-klGe/%mRRub";
  char ch = 'b';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_91) {
  char s[] =
      "?)L%hU)MrNRtcK[.a}qQc8GvkS(ivD1mQ0%{S$1Jhu2%oBA}uceD6h+C!MM/rO=w4P~D";
  char ch = '%';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_92) {
  char s[] =
      "XWq[JM<sWuF4M/"
      "qk@ruUpZU}|Naeq:wfNh_N2=l@VUG!Nzl)]u_ElY44yc!M@6Cw%4,-9sS)";
  char ch = '+';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_93) {
  char s[] =
      "AtyP,-AOp#6pk-3}]=NM+~lOi*B~bp$!e9;8nVKqLJLx1E[;>mN47P]Q4K}eIoh#hIp;JG}"
      "rVg)R94e`JbjO9+zF:}";
  char ch = '0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_94) {
  char s[] =
      "@5YaTdx.uwRcl1nH=^s9+=BjaLkT@ZMms0Tu@=Mt)Sm|nHD%x/"
      "(kC=2QC,8_Tj2>74X_fYZZ<R5MNi+zQItiu^Dup8<Jq[f<on<%EeZo@LKh$W!TTmVDGMx>/"
      ";oEn!J`<|]tbCVfLU2{Dd2X@";
  char ch = 't';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_95) {
  char s[] = "FJAhKJ8g.P+=|%>l)dw./[MGSGT^0Zhs&QuaGUzed2A";
  char ch = '~';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_96) {
  char s[] =
      "e!d#fhQ+AUGNm5@6Jfx)ijS$w(!6~Hu&!mBD*<hdTA>f]y763-qAth2fc#tqw%$&&}pcj]9";
  char ch = 'a';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_97) {
  char s[] =
      "/peQ@i(RbmFK|r/"
      "AKSxpw<hxC=;.Oz@RxCsJWLUQtmdYBnQ<*?``#Gx2a;AA@J-a!AT&:U$)nr37A_Kr6h6*"
      "PZQU.";
  char ch = 'O';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_98) {
  char s[] = "7KH~`&$Jonz8k1?[GaIxOoAcjCv)V=mcuh)i";
  char ch = 'X';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_99) {
  char s[] = "WD(o";
  char ch = '`';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_100) {
  char s[] = "A]J%Yt%MRYVs;zQe06VzP}Wp/)^[a7c3JS";
  char ch = '@';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_101) {
  char s[] =
      "j{0{A3UdZ]=WG+1|6NlCv[JT7OLNY8$w<deUR.r~k3YV5O`J:(Y176QN#mbZZ]B7uO~HkA*"
      "Fab8>V3uBYmM<@*FXyI_+/l3<a>L:9AX*>/nuv.NNef81J{8GM(&5I(l=*bZM";
  char ch = '%';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_102) {
  char s[] =
      ".7^E!Nt5}7`f-<yf,8mV^F0Z)odh:s6B}seT30;LO2Uj-3hdXf1|6n=WE&VX6>)>/"
      "+H<kv0&AO-t?qqdg!9kl_W*,<N6:";
  char ch = 'p';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_103) {
  char s[] =
      "0tr(ZX~1~}fr{(sb)|hy<!D+.IsXtPsBG,GC}1FLx^@[sywV=-:2GCJlDY3W0H$w&@<D`>"
      "uZ3{Dk_QZ>n<u3gmRNl91Huj>-j*/pW/|R@c-rto9I]hd,";
  char ch = '0';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_104) {
  char s[] = "q,n{C]0+%_.E@uQUZ<uf`r5P~LRh~xU7];9XDZO?r*YtqZHv$|=Ly:~VC&";
  char ch = '%';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_105) {
  char s[] = "pEoK*B&GT,j;shMWvm7bhAx4H?wYT_8u7w0qRWm$X}%Y-9QW";
  char ch = 'E';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_106) {
  char s[] =
      "7b-|tz-&_YKu?r(3H%^3!<(bdq)tJ||lPH8SSR2|z8lhkJ]m*;Qw57F3LQXWivo5}K3oCyg-"
      "_2GF5Jh1tcm*9@X`,4c5[1(YTXa^oZthALq?H<X(+h&B>qU)B$!p,NCs~O)BTzEkgEMIy)";
  char ch = 'D';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_107) {
  char s[] =
      "+v_Z<-M`dCFDY<[}9;f9q,Ly179h~)-{8#7yU;6Dg.R@>k(57,yOe,SJIN?{RO{T[MR6S0k-"
      ",gvQYdmr4_to9t<3(TauKCw55e8_@";
  char ch = '^';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_108) {
  char s[] = "G&@w-nP;]b#rr";
  char ch = '(';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_109) {
  char s[] =
      "*iC}$-B?|gmo[%OszD|l}U:i5jf4GG9_Rfrs23?0T%k_:N*mfw&-,mel4s[tcKJI+Xy.}"
      "DfccEKSDG?07ihrf@^lO1>h2t^X|";
  char ch = 'N';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_110) {
  char s[] =
      "wJ:pne(;~^>)h?*zuZ5X-4}A@ZSX@/E0m}/"
      ",3Jx3QSys{m{$uHbcSX-Ig>nE?m+ovlb<dh`0Ap]";
  char ch = 'A';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_111) {
  char s[] =
      "V0eJKKw`OQ~jXoSZv/"
      "!B<.t@bcFWQZ%g#TOms-UJj2bnu(dl,e76=0Bj.aFMd<#+d9];|xP#v|id#/"
      "1vPpp_8fFKrGW;z:e,";
  char ch = '$';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_112) {
  char s[] =
      "dk8wj3G$ih,&R7&s;+Ua3e|F=VtI}+qT4UYEu%`q,mH^hl.j:;c+M76$[MS1V,^)?H!oqP]:"
      "(+rlwA};&%WB0%Zuz`Y%?LqRfxSItiMuXCcL-N4Q";
  char ch = 'h';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_113) {
  char s[] = "O4J)Lta@}";
  char ch = 't';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_114) {
  char s[] = "m";
  char ch = 'K';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_115) {
  char s[] =
      "tguRzf3S7quota`xg/"
      "+mU3&hdO(7hVu,Lt6B?#-{z_AHIH7_z^Bsr9yhA}hf9g+5Q*:0b(-n%ThJ-c`cpjjCM+)/"
      "|-<)EoJgU:,t61r_X";
  char ch = 'H';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_116) {
  char s[] =
      "X@)Bd@U.[)sQb-5Jeyf]UegE3-:O{5Lv;Itt^EGc&=.,0B.{j(Ap%Gg(16hn~R!h]S+"
      "l28Xwn(#YW*D";
  char ch = 'D';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_117) {
  char s[] = "..HvR-5e,Y3sp[5K,3@32u$L:VIc6(!:@mE]G~SzLLCxlkX";
  char ch = 'Q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_118) {
  char s[] =
      "4J?L/pRr:@0S8w2QB2w;84[;bikY5_.UyP9&pATvr^%WGC-K=-ytX-kW4/gTxw/"
      "3@W;m4BEqpJ{QJ";
  char ch = 'g';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_119) {
  char s[] = "LCfQaf~Ab7)<nj1scz/)nAj4L4^%V6($>bb2koi)D~KH^sv82{*(Fr?";
  char ch = 'i';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_120) {
  char s[] =
      "o{AD,9}q!N?IG6Pd=|~G*!*`QVh]xY-:x|k7(j;f({z+Sf}6TGof,n0wU;6>_UHiB[U]#:"
      "ahl^:";
  char ch = '-';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_121) {
  char s[] =
      "|=uEMtzv],)e9WFCP@FH$?xM4N?P^^<:S5MwH_k2sV`VOR*untVRJP$0AB3JTTj.(UaVwr+"
      "Qk~ku_}LT!<<a;e<r";
  char ch = 'H';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_122) {
  char s[] =
      "{S++oQel?]nfhKqeA6gA0ASByQe-s|,yszBJ@u7Y)=bVR1wya8#r+AdOW=x~O*EsS[2Lc%u;"
      "nn^#`RnDGf-p)17e1:?3]CkS3T_<WdlPY~=[K$S_<C(zVj7[&Zt";
  char ch = 'j';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_123) {
  char s[] =
      "&y$)qZ)/&Y^Gmip{gMBmM~L=}xZ:b#k)LJjE]?Ckk@U&ud/"
      "qcKurBert`=%p,p#Tdl5yRl63x@!O(CwXtr1ceo:>sfnH7YSVkOq|d0}6";
  char ch = '{';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_124) {
  char s[] = "RGG;2nAka,Bpw~GLaY`v~9Vni[*,ws%MO/O6lm|m";
  char ch = 'Y';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_125) {
  char s[] = "{U+@1F35kS)b3l;VSM:E|UVl?eS<{S_@9BnfCb-p>HkAZ39^-o.Lp:A";
  char ch = ';';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_126) {
  char s[] = "j0k?@Y$v^3N>IpEn%0_ey~Fosf";
  char ch = 'v';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_127) {
  char s[] = "^7Nn{1o9}!$HKJP:*WuyhdA>jn}9/%jNB0t;#cbN,";
  char ch = 'V';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_128) {
  char s[] = "7*OZbXiXm";
  char ch = 'l';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_129) {
  char s[] = "AlE_k7{!wv";
  char ch = 'p';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_130) {
  char s[] = "eM2^]y`8j2^a}]d~{V$,fvDKG_";
  char ch = 'z';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_131) {
  char s[] = ">I@2$anQXlu_+I=j$f<Tp+lC$uxn_pHpb@VBD4y]rt<R3yCZwiuUSCc|";
  char ch = '.';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_132) {
  char s[] = "eESDBB}7skT&kKsHJCEav*N:D_";
  char ch = 'J';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_133) {
  char s[] =
      "RR+@c07DcHzoI~m<%r%-TxOw)C:Os%$|*]9,ccWfKF>H%)_C<R6okqn{cfJ<#F+f20dfc["
      "qB_6U`Xg8/Guz@y%`24Np}dH_KKb5UsKK";
  char ch = '}';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_134) {
  char s[] =
      "[rO;Cp.BgW3)54nI:O(%~N008HLrq2D+3`Gf1lGl.VOmnrOhZNxn3O%C(kb>K$31gYL($7?"
      "J41;EaUvk@6FzcVv~s=@aEPWZ4y@.hW[GuK:l^=9zvK&Mn[5|Q|`$;";
  char ch = 'N';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_135) {
  char s[] =
      "b0{cfZ#5~{F&m+N`zxM3dX-$.WJ%435]<kGgc@LvgixV$B3hB1W6R?`YSag,(uj#xA]QjG`%"
      "R5NH,QmkgJF-^jK#pl;^0J@Ry8*SEc{w%dt6;oX:^,;&mLz1I@EnNA_lL+r9:`oG]2";
  char ch = 'q';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_136) {
  char s[] =
      "PQ0fthT]dH2%n4scuRm291_+nuI2Kj58Th.%jQC)&*hqxn$:G^Rg.WvS6ZHcr*CLd(.&pc+>"
      "As1%6]g9p.,jWpPEklE9V#a>9^yn#^;(TA]b7lq23>@FX}^[W>LQU|X0|.;l6";
  char ch = '}';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_137) {
  char s[] = "oBE=i)?;{kLy,,#@}vT^M]*,v3XYUw^5Er/Q;.&gj5kG!BGo~:eQE|#=nXr(YE#";
  char ch = 'w';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_138) {
  char s[] = "7EpC3kTvpYUUIn|t31$eklD&Ep+44e/TNAK:";
  char ch = 'm';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_139) {
  char s[] =
      "XH6cx^RSq(L1rb6d:8u=n?2~P#}^GX)L^t:eE%kF:-6*_xsUYsL42ALG>_wadb*8_=euo$q&"
      "|E_Xe:QPB.";
  char ch = 'Z';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_140) {
  char s[] = "->RlGZ/UQ#Mn3STP}L";
  char ch = 'e';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_141) {
  char s[] = "|},sqG*2uOc5uC/:N&";
  char ch = '`';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_142) {
  char s[] = "@6(1!@f<C0A*DQ]@/r0I,mIo@Suo*{xIy=_.A/k+m{/M8C|7m4v";
  char ch = 'z';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_143) {
  char s[] = "#[^E?8cm03D{=._6y{?%ed/maTCf{xp$65pi(WQc:@]G";
  char ch = 'D';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_144) {
  char s[] =
      "AIyzk@b,r92[z~qy_&Bbocbp/FuiqTWKYu+JVUr11HPvv8FN[++-:o=Bz/"
      "b<C!zBF{C29Qen+`f>#";
  char ch = 'd';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_145) {
  char s[] = "phyuO[Ui)_/2uyaQpo-PRv75Qq-9zbNhG(,W~@x1:RpX{*IeP6Jn{";
  char ch = '1';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_146) {
  char s[] = "|MIDOyPX^Dpp[}uow*8N:42|lPtzDn*o){gv4xOa4_bbv9aPYpAa__f+LJ}1}B02";
  char ch = 'g';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_147) {
  char s[] =
      "IV!*wF#sgbAKhBq|S~Hc|(`y?C=&B~BA3N}3I{hkl+_QFa%:>8a#Y6za9>@,P<Lnba7!";
  char ch = 'm';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_148) {
  char s[] =
      "m#{BqE=va4{HK?H]ayP+DHOJT.jac*a6M^+v<kvYB1cHR0mxNoKQ@-T?@P!`,`0Ihq*/"
      "Hg.$u<1fy?>(pe`s)*M+,-,MNSbg$(3P_jtH[;=";
  char ch = 'X';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_149) {
  char s[] = "yaNfl$7A3AAl`pL`V.~@qwE0Se/A([[]*a!wBz";
  char ch = 'K';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

START_TEST(strrchr_150) {
  char s[] =
      "rc2&W;X57fj{=OtYyecwjnYJmir6tzZ#}Xz:gw,7JHI|rmmv=tXg]GH/"
      ":Z?fjshS>0D-~`RqLP";
  char ch = 'd';
  ck_assert_pstr_eq(strrchr(s, ch), s21_strrchr(s, ch));
}
END_TEST

Suite *test_strrchr(void) {
  Suite *s = suite_create("\033[45m-=S21_STRRCHR=-\033[0m");
  TCase *tc = tcase_create("strrchr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strrchr_1);
  tcase_add_test(tc, strrchr_2);
  tcase_add_test(tc, strrchr_3);
  tcase_add_test(tc, strrchr_4);
  tcase_add_test(tc, strrchr_5);
  tcase_add_test(tc, strrchr_6);
  tcase_add_test(tc, strrchr_7);
  tcase_add_test(tc, strrchr_8);
  tcase_add_test(tc, strrchr_9);
  tcase_add_test(tc, strrchr_10);
  tcase_add_test(tc, strrchr_11);
  tcase_add_test(tc, strrchr_12);
  tcase_add_test(tc, strrchr_13);
  tcase_add_test(tc, strrchr_14);
  tcase_add_test(tc, strrchr_15);
  tcase_add_test(tc, strrchr_16);
  tcase_add_test(tc, strrchr_17);
  tcase_add_test(tc, strrchr_18);
  tcase_add_test(tc, strrchr_19);
  tcase_add_test(tc, strrchr_20);
  tcase_add_test(tc, strrchr_21);
  tcase_add_test(tc, strrchr_22);
  tcase_add_test(tc, strrchr_23);
  tcase_add_test(tc, strrchr_24);
  tcase_add_test(tc, strrchr_25);
  tcase_add_test(tc, strrchr_26);
  tcase_add_test(tc, strrchr_27);
  tcase_add_test(tc, strrchr_28);
  tcase_add_test(tc, strrchr_29);
  tcase_add_test(tc, strrchr_30);
  tcase_add_test(tc, strrchr_31);
  tcase_add_test(tc, strrchr_32);
  tcase_add_test(tc, strrchr_33);
  tcase_add_test(tc, strrchr_34);
  tcase_add_test(tc, strrchr_35);
  tcase_add_test(tc, strrchr_36);
  tcase_add_test(tc, strrchr_37);
  tcase_add_test(tc, strrchr_38);
  tcase_add_test(tc, strrchr_39);
  tcase_add_test(tc, strrchr_40);
  tcase_add_test(tc, strrchr_41);
  tcase_add_test(tc, strrchr_42);
  tcase_add_test(tc, strrchr_43);
  tcase_add_test(tc, strrchr_44);
  tcase_add_test(tc, strrchr_45);
  tcase_add_test(tc, strrchr_46);
  tcase_add_test(tc, strrchr_47);
  tcase_add_test(tc, strrchr_48);
  tcase_add_test(tc, strrchr_49);
  tcase_add_test(tc, strrchr_50);
  tcase_add_test(tc, strrchr_51);
  tcase_add_test(tc, strrchr_52);
  tcase_add_test(tc, strrchr_53);
  tcase_add_test(tc, strrchr_54);
  tcase_add_test(tc, strrchr_55);
  tcase_add_test(tc, strrchr_56);
  tcase_add_test(tc, strrchr_57);
  tcase_add_test(tc, strrchr_58);
  tcase_add_test(tc, strrchr_59);
  tcase_add_test(tc, strrchr_60);
  tcase_add_test(tc, strrchr_61);
  tcase_add_test(tc, strrchr_62);
  tcase_add_test(tc, strrchr_63);
  tcase_add_test(tc, strrchr_64);
  tcase_add_test(tc, strrchr_65);
  tcase_add_test(tc, strrchr_66);
  tcase_add_test(tc, strrchr_67);
  tcase_add_test(tc, strrchr_68);
  tcase_add_test(tc, strrchr_69);
  tcase_add_test(tc, strrchr_70);
  tcase_add_test(tc, strrchr_71);
  tcase_add_test(tc, strrchr_72);
  tcase_add_test(tc, strrchr_73);
  tcase_add_test(tc, strrchr_74);
  tcase_add_test(tc, strrchr_75);
  tcase_add_test(tc, strrchr_76);
  tcase_add_test(tc, strrchr_77);
  tcase_add_test(tc, strrchr_78);
  tcase_add_test(tc, strrchr_79);
  tcase_add_test(tc, strrchr_80);
  tcase_add_test(tc, strrchr_81);
  tcase_add_test(tc, strrchr_82);
  tcase_add_test(tc, strrchr_83);
  tcase_add_test(tc, strrchr_84);
  tcase_add_test(tc, strrchr_85);
  tcase_add_test(tc, strrchr_86);
  tcase_add_test(tc, strrchr_87);
  tcase_add_test(tc, strrchr_88);
  tcase_add_test(tc, strrchr_89);
  tcase_add_test(tc, strrchr_90);
  tcase_add_test(tc, strrchr_91);
  tcase_add_test(tc, strrchr_92);
  tcase_add_test(tc, strrchr_93);
  tcase_add_test(tc, strrchr_94);
  tcase_add_test(tc, strrchr_95);
  tcase_add_test(tc, strrchr_96);
  tcase_add_test(tc, strrchr_97);
  tcase_add_test(tc, strrchr_98);
  tcase_add_test(tc, strrchr_99);
  tcase_add_test(tc, strrchr_100);
  tcase_add_test(tc, strrchr_101);
  tcase_add_test(tc, strrchr_102);
  tcase_add_test(tc, strrchr_103);
  tcase_add_test(tc, strrchr_104);
  tcase_add_test(tc, strrchr_105);
  tcase_add_test(tc, strrchr_106);
  tcase_add_test(tc, strrchr_107);
  tcase_add_test(tc, strrchr_108);
  tcase_add_test(tc, strrchr_109);
  tcase_add_test(tc, strrchr_110);
  tcase_add_test(tc, strrchr_111);
  tcase_add_test(tc, strrchr_112);
  tcase_add_test(tc, strrchr_113);
  tcase_add_test(tc, strrchr_114);
  tcase_add_test(tc, strrchr_115);
  tcase_add_test(tc, strrchr_116);
  tcase_add_test(tc, strrchr_117);
  tcase_add_test(tc, strrchr_118);
  tcase_add_test(tc, strrchr_119);
  tcase_add_test(tc, strrchr_120);
  tcase_add_test(tc, strrchr_121);
  tcase_add_test(tc, strrchr_122);
  tcase_add_test(tc, strrchr_123);
  tcase_add_test(tc, strrchr_124);
  tcase_add_test(tc, strrchr_125);
  tcase_add_test(tc, strrchr_126);
  tcase_add_test(tc, strrchr_127);
  tcase_add_test(tc, strrchr_128);
  tcase_add_test(tc, strrchr_129);
  tcase_add_test(tc, strrchr_130);
  tcase_add_test(tc, strrchr_131);
  tcase_add_test(tc, strrchr_132);
  tcase_add_test(tc, strrchr_133);
  tcase_add_test(tc, strrchr_134);
  tcase_add_test(tc, strrchr_135);
  tcase_add_test(tc, strrchr_136);
  tcase_add_test(tc, strrchr_137);
  tcase_add_test(tc, strrchr_138);
  tcase_add_test(tc, strrchr_139);
  tcase_add_test(tc, strrchr_140);
  tcase_add_test(tc, strrchr_141);
  tcase_add_test(tc, strrchr_142);
  tcase_add_test(tc, strrchr_143);
  tcase_add_test(tc, strrchr_144);
  tcase_add_test(tc, strrchr_145);
  tcase_add_test(tc, strrchr_146);
  tcase_add_test(tc, strrchr_147);
  tcase_add_test(tc, strrchr_148);
  tcase_add_test(tc, strrchr_149);
  tcase_add_test(tc, strrchr_150);

  suite_add_tcase(s, tc);
  return s;
}
