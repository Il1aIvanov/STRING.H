#include "test_me.h"

START_TEST(strcspn_1) {
  char s1[] =
      "Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!";
  char s2[] = "Hello, world!";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_2) {
  char s1[] =
      "Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!";
  char s2[] =
      "Hello, world!Hello, world!Hello, world!Hello, world!Hello, world!";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_3) {
  char s1[] = "v";
  char s2[] = "vendetta";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_4) {
  char s1[] = "";
  char s2[] = "Hello, world!";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_5) {
  char s1[] = "Hello, world!";
  char s2[] = "";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_6) {
  char s1[] = "6";
  char s2[] = "67";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_7) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_8) {
  char s1[] = "69917020";
  char s2[] = "69917020";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_9) {
  char s1[] = "699";
  char s2[] = "69917020";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_10) {
  char s1[] = "69917020";
  char s2[] = "699";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_11) {
  char s1[] = "";
  char s2[] = "";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_12) {
  char s1[] = "69917020";
  char s2[] = "6991702H";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_13) {
  char s1[] =
      "/%~hBYd*,&K@ig0>^iSo5pr*M,O$M>o`c%v|ED62pdmOFn)kiJ:KTCs)N8~080K3Z.-S6Y`*"
      "l{q$<:sn].G`[dgriO)wJLIKv.x$coOpT@Ka}2/9G}%W^MU-!x-~u[0Tp@Pk";
  char s2[] = "E!H0%z{Xs";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_14) {
  char s1[] = "qSLp%h,e,e?8,,t,RtM+S/t}A?[%YNyBK-qWk~70M~mrgKle(Yn!X";
  char s2[] = "";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_15) {
  char s1[] = ":XyuF++Jxu}WjD2@_sV";
  char s2[] = "NLd/_XmD^n#yD#peP[d&Mj$";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_16) {
  char s1[] =
      "5GHBR5lM.Wk?N=2y9~(i|}/"
      "~oCK_XX}qNubs4O@9O+]aMm!kFSZQ2<a:30|.l#A<0YI-Q9ROV_2ht0w4OsP7+"
      "5PPHwy79dJV[O2.oZ/l`7T{88<";
  char s2[] = "bkO.v,g^`AcsaY}Fsdxx`<SZ7o*8{1,oL9-";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_17) {
  char s1[] = "G-FR;nx]XJD^;xF{^";
  char s2[] = "$;|6sL4)C&R%NFj;S%?)HUTA3";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_18) {
  char s1[] =
      "UflW*?*qNWVw>?@~Si64^RAl.q0kys)1nqQQ[e9P(2or2a0O:(fs`6h!kv}|bL4RH/"
      "6kL?k*%V$1PJF>GN]xEYPr=ri*Loy4yY{v4~rdkyc]):JocGS2*{}3Sqs1";
  char s2[] = "C4Y";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_19) {
  char s1[] = "pzf.L2.-g<M>fA{t)*1r~H;J!epk)QaL,@G&%";
  char s2[] = "^El}`mQ+Ht";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_20) {
  char s1[] =
      "_%o6,01GyvRb0dSHH}p?:Guhs1XkFk~z!t%]t]vqWqAq?SEW,8vBtW`Ltrn^)rp<Gz##s/"
      "Th&9F>5EEC`mE#ml0hD{NAh&=Fa[Yuf@v1Q^b@PZ0|@40iYP6!8>S$EnO$W";
  char s2[] = "`&=Xt3+iHG-{AD)";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_21) {
  char s1[] =
      "C3+R;_wiq3$PHE-:m+a*s`D=r;j#2doRJ:q.Ij/"
      "$n;5S=(H?5W{;Nme~d%J[o)KEyCdeBbY&UT8>0B)_V`";
  char s2[] = "<#&4mYl1;=l|k-8";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_22) {
  char s1[] =
      "aNpy*/kK}]8gb:$}/Sy.~c8ORKlx`=y/DiLZ~&5yTaUpplm?}VP^+}[Wxc|z^PS/"
      "peVIv_FhfO]TL8pM1i?f05$#6-O$]#B0A$]Vz}";
  char s2[] = "ZIOdvg1uOFxao~pnH5{?RmH|m";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_23) {
  char s1[] = "G~]n0wT;RwJRPOPc[PxvO?&;Ks,EVu@0R&R~tVNSOch/@TyZ-4!V@Ler6<*n(,S";
  char s2[] = ")VJ1*b$HB[uU6Cuu9gbAI<x";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_24) {
  char s1[] =
      "|0o(#TSvXj[B4lodWYEE44[k-R.N(4nruM-OP3A9_q$.jQ5%|2/"
      "*sTCo{*ORS7iz<yw`a->(/K7!$qJu#Z+){4`,ErGHQ!^O+#W4KO&75/";
  char s2[] = "^m;;`)igQ=$C@q01d=me)7-";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_25) {
  char s1[] = "N0[TAq(";
  char s2[] = "Hqjn)NgP#`n6u@Br~5wN2Tt;wziZ^MLzWNGHePBwz";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_26) {
  char s1[] = "[`#j|+DCAjm>>;3Dzs;8d<UPb0y?p[~)m;6Gm";
  char s2[] = "?iXZ~f|D~[M*!~6XueLL$3+-K:P";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_27) {
  char s1[] =
      "Io^a%<s3RRoK#P^;)W`[A__=MB|Ni2*{Ztf.]5``:.P|<-~}v&**C^Bs<EZJMRLD]}(~";
  char s2[] = "A%xj2:|JLqi-,wS00,JM$>}Lcmfrz;";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_28) {
  char s1[] =
      "SqHjoHrDi`.qX;b0{q1uz9C*?zw.+`b,h^4oFLBR@32DE/UF/"
      "ROKz%.O=L>r8-qkZ$%CGDM*H=%,u9+LL4cnaAe%5yprzS_u<+sL";
  char s2[] = "xHwh";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_29) {
  char s1[] =
      "]UOX!bWxa|J(]ep*A[|0&&3a{Nz%KJHSp|i)`7%Ae#D*0|K-Ujq&zA[nZ`#%f3$N}9e9$,."
      "b!lZwBSaJG]sYTJ/{$fnjMb6a>WkPdwcUK}s?";
  char s2[] = "aA(5:Mgtoc7--akhp6o+#(5G";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_30) {
  char s1[] =
      "]r(vNx4EKLc5w,w$=V<lcnay5i806h`pzB1Y^e!(qw{Lhupgp_J9AuinJH9bi[=2eFLh%e("
      "zRue9!T[VKG]f=Lm}D0CXZ;";
  char s2[] = "QSDhynzMHkg*9N?wPrFIItitp7T*8^/J";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_31) {
  char s1[] = "*o^ykQc-OWaFZS";
  char s2[] = "Wc`,bDW(fvQJtnI4&Ve%";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_32) {
  char s1[] = "#=ijH}Wo-krWM?f+_)c^y`|hr$_$Nv~3|!(f:F=1XtFs5d$ji";
  char s2[] = "_@)Nw}Eb]0W*w^V?Oy_={r^G`Z}zHR))yF>~v{i%N5-&{Bn";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_33) {
  char s1[] = "9r,";
  char s2[] = ":!q#Hmh8qQakWnU_5QA20VR?rNS0W^|tiH<wQ)!}lI,{@";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_34) {
  char s1[] =
      "%/"
      "N*EtjOJ+Km>U4tj}px6L_jUnQAp*EffkDb_ZCqN)`!&Jxp!@wJoE^j*wYVX;U64Nl:]"
      "SX3txMxFPVi{`8H=9Bx~.l1LsiF<";
  char s2[] = "";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_35) {
  char s1[] =
      "A^NukpUHNGT;_I`dPqqOp3Yxl.1n)N%k?#V*]l{=0iR4z!I]dU;Z4P#=@`VGuYeVaL)]$";
  char s2[] = "$qov2?eQ>`2LLngas)1W{=E%N~d_3A2pC65%zu3HiQ4J*QTw1";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_36) {
  char s1[] =
      "~ReSDeamKrv4Y/K}KPh^)prLNuvV*l(sy(3<8etG20~^`(fi(Y^aVGhey3oxG4/"
      ")QTL+-h<fe%{aXSd@Q)ZRTN=ik($0(^bn)ah{-kspvX==R{r1t4U$p!*|KeE";
  char s2[] = "+/FKmTVb:-8R0y7p+?KY9-ZHGyi]%an#iW;1Lv{M6x.CvL?mo";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_37) {
  char s1[] =
      ".Y53W&PXx?^;l[@J99#bjzozTcnv[HplIwYs`b[Ta=/m|FtPobG/"
      "=UEG6N>b91b]rv*ezOr&^ZAcyUBlHb0+b(%.&s%D{B]DWTtYow1W";
  char s2[] = "gqb3M,}dcR_SH/%W9SV!IJBR9W-!pBf-)OgF5R22t%r&B@*";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_38) {
  char s1[] =
      "sZ[wrET3;4lpy3(Th|NG@udw~sgW9,$Gl9N2ozPE2,VsX[e>EE)39v4ghnm<*i5yHKBfarw~"
      "gr~e2tD+K}bP)az<x^HDJB?(Y5:Ej_aXTUC@<a4jWn*~$^Y]f]DSK6>*!Y@";
  char s2[] = "pJ^<.;I0Tj20kMo>H0{u*c402Csep^d]IM7!NR";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_39) {
  char s1[] =
      "GM>m.#C<z=LAJTXN,3j_Dm?57]Pq/OPT1/"
      "@vM]{R>d@3,?9C-bSJ!H!Z{;S5WIDEQr8$tZ~3@0a";
  char s2[] = "scHJN@<N5Ac:y/b}q7B";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_40) {
  char s1[] = "&:h[$kX5eeE^q56$";
  char s2[] = "?iMN;-E>{sj28rlid8usP>fG";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_41) {
  char s1[] =
      "pxUzAnk-Ja<1Ag*jUiKLA.G*8va>sB(a(0wbF0X8S#Y!$eiO^e9jrHx1ci8`UN5NsEq!["
      "rJC-JRE,~B~fd5z?trdAiR}PyT%Ky#dd=>JI>Se_l5c(.^/"
      "0~^,.k#-?6:?W8RTNbV1d:}u_";
  char s2[] = "u3LcCD,RNBHwzuW?_SRW`FS4H-<o|Y8";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_42) {
  char s1[] = "M:Wf%G!5Y;cV(R}OStK@C7P?T([l3UM@";
  char s2[] = "D6E;dh(08y}&An~)Pi{";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_43) {
  char s1[] = "gJ/SZB1tWhS7]PHzqBrKxXH9b|2j1b,s<gvF/xq[nb}TkaMRu3";
  char s2[] = "{v#Nv7T@^iAH@`E5r%4[%^J%r-A@N";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_44) {
  char s1[] = "=^*~_c+tQq,4;~S,T/VAeC}R4%aSy/3*@adG3wW%Ai|{";
  char s2[] = "#Okd0xS@urCKp~G@Kpl(w~C@[mjN/r,|g";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_45) {
  char s1[] =
      "b.[b?(b>2S@{`M%YI#ia6],q78E/&ERYj/"
      ")Ek&I;Hb>%HT%)1D04,Ys^#S7?j`RimTole9iYLk+qTIxAal>q8]d_pmY9r[4U>`(9#5^[@"
      "j*5-.C.vzW*tv7%I>wH2`HJU1^:o+%HM/ww_THT?okS_p";
  char s2[] = "iU/&t1S~;`i,mOa(dzFi+Gw]p78YN3NH_x,iL2";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_46) {
  char s1[] = "/#@f&Znj6FiviZI;r8Bck&#Xsmd[8Ec_T<0/o.0$MU.N";
  char s2[] = "~yB0-6sW";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_47) {
  char s1[] = "u,QQ&(ESI&2Stu$A19UjXj<?yB3epDf|bLpHNn?@-<[t!5FRP11>+%mds9lf1t";
  char s2[] = "M(|KO8M%*PY=HBN{scb379#g3-I;;WK&40@|RU";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_48) {
  char s1[] = "ycmuYDkaqoISI#IU0K#4~";
  char s2[] = ".1?g8~,-L1";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_49) {
  char s1[] = "4#ZZm(VcHEe[7D-ao8LS01;7kY_%VFOv>Q?)nbzJbO^AH^";
  char s2[] = "vnt4%,Zl17";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_50) {
  char s1[] = "JUMiF%";
  char s2[] = "):%;cJ]XN+XytXgS=ktL!TMWl-X1";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_51) {
  char s1[] = "4GI=-N[-vPsS_|i8vKrNG?nd,7`Qf]aVV`|ax2>Z2%Z";
  char s2[] = "Im$juzx/V";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_52) {
  char s1[] = "NH7$!N?)uNI%@vi|u)}r-a!m_ivTQzykTZ8OG_A1D/#!|-^|6,U.l~vk5GpTyz)";
  char s2[] = "%~c*fZL;cO#dmjgAcl]gUX/E~eI|S_&sN5,P3*S;Q/k";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_53) {
  char s1[] = "?1cvUP";
  char s2[] = "{5)zW$";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_54) {
  char s1[] =
      "04%-.US(ex7MaW=Qv^<CBz=O#qE&sIm?TP`Jb7@j.}{=__7(IU7;a*;$s7$b1s[9.<"
      "CFjeEHjxw,S-_:JAeCY{GB4*-Jd2DmNZ:jAEU5zjKHFp[XcpZpPqodXKH";
  char s2[] = "_mY.h2)94PI]5327h]|&^AL~`>MaDxu1GKU<N9.Rd,T";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_55) {
  char s1[] =
      "jX;g88LM0k[_eu#I!8x/d])ag&H*Kpc]o;jy1+s78r&DG#gYjaQc5KW|t/"
      "3f<t:f0q4_42|YVm}*,w/h+i44-mGd2$&h|(@mIoe;*[KsEHh2.(ir=<jd]{4cD3-Tq";
  char s2[] = "8hNS&AkE?";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_56) {
  char s1[] =
      "a+ZnG`bE%lU}b`1&q!>!NqxL,n$[tK<`SgOz/"
      "09ppBU&Cpsc>fW^-@Yq}my;iHc]=VdG+c?G+lS4-}~{2G:,g}n7}B3I`Ie?469RS`&1.,*#."
      "~Bk5Su";
  char s2[] = "%)jyAN#WTINlqG";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_57) {
  char s1[] = ":73QQMdM7!.$EW:@ZJot";
  char s2[] = "ORhpJB4yFu|DE]~1&X[io6(#l|N|(4/[mStFzAy.m@";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_58) {
  char s1[] =
      ",t(i8{GnV2E(#f_Y`2fMe!R40vcP{s8/V!BHWRbcPK#.5AFh1x3gqbXzz+>)tHGt::";
  char s2[] = "c<8A(G{%9,ptSVi^DD5lk;O-KXFzKg&I,&XYC{C:gw&";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_59) {
  char s1[] =
      "A,,}kTQwU65I>8LvURB(_[I~4?e95KLMe^6HDP~zd4B(!Et*w42|.#H/0x_@XQ/"
      "HP^)@|n&Z=*QshyaK0y*d+M;.aci,%0c8LCGrHr";
  char s2[] = "HQQqG|oD~s-o%}tKvk12$}o{l}gd#C?Xt6o;w(~#Qa/BA";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_60) {
  char s1[] =
      "5<UzW~_41aEX`)*`IHzQjuUcV9s4_;/"
      "=(i77#rY<xc92H%3nY19_U.glV8;1|YL:;-e$|_`$jr9KicnRZCylkViE{2:g@|phq_l";
  char s2[] = "JLwC^6Rw:[#J|UL#@-w4#`1?BJpl_hk%TcbrmjcWBZ-]cHXwZ";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_61) {
  char s1[] = "C{0z|zA{Ptx|l//tOmPf@<xs&uz/Rid@d8";
  char s2[] = "aGSD!O`.LUco:zH20jv*b&:[r0Ddb";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_62) {
  char s1[] =
      "}WF$sVyPhVvGXZsrfv49JhNVzNoX88lAV3|C?w5^U`zHsje>Zo{:t<-(_G[^9}o*Egb!IQZ)"
      "Jfhyjzy.ooldkG#4H)%w;+dC5N5#o2yB/{k5Fh~y>`8FHE0(rA";
  char s2[] = "&tt$EdJhM`[wxXniQ1zs6;V";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_63) {
  char s1[] =
      "HoHcHOkT)Je(vI*:TMuj.Al1$8K&`ptOBQEB_+YjiL8-[/"
      "o2jm{aQ~%sO_ar&qqQ``9e}n2]zGPJ$dr=1w+0wI<[h/9QGFOY#Y_p`hx(])tf";
  char s2[] = "eivquiOaGlCzUmAtjgm*`YF$-";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_64) {
  char s1[] =
      ":c*1<fB-dhWoSf4FQ=tWz1_/"
      "ovQ~#.dR.OIoL>rMjbV4sEMor<O@i34sZR<w6%HXV,2Zb]EU[mhqt";
  char s2[] = "zQY:@0ul7y2[N>Xsn@!?La";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_65) {
  char s1[] = "@2!Oz>`[4]z#0X";
  char s2[] = "SKkD.aY_9anksqftsfj4kT";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_66) {
  char s1[] =
      "U8%R8O+vB=L?ZS>{ha,+fdQwM7qT>&$MKqNG.Of+P~hd#N]LNq9%5<tuss?!!|=z8";
  char s2[] = "dgJ!TBnuYvBu~Bfpn^WRozPbxTgssr";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_67) {
  char s1[] =
      "nR>#/8krf.WU[=mH;C)$!fE<!h|AlB{PbEKBul~p&kNQbFv|`vu3*_Yb-|/[)~*.|$%;:Vc/"
      "7IS+A/sB0Ee!=ZNH0iGQ!JItO{2PXDRRfOg0zx*3C-c7)O=5dop;o08u_sc%d335>Q`r7e&";
  char s2[] = "f9/@qri>vNJrFxjlLcAph.P5K7j";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_68) {
  char s1[] =
      "R?%-u=f+DbFi@5@Qy$wO@&14bLj/m784iAwSm/"
      "[L7i7?0GYAQC3U>orWkj^tdOlWs<7q8#!J/"
      "f)1B5KJ3jB<xS%g,RU{DqP1RcfI,.QL)Ju.iIIL0[*Z1/"
      "gv<,h;[6K7u{-99r3GplRUaDE[oCea!L";
  char s2[] = "95~C5*`kOsI?/pJ{;6[C}87Fxs6+n783.h:WIF/l/l;hY#aa";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_69) {
  char s1[] = "i";
  char s2[] = "V`fTc[2/BWP<X,b@S*V%p9t,P^Y(GpyLVOvy:fRr5U(";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_70) {
  char s1[] = "D9f}d|";
  char s2[] = "|_h>t5TL22ywN_uZQx^>fR&|I=IH";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_71) {
  char s1[] =
      "jFS3=`g>h|yUlh7seVBcT7-bSDupE#I35cXx%)Ym-.1O9@GmvDF3Y9lcE)OS30=0:NLVjA{"
      "zhm8awO`wD7)ZM~$DZ*E@eB)beW$s}B`2N1cyt0zY@[:BrzmCL4W88";
  char s2[] = "!`<1v6`8W}}HoEW>z3";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_72) {
  char s1[] =
      "M-e]pgfL}!xk0Ny~3rw_{2~{X.8>Tvpn$q|6+zdnn3$yc0]$^i:/"
      "<G(Ai.~CjFY*{9oE#QdsRMJx51ip;:il1w*h_eospHTN~gnUP*z:[-";
  char s2[] = "KohuxH";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_73) {
  char s1[] =
      "4`]}zNMCpEpL[A0.9`TuY,v<)n=h/"
      "![T<)0m&DP$-<fSQN?:FeIBIU-SDD{kN]NVYM%].+c1W";
  char s2[] = "}RO@g+E7D,a7UkRR4rNSFZ3Ms}(iIx<AZot_[wRUi%ceA75)Y";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_74) {
  char s1[] =
      ")M=~t]{^.m<`$me|**0tCLA$3o>^dJ#HcL9(2C|%76WMvG<D;3*&@$X}lEf%9QPu)xe}$1>"
      "8y]!Q)KYp>>$!v@YMF=q3&:c|k}X,MXzC=K+4yB}cF?b36A[*$5FbnLnzSzJA~RAGBJ#"
      "I0A|";
  char s2[] = "l9,G$SAewqrD!1]YbBVM1~vyfD]@?,-n|Pa)+/YSeKVl^VU";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_75) {
  char s1[] =
      "1p|ni//w!^C-4EhPMZ<dv>5*72hu`a/[$PNt25Q,YABCF*N/"
      "9}vBRS-fr:5d&`gSZk=S|Grl?;x)CG/+ePr";
  char s2[] = "mB6K@XU(iFp@&h>G/Xu?!prvN?gnywBoL[zu";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_76) {
  char s1[] = "1RyzehT!FI(,^UX+1WxUHw>y";
  char s2[] = "r{Jy&Qvo<8|Uo_ng[krh$zb^YNowIU0q^nRJ/L+?:2`!Eyg";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_77) {
  char s1[] =
      "alNcz>(Zlv|QU-CVQx1/cgMT.T,f(5/"
      "=ca}jcObi6CqUOei8O+gvtN1?{1Y4xs,rpF$$q]nw-<T|WMEM~Y0bgok8%jnTp+"
      "oahC5TX9J^sX-A@]<E;OcO1uzb+U&&O";
  char s2[] = "K%HW6YWD*v-<k5Iy";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_78) {
  char s1[] =
      "SG+0|6&93i>mI?3_`sLf1Cwu}lL4d5*f3,m>]|s$HPyB@NO/"
      "7G#uejCf^f0%T+g{*3Ij>>6T72V{2aVNjGwW^l^ruNr!4+e<IZ>r</2<9>;rY";
  char s2[] = "kQaFS|Qf#xW)JLELQt?hvt0@:C1[wN-4d#1`gmH>E";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_79) {
  char s1[] = "`2RmFIknsh*HW>zyzw^#i;p!cJ]H$";
  char s2[] = "SRfh;~+0BlzC3!H/:.2oDQm:=uV!:@$$w%{;p4FRWsSu1zs";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_80) {
  char s1[] =
      "n3Kd&VsYe!gOa[H4s-rw<hHM![]uk`#Wi[+`_VZe3|{|ya*ic]!y3V;-"
      "eLjv0svEVqdfefV7Sc_)G}wGPN:;8`{S0yFg6H,B84-|%G9T";
  char s2[] = "%dUtwi(a";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_81) {
  char s1[] = "W9rseiiX&>_AcQz|l7}7$P=gpvmh#tIHDl^5h9.EaVn:";
  char s2[] = ".wo37%](x>kUMzuQ)VX}m?T(DiOl<^A0O(@{4E:{";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_82) {
  char s1[] = "3<:d[I<QEez-euS&=:Byr+/t^k=0ew_^Lj5vjP{e^<)aAq";
  char s2[] = "UjAg^v";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_83) {
  char s1[] =
      "jt&d9R@G@Az/~CdC6*i/"
      "TNo{|%(`17b3gEF!-L_*q1l0D}p}VMn#3t&ma;<A!tTm<^GcAwDZT322vpN";
  char s2[] = "A<6ZEO?$&zK~r;9{u8Ba*+^-k}$hW+iwfL_V47KM+R";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_84) {
  char s1[] = "EB)6/{q^ov95oS}IOyRuz(*Z#@LLwkL?Ok5b6]?Ux^W=[r}_tC<GF&K";
  char s2[] = "6g@UvfJiPnz]_G!uYGkVG%YI]q2QD}(M*2!`w";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_85) {
  char s1[] = "DftlS.&=&Xi0=|.H?;z*&K5/s!yZ{";
  char s2[] = "C`RbF5PyjK{J5i;q-";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_86) {
  char s1[] = "(RmEb";
  char s2[] = "HXSKh#{!9IqjMN)Xx[~5K|OOMLN830^-Cs";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_87) {
  char s1[] =
      "cgbE;.jn%o;b(aj3v>vV1aOI[-|Bxo(9e=U7tkQ:{,qVh[4Os/a8IOKex`nl8Wh,S";
  char s2[] = "&";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_88) {
  char s1[] = "D#";
  char s2[] = "A8jRJq0#]yV180OF42O/k";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_89) {
  char s1[] =
      "-=s/1+%E%qVJcR|[q]Ws8@,n}1sh[T;~R/"
      "r$nyYj*rco(gRs5Jw_qaj+4hxmg8mdqW@AXU#WVV!y8jH}lFqw";
  char s2[] = "3hNw(L";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_90) {
  char s1[] =
      "VQ|?6yU^NP}!zs~,[>-<XGFd^;ih3R7Nva6b5>6ZVkZ#!rjYv:x5f=7CT:bG9s8%&OCre0o="
      "3?>C(]eR,F;FNFNC1l@`uG5=";
  char s2[] = ",8$j|}dtb=oR";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_91) {
  char s1[] =
      "AdzU-_]6,<zUpXK[f#$F!i(J(kArs~<51,8:]~0z]s8**,M=wK@:81*Ig=*I[pP#}Bo?rzZ|"
      "uC#jU";
  char s2[] = "U0Oxgf^icRvR>n4yiZ$3M+Nrn+y(e";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_92) {
  char s1[] =
      "x+p%pG2;(8cgnY8])#O!&ZHN25@*e+[Ex&N/"
      "F|O.;g&$EpJObA`x1Ny;T9qZwYKl~Sb0A@ga@%[1>Q`=6,OFCdt`LJEP4Bx@HV2o{,<h:s_"
      "DwN879o;@OpJLmc<";
  char s2[] = "*6HR_u*)3u";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_93) {
  char s1[] =
      "<7=HbEP$<i#.Z]upT@:mY[Un=,izczy!zVW[~<;{y@ieN)-t><(%7y8l0~a^[IJxFaYy7p-"
      "eeA-buj1WZ4TA.W~r(rnVA25(v#hxVA}?l0ktAvg]+p,#QCuX&+bFtoOSq#_";
  char s2[] = "iyU9Ff_sHG|j";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_94) {
  char s1[] = "Pk+X2VBf}[H,prf)dzN_I%}uO1nL?^5Or}DnOs";
  char s2[] = ":b&whH";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_95) {
  char s1[] = "x{7GYs]u|(zq&Rw%0=0m}cuk";
  char s2[] = ",;<X#}k/s:#tR##";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_96) {
  char s1[] =
      "No6rB]l7tf7|P1isNNEuh)}mwhMJ3O7$jHu#W`;|LN|We`vXrgnAc=%b2V(m[)"
      "QA5loFg2ZJ4~8]54v6`F}ntu?BWMTP{kV=!/~-MhD";
  char s2[] = "oo,<hNhoPxV,N*Z6hvn}shwjR{BC=*j*/P,V^,0X";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_97) {
  char s1[] =
      "%zx~h4{Uny^3[[GKB55?r*`lZzZxfV+~RGu|5L(e7<MNDh3|*KDdIk[sZ2TGTO+Hg}w@/"
      "KK@ss|UYR3m]apb_$wffr(gzKiC@rcxidQjx@(e!3SjgiKxK";
  char s2[] = "}^#BSb/^.)fl#:I^u|N:UN|D?:k?4}aAu:m";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_98) {
  char s1[] =
      "MV4gfK`a!.]SY%W)8E^wO7IXGQ&.FeXQ%sgEhJ-;^WBdr7N|(9ksti,~~!)zMR.%"
      "nYYVZ4lH2aY$x9WZ`Eb:O[!T";
  char s2[] = "@s5#xqf]T$Vp";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_99) {
  char s1[] =
      "2;1ZW4(rX4/Z0@WA(h)HMhG1!y17N8u`P1LAKf>|Z6vut6&L@f%@]u|{/>|4eB!}";
  char s2[] = "Q>Na,1ZqJ=)!m>Myj;2PPY4f3h=a6#yOh:kZy%1";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_100) {
  char s1[] = ")b+`Z!j)[2-aq[pn6;P2oz2~~|Dl)u]&se|`wwy.o[0i5),gIg*Vwh";
  char s2[] = "0|:H<M&%=ts[v?QmXDPr4?aikPr";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_101) {
  char s1[] =
      "UZF:@_l58#UVPBGBgO`?*$Y<gSOZ!hm3{A$)|9~Uc]I1/"
      ")VQ[xW^*Q)XA^DUzzEAK}svvRJj%W17]#t1lPX:<gae.]!b0#fG=lA4i$57%u";
  char s2[] = "?EdT8M]!xd{}4YF(";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_102) {
  char s1[] = "J0cV6S6J0+m6,V1phv&N3-)46^c~u1d_ZHBiuTJ4*82?yxY-5{tL";
  char s2[] = "PcK+5O3_[@AqRmT]3R(zy`q/t{4`D=chp>G}o3D#0";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_103) {
  char s1[] = "HE,Bj5c7&H;!tW4;#:+Hv>K7$3`AtTun/)@L%F#Ig>dAX,23D,Z|U)^";
  char s2[] = "$a)+<QBf^hyd~ey`j^~4<{";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_104) {
  char s1[] =
      "6,//_<B(]kIrNtnGV]EP=Ktc%^CY:/"
      "F5t7xy[,CCv?+C-^IT~-oXRkWLib|;=oP@&QCQ}(,B;5o13*Yu7w*LDzH6M(^qZuhGBkd,"
      "OqM7X_U@B";
  char s2[] = "`@CDoGC";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_105) {
  char s1[] =
      "w4pz6R2BxX,._EZ1*j]22Rd7[YP^Q3^IzjS&[_*jR_2?=!?-L:B:+xhP9yUJ7N:]VZjkCnA."
      "=%7iE+]A:)RHz0#sJ5V#?IdKH7^.J-nJkA1J1]ipl:5^Rj^}w-#12@P&q9v52`G{s!";
  char s2[] = "J0WV]s^!aH|):ywF>/%Ak:>A#`0N^/_7iw#IL";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_106) {
  char s1[] =
      "}:7=;o$ViYp<*3fOQUo:}U)DO9Ac8j~D^q|[KYRy.S_GkiG!{fqhyiLB]qX;X0W1;]4{i~:"
      "7M&dhzA_^0|dhw}dW6D[)s+*cCahD^O~ifec%}KwV{4+FXMsc29VOH5A";
  char s2[] = "-`Zm1FA7r&WE{e*LkqY6@)=%#<E3I7ZUgY";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_107) {
  char s1[] =
      ".ZiZ|!0AbECNgLFnW8aCJ45ht`6l/"
      "bY0hAvoOZlPAFgd8O!NuRS60F`Z^,}uf23^kgL1!lQ53UlNBd]vS41MC?[D00MDR`L_095?%"
      "q)rkJlZHfX/L3bZC3,%mNFNxrzut9m^GnR;r&Z|)r";
  char s2[] = "NFtREmonpD*f?VS|>|lc2F;D7);PfQ)9WZ!5nu&:a5y#v";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_108) {
  char s1[] =
      "RCMWc[??NNN6-7{u{tkDR!vVAI8LB1Nk;eb/RT/"
      "I.p?IV$Cv~G<?:?#zdN%0$l7Izp7L9:m_hJDid2/"
      "8m])naW[xUqoB`aotcG=G@f`q}KoRas?3rK:PW(GLi(3%x+Te%cjt";
  char s2[] = "z)2v";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_109) {
  char s1[] =
      "[b`LF$>18=u<;t:M/"
      "1fQ<d.U&HGrbgRMhNHDYGjAx$Go16L=h9D]EljNp^uPoU=r0pb:8GOgY|HY(o/"
      "Zmi.kf#Dp;WY";
  char s2[] = "";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_110) {
  char s1[] = "AT_.8{6ADpU$oe62+!E:OiIG*Sv";
  char s2[] = "J$j6|53su80Ut-:!,FepBoiITJ_v<o#R+";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_111) {
  char s1[] =
      ".OS9i(3fbmYBl49RI/"
      "6I2,%ub&zYw7b6u8S#Xfo^@DMP%J+^Kzlgx`}x_BXWeU}ek-yD2n@j+TYvl4rTl+z-<veb{"
      "93-SZ:BI1cDO21cp@JjH1xL)C}O)TP(S3.97mJ0$0fys~XF(X&I";
  char s2[] = "U}i";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_112) {
  char s1[] =
      "F50^/"
      "L{mzKJ<Q?$#oFqyo2j,s?l7QRs.jH5+=;3|U_eWfAbwd]@{v{SLgJRd)}5O^qz@OA!"
      "0THJi0C6KoURFHX#}UXHd";
  char s2[] = "V3H}yPMOOGR/vX{(>SF-#>8D6Z$,O-Os#l_sl6r2Pj{M7";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_113) {
  char s1[] =
      "U0NN7G>)I%!!ehz9`aRc^3FVR.yMF5>VHK/"
      "+P<A1D@#D!x5hQOYngM)#sM=JUWv3i(L?cy7iFVyP0ygs<F0VdNqei";
  char s2[] = "f";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_114) {
  char s1[] =
      "9P+&|k}2Yqvv9UZbY|bId8H36H=5nI]Ud7P`U;t!kxgcA)qppHGNtbo>r96OL&RU*&O^$N{."
      "CfkYQ%]-D1nx:U1T<oP$R3>/wD^W?rz65+UMwXef6)Qt!_n*p8G*{{:Nn5#Ov>(Y1/xa/"
      "E58Tj35U*";
  char s2[] = ",VDBngpT5T{;L&A:tvych$4K2A/>^&,{l=*_Dmy4ru,oqNY";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_115) {
  char s1[] =
      "jvL475^RYyOK>3aV(),~tDK<XZv!y7.JS2Vy|Ab%W*[`~BQ~f*}lD7;D*T3(79rdV[F;*j@"
      "ILQI/bBsuTD`OY>PF6+I?Ab>d2GAO_t.`}=?,{T^t;{wx1lj2vVY=R>ADN";
  char s2[] = "lr,cTMk`-msq-SHN_$T:$bo6:*#n-i]";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_116) {
  char s1[] = "6BexXrJ`WI0V}TBd1#W1";
  char s2[] = "u78)t+H0.WVL~Nd1(fiF:4avfON1K0m::R8|pVrf1NfL";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_117) {
  char s1[] =
      "eTh(A-3|=*V19Tn5_CwS}N&zWJc)c@i-xP.5F*V[U0O8h.Yr_i8[~K`=%4o[@za;Dis2W^?@"
      ")!4FV(=MLO!wuW1c8}C),{{mV#rd+^2N94afh.fXk!w!x%rae<a$)^3T>Zg2*]xwO<R";
  char s2[] = "0v<I";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_118) {
  char s1[] =
      "}v[]d`V`TEDe#SqxHh>HV%~$|9)NdZe<ysu7[c%>x1pV4o[JB|fUPV/"
      ":+2Q1{*j.N;?7SXY3#-31uQffmcD;,C^[iD56G6_aqE]Q*nI4AbE12!c?+|jf(<"
      "SQ4RJhCsH+gmYleNq6T?J!x[-Cq";
  char s2[] = "7ST*]iU23wW}eqo:`GNtAeNtb&j%jf:QA!g}I}%Un:S";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_119) {
  char s1[] =
      "N<#lpj}=N5MUxAaORo+nM,L-NoqRRq:D--33[h},;A9sOn~k6w7N+Ia_-XbwYjn%@"
      "ObxQgow=@W^BY!5vZ$Oh|qN(8kea,,RCf{asHl(_2CzHE";
  char s2[] = "BUMo_)aO}bo/xk4RD|qJ";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_120) {
  char s1[] =
      "6%68h@en=V@sS[Lo@$*q-cI_gFw3v/"
      "B~I&C18l=48!T5V!>NRTPbupB5B5!+v+hh7^F4]4mK9vjV";
  char s2[] = "wq+)";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_121) {
  char s1[] =
      "GoM%{pQC}6c31;CJ[o_A}7P[Vu[fPm:&j;s>:ccFHmDA$bPgB1O_bCu$Qz^yY6A6`cPxM,$"
      "uR]8La,gLhi3GoMkAxpLSs|-?`)<t_M6D@Idbw#3E";
  char s2[] = "@";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_122) {
  char s1[] = "Pxf[Zdi3(|jfCp4}<2_wY2X-m}~&cE_1&Gs";
  char s2[] = "3%o#tLQXiJ}f^|cu&[6H#h)!`)";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_123) {
  char s1[] = "GsbZcSZ+iZ}Uvp";
  char s2[] = "YtDpfX5ZXhuV(FhfK,NDCg2;XvZ";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_124) {
  char s1[] = "XNt/&=y<W*s3},vxZQz,~Z?2N6?T~[n0M$O3w&KETdGF4;_`sSBzmxT$r?>";
  char s2[] = "852>6aRLE|Ofi";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_125) {
  char s1[] =
      "q2<q=tZ6(`Q!iSwE_}I*/"
      "zApe}QSPnv+LD4sry`ArDS#m2w6[M,FJOGlKON^.|(nHKzZ}Dm5k{LOaB+:d|Axwr";
  char s2[] = "*5EKTrLn0qB4XWbHZ6<Wy87%t}c:5~Eth4,v7Q";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_126) {
  char s1[] =
      "6(f0wE^t%pc,nQDE?*W9gE+(m4KUu[zEEU*<dS}}?gyuHUe?o~AXaeF^3RGt*j-W1BGhPg!>"
      "$j>;1py(~3WXL:NNI-%Wn2:5Tl9Ppl";
  char s2[] = "ez+vTytD|,3r(baIlqtfyi`[9qZO$Qb&ip";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_127) {
  char s1[] =
      "YE2[=WqtP0Df3J5S${BZgA`>#V[t?j_IrLqF9SExhnS:Bi_x-1P[5Cr3h,]k=r{i)|aGu?"
      "uX<X[[:U7#7Rq1686!J";
  char s2[] = "|YA2YyY]mk#[|LJXF";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_128) {
  char s1[] = "mLi*H{Pf?~=>451er?Hbr>*C4yd?l$}d&~f*bc:cd]dix2c=Kh>d>E!}s";
  char s2[] = "N0mPG&6Cmdu7R<NWyrcaa:]E8`N)OUL?<,vMin--K@PU{";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_129) {
  char s1[] = "WkIpT}uD9$Q1gFDKLVl#WdQt#F8>&f%Bp>";
  char s2[] = "PXkXju*WWx#1w4G2(0_whe4AfVW.F4Ut<+t=rk!F<?$KDC";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_130) {
  char s1[] =
      "h}~_]65NX_u4M6+)##jAP%/?DnQcAfWepgG/"
      "SFs)f~5EE!m4j,t>?B~Eu<@LiRn,?+b&__dG*";
  char s2[] = "]^%!Y*9aY3#byr*;.";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_131) {
  char s1[] =
      "&RBzfN1TqAb%P&@M9|LVc1&^+#lR}5MyJfeXK$<Nss4mkc9I-7<0n?Dy?Xl:iMZ40OigF<";
  char s2[] = "v:b!#?_+r::D^}#x;Qxv";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_132) {
  char s1[] = "=9";
  char s2[] = "b]ugVW;%E)d,M-_1q>e";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_133) {
  char s1[] = "brdl_TSw=?7C0PJr&1MS89h*FV6`GIo@FJL;-oP{c*KVR]DNUG";
  char s2[] = "%Z[9CI)S-?O.+>zFLzHpaT.*^Q(aB60sy<{82.J8I[%";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_134) {
  char s1[] =
      "Myr(qEk*?efBypiWH7-Dxni>sNMVMU*.+[CN_a{U~uPGr*;CYEwruSE~le?$|1@|"
      "rJ9dTmcD7)rhNj_.Z>_3uZXxLiA{m:TR<iLC!hA-";
  char s2[] = "@BRx$J;Cf-O<nNR)swKD~1V]}>5lSwUk{!";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_135) {
  char s1[] = "dX=(KsH@fK_|kD0E[{@acYk{SkFBfwg3GKbdJ";
  char s2[] = "g}*2eBp0DzX/dM;L],S%<8??sg9tvmBtdF1yd*/F{MH6GVx.b";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_136) {
  char s1[] =
      "W~nBij{%P|0dCs1<y?&:AqoX4nQ5iJ=|fVn*3OIy?b>60!+Ae7--llw3b`UA!~_S.cN$"
      "YHVE0Ah5E&[v}S";
  char s2[] = "W(AEtkc<KPDqF:]/";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_137) {
  char s1[] =
      "Sk|0qHxa9pHmvgGYe(qJgn*>Z_kDT#dU?1Sij2NU@9@cfFjMI?/"
      "W;Z5[n(e?TXJ{mlxB0lUB(?iPT5</GWWT/f@fy9;b~([4O";
  char s2[] = "-MRLnXn>l)x}%&2<DN?i9C02vJR&kUbzuo.";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_138) {
  char s1[] = "=&<Z}TL#IYmJjT5yy+cTlUz>s)fL!$)b@u^c=%@#INp=R@l4&m~UW";
  char s2[] = "DZ;X*#oQ1(?S]DrG=sy}.Aqp4:^DR`m@|](jC>fUioRxg";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_139) {
  char s1[] =
      "fmS`z36H,y*^,ywV=Ey%2*2!ul?A#<&/"
      "VrPnlu5Ubis8O?T7d)a6f8zXS_LGd)fRU!w6b+a}$Ppm[J~<_MYe>JA>!r}]9IDXQ6eT3*"
      "llzH@4Yzf}ds1XY";
  char s2[] = "NAO9IxM@;Hl1*]T^R$iw8N*$";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_140) {
  char s1[] = "Q4-dA+8|*cx-znX)cS}*5+6db";
  char s2[] = "V38Yge#]>S1{16tJ0<dq)U!&/Ko4n";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_141) {
  char s1[] =
      "uQox4(KeQ=7qfrm}Q{zSP:t|q,rD7d[5f%7XUnTF5n9G)001d*}(XXq~r]W/"
      "s|zh>WL8`{i1Fb6]c#F*7l/R6*M";
  char s2[] = "_C>";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_142) {
  char s1[] = "Z_4{,=Ui_,v^D*C}_cX2Vd7tRt0F`7!E`sqiH1ep#h=Rlii_yTp3xA^Jb";
  char s2[] = "vuaZx|:>V0f.ypj]NXK::(YO%uA,/0%.B";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_143) {
  char s1[] = "<CJ}Whqx!8}?@~aqi~<V~]8Z^bL{]o9i:>p_5N";
  char s2[] = "RN@Uh]?#$7@s97G^Ypznx";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_144) {
  char s1[] =
      "M$;rvY~};ALoo9H&ue^QC5ZWpm>B>PdvCgH@<Pgdb6:A/"
      "aF*nxuDqvhiNd-D&HZL]+!EL{Ulc?`/:/"
      "3Dj!:!j1DYx.z0K~Z<1$x<|x$<]Vd)h>qC>v;B7`s21*<Y";
  char s2[] = "Pmwu?+uc/sDXJVQ26jwcGqDH[9ON/rRVD";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_145) {
  char s1[] =
      ":?XO4Zxx9oTh>67tL~>JV.pvjMic`g,$jL@<Xq4/"
      "2|w<:f>&e|sCX*KRucC>}6tQi}VSN}pAl*4k`ZA2AuR0]Hv>A/SWcg`3oF|g|QMlQ-r9";
  char s2[] = "{[eF,Mjo|Iqz";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_146) {
  char s1[] =
      "Z)p&)O*E+,yXn)opVa{P8H_*u@anrN=yyL#PHwX9zDpUod*(!)}ZD+=fE)Fh4Zv}#BGcR{#"
      ">";
  char s2[] = "gr`t}K}uRh^?jgz.L";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_147) {
  char s1[] = "aZM}VR]gxs%F9P";
  char s2[] = "7y.F?F[B^=a75.E!gw]jh.*!:.n=e(uiXM_/<y=3Im06rtJ";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_148) {
  char s1[] =
      "96^}l%FFcdMLL@EV3e),:t[;B(&=(HugV:^S5%tGFC+o`ePB<E*)oZXMgqy@>}yvo,dRtT,:"
      "G<`pFJ$fIGpr>~SU$5oZQqi{74UqW!7)9f[j#cbs#afg";
  char s2[] = "FlGa$b4nG><vsgacCuAwaK;M5h,h";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_149) {
  char s1[] = ",JfFo`p(2W`-94pF#19|O{EI]rK8Bvbe";
  char s2[] = "nTt~nW]W5UtYv}t&2V19qXu";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

START_TEST(strcspn_150) {
  char s1[] = "pu[/Av1GC+63;%KF[gB<3dP#?nF<1dy3&0+N@#/V#G/B^@_V5";
  char s2[] = "|";
  ck_assert_int_eq(strcspn(s1, s2), s21_strcspn(s1, s2));
}
END_TEST

Suite *test_strcspn(void) {
  Suite *s = suite_create("\033[45m-=S21_STRCSPN=-\033[0m");
  TCase *tc = tcase_create("strcspn_tc");

  tcase_add_test(tc, strcspn_1);
  tcase_add_test(tc, strcspn_2);
  tcase_add_test(tc, strcspn_3);
  tcase_add_test(tc, strcspn_4);
  tcase_add_test(tc, strcspn_5);
  tcase_add_test(tc, strcspn_6);
  tcase_add_test(tc, strcspn_7);
  tcase_add_test(tc, strcspn_8);
  tcase_add_test(tc, strcspn_9);
  tcase_add_test(tc, strcspn_10);
  tcase_add_test(tc, strcspn_11);
  tcase_add_test(tc, strcspn_12);
  tcase_add_test(tc, strcspn_13);
  tcase_add_test(tc, strcspn_14);
  tcase_add_test(tc, strcspn_15);
  tcase_add_test(tc, strcspn_16);
  tcase_add_test(tc, strcspn_17);
  tcase_add_test(tc, strcspn_18);
  tcase_add_test(tc, strcspn_19);
  tcase_add_test(tc, strcspn_20);
  tcase_add_test(tc, strcspn_21);
  tcase_add_test(tc, strcspn_22);
  tcase_add_test(tc, strcspn_23);
  tcase_add_test(tc, strcspn_24);
  tcase_add_test(tc, strcspn_25);
  tcase_add_test(tc, strcspn_26);
  tcase_add_test(tc, strcspn_27);
  tcase_add_test(tc, strcspn_28);
  tcase_add_test(tc, strcspn_29);
  tcase_add_test(tc, strcspn_30);
  tcase_add_test(tc, strcspn_31);
  tcase_add_test(tc, strcspn_32);
  tcase_add_test(tc, strcspn_33);
  tcase_add_test(tc, strcspn_34);
  tcase_add_test(tc, strcspn_35);
  tcase_add_test(tc, strcspn_36);
  tcase_add_test(tc, strcspn_37);
  tcase_add_test(tc, strcspn_38);
  tcase_add_test(tc, strcspn_39);
  tcase_add_test(tc, strcspn_40);
  tcase_add_test(tc, strcspn_41);
  tcase_add_test(tc, strcspn_42);
  tcase_add_test(tc, strcspn_43);
  tcase_add_test(tc, strcspn_44);
  tcase_add_test(tc, strcspn_45);
  tcase_add_test(tc, strcspn_46);
  tcase_add_test(tc, strcspn_47);
  tcase_add_test(tc, strcspn_48);
  tcase_add_test(tc, strcspn_49);
  tcase_add_test(tc, strcspn_50);
  tcase_add_test(tc, strcspn_51);
  tcase_add_test(tc, strcspn_52);
  tcase_add_test(tc, strcspn_53);
  tcase_add_test(tc, strcspn_54);
  tcase_add_test(tc, strcspn_55);
  tcase_add_test(tc, strcspn_56);
  tcase_add_test(tc, strcspn_57);
  tcase_add_test(tc, strcspn_58);
  tcase_add_test(tc, strcspn_59);
  tcase_add_test(tc, strcspn_60);
  tcase_add_test(tc, strcspn_61);
  tcase_add_test(tc, strcspn_62);
  tcase_add_test(tc, strcspn_63);
  tcase_add_test(tc, strcspn_64);
  tcase_add_test(tc, strcspn_65);
  tcase_add_test(tc, strcspn_66);
  tcase_add_test(tc, strcspn_67);
  tcase_add_test(tc, strcspn_68);
  tcase_add_test(tc, strcspn_69);
  tcase_add_test(tc, strcspn_70);
  tcase_add_test(tc, strcspn_71);
  tcase_add_test(tc, strcspn_72);
  tcase_add_test(tc, strcspn_73);
  tcase_add_test(tc, strcspn_74);
  tcase_add_test(tc, strcspn_75);
  tcase_add_test(tc, strcspn_76);
  tcase_add_test(tc, strcspn_77);
  tcase_add_test(tc, strcspn_78);
  tcase_add_test(tc, strcspn_79);
  tcase_add_test(tc, strcspn_80);
  tcase_add_test(tc, strcspn_81);
  tcase_add_test(tc, strcspn_82);
  tcase_add_test(tc, strcspn_83);
  tcase_add_test(tc, strcspn_84);
  tcase_add_test(tc, strcspn_85);
  tcase_add_test(tc, strcspn_86);
  tcase_add_test(tc, strcspn_87);
  tcase_add_test(tc, strcspn_88);
  tcase_add_test(tc, strcspn_89);
  tcase_add_test(tc, strcspn_90);
  tcase_add_test(tc, strcspn_91);
  tcase_add_test(tc, strcspn_92);
  tcase_add_test(tc, strcspn_93);
  tcase_add_test(tc, strcspn_94);
  tcase_add_test(tc, strcspn_95);
  tcase_add_test(tc, strcspn_96);
  tcase_add_test(tc, strcspn_97);
  tcase_add_test(tc, strcspn_98);
  tcase_add_test(tc, strcspn_99);
  tcase_add_test(tc, strcspn_100);
  tcase_add_test(tc, strcspn_101);
  tcase_add_test(tc, strcspn_102);
  tcase_add_test(tc, strcspn_103);
  tcase_add_test(tc, strcspn_104);
  tcase_add_test(tc, strcspn_105);
  tcase_add_test(tc, strcspn_106);
  tcase_add_test(tc, strcspn_107);
  tcase_add_test(tc, strcspn_108);
  tcase_add_test(tc, strcspn_109);
  tcase_add_test(tc, strcspn_110);
  tcase_add_test(tc, strcspn_111);
  tcase_add_test(tc, strcspn_112);
  tcase_add_test(tc, strcspn_113);
  tcase_add_test(tc, strcspn_114);
  tcase_add_test(tc, strcspn_115);
  tcase_add_test(tc, strcspn_116);
  tcase_add_test(tc, strcspn_117);
  tcase_add_test(tc, strcspn_118);
  tcase_add_test(tc, strcspn_119);
  tcase_add_test(tc, strcspn_120);
  tcase_add_test(tc, strcspn_121);
  tcase_add_test(tc, strcspn_122);
  tcase_add_test(tc, strcspn_123);
  tcase_add_test(tc, strcspn_124);
  tcase_add_test(tc, strcspn_125);
  tcase_add_test(tc, strcspn_126);
  tcase_add_test(tc, strcspn_127);
  tcase_add_test(tc, strcspn_128);
  tcase_add_test(tc, strcspn_129);
  tcase_add_test(tc, strcspn_130);
  tcase_add_test(tc, strcspn_131);
  tcase_add_test(tc, strcspn_132);
  tcase_add_test(tc, strcspn_133);
  tcase_add_test(tc, strcspn_134);
  tcase_add_test(tc, strcspn_135);
  tcase_add_test(tc, strcspn_136);
  tcase_add_test(tc, strcspn_137);
  tcase_add_test(tc, strcspn_138);
  tcase_add_test(tc, strcspn_139);
  tcase_add_test(tc, strcspn_140);
  tcase_add_test(tc, strcspn_141);
  tcase_add_test(tc, strcspn_142);
  tcase_add_test(tc, strcspn_143);
  tcase_add_test(tc, strcspn_144);
  tcase_add_test(tc, strcspn_145);
  tcase_add_test(tc, strcspn_146);
  tcase_add_test(tc, strcspn_147);
  tcase_add_test(tc, strcspn_148);
  tcase_add_test(tc, strcspn_149);
  tcase_add_test(tc, strcspn_150);

  suite_add_tcase(s, tc);
  return s;
}
