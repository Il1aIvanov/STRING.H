#include "test_me.h"

START_TEST(strstr_1) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_2) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "Ras putin";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_3) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = ",";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_4) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "Ra";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_5) {
  char s1[] = "";
  char s2[] = "";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_6) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_7) {
  char s1[] = "";
  char s2[] = "a";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_8) {
  char s1[] = "123456789";
  char s2[] = "0";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_9) {
  char s1[] = "123456789";
  char s2[] = "\0";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_10) {
  char s1[] = "Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "\0asd";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_11) {
  char s1[] = "\0";
  char s2[] = "\0";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_12) {
  char s1[] = "\0Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "\0";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_13) {
  char s1[] = "\0";
  char s2[] = "asd";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_14) {
  char s1[] = "";
  char s2[] = "\0";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_15) {
  char s1[] = "\0Ra-Ra-Rasputin, lover of the Russian Queen";
  char s2[] = "a";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_16) {
  char s1[] =
      "omUNzGUX5BKqXqOqd+SL{UV.9jt7Kp]S*]P9(t<3[U4Wqx0C:2Mxv?)yikc-cKI6|<9P8<"
      "gdzR$6XM_oW.qr~$vc0YzW}_%!K{u2<z.W?55&}fqy&GD+X9!=yL99r.2(tXL8<^rb)9="
      "9y4Jbjp@i";
  char s2[] = "!D+5V=~4Sw";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_17) {
  char s1[] =
      ":MaP+<`[k~;:.p,08yI5Se7<n]awU@]_?1P)+-+%5-|l6|1a^iQ2vZ6HyNldX<r8BQQ{p?W&"
      "X,jv[$L=SRI";
  char s2[] = "NA.GFLjG@]2";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_18) {
  char s1[] =
      "XD|qd^qGO:_B[-Pr[C-9,s6;m/Yitdz48oa@A^Q|Ug`JbS1qw@Mgk0J+ip(/"
      "e.BW~+!G>.eioV&Q7&oTve/r`[$;6j/as";
  char s2[] = "Ryc1GKM|wM`%W";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_19) {
  char s1[] =
      "aX[-d&V>%Rbk6<g%*oyzSQJ.xp|l6fAjLtBe,#z|R{EJ[CR,N^X?#/"
      "Zjz8KF>D^kHiAm[tQ*9/JTV";
  char s2[] = "/w5hMkLeqZ[7x";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_20) {
  char s1[] = "qI=34Nwa<g1$1yg*MHHGcu`-zPvVtl0O?Y%J(bjc8_H/7_tsb,X";
  char s2[] = "}Dy73H,N;##g)EH[9o1<0i_~.M|,!l*@=yMx22";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_21) {
  char s1[] =
      "<Xi`m&Y-`$c-2KNx|`.(Cnw;Dd&9t(WfcTT[w#5b9k)B=}y6@g2)4n7@z3~}Yb=#s]gB-="
      "tF4&||fas!QTFIL`ilU[1,USl1H]xH^U,M=ZlR+s";
  char s2[] = ";#&A}H~f@<k?B";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_22) {
  char s1[] = "PC|_wb]-u@[z<<)]";
  char s2[] = "RtV@):Y3D.TZ@/nB/L2S8^Kn$-_/`RO1++N2f*}u(";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_23) {
  char s1[] =
      "sl`)Z=-;uI@DBH@SK64.cMJO^`_KwCz$eP<MGC9cv:)k2$84FAAD>rSW|-!pa`cjt?+bUu#"
      "R2_Q!UpL4)ee7,cQz{)^>%VZVG8_qA!:6^1:0MUqK[;yB2j";
  char s2[] = "8yZTwNFIv]T$tq,QQ$cg8D6(LOx-N/";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_24) {
  char s1[] =
      "OZKhDbEk!j(R!:1e{)w2:e{D:_hN_o!t%f`w#wI;-7;[HbL!X}eumX$*7~ooFc|dV-q{"
      "ow40E_w";
  char s2[] = "gq=)phbWH0SG@n1#n0ivI7v2m9*6~CXtbiW7($";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_25) {
  char s1[] =
      "8F8,_gib$K.1[hUJcA3=r+X%a![L-*?89=H-!bf,U}(V,_I@>bj5A>XWl):16S3sG2C&)x<"
      "TOzFRmGqG`";
  char s2[] = "|kxVJoIGZ[iqYs";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_26) {
  char s1[] = "x*b5`@>CdyvPXZrb3ko&9+;";
  char s2[] = "Eckd*`zRPr~`VUre@:lvT&NcCj7L8z@:w6^+50Ap";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_27) {
  char s1[] = "]xJR6<7$JJYS0P%b!Xim-nNg%Uf?}`!>mpy_luiC#5{YN<ie#";
  char s2[] = "ukw3_%unO.(`9qHHd&8@C[@KAX8?bHPsE";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_28) {
  char s1[] =
      "]`oT5Y?k&Wozm6(?[9(UifdJIQs|T6WJF}%_NzU{WR=U<<24W6sFCEZF?kd;=)%0h+(c7hm@"
      "9#{^SakfLn!+fkjeQMBq&|*_Y<_.1Zbf<Ogoy=CvS";
  char s2[] = "pKU<g{V{Ssr1";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_29) {
  char s1[] =
      ">Lo><&0/)`5x*0M/sq[Shx~wU_3=+?+$cWJM@%so.fJlScj&1DAze;2~j]Y$[j4s!$/"
      "*pSW0>!Y&NLdGlq>4;KD^&&STe*Zh5_6UEQ_";
  char s2[] = "S^PA0Bjq>tGea05KTkMUm[6%wq0;+l7INPf+~";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_30) {
  char s1[] =
      "OG@j=f4Cgzf>]W4&<=[^hyINlPXi`q<;a=fS{ifzw;+AA~vy^^D:U&]>PTSs!m?f_j9RW`R$"
      "*iC(vr>^fOa/cCIRX1I)#@xi%Cr8-JOb,l/Rx73bRdyf_7(?2C4#qZ?8}yo#fm4";
  char s2[] = "Iy6;Zn|i6|-CbTp$21M5~UB7Cw%PYI[6yZx@@R<K";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_31) {
  char s1[] =
      "c`}$O^Grd^*1:q2Uq6h+8_GUx$u.*mhsD%bV9~nH$XqJy`yHtF{48<|DLyRQ8L^r5;=rUjZ>"
      "<]>{?Yjh+_u@Vl~1:o";
  char s2[] = "B%Y#_DX]/Y;1FVJ0<_eV*+DU/Xb[Xz`|suV6vJT";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_32) {
  char s1[] = "!gUO1X7p{j*q5P}b:m]BRk]8r";
  char s2[] = "";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_33) {
  char s1[] = "rX]::H*uheH6M4`yS";
  char s2[] = "";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_34) {
  char s1[] =
      "0aKLNrw2q=BIShsGx-}gG/"
      "Y=3&RC_d+ZyS(`H-Mw.g()KR%%<lz_K~V&o-:ihFp~*m>rV*#hDN`3(";
  char s2[] = "R;3i6QY(iRwsJprUZ1wm:cUr8=r7";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_35) {
  char s1[] =
      "v8$z{$y9`z+d93@XLs1_58;g0k)?(p!B`:hVQ2m3tms@6iV0#6mcgOm*B_8(].ZjeTdQ/"
      "p2)b1{YWtdtl/"
      "+Zg}E92I)wPQ4zrrNK~rG)U9|uB,U0hoggxUrH&Y}6y:?r:6wui}Io|.iTGJm)j]H";
  char s2[] = ";fyHTzjT;:D_B,3cv*6RRA[g";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_36) {
  char s1[] =
      ")7=|0ISAnzakF}kag6U$Gx9&Vt@B?D`MVv<ROkt0T$T_!LiP1)Ko/"
      "1,d6n{Tjey#o@ayDQLz9{}GnO><{q])&GRux,$J1.|%@aAery@wQ[wg8lg3O}mq,x";
  char s2[] = "BT7d_a3";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_37) {
  char s1[] =
      "$}<b~2CYnGku~(k,ijn~k<2/m%/"
      "O)tTj+.?F+2XYLUoM#S)>M}[~cplkqhSNP@l]rOUe{=1xJrPiA2TJeFdV4D2J@/3(]R/"
      "0s*(v6d<*p#jMG4l0|RwI90pIn4}1ta$ER,]^m";
  char s2[] = "oS/G|>$_X`WD_`D46tc@u|7a.qi|&7TRGRs*";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_38) {
  char s1[] =
      "mglHzw$(a5vr{5.2/"
      "Kg>Ib>h#mnx.e.[M>Tbl6?_[%Iw9i7tL55Cu@L+Frp2Sv_W`-B.4hoUJy`@p^V!mjJhP4E*"
      "v)s`xk)aZ)7ZLB]p{iC;O!i?_/qzD-{y[6x";
  char s2[] = "=_BI$_ItNIU{O,6NUlqqiSLPG8m";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_39) {
  char s1[] = "@y~#7U0r0gv_.[#rDcEP8+2[&iD,k=aC";
  char s2[] = "F/VLYLEbp(yPU)94=xh#Q,Y,nP.?>9O#GA`iKRlnC";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_40) {
  char s1[] =
      "w,*:-XU$ChS[wfgF;cp+}S5P_g*7g&^wPw`ciGIYd!v[,(#by?C[L(i`^WB}I@q<|F(~~Z<"
      "Kyz";
  char s2[] = "hnrs~e,hf<$M+&&.";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_41) {
  char s1[] =
      "ZA$^c+K:z:pR80wK@hkWhjAr9VS[A{mcddZUX)G|O:F2),4|RU+(~piE<f)%E238QuUha++"
      "1";
  char s2[] = "*KimV";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_42) {
  char s1[] = "<PdEb!(*[y)5Sf7!T_xp0t-f?*N(";
  char s2[] = "C+Jq(_evVWlFqH";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_43) {
  char s1[] = "g^EI_%cPMbk7LI";
  char s2[] = "|WQ^z5d;GT*TlY;7tD<_fxP&RUuARwI2+&tX<LN";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_44) {
  char s1[] = "aOr41eV*M<unL>;wvMyGh1=ccLG~7tS1ejfO6inClA&[+@#KE93AWMG";
  char s2[] = "7(hg9C4|fdLhD;=VVvm$z{y.M/mB,&S1^hI3MA";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_45) {
  char s1[] =
      "i{BR0Wv|?(Z^&Pm&.T-`4R9wj~|-R{c?rQ1>w8Ff45C[<A76,]+H{pU<o6qZ(RH?&gDr;H:"
      "qjmX2yWUb8L&zz*_p].f~Oy:Jjq2u]LPToTf";
  char s2[] = "6PUn{b:u8.7fs(*,jtgOH:VIJ_q~<,!RiK#%Qp!5>:CFO^";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_46) {
  char s1[] =
      "RG4P9w|Dw~Eq9&6G;w$.0V0In3K4`gf:xe%|qBKDweXGhF)_Ohh&I1prNxjQ2T8Zv<~kY}"
      "FNjb-cTYyw,2n:Y>N7}FkkIzK6nm:>U7zZ%Wci~ODA|nc^_VDo-j+]#F:5";
  char s2[] = "1:`yeg61(mkn,CIkNx.DO,#{z";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_47) {
  char s1[] =
      "@oxV,i.pKf;m8@l1[$D$C6wc?3tj1h_kMCLHIz`6([]>.wzn1):,Rn)S=`B.=9Y.w}A=nG}"
      "wdL=gG`O-&ecV)n}cXlK(@2K(9z+T&1BS8V+~TjQ#y`YU;V?%.720P`,Lpp(?C";
  char s2[] = "-gwm@&47";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_48) {
  char s1[] = "h.0ICb79G;:_5b=c$#UiamRqH(;9tk,F=y:Daav6";
  char s2[] = "Ots-O!]A&m0poWzIr8f]JS_ulT8soNM`&sxf>";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_49) {
  char s1[] =
      "5}v0q{Xopc@Cb?%I-zqi)1kgX5!^(Wn8/;;8qU86@<]kDb$tW;tZ/"
      "Ofs|uXXP_fC:k|JH[)zbu/7UWst0?j|OsS0?&<Lp)czPXH_$)m^;";
  char s2[] = "62;f2wO=/_4_7t_U^kR9YR-`FWjq0di";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_50) {
  char s1[] =
      "d`0YNTf8HhR&`7m.E[L1sS]{-]QSq4(0$.d<ctp1{^w!q@&Z$00W[OR]-Y>emL&Nv?"
      "0lI6E2sRZ%2";
  char s2[] = "8)+Ny84L`mcqZ-R8/m4[Wf9B^e?m~je3m85IN$P`W";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_51) {
  char s1[] =
      ";-!Z-Oy|%HC@rFDJ43C4JI|!jRP:Utfu3Ueg}YPMfa(i{,KX!;55MS+}9tg9/"
      "X>Wcc$~ow>%m+Zy3p`DRH:SS;49{LFB`F3rxfW[uP6{:`toAwpAM1XiY";
  char s2[] = "L~!*+[sN";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_52) {
  char s1[] = "FeX?ZgJWfr/_Urw";
  char s2[] = "`5bw$*(/q|<M!Kf-u2m";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_53) {
  char s1[] =
      ")Q{UP$yJ&ou>gt.!|hRH|6ulBn@pqYc>0^sm@fCjR*cSd*2NX$>a?g*2X9Yji2K&@N/"
      "#PlE<w5wh!5-S|JC@^KZRf";
  char s2[] = "WEz$(bJ3>:2)+5[$QkmQ><V<#6/s#";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_54) {
  char s1[] = "x~*C23?0#lD`>||HtWQm8n[a,1r>lRy.";
  char s2[] = "+XT";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_55) {
  char s1[] =
      "$g[,5w>A^!*Eg$$D:NVqOpS&{b/H@!bR-5pxO9Z/"
      ".ApL(lf{`?|6|T8b]|->H16ioctQu.<}Ktx=RcDTqIg.xq[Dz]D(m_1g74mOqiVG#F=bS("
      "Bn;peQDYICNI}Kip=/%(5";
  char s2[] = "$=`$";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_56) {
  char s1[] =
      "X,mvyplVKDGBoToT@j[,z4UWS+6UhzC]A?aJ0HsL.^Wuv8DC1YS[[P`C<tQ4u3A3_-[";
  char s2[] = "t6DQPaj1$cQN3YIlO</alDu[kXcDNpxag:$AX;";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_57) {
  char s1[] = "wPVP&9Kq$]hpNVCq^1SJ^hRGP-z<";
  char s2[] = "pwH]YC27";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_58) {
  char s1[] =
      "(t|6Sa;dH_{_QRJy0BjeJ4tuz^1_O_Dgx1BLc7tRF$W--48WOr#$Xv5xdh,R@ixoJoUp9&"
      "pmt_ndieT@)B2kNzu!nsWr7p>_%]/Su)aDs";
  char s2[] = "L3(psaI^&wF]3B9G0h1xe:1%7";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_59) {
  char s1[] =
      "=bU%A[O6(aX#FNS:SxH0gp1a{VLJ{5^D}H<r~dGl@$w,psZW277C`MN&Ecb:frfwr,7lbV)"
      "vKJx7&W>d>j[+FLVW{gS7WC/eX<MId:0!QdmO%Fc5P&`Itl";
  char s2[] = "]szYdovr0]>y@y8(!}iKfBYffhmW-y>@h_mce";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_60) {
  char s1[] = "%|#7|F3KcG";
  char s2[] = "@wFeRtlO2g=$(oXD)tkKIyc`5-,gSV$AS5J*,(]7g";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_61) {
  char s1[] = "b.DgD5qDDaJ>nBJ(J%";
  char s2[] = "z#S{Q8KXVUxV!uEP?%B6sRu";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_62) {
  char s1[] = "Hey#F";
  char s2[] = "*1B!$&j=!-yp}C3QLU*ru3O%s2@[bfQiGBlGp6";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_63) {
  char s1[] = "xyI";
  char s2[] = ".(%^`n]y_yQGY3RZjfqX7s;I5:K^!lC";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_64) {
  char s1[] =
      "0TgB(f-2l)bNJL9J{8ePUy]EAj{T_%i;s&0+gPY`Mv$64i~^nu#|KJ{V8UpiDZo%l8N";
  char s2[] = "^3hO,pQF1fP.(2aDUv=b@ua7@)lHFyA(vAR";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_65) {
  char s1[] =
      "NMP|b9JEkRU1Lqqw*nG@j5/5saA$CP^jBX!(sZ%/"
      "D5l@@FxTEDnWWTdUi%%5?Xy,}x?o%kfy>4VM:!N4=prL;;Et~6-e<SGwy$,w:q`OumtM{{W!"
      "<";
  char s2[] = "ZmD;0By)QN`Gg/Qq1i/*8=|K>32+r(|MoY";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_66) {
  char s1[] = "M]m+vL#sz";
  char s2[] = "3";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_67) {
  char s1[] = "!oaW|83X{-xK2b`rhHo_pNl]!Y[_{U.<qT()/6.>C)>k";
  char s2[] = "sRclMNI>DKp41zMyBrh&!<nKk^ivH=^ghmZTM";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_68) {
  char s1[] = "&pLNy^4M{{8iPGLl)eU<@59aeJt^fUS^";
  char s2[] = "~C2C7#4TzZZNcQ:DS1`a!$B$RaGSRGyO!(l`s`A";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_69) {
  char s1[] = "iR9Lb5F!U:4|VYw{K.fwL%MUK@";
  char s2[] = "ba;s4W4M5f.~Y";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_70) {
  char s1[] = "XR%fH7j}YVy@,VL1#H1f#Jy585I&W+B1)uqm/=>X9Q9[Qx(2";
  char s2[] = "&:N>*c^`?):;<SV?j{K3=<26N&>AV<j";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_71) {
  char s1[] = "f;X6#r^G4h6ET}!i)ffj^2NCh^5x4$SWwdJp)9";
  char s2[] = "mn+ZkI|+(";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_72) {
  char s1[] =
      "3g+foB>4PS~M*<+DQ67mqSI.V&YGo^7_}e#s@x&@}q{Z2mn,geC7j?NZK:l-~@i?%RRfDG&"
      "rFGR+tpHxc?2zA$";
  char s2[] = "+&Au~^MuO$W*ZOx9(%&h.,+n/wP!Cl<vxkUzl)lJY1T(dvI";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_73) {
  char s1[] =
      "H@1@?i;TEKV(/"
      "9e^}_PPY@2H_Fa,xl(i+p!;y$q,d1OBv)Q^3Gp;;V3W?yn[<,W!N+UjmHas2(foZ,vu`:"
      "smM5MTV$7c>.:wCDF{lV~|k+h`r$_|D$9BW_]";
  char s2[] = "G^R|";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_74) {
  char s1[] = "@HM*9hE?Ch/C^):Qf0|R.}TYue)";
  char s2[] = "";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_75) {
  char s1[] =
      ";v8&4@X_yyx+CnsaCgsARHX#vM+7IkE8PWUXh>Kq6UL}vE@x&{;!]EtcD/"
      "H#YX:LtW>Ma&6jI6S+%#O;";
  char s2[] = "L*q;S";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_76) {
  char s1[] = "`PdwvxI<@&mrKiNJn`^~9oc@NX^";
  char s2[] = "ItQ(o`n%G]pWEXj";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_77) {
  char s1[] =
      "uCDL2_^ZH5~QUSeVN}(0lP,c_`lw@IX;,u=!K,Fl,a@5}J#84VZ=j4Ndk1BSq[}uQUH#6!-/"
      "E[KVVC6xPrm1bGo^qlP(,+6pR:YZV;+ySQAAGB#tb";
  char s2[] = "Qh@ug$Cxim1V(1=`!uN)&Vf5JzRScfJijl/X";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_78) {
  char s1[] = "lj2Vl7km:mVnBHUwH5yiJ/Hp&8^Z:}?;+g&+uX:Ps0m2~%zwbRS=9T|Z";
  char s2[] = "vgxo}8w*[ho]snKEypMc5B{@$9.I";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_79) {
  char s1[] = "5}A&ZjuprHp9wmj!{(J]CP)0Nm1Q]AoW@/N}ca]W/Wl_=(Q?L9Fs";
  char s2[] = ".jbrp]S65B23dRXQ6}oa%9Egf.m3jJ<t7Q";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_80) {
  char s1[] =
      "O])LJ=v&M{zXl{@OURY^!`g~;O2(]>o2B;pRNo<4V]?NUbW|EToVJy~(1IV=8(_XEc8~SM";
  char s2[] = "GsY*~j1{ITa<a8aI|cM)0]3U1ho:&:";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_81) {
  char s1[] = "%-S4VwY$3h?:Kva4@&_]zI.t5wz:C}8Xh$a|8lN1@,QreJ";
  char s2[] = "<m";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_82) {
  char s1[] =
      "pQ!7Y$Ah|8oBvrxqxHeMJ~nio>aenHK5,={=b4Uv`w3XV>`HhK&W)?MppE?VL:(l2$)#"
      "zLxP$`FU.}6$f0Sd_+c53y6";
  char s2[] = "X(11E!ERERe>_xPGzp";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_83) {
  char s1[] =
      "{/"
      "5KuaT:Q,0Ps;9K6&N^EeA}4(mhg}xC>1d(;}9)08z11C;8EER5Z8`Z3$l2Z>]R:aJ!&KM*,?"
      "XVWX.4$$7B]7Zn2kFBWb.J>J9*vprF3N-FcBsdSlMfHX[8ilZ";
  char s2[] = "|_X<b@F/3-b*-#Q!Z?A5.4K{uM.V";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_84) {
  char s1[] =
      "bBR&x`Rsb+B@oMh78;&Q>wKWem(!9nQCeC|<Ohz,De<t7w26^(b_N`A~JtCjzax]S%{XA6d>"
      ";baNc<W|s,sjnJSa.32Y$_tTmB9qJy6mb7Vzs<ru]VFwvqE/,uX^,4@j<zfZ8";
  char s2[] = "mA)$q3v2d@wZXbdOx";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_85) {
  char s1[] =
      "2*t+MZ`3gMw}oQqA:GZBu`LSOt>-^=hN@dZkU?e,/"
      "enUz7Fon]D%xrkb@CH86${xSFIvO]MUD`gAz_7]pPQF(p)w&2VWx#P";
  char s2[] = "J#{5Y&AQ.*W>`T!CV{Rq|6u]<r";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_86) {
  char s1[] =
      ":+jgqDsm~;YdS$%ZfHG;<s__Ev`J-{AADNI&(m--e*@>4TXv.t!w)jy}b|]O;dj%D?-a,5+"
      "OnaS";
  char s2[] = "g3v)_ch<gwE~/>KXY`8(>uG08<txD?4v~8qPK-^H";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_87) {
  char s1[] =
      "faHVsYygOuYW3iH&Q=9Dw,KI^HCIU?1hzK]wk/"
      ";UDR)-W,]bSbqpqzeuML!6gGCZVT!8g^q,b%I3)CA>5bBB(cFy|1c7f,]P-ba.j5J?>8h?K_"
      "KMS`3H3";
  char s2[] = "#32aj:/K^zx=-AoVQ*)9ltJAs7ao?Bx,f!(xBR9970:0y/vsW";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_88) {
  char s1[] =
      "YnUGrN7z$SCk~&SkBOG>Wz3S!8*ul[(j#@<x:oqa|(O1si%}@?f3dXU*Nt#f$5]2?_W~j^s";
  char s2[] = "n#I+mrYwhx9eK_";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_89) {
  char s1[] =
      "TbM].1NN5):rU[Ve@pOxhD5E7Kwmaw6[Go2oK/"
      "=avJ4s3;)-DvS^oYBE.p+8)npL-f>VJL~H(+qd9h@mTaV)K<9CB_^p>bjBw~*2]8=Wa";
  char s2[] = "?rV1Eun9)+";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_90) {
  char s1[] =
      "f;rc_3@)BknSTnA>6$3)N~Pa,<RpFCGBfhK?*/I6KCj3-LbtJ#<cZ2a,KA8UwG#yNLa-/"
      "o}wqaNV~Eba@~#{zqPH&Hu-/D9:Tg";
  char s2[] = ")sN,";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_91) {
  char s1[] = "e9q[^J6.>[Oui^n,psV7xQ^-*iX~^/H!&`yBtdVXMk,Tb}s%Mle1KUH#7FV";
  char s2[] = "RI5I";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_92) {
  char s1[] =
      "Iu4oKo=&;k<bUx-nsv@{gc?o~.vj9Jf[QiwZ$*U}>x9ZQ?8FNLk/{7nhZY8q3Fnh/"
      "{AFvB5_8r>pZppeo$@YH6!kPA]Z]W*WzKF!ls^rM:z2F*";
  char s2[] = "y&;$wbnF!^~G#!5nIl8t=$HP}IHVRSScX<~/U";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_93) {
  char s1[] =
      "lkCF=}%>dz4S0Xpjy]Dn}YCP%w`Z&nd_0{8Aw[(Q8<lR:e~b>xJ)O[%R5tn.v*xP(1H[4&"
      "vzs4>-^9_+Gz<]fD]tg~^Y-,4.O,B[{";
  char s2[] = "S?r}W1_SouWRxvo{/{$BM{.%S#pe^pbK![";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_94) {
  char s1[] =
      "Sof7wl;xijA04Bgm#jW2s]BGdcT*]j}nsPpizA?T2W[4e9t89vQn[uY~`.%m;"
      "47hJZorhMuwLo`HOkmB.e8;qAj$&v,onMOy>G<;TF&V2&K2p@P7.bK~=ppPm56";
  char s2[] = "*;v)kP>3dzidEyo1S0KI3SRM0qJ!S";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_95) {
  char s1[] = "P7D>GY.?pcpw?+5{8ex@f3nNcYaWA>L|O`!(Os<|4vyw8HwE";
  char s2[] = "?ZJBfTUV-emFFXHRLuR_<Wf_RxB";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_96) {
  char s1[] = "<luGkpai";
  char s2[] = ":<hjA;aO*1/^ompR1zFxJ=^#*^Ww1RbzvrSz)ewYmRb>`";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_97) {
  char s1[] =
      "6yC,u/4u0(AL?EkqGC`Hs{b|R#}Cuk6*r3Sl,~uf,A}.:8c,EFskKNNx$X1$8/"
      "_LPC$m;H5Dm#xAx=QHv|o,`-Y;HX";
  char s2[] = "+#[z9f@t}Khn36.ApgGCZN75t%6B;IEd*>|{Cw&o{+3r";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_98) {
  char s1[] = "lTQry&>S22wD&4z`_]n(lUsh%p,v293n5n7ky&";
  char s2[] = "qf";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_99) {
  char s1[] =
      "Pn@!M|S+fJE~%ta!=y(vTr}JwqTm;6<Cb:)}8mx3M^]eigu<TWS|W-u*fb+xkSgy467-8-"
      "dczZ!!5_)";
  char s2[] = "SWOIh)O*Y,NOhKkS!9r8`TO,{:J;ng%gnAdO?=`qplW`.@";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_100) {
  char s1[] = "BtX#6^wq<A9}bGDDakOy";
  char s2[] = "<?P!k)AY.,90AAM~<Ueyl";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_101) {
  char s1[] =
      "l><L4`#9><.M3*4]%R%Rp-&rUfmE&dbVflOcznhAojCsAIQnPvU$waMC}Yj.|/"
      "7E!V4|?zC5iZpC#";
  char s2[] = "BcJ`:o`k13Xr76O#DxP@-.XasM7KI{NPdB";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_102) {
  char s1[] = "LAn1]Y/vL*T$3r";
  char s2[] = "X3M%JpOio#C<cs#1E[=~a2GEBj#^9";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_103) {
  char s1[] = "~*os+4V4&ih#5@~%8{`rjSAc()Mre`1";
  char s2[] = ">B&3|__vjL80v*.6zWk,h[M%)-ebGl/bt*{Jnd;Y4m>/";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_104) {
  char s1[] = "b)G&~ZXb$oyZ^Xz#B.@.h>pDsyF02W*";
  char s2[] = "P.}VL-h%De9ZuUUHT@[*:x@BY)UM";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_105) {
  char s1[] = "r;JnXNdX2^w+25cG%ee";
  char s2[] = "UCALeit3S:-&*!>SCt{o]E37sDW^W%=2y8t99L``DY";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_106) {
  char s1[] =
      "*!wrKSMS%2YNbm,Xi|q^RBWalG!lLDbXvkA<$c:]%Z*Sz@D1,]b&&0D&|t;j^8-p~fL4P,"
      "byd:!k6&:.F++A^Kb";
  char s2[] = "=%,svjYi<ebj4ggfH)7";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_107) {
  char s1[] = "pu%FS(fOr9<b~OJlS#o!=&z$]~DKx@0VggR$1m/+nY4wt<6[X@VY4~1xh)f901";
  char s2[] = "5#5Qs>XaX/xs6*LhraSnFc+8NL43^J,&P-QRw";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_108) {
  char s1[] =
      "joyry;8])h99JKYEW(B7Y[2x&M$&|k(+t4X)NaGVcg6-)87IN99D`Ug}|;ed4~|+";
  char s2[] = "oZ@?m=.UzAxe>WeAMr.45R<aFj;gF2L5";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_109) {
  char s1[] =
      "YXvykNA1:D<hMF6gf.qB*[RkZpIh=A{Zz*mI($Z,gcV$G;nQq7K|eU/"
      "xQ$ocd2uxQ!s@Mjsqn`cy!03%#+ZxR9+IfFcZ`(/5>b6<w%BY39JD%?KzBF=GEr)*wm#)Y";
  char s2[] = "zkMh0H";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_110) {
  char s1[] =
      "MVvzI+jA)sdRZ:w626FX%+c&&@HL1S7g7b3)h<K#YxEOv]@Jy6&Wz0kR?QINn(+f@2?l_"
      "3X2G5XP`~8Nqy57*r:|1V5+y`0Dr5.]@tEeE;c7qYUXpg8j";
  char s2[] = ">G_n4Y@";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_111) {
  char s1[] = "N]~0z/+h]2!z;:y#}O3Rnv";
  char s2[] = "![}SZ4>5!6Ae1Uoq%EcOfyJ*,>kA!od.G";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_112) {
  char s1[] = "NPOPJ]R$Z}f;-Uec&ng3A8~#mCVl#UG~b7{W?<DVX$[#3UeNrU,7bJ;9=%s79";
  char s2[] = ";]&!e]WaPHTj@83MY{5!k7(q3;jv=YxsH|{!K^A;TBF";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_113) {
  char s1[] =
      "sZ#,,|/"
      "<NRq>0_~P<qZid2wWwdLONQKq&0K}-sMP7j?d|dh|>Js&Cr*LIQ$I#)B(f8+4-&Y4eZ*3["
      "esj-L0d,OHbHdYR.-2F2b5,Xi?W<t;y9gL7/wWd~@`?lO`5Ab?ZR";
  char s2[] = "X~D239p~EnysM.Os9@%,s+tMxBv+~^e%%Nb";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_114) {
  char s1[] =
      "vWHVCb!f[<wwo!X>e7)uYHCJeHY2HfdloDrYfa&uzpSgmANY4SG&&`=D,@uo?SL9cPk3p@|"
      "5OI?ogmpPdDA#A&>R7`n";
  char s2[] = "uvkPSi{XWX}";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_115) {
  char s1[] = "=o,0*s#Ldje*|Iz>f7@g,~**2K0-0ovB/6yPp6$";
  char s2[] = "6&z>bEj~`>U]`b^7sV|^kf-Kfray^g3v430smf";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_116) {
  char s1[] = "dQ!+&C;h<!YYc&!/b2";
  char s2[] = "wJ<jbA48DfYeT4JZ/!ChN$2CS0g,EXoKoPwwHX";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_117) {
  char s1[] = "-_:3CN+[8B[@3_!y7q4p";
  char s2[] = ")";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_118) {
  char s1[] =
      "]r0%|KuY3_8nJ4#$J9aa)484]Ul>#1U4RN<WmJ:0#pA$QGyJ:uu{nU:WT(0nnKLOWj<E|"
      "Bs0ky_[/g;:;1iZkkv%y0{R|W2?Ap`}/7&W";
  char s2[] = ";LTjvK(u}S";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_119) {
  char s1[] =
      "-Enb!>T-rNW0,Lks6_B}+&z{o*YC=2ZQO&Lyr{SWJ0ACU/"
      "Iyxo=AptCID$n~*>Wcu7An#b8znwX4eO4832`r_Zf";
  char s2[] = "4z.LC,Vz6H5<E.ST<kWCCA#}[XC(";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_120) {
  char s1[] =
      "5/8Y2zW?C@m;C5!-ZrBcRh{U!{}ZGLT6n/"
      "38-Ub%rCU:YUA;}66IokGrzGI~ZW+}>QOWWLt6|H=2Pq,kRomrVC2{W{x";
  char s2[] = "Cg/J6`XFi*YD6#jcvP*^vk[rCX6X?+?NpjW";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_121) {
  char s1[] = "+D:{=fNzjwY@Hm^Y;lf{pqoG0e98TgB9.j#@hnZy#n,2%rr";
  char s2[] = "F1XiP^db4;J31@b5N8unB2_Vhtf<Ls47W5-t8;^yZvK|M%S";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_122) {
  char s1[] =
      "-AZt^H%6*elSCoah+xVxak0BF=^Hh@1d=dPP_]#E0LUK0@IOhM)P*A.&d:nMch:lV[u0C9r";
  char s2[] = "{-D;GG^Jk=0[4+=bFVT*_:Er4QrWRad_q[hMv{3";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_123) {
  char s1[] =
      "Zyu^;@6K~x9<P%7P`_>bU6#;Sy|bjFE9L],k?~bH?Y1e$K>8Y4,K^T(zj-]rx^`)Qhi#&q$*"
      "Ul,VZKmM)_NuJ1K(di*[nM|h5>dw+!=%ALnLmy%5]?!P";
  char s2[] = "r%P3Y&S|ybY+{3!vnx^4~@|+?B";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_124) {
  char s1[] = "Nro.frr4`~#EXXI_ube}";
  char s2[] = "m2?@r)_H7aIPHx/8SmyGrm";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_125) {
  char s1[] =
      "9{Q/b#C`UKS@bYYzNhJB9M;`/#3d0LNN##R42gMc/"
      "g8Rdp=N%f.;yBx]Bq05(+mA03{G-eHUyVd(m6Cgg&K,ZX@/"
      "mwpE>zU:<)ZIjRp|!i@n3@c`3A";
  char s2[] = "(Z?";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_126) {
  char s1[] = "S5??p(-0Vc><=I+3cY7+O&uX_(0c8,-si%#y1)4vUN%_YSiW8!q+ms,0v";
  char s2[] = "L,-!YdFv3c0xV/=3sh/6,z3L]#nrmZnR8Qf>%`$";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_127) {
  char s1[] = "F9~$1tpjeU1a,!xKo@<-g]z7dga|iT,,;{-8k1/s)#8MzB/:6z^S&U~mMN";
  char s2[] = "WX2-f5f6QiaXsL]-lB9}l.V{B`I?b[MbFLZq/M)So";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_128) {
  char s1[] =
      ">g5(NiI_yIVp|Y7nM4zSa>kBvMCSC)z#7@*XV{bR@6cM4(d:<E;4yDgAft{s`#/Wq!";
  char s2[] = "/rat!-na8h2jK/k,l";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_129) {
  char s1[] =
      ")9k4<A`Mzs2I)$,wM`UN=TU4RO1gF.8&9[#;G/"
      ")I3Z0fhy]iDP(2J3M<*eY5M,Dm2WRq[Ac1b4bn]>uev_!Z-!OGwrK}U7=7[!uGgKQrM5Rp4."
      "d7fG4VWAS1^J1;Q#;l{aC[#^_]*Lg!+gs1<|u";
  char s2[] = "Din;1";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_130) {
  char s1[] = "Gokm4FI:h!9u^9jKU!y1|I%kazfB+Sg";
  char s2[] = "R;l=y@#6zB<HCu<#JFr-Ky8-smf,";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_131) {
  char s1[] = ")yl)4Ysb%$*";
  char s2[] = "?`nx4rdv`B-+$z%7l%s>w$NvZoLCGf*BYf7[CojI&a}hIs";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_132) {
  char s1[] =
      "=,`;:L_}SV(`?lJd#a+g!GmQgdnpp{e21(m$P}1}>P$bR]IA7JO!iuuZ4#:>wnKS`i!"
      "dWA34$Yz.drthe|*S`ZrNV9.34[^Lj";
  char s2[] = "L1)Ol2fo&h]f+D";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_133) {
  char s1[] =
      "7I:3e*n~@]cR}~yKz)iv+Wyd(64k<eyW-;C6DBb0/v#D(.?+)Ft?V%Ea5LGM/"
      "8Tw3@<YFo.V";
  char s2[] = "z9lS-x-6)^7o#6diXo_-f3p<byr`0Z";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_134) {
  char s1[] =
      "}F7|v_Q>rvF*:>>`ikFTlb~.{+ZU3+z)>,,Ir[)HvXBujR]g$ckX$GJWb:BbYb@[kfO*/"
      "1rjJ(KDx0FV[eptuSq.onNdPkv&";
  char s2[] = "0EVxOe{&Dybh8N{/u[bV@L#3&+v;t;CNGg?VQ5";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_135) {
  char s1[] =
      "|Q1kq3GERgW<`M8?<I4i5C?u83IuJT1q$;qOCpO={JfHQo,kcPZ|h[JO?%:"
      "H5tC9g1TDfNtsg1d-kA/Jn#&{}mccO|eQSA6-Du4JUvt9}z+a*";
  char s2[] = "c{+_O$c62b8<<";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_136) {
  char s1[] = "(:;2pxgwxz";
  char s2[] = "e";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_137) {
  char s1[] =
      "v0m%@aZj2BJ%;~B||}A`Kx+PT3qzU=pZx5C+ARyq~[)l#7j74ek?`pu:D!XJ#iQ:~p5+t4q."
      "Y3iLz$dc1e.R;wKRH,ons#Kc)g=m>=:T6";
  char s2[] = "@]ppDFtb";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_138) {
  char s1[] =
      "B2F25u2qM,}RbIoF%yA5Y=#RN]5gcFfHtn(z/Ad|z77aIgxECqAshG$l8iHq,7UnL&32";
  char s2[] = "89t$*%q)]N`%FNN<<_ULb4&Fy$KHsQ%b7`7>:Wfn5";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_139) {
  char s1[] =
      "Q[@63@<4#{`a~LUlH[@c`tc3IN6S9bv3&-.ARR((c@E6WhOiW(~Vc|z|/"
      "Y{;EY#H]8,#,~ajK*ND1u(W>a!0[phL7=@hhTEFe|HovOEH:*UP5G=B(m<t}u^xufo.";
  char s2[] = "NE9qan[B]33C7{T;Q";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_140) {
  char s1[] =
      "2=TsYO^l<APaEt$ji)C%&)lY;.o:*>j8Zc_:fO+QYY}J,:W~X]uA%;DgX+iu0sy`t}X]"
      "M3H4p64suzV/xX~BCr{7KX~-js5M$wV[gLH{[";
  char s2[] = "tQ5QpJTMv|nL,Ned[kY_DO%*NDc8wN=mW&66LBB*En?(";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_141) {
  char s1[] =
      ")ctV+wHv?SmcN*@I?C1k(u}H-~(&IxW>eWnyo7:Rp^aNcThT_^l()fDYMADyYGbwd2>"
      "FsorKx#t2;&.>6#f9>0)L1WO7wxI5Na};b(s8x_dXdG*B%*/}cGMZ#{sE4K1^j_?O0/"
      "eHSn|{!=9;";
  char s2[] = "8j%|S>TS@RESW?qKKXd69[;f49Y?PE;7oKR3p";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_142) {
  char s1[] = "d`?je%jX#]O4Q~hr3^1{[EX%";
  char s2[] = "I$@#h|@Z92H-2$~QSQGg|O&Kn}eVuF[icY5*gb4k^=~";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_143) {
  char s1[] =
      "o(L=B;eoz*F^xs]cRM=v2I;CT8;VuXk%t!)eoovuc9ws7J>YmeHd*]j79O?FLqu]?lD$#5Y:"
      "&Q~ZpFht<VYW,PnzUp@[{OQ+NZ#~jDpJ?ZX;Fi-.yM";
  char s2[] = "a!QoCI|sTlkU}X*_A->-;aT<A9NQ>.#:GB~;lC-hjt`m.H";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_144) {
  char s1[] =
      "l77pr?ZX7e|AVyNa[YqVbe+dgI4m8l!fF%AXLhGR0Dl#3*`$4Pgkht8{p9uAJDs/"
      "J[ABw-.jyv;*cW(piu@V2NJ2$68DMX?lb>+L?Gg)!TQTfb[M4`y8";
  char s2[] = "f6<s8i+3RC*qpwEt}l|,E~1-zI,r_q$l5q{]^L)C;tv";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_145) {
  char s1[] =
      "PZ0Z+b6E.!2>[RAR#qA@XbI-YD2+Z+0HzzP0Ysha},nm,c)#fM(+K=$8bov+JLPE{E)_:"
      "40u9}fa/4(K>)e>jen|Eqi-!1_?)gTKQS!xC4OOpc<S<q4*nr8tcav%r";
  char s2[] = "qZG6FWU:}Nx.";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_146) {
  char s1[] = "pjmytoVBBwo8fL$#_6fqm,aQ;REgMBX^v3TQ#Jw,-h^^f*Bh~-mzgknH)*y}TF/";
  char s2[] = "3zcLBYj/G{s@3~xWOrWYFl|:Iyf/dEoN_;MM+M;P1r~";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_147) {
  char s1[] = "XxhJ8I!4e[J7VGct4tK4ktW#xU!3yfm!MXS@";
  char s2[] = "Tk#3Bi@bd5($Dmdf-H|6HY[r^Hm_`fg;Rb2nGN:T8fLdO";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_148) {
  char s1[] =
      "iZp9t7C1oshR-p`@xpbuLp42$(KR(#5+0Ebb7M(2jFN.w]!Z,bdV1ns9|n!Kv3H7j[q4j>"
      "n71_{<fS/O8qE0T;/JQ$&?+K;LpK~3tIPl|,f[_A:{U8:|0iitlk$-x:p";
  char s2[] = "A((~-DI}Oex5q5vAFnN;FF!Q";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_149) {
  char s1[] =
      ",G,D/Z>eXx9Df2%zSZyeYH@>M5w!/"
      "E>V8qk7v`7!tOqIMmex]$Yil;7%?{i5L2TU2P2dXwI+WmI.ytm%~5`*AxmC:se-6phP["
      "HOwn^Y|md7IF";
  char s2[] = "sX#:BRQVDm|0H~v$SUX^|WEDKY[s)N[m>(";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

START_TEST(strstr_150) {
  char s1[] =
      "}~$lCL^]A0F$o+T.GKAWir`IcUJ5<=0yIv,l|]O%+aMUn^pN&z~5d]slsAuo@4WcU2|v/"
      "?1,gy*b05>J//`>6g6D~v*J@}x<b(j@SI)O_*f%N9Aw-Qa3)d:,Y`M";
  char s2[] = "ufw;@,o6p[iQ;bvA$NiQ%d!)t1PEZ}~23vWE88R,l{=eh,";
  ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
}
END_TEST

Suite *test_strstr(void) {
  Suite *s = suite_create("\033[45m-=S21_STRSTR=-\033[0m");
  TCase *tc = tcase_create("strstr_tc");

  tcase_add_test(tc, strstr_1);
  tcase_add_test(tc, strstr_2);
  tcase_add_test(tc, strstr_3);
  tcase_add_test(tc, strstr_4);
  tcase_add_test(tc, strstr_5);
  tcase_add_test(tc, strstr_6);
  tcase_add_test(tc, strstr_7);
  tcase_add_test(tc, strstr_8);
  tcase_add_test(tc, strstr_9);
  tcase_add_test(tc, strstr_10);
  tcase_add_test(tc, strstr_11);
  tcase_add_test(tc, strstr_12);
  tcase_add_test(tc, strstr_13);
  tcase_add_test(tc, strstr_14);
  tcase_add_test(tc, strstr_15);
  tcase_add_test(tc, strstr_16);
  tcase_add_test(tc, strstr_17);
  tcase_add_test(tc, strstr_18);
  tcase_add_test(tc, strstr_19);
  tcase_add_test(tc, strstr_20);
  tcase_add_test(tc, strstr_21);
  tcase_add_test(tc, strstr_22);
  tcase_add_test(tc, strstr_23);
  tcase_add_test(tc, strstr_24);
  tcase_add_test(tc, strstr_25);
  tcase_add_test(tc, strstr_26);
  tcase_add_test(tc, strstr_27);
  tcase_add_test(tc, strstr_28);
  tcase_add_test(tc, strstr_29);
  tcase_add_test(tc, strstr_30);
  tcase_add_test(tc, strstr_31);
  tcase_add_test(tc, strstr_32);
  tcase_add_test(tc, strstr_33);
  tcase_add_test(tc, strstr_34);
  tcase_add_test(tc, strstr_35);
  tcase_add_test(tc, strstr_36);
  tcase_add_test(tc, strstr_37);
  tcase_add_test(tc, strstr_38);
  tcase_add_test(tc, strstr_39);
  tcase_add_test(tc, strstr_40);
  tcase_add_test(tc, strstr_41);
  tcase_add_test(tc, strstr_42);
  tcase_add_test(tc, strstr_43);
  tcase_add_test(tc, strstr_44);
  tcase_add_test(tc, strstr_45);
  tcase_add_test(tc, strstr_46);
  tcase_add_test(tc, strstr_47);
  tcase_add_test(tc, strstr_48);
  tcase_add_test(tc, strstr_49);
  tcase_add_test(tc, strstr_50);
  tcase_add_test(tc, strstr_51);
  tcase_add_test(tc, strstr_52);
  tcase_add_test(tc, strstr_53);
  tcase_add_test(tc, strstr_54);
  tcase_add_test(tc, strstr_55);
  tcase_add_test(tc, strstr_56);
  tcase_add_test(tc, strstr_57);
  tcase_add_test(tc, strstr_58);
  tcase_add_test(tc, strstr_59);
  tcase_add_test(tc, strstr_60);
  tcase_add_test(tc, strstr_61);
  tcase_add_test(tc, strstr_62);
  tcase_add_test(tc, strstr_63);
  tcase_add_test(tc, strstr_64);
  tcase_add_test(tc, strstr_65);
  tcase_add_test(tc, strstr_66);
  tcase_add_test(tc, strstr_67);
  tcase_add_test(tc, strstr_68);
  tcase_add_test(tc, strstr_69);
  tcase_add_test(tc, strstr_70);
  tcase_add_test(tc, strstr_71);
  tcase_add_test(tc, strstr_72);
  tcase_add_test(tc, strstr_73);
  tcase_add_test(tc, strstr_74);
  tcase_add_test(tc, strstr_75);
  tcase_add_test(tc, strstr_76);
  tcase_add_test(tc, strstr_77);
  tcase_add_test(tc, strstr_78);
  tcase_add_test(tc, strstr_79);
  tcase_add_test(tc, strstr_80);
  tcase_add_test(tc, strstr_81);
  tcase_add_test(tc, strstr_82);
  tcase_add_test(tc, strstr_83);
  tcase_add_test(tc, strstr_84);
  tcase_add_test(tc, strstr_85);
  tcase_add_test(tc, strstr_86);
  tcase_add_test(tc, strstr_87);
  tcase_add_test(tc, strstr_88);
  tcase_add_test(tc, strstr_89);
  tcase_add_test(tc, strstr_90);
  tcase_add_test(tc, strstr_91);
  tcase_add_test(tc, strstr_92);
  tcase_add_test(tc, strstr_93);
  tcase_add_test(tc, strstr_94);
  tcase_add_test(tc, strstr_95);
  tcase_add_test(tc, strstr_96);
  tcase_add_test(tc, strstr_97);
  tcase_add_test(tc, strstr_98);
  tcase_add_test(tc, strstr_99);
  tcase_add_test(tc, strstr_100);
  tcase_add_test(tc, strstr_101);
  tcase_add_test(tc, strstr_102);
  tcase_add_test(tc, strstr_103);
  tcase_add_test(tc, strstr_104);
  tcase_add_test(tc, strstr_105);
  tcase_add_test(tc, strstr_106);
  tcase_add_test(tc, strstr_107);
  tcase_add_test(tc, strstr_108);
  tcase_add_test(tc, strstr_109);
  tcase_add_test(tc, strstr_110);
  tcase_add_test(tc, strstr_111);
  tcase_add_test(tc, strstr_112);
  tcase_add_test(tc, strstr_113);
  tcase_add_test(tc, strstr_114);
  tcase_add_test(tc, strstr_115);
  tcase_add_test(tc, strstr_116);
  tcase_add_test(tc, strstr_117);
  tcase_add_test(tc, strstr_118);
  tcase_add_test(tc, strstr_119);
  tcase_add_test(tc, strstr_120);
  tcase_add_test(tc, strstr_121);
  tcase_add_test(tc, strstr_122);
  tcase_add_test(tc, strstr_123);
  tcase_add_test(tc, strstr_124);
  tcase_add_test(tc, strstr_125);
  tcase_add_test(tc, strstr_126);
  tcase_add_test(tc, strstr_127);
  tcase_add_test(tc, strstr_128);
  tcase_add_test(tc, strstr_129);
  tcase_add_test(tc, strstr_130);
  tcase_add_test(tc, strstr_131);
  tcase_add_test(tc, strstr_132);
  tcase_add_test(tc, strstr_133);
  tcase_add_test(tc, strstr_134);
  tcase_add_test(tc, strstr_135);
  tcase_add_test(tc, strstr_136);
  tcase_add_test(tc, strstr_137);
  tcase_add_test(tc, strstr_138);
  tcase_add_test(tc, strstr_139);
  tcase_add_test(tc, strstr_140);
  tcase_add_test(tc, strstr_141);
  tcase_add_test(tc, strstr_142);
  tcase_add_test(tc, strstr_143);
  tcase_add_test(tc, strstr_144);
  tcase_add_test(tc, strstr_145);
  tcase_add_test(tc, strstr_146);
  tcase_add_test(tc, strstr_147);
  tcase_add_test(tc, strstr_148);
  tcase_add_test(tc, strstr_149);
  tcase_add_test(tc, strstr_150);

  suite_add_tcase(s, tc);
  return s;
}
