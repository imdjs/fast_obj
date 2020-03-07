#pragma once
#ifndef __DJS_PRINT0_H__
#define __DJS_PRINT0_H__


//#include"c_function.c"
//#include "DNA_node_types.h"
//#include "DNA_object_types.h"

#include"math\MatQuatVec.h"

#include<stdio.h>
#include<string>
// #include<vector>
 #include<deque>

////__PRINT__////////////////////////////////////////
static char sPRINT[i256];//●●这个如果不够大会crash 或使程序变慢,*sPRINT=cPRINT    
static double dTimePreG=0.0;static int i顺序G=0;
#define  ＜丨DEF(max,R)    if((int)max ＜ R)R=max;
#ifndef 丨＜丨
    #define 丨＜丨(min,max,R)    {if(max ＜ R)R=max;else if(R ＜ min)R=min;}
#endif

//====PRINTt,●有可能未初始化打印无限大.====================================
static void PRINTt(int i) {丨＜丨(-百万,百万,i);printf("%d",i);}
static void PRINTt(float f) {丨＜丨(-百万,百万,f);printf("%f",f);}
static void PRINTt(double l) {丨＜丨(-百万,百万,l);printf("%lf",l);}
static void PRINTt(bool b) {printf("%d",b);}
static void PRINTt(short s) {printf("short:%d",s);}
static void PRINTt(uint i) {＜丨DEF(百万,i);printf("ui:%d",i);}
static void PRINTt(__int64 i) {＜丨DEF(百万,i);printf("ll:%lld",i);}
static void PRINTt(unsigned __int64 i) {＜丨DEF(百万,i);printf("ull:%lld",i);}

// static void PRINTtest(int i) {printf("%d",i);}
// static void PRINTt(int*Ψi) {ASSERTR(Ψi 二二 NULL,);printf("[%d,%d,%d]",Ψi[0],Ψi[1],Ψi[2]);}
// static void PRINTt(float*Ψf) {ASSERTR(Ψi 二二 NULL,);printf("[%f,%f,%f]",Ψf[0],Ψf[1],Ψf[2]);}
static void PRINTt(cdouble*Ψd) {if(Ψd 二二 NULL){printf("★★Ψd 二二 NULL\n");return;}printf("[%lf,%lf,%lf]",Ψd[0],Ψd[1],Ψd[2]);}
static void PRINTt(char c) {printf("%c",c);}
// static void PRINTt(char*s) {printf("%s",s);}
static void PRINTt(cchar*s){if(s 二二 NULL){printf("★★ s二二 NULL\n");return;}printf("%s",s);}

static void PRINTt(string s) {cout<<""<<s;}
static void PRINTt(cint* Ψi) {if(Ψi 二二 NULL){printf("★★Ψi 二二 NULL\n");return;}printf("[%d,%d,%d]",Ψi[0],Ψi[1],Ψi[2]);}
static void PRINTt(cfloat*Ψf) {if(Ψf 二二 NULL){printf("★★Ψf 二二 NULL\n");return;}printf("[%f,%f,%f]",Ψf[0],Ψf[1],Ψf[2]);}
static void PRINTt(cfloat f44[4][4]) {if(f44 二二 NULL){printf("★★Ψf 二二 NULL\n");return;}printf("[%f,%f,%f,%f],[%f,%f,%f,%f],[%f,%f,%f,%f],[%f,%f,%f,%f]"\
,f44[0][0],f44[0][1],f44[0][2],f44[0][3]
,f44[1][0],f44[1][1],f44[1][2],f44[1][3]
,f44[2][0],f44[2][1],f44[2][2],f44[2][3]
,f44[3][0],f44[3][1],f44[3][2],f44[3][3]);}
//----1------------------------------------
template<typename T1>       
联 void PRINTall(cchar c信息[],cchar s名[],const T1&t1,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名);PRINTt(t1); printf("〕 ----------------行:%d",i行);
    if(s文件)
        {printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));}
    printf("\n");
    }
//----2--------------------------
template<typename T1,typename T2>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2); printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
/**/
//----3--------------------------
template<typename T1,typename T2,typename T3>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3);  printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
//----4--------------------------
template<typename T1,typename T2,typename T3,typename T4>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,cchar s名4[],const T4&t4,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3); printf("〕 〔%s =",s名4);PRINTt(t4);printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
//----5--------------------------
template<typename T1,typename T2,typename T3,typename T4,typename T5>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,cchar s名4[],const T4&t4,cchar s名5[],const T5&t5,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3); printf("〕 〔%s =",s名4);PRINTt(t4); printf("〕 〔%s =",s名5);PRINTt(t5); printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
//----6--------------------------
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,cchar s名4[],const T4&t4,cchar s名5[],const T5&t5,cchar s名6[],const T6&t6,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3); printf("〕 〔%s =",s名4);PRINTt(t4); printf("〕 〔%s =",s名5);PRINTt(t5); printf("〕 〔%s =",s名6);PRINTt(t6); printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
//----7--------------------------
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,cchar s名4[],const T4&t4,cchar s名5[],const T5&t5,cchar s名6[],const T6&t6,cchar s名7[],const T7&t7,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3); printf("〕 〔%s =",s名4);PRINTt(t4); printf("〕 〔%s =",s名5);PRINTt(t5); printf("〕 〔%s =",s名6);PRINTt(t6); printf("〕 〔%s =",s名7);PRINTt(t7); printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }
//----8--------------------------
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>        
联 void PRINTall(cchar c信息[],cchar s名1[],const T1&t1,cchar s名2[],const T2&t2,cchar s名3[],const T3&t3,cchar s名4[],const T4&t4,cchar s名5[],const T5&t5,cchar s名6[],const T6&t6,cchar s名7[],const T7&t7,cchar s名8[],const T8&t8,int i行=-1,cchar*s文件=NULL)
    {
    printf("%s 〔",c信息);printf("%s =",s名1);PRINTt(t1);printf("〕 〔%s =",s名2);PRINTt(t2);printf("〕 〔%s =",s名3);PRINTt(t3); printf("〕 〔%s =",s名4);PRINTt(t4); printf("〕 〔%s =",s名5);PRINTt(t5); printf("〕 〔%s =",s名6);PRINTt(t6); printf("〕 〔%s =",s名7);PRINTt(t7); printf("〕 〔%s =",s名8);PRINTt(t8); printf("〕 ----------------行:%d",i行);
    if(s文件)printf("-------文件:%s",s卝('\\',s文件,false,false,true,-1,sPRINT));
    printf("\n");
    }    
        
//====define ==============================================
#ifdef __PRINT__
    #define PRINT0(str)    printf( #str"----行:%d -------文件:%s\n",__LINE__,s卝('\\',__FILE__,false,false,true,-1,sPRINT))
    #define PRINT1(s,t)    PRINTall(#s,#t,t,__LINE__,__FILE__)
    #define PRINT2(s,t1,t2)    PRINTall(#s,#t1,t1,#t2,t2,__LINE__,__FILE__)
    #define PRINT3(s,t1,t2,t3)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,__LINE__,__FILE__)
    #define PRINT4(s,t1,t2,t3,t4)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,#t4,t4,__LINE__,__FILE__)
    #define PRINT5(s,t1,t2,t3,t4,t5)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,__LINE__,__FILE__)  
    #define PRINT6(s,t1,t2,t3,t4,t5,t6)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,#t6,t6,__LINE__,__FILE__)
    #define PRINT7(s,t1,t2,t3,t4,t5,t6,t7)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,#t6,t6,#t7,t7,__LINE__,__FILE__)
    #define PRINT8(s,t1,t2,t3,t4,t5,t6,t7,t8)    PRINTall(#s,#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,#t6,t6,#t7,t7,#t8,t8,__LINE__,__FILE__)
    //----IF--------------------------
    #define PRINT0if(IF,str)    if((IF)!=false)PRINT0(str)
    #define PRINT1if(IF,s,t)    if((IF)!=false)PRINT1(s,t)
    #define PRINT2if(IF,s,t1,t2)    if((IF)!=false)PRINT2(s,t1,t2)
    #define PRINT3if(IF,s,t1,t2,t3)    if((IF)!=false)PRINT3(s,t1,t2,t3)
    #define PRINT4if(IF,s,t1,t2,t3,t4)    if((IF)!=false)PRINT4(s,t1,t2,t3,t4)
    #define PRINT5if(IF,s,t1,t2,t3,t4,t5)    if((IF)!=false)PRINT5(s,t1,t2,t3,t4,t5)  
    #define PRINT6if(IF,s,t1,t2,t3,t4,t5,t6)    if((IF)!=false)PRINT6(s,t1,t2,t3,t4,t5,t6)
    #define PRINT7if(IF,s,t1,t2,t3,t4,t5,t6,t7)    if((IF)!=false)PRINT7(s,t1,t2,t3,t4,t5,t6,t7)
    #define PRINT8if(IF,s,t1,t2,t3,t4,t5,t6,t7,t8)    if((IF)!=false)PRINT8(s,t1,t2,t3,t4,t5,t6,t7,t8)
    //----ifR--------------------------
    #define PRINT0ifR(IF,str,R)    if((IF)!=false){PRINT0(str);return R;}
    #define PRINT1ifR(IF,s,t,R)    if((IF)!=false){PRINT1(s,t);return R;}
    #define PRINT2ifR(IF,s,t1,t2,R)    if((IF)!=false){PRINT2(s,t1,t2);return R;}
    #define PRINT3ifR(IF,s,t1,t2,t3,R)    if((IF)!=false){PRINT3(s,t1,t2,t3);return R;}
    #define PRINT4ifR(IF,s,t1,t2,t3,t4,R)    if((IF)!=false){PRINT4(s,t1,t2,t3,t4);return R;}
    #define PRINT5ifR(IF,s,t1,t2,t3,t4,t5,R)    if((IF)!=false){PRINT5(s,t1,t2,t3,t4,t5);return R;}
    #define PRINT6ifR(IF,s,t1,t2,t3,t4,t5,t6,R)    if((IF)!=false){PRINT6(s,t1,t2,t3,t4,t5,t6);return R;}
    #define PRINT7ifR(IF,s,t1,t2,t3,t4,t5,t6,t7,R)    if((IF)!=false){PRINT7(s,t1,t2,t3,t4,t5,t6,t7);return R;}
    #define PRINT8ifR(IF,s,t1,t2,t3,t4,t5,t6,t7,t8,R)    if((IF)!=false){PRINT8(s,t1,t2,t3,t4,t5,t6,t7,t8);return R;}
    
    #else
        #define PRINT0(str)
        #define PRINT1(s,t)   
        #define PRINT2(s,t1,t2)   
        #define PRINT3(s,t1,t2,t3)    
        #define PRINT4(s,t1,t2,t3,t4)    
        #define PRINT5(s,t1,t2,t3,t4,t5)    
        #define PRINT6(s,t1,t2,t3,t4,t5,t6)    
        #define PRINT7(s,t1,t2,t3,t4,t5,t6,t7)    
        #define PRINT8(s,t1,t2,t3,t4,t5,t6,t7,t8)    
        //----IF--------------------------
        #define PRINT0if(B,str)
        #define PRINT1if(B,s,t) 
        #define PRINT2if(B,s,t1,t2) 
        #define PRINT3if(B,s,t1,t2,t3)
        #define PRINT4if(B,s,t1,t2,t3,t4)
        #define PRINT5if(B,s,t1,t2,t3,t4,t5)
        #define PRINT6if(B,s,t1,t2,t3,t4,t5,t6)
        #define PRINT7if(B,s,t1,t2,t3,t4,t5,t6,t7)
        #define PRINT8if(B,s,t1,t2,t3,t4,t5,t6,t7,t8)
        //----ifR--------------------------
        #define PRINT0ifR(IF,str,R)
        #define PRINT1ifR(IF,s,t,R)
        #define PRINT2ifR(IF,s,t1,t2,R)
        #define PRINT3ifR(IF,s,t1,t2,t3,R)
        #define PRINT4ifR(IF,s,t1,t2,t3,t4,R)
        #define PRINT5ifR(IF,s,t1,t2,t3,t4,t5,R)
        #define PRINT6ifR(IF,s,t1,t2,t3,t4,t5,t6,R)
        #define PRINT7ifR(IF,s,t1,t2,t3,t4,t5,t6,t7,R)
        #define PRINT8ifR(IF,s,t1,t2,t3,t4,t5,t6,t7,t8,R)
        
#endif//#ifdef __PRINT__
#define PRINT0db(s)    printf("◆ %s ----------行:%d ------ 文件:= %s\n",#s,__LINE__,__FILE__)
#define PRINT1db(s,t)    PRINTall(#s"◆",#t,t,__LINE__,__FILE__)
#define PRINT2db(s,t1,t2)    PRINTall(#s"◆",#t1,t1,#t2,t2,__LINE__,__FILE__)

#define PRINT3db(s,t1,t2,t3)    PRINTall(#s"◆",#t1,t1,#t2,t2,#t3,t3,__LINE__,__FILE__)
#define PRINT4db(s,t1,t2,t3,t4)    PRINTall(#s"◆",#t1,t1,#t2,t2,#t3,t3,#t4,t4,__LINE__,__FILE__)
#define PRINT5db(s,t1,t2,t3,t4,t5)    PRINTall(#s"◆",#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,__LINE__,__FILE__)  
#define PRINT6DB(s,t1,t2,t3,t4,t5,t6)    PRINTall(#s"◆",#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,#t6,t6,__LINE__,__FILE__)
#define PRINT7DB(s,t1,t2,t3,t4,t5,t6,t7)    PRINTall(#s"◆",#t1,t1,#t2,t2,#t3,t3,#t4,t4,#t5,t5,#t6,t6,#t7,t7,__LINE__,__FILE__)
//====print==============================================
#ifdef __PRINT__
    #ifdef PRINT_NOLINE
        #define PRINT_1(str,A,a)    printf(#str    #A" = %"#a ",行:=%d,文件=%s\n",A,__LINE__,__FILE__)
        #define PRINT_2(str,A,B,a,b)    printf(  #str   #A" = %"#a" · "#B" = %"#b ",行:=%d,文件=%s\n",A,B,__LINE__,__FILE__)
        #define PRINT_3(str,A,B,C,a,b,c)    printf( #str   #A" = %"#a" · "#B" = %"#b" · " #C" = %"#c",行:=%d,文件=%s\n",A,B,C,__LINE__,__FILE__)
        #define PRINT_4(str,A,B,C,D,a,b,c,d)    printf( #str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d",行:=%d,文件=%s\n",A,B,C,D,__LINE__,__FILE__)
        #define PRINT_5(str,A,B,C,D,E,a,b,c,d,e)    printf( #str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e",行:=%d,文件=%s\n",A,B,C,D,E,__LINE__,__FILE__)    
        #define PRINT_6(str,A,B,C,D,E,F,a,b,c,d,e,f)    printf( #str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f",行:=%d,文件=%s\n",A,B,C,D,E,F,__LINE__,__FILE__)    
        #define PRINT_7(str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)    printf( #str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f"· "#G" = %"#g",行:=%d,文件=%s\n",A,B,C,D,E,F,__LINE__,__FILE__)    
        #define PRINT_8(str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)    printf( #str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f"· "#G" = %"#g"· "#H" = %"#h",行:=%d,文件=%s\n",A,B,C,D,E,F,__LINE__,__FILE__)    
        
        #else
            //---------1---------------------
            #define PRINT_1(str,A,a)\
                printf(#str    #A" = %"#a "----行:%d -------文件:%s\n",A,__LINE__,s卝('\\',__FILE__,false,false,true))
            //---------2---------------------
            #define PRINT_2(str,A,B,a,b)\
                printf( #str   #A" = %"#a" · "#B" = %"#b "----行:%d -------文件:%s\n",A,B,__LINE__,s卝('\\',__FILE__,false,false,true))
            //----------3--------------------
            #define PRINT_3(str,A,B,C,a,b,c)\
                printf( #str   #A" = %"#a" · "#B" = %"#b" · " #C" = %"#c"----行:%d -------文件:%s\n",A,B,C,__LINE__,s卝('\\',__FILE__,false,false,true))
            //-----------4-------------------
            #define PRINT_4(str,A,B,C,D,a,b,c,d)\
                printf(#str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d"----行:%d -------文件:%s\n",A,B,C,D,__LINE__,s卝('\\',__FILE__,false,false,true))
            //-----------5-------------------
            #define PRINT_5(str,A,B,C,D,E,a,b,c,d,e)\
                printf(#str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e"----行:%d -------文件:%s\n",A,B,C,D,E,__LINE__,s卝('\\',__FILE__,false,false,true))
            //-----------6-------------------
            #define PRINT_6(str,A,B,C,D,E,F,a,b,c,d,e,f)\
                printf(#str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f"----行:%d -------文件:%s\n",A,B,C,D,E,F,__LINE__,s卝('\\',__FILE__,false,false,true))
            //-----------7-------------------
            #define PRINT_7(str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)\
                printf(#str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f" · " #G" = %"#g"----行:%d -------文件:%s\n",A,B,C,D,E,F,G,__LINE__,s卝('\\',__FILE__,false,false,true))
            //-----------7-------------------
            #define PRINT_8(str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)\
                printf(#str   #A" = %"#a" · "#B" = %"#b" · "#C" = %"#c" · "#D" = %"#d" · "#E" = %"#e" · "#F" = %"#f " · "#G" = %"#g"· "#H" = %"#h"----行:%d -------文件:%s\n",A,B,C,D,E,F,G,H,__LINE__,s卝('\\',__FILE__,false,false,true))
            //====IF====================================
            #define PRINT_1if(IF,str,A,a)    if((IF)!=false)PRINT_1(str,A,a) 
            //---------2---------------------
            #define PRINT_2if(IF,str,A,B,a,b)    if((IF)!=false)PRINT_2(str,A,B,a,b)
            //----------3--------------------
            #define PRINT_3if(IF,str,A,B,C,a,b,c)    if((IF)!=false)PRINT_3(str,A,B,C,a,b,c)
            //-----------4-------------------
            #define PRINT_4if(IF,str,A,B,C,D,a,b,c,d)    if((IF)!=false)PRINT_4(str,A,B,C,D,a,b,c,d) 
            //-----------5-------------------
            #define PRINT_5if(IF,str,A,B,C,D,E,a,b,c,d,e)    if((IF)!=false)PRINT_5(str,A,B,C,D,E,a,b,c,d,e)
            //-----------6-------------------
            #define PRINT_6if(IF,str,A,B,C,D,E,F,a,b,c,d,e,f)    if((IF)!=false)PRINT_6(str,A,B,C,D,E,F,a,b,c,d,e,f)
            //-----------7-------------------
            #define PRINT_7if(IF,str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)    if((IF)!=false)PRINT_7(str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)
            //-----------7-------------------
            #define PRINT_8if(IF,str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)    if((IF)!=false)PRINT_8(str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)

    #endif
        #else
            #define PRINT_1(str,A,a)
            #define PRINT_2(str,A,B,a,b)
            #define PRINT_3(str,A,B,C,a,b,c)
            #define PRINT_4(str,A,B,C,D,a,b,c,d)
            #define PRINT_5(str,A,B,C,D,E,a,b,c,d,e)
            #define PRINT_6(str,A,B,C,D,E,F,a,b,c,d,e,f)
            #define PRINT_7(str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)
            #define PRINT_8(str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)
            //------------------------------
            #define PRINT_1if(IF,str,A,a)
            //---------2---------------------
            #define PRINT_2if(IF,str,A,B,a,b)
            //----------3--------------------
            #define PRINT_3if(IF,str,A,B,C,a,b,c)
            //-----------4-------------------
            #define PRINT_4if(IF,str,A,B,C,D,a,b,c,d)
            //-----------5-------------------
            #define PRINT_5if(IF,str,A,B,C,D,E,a,b,c,d,e) 
            //-----------6-------------------
            #define PRINT_6if(IF,str,A,B,C,D,E,F,a,b,c,d,e,f)
            //-----------7-------------------
            #define PRINT_7if(IF,str,A,B,C,D,E,F,G,a,b,c,d,e,f,g)
            //-----------7-------------------
            #define PRINT_8if(IF,str,A,B,C,D,E,F,G,H,a,b,c,d,e,f,g,h)
#endif
//========================================
template<typename T>
inline void _PTtype(char*name,T&cls){printf("〓type= %s : type=%s\n",name,typeid(cls).name());}
#ifdef __PRINT__
    #define PTtype(cls)     _PTtype(#cls,cls)
#else
    #define PTtype
#endif    
//====这个vector<char>是把char 当int用=======================================
static void PTvector(cchar s名称[],cvector<char>&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;
    if(s文件)
        printf("----vector char:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----vector char:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}

        printf("·");printf("%d ",Vi[i]);
        }
    if(Vi.empty())
        printf("  =[]");
    printf(" \n\n");
    }

//----DEQUE----------------------------------------------
template<typename T>
static void PTvector(cchar s名称[],cdeque<deque<T>>&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;
    if(s文件)
        printf("----Qvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Qcdeque T:%s -------{ %zd }-----------------行:%d\n",s名称,Vi.size(),i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            printf(" · ");PRINTt(Vi[i][j]);
            }

        if(Vi[i].empty())
            printf("  i=[]");
        printf("\n  ----------(i:%zd,%zd)----\n",i,Vi[i].size());//
        }
    if(Vi.empty())
        printf(" =[]");
    printf("\n");
    } 
template<typename T>
static void PTvector(cchar s名称[],cdeque<T>&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;  
    if(s文件)
        printf("----deque T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----deque T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}

        printf(" · ");PRINTt(Vi[i]);
        }
    if(Vi.empty())
        printf("  =[]");
    printf(" \n\n");
    }
template<typename T>
static void PTvector(cchar s名称[],cdeque<vector<T>>  &Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;
    if(s文件)
        printf("----Qvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Qvector T:%s -------{ %zd }-----------------行:%d\n",s名称,Vi.size(),i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            printf(" · ");PRINTt(Vi[i][j]);
            }
        if(Vi[i].empty())
            printf("  i=[]");
        printf("\n  ----------(i:%zd,%zd)----\n",i,Vi[i].size());
        }
    if(Vi.empty())
        printf(" =[]");
    printf("\n");
    }

//====VECTOR====================================
template<typename T>
static void PTvector(cchar s名称[],cvector<T>&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----vector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----vector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}

        printf("·");PRINTt(Vi[i]);
        }
    if(Vi.empty())
        printf("  =[]");
    printf(" \n \n");
    }
  
template<typename T>
static void PTvector(cchar s名称[],cvector<vector<T>>  &Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;
    if(s文件)
        printf("----Vvector T:%s -------{ %zd }---b截取:%d--------------行:%d -------文件:%s\n",s名称,Vi.size(),b截取,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Vvector T:%s -------{ %zd }---b截取:%d--------------行:%d\n",s名称,Vi.size(),b截取,i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            printf(" · ");PRINTt(Vi[i][j]);
            }
        if(Vi[i].empty())
            printf("  i=[]");
        printf("\n  ----------(i:%zd,%zd)----\n",i,Vi[i].size());//
        }
    if(Vi.empty())
        printf(" =[]");
    printf("\n");
    }
template<typename T>
static void PTvector(cchar s名称[],cvector<deque<T>>  &Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;
    if(s文件)
        printf("----Vdeque T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Vdeque T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            printf(" · ");PRINTt(Vi[i][j]);
            }
        if(Vi[i].empty())
            printf("  i=[]");
        printf("\n  ----------(i:%zd,%zd)----\n",i,Vi[i].size());
        }
    if(Vi.empty())
        printf(" =[]");
    printf("\n");
    }    
    
template<typename T>
static void PTvector(cchar s名称[],cvector< vector<vector<T>>>  &Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k;bool b有跳过=false;
    if(s文件)
        printf("----VVvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----VVvector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            for(k=0; k ＜  Vi[i][j].size(); ++k )  
                {
                printf(" · ");PRINTt(Vi[i][j][k]);
                }
            if(Vi[i][j].empty())
                printf("   j=[]");
            printf("\n   ----------(j:%d,%zd)----\n",j,Vi[i][j].size());
            }
        if(Vi[i].empty())
            printf("  i=[]");
        printf("  -----------------------[i:%d,%zd]----\n",i,Vi[i].size());    
        }
    if(Vi.empty())
        printf(" =[]");        
    printf("\n");
        
    }
    
template<typename T>
static void PTvector(cchar s名称[],cvector<vector< vector<vector<T>>>>  &Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k,l;bool b有跳过=false;
    if(s文件)
        printf("----VVVvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----VVVvector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  Vi[i].size(); ++j )  
            {
            for(k=0; k ＜  Vi[i][j].size(); ++k )  
                {
                for(l=0; l ＜  Vi[i][j][k].size(); l++ )  
                    {
                    printf(" · ");PRINTt(Vi[i][j][k][l]);
                    }
                if(Vi[i][j][k].empty())
                    printf("    k=[]");
                printf("\n          ----------(k:%zd,%zd)----\n",k,Vi[i][j][k].size());
                }
            if(Vi[i][j].empty())
                printf("   j=[]");
            printf("      --------------------------[j:%zd,%zd]----\n",j, Vi[i][j].size());
            }
        if(Vi[i].empty())
            printf("  i=[]");
        printf("  ------------------------------------------{i:%zd,%zd}----\n",i,Vi[i].size());    
        }
    if(Vi.empty())
        printf(" =[]");
    printf(" \n");
        
    }
  
//----ΨΨΨ------------------------------------
template<typename T>
static void PTvector(cchar s名称[],vector<T>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;ASSERT1R(s名称,Vi 二二 NULL,);  
    if(s文件)
        printf("----Ψvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Ψvector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        printf(" · ");PRINTt((*Vi)[i]);
        //PRINTt((*Vi)[i]);
        }
    if(Vi->empty())
        printf("  =[]");
    printf(" \n\n");
    }

//----DEQUE----------------------------------------------
template<typename T>
static void PTvector(cchar s名称[],deque<deque<T>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----ΨQvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----ΨQcdeque T:%s -------{ %zd }-----------------行:%d\n",s名称,Vi.size(),i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            printf(" · ");PRINTt((*Vi)[i][j]);
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("\n  ----------(i:%zd,%zd)----\n",i,(*Vi)[ j ].size());//
        }
    if(Vi->empty())
        printf(" =[]");
    printf("\n");
    } 
template<typename T>
static void PTvector(cchar s名称[],deque<T>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false; ASSERT1R(s名称,Vi 二二 NULL,); 
    if(s文件)
        printf("----deque T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----deque T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        printf(" · ");PRINTt((*Vi)[i]);
        }
    if(Vi->empty())
        printf("  =[]");
    printf(" \n\n");
    }
template<typename T>
static void PTvector(cchar s名称[],deque<vector<T>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----Qvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Qvector T:%s -------{ %zd }-----------------行:%d\n",s名称,Vi.size(),i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            printf(" · ");PRINTt((*Vi)[i][j]);
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("\n  --------------(i:%zd,%zd)----\n",i,(*Vi)[ j ].size());//
        }
    if(Vi->empty())
        printf(" =[]");
    printf("\n");
    }
//----VECTOR----------------------------------------------
template<typename T>
static void PTvector(cchar s名称[],vector<vector<T>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----Vvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Vvector T:%s -------{ %zd }-----------------行:%d\n",s名称,Vi.size(),i行);    
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            printf(" · ");PRINTt((*Vi)[i][j]);
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("\n  --------------(i:%zd,%zd)----\n",i,(*Vi)[ j ].size());
        }
    if(Vi->empty())
        printf(" =[]");
    printf("\n");
    }
template<typename T>
static void PTvector(cchar s名称[],vector<deque<T>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;bool b有跳过=false;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----Vdeque T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Vdeque T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            printf(" · ");PRINTt((*Vi)[i][j]);
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("\n  --------------(i:%zd,%zd)----\n",i,(*Vi)[ j ].size());//
        }
    if(Vi->empty())
        printf(" =[]");
    printf("\n");
    }    
    
template<typename T>
static void PTvector(cchar s名称[],vector< vector<vector<T>>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----VVvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----VVvector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);        
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            for(k=0; k ＜  (*Vi)[ j ][j].size(); ++k )  
                {
                printf(" · ");PRINTt((*Vi)[i][j][k]);
                }
            if((*Vi)[ j ][j].empty())
                printf("   j=[]");
            printf("\n     --------------(j:%zd,%zd)----\n",j,(*Vi)[ j ][j].size());
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("  -----------------------------[i:%zd,%zd]----\n",i,(*Vi)[ j ].size());    
        }
    if(Vi->empty())
        printf(" =[]");        
    printf("\n");
        
    }
    
template<typename T>
static void PTvector(cchar s名称[],const vector<vector< vector<vector<T>>>>*&Vi,匚int i限制前=-1,匚int i限制后=-1,匚bool b截取=false,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k;ASSERT1R(s名称,Vi 二二 NULL,);
    if(s文件)
        printf("----ΨVVVvector T:%s -------{ %zd }-----------------行:%d -------文件:%s\n",s名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----ΨVVVvector T:%s -------{ %zd }-----------------行:%d \n",s名称,Vi.size(),i行);
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(b截取)
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶  i ＜ i限制前  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后&&(i ＜ i限制前 丨丨  i限制前+i限制后 ＜ i)){if(b有跳过 二二 false)b有跳过=true;continue;}}
        else
            {if(0 ＜ i限制前&&-1 二二  i限制后 丶丶 i限制前 ＜ i  丨丨  0 ＜ i限制前 丶丶 0 ＜  i限制后 丶丶 i限制前 ＜ i 丶丶 i ＜ Vi.size()-i限制后){if(b有跳过 二二 false)b有跳过=true;continue;}}
        if(b有跳过)
            {printf("丨丨\n");b有跳过=false;}
        for(j=0; j  ＜  (*Vi)[ j ].size(); ++j )  
            {
            for(k=0; k ＜  (*Vi)[ j ][j].size(); ++k )  
                {
                for(l=0; l ＜  (*Vi)[ j ][j][k].size(); l++ )  
                    {
                    printf(" · ");PRINTt((*Vi)[i][j][k][l]);
                    }
                if((*Vi)[ j ][j][k].empty())
                    printf("    k=[]");
                printf("\n        ------------(k:%zd,%zd)----\n",k,(*Vi)[ j ][j][k].size());
                }
            if((*Vi)[ j ][j].empty())
                printf("   j=[]");
            printf("      ----------------------------[j:%zd,%zd]----\n",j,(*Vi)[ j ][j].size());
            }
        if((*Vi)[ j ].empty())
            printf("  i=[]");
        printf("  -----------------------------------------------{i:%zd,%zd}----\n",i,(*Vi)[ j ].size());    
        }
    if(Vi->empty())
        printf(" =[]");
    printf(" \n");
        
    }

//----#define -------------------------------------------------------    
#ifdef __PRINT__
    #ifdef _PRINT_FILE_
        #define PTvector亖亖(V)    PTvector(#V,V,-1,-1,false,__LINE__,__FILE__)
        #define PTvector丨亖亖(V,i限制前)    PTvector(#V,V,i限制前,-1,false,__LINE__,__FILE__)
        #define PTvector亖亖if(IF,V)    if((IF)!=false)PTvector(#V,V,-1,-1,false,__LINE__,__FILE__)
        #define PTvector丨亖亖if(IF,V,i限制前)    if((IF)!=false)PTvector(#V,V,i限制前,-1,false,__LINE__,__FILE__)
        #define PTvector亖亖丨(V,i限制前,i限制后)   PTvector(#V,V,i限制前,i限制后,false,__LINE__,__FILE__)
        #define PTvector亖亖丨if(IF,V,i限制前,i限制后)    if((IF)!=false)PTvector(#V,V,i限制前,i限制后,false,__LINE__,__FILE__)
        #else   
            #define PTvector亖亖(V)    PTvector(#V,V,-1,-1,false,__LINE__)
            #define PTvector丨亖亖(V,i限制前)    PTvector(#V,V,i限制前,-1,false,__LINE__)
            #define PTvector亖亖if(IF,V)    if((IF)!=false)PTvector(#V,V,-1,-1,false,__LINE__)
            #define PTvector丨亖亖if(IF,V,i限制前)    if((IF)!=false)PTvector(#V,V,i限制前,-1,false,__LINE__)
            #define PTvector亖亖丨(V,i限制前,i限制后)   PTvector(#V,V,i限制前,i限制后,false,__LINE__)
            #define PTvector亖亖丨if(IF,V,i限制前,i限制后)    if((IF)!=false)PTvector(#V,V,i限制前,i限制后,false,__LINE__)
    #endif
    
    #else
        #define PTvector亖亖(V)
        #define PTvector丨亖亖(V,i限制前)
        #define PTvector亖亖if(IF,V)
        #define PTvector丨亖亖if(IF,V,i限制前)
        #define PTvector亖亖丨(V,i限制前,i限制后)
        #define PTvector亖亖丨if(IF,V,i限制前,i限制后)        
        
#endif
//------------------------------
#define PTvector亖亖db(V)    PTvector(#V,V,-1,-1,false,__LINE__,__FILE__)
#define PTvector丨亖亖db(V,i限制前)    PTvector(#V,V,i限制前,-1,false,__LINE__,__FILE__)
#define PTvector亖亖丨db(V,i限制前,i限制后)    PTvector(#V,V,i限制前,i限制后,false,__LINE__,__FILE__)
#define PTvector亖丨亖db(V,i限制前,i限制后)    PTvector(#V,V,i限制前,i限制后,true,__LINE__,__FILE__)

#define PTvector亖亖ifdb(IF,V)    PTvector(#V,V,-1,-1,false,__LINE__,__FILE__)
#define PTvector丨亖亖ifdb(IF,V,i限制前)    PTvector(#V,V,i限制前,-1,false,__LINE__,__FILE__)
#define PTvector亖亖丨ifdb(IF,V,i限制前,i限制后)    PTvector(#V,V,i限制前,i限制后,false,__LINE__,__FILE__)
        
#define PTvector亖亖no(V)    PTvector(#V,V)


////iSize////////////////////////////////////
template<typename T>
static void PTVSize(cchar c名称[],cvector<T>&Vi,匚int i行=-1,cchar*s文件=NULL)
    {  
    if(s文件)
        printf("◣ ----Vsize %s -------(%zd)-----------------◢行:%zd -------文件:%s\n",c名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("◣ ----size %s -------(%zd)-----------------◢行:%zd \n",c名称,Vi.size(),i行);
    if(Vi.empty())
        {
        printf("  V=[]");
        }
    printf(" \n\n");
    }  
template<typename T>
static void PTVSize(cchar c名称[],cvector<vector<T>>  &Vi,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;
    if(s文件)
        printf("◣ ----VVsize %s -------(%zd)-----------------◢行:%zd -------文件:%s\n",c名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("◣ ----size %s -------(%zd)-----------------◢行:%zd\n",c名称,Vi.size(),i行);
    for(i=0; i  ＜  Vi.size(); ++i )  
        {
        if(0 ＜ Vi[i].size())
            printf("  size = %zd ·",Vi[i].size());
        else
            printf("  i=[]·");
        }
    if(Vi.empty())
        printf("  V=[]");
    printf(" \n\n");
    }  
    
template<typename T>
static void PTVSize(cchar c名称[],cvector<vector<vector<T>>>  &Vi,匚int i行=-1,cchar*s文件=NULL)
    {int i,j;  
    if(s文件)
        printf("◣ ----VVVsize %s -------(%zd)-----------------◢行:%zd -------文件:%s\n",c名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("◣ ----size %s -------(%zd)-----------------◢行:%zd\n",c名称,Vi.size(),i行);
    if(0 ＜ Vi.size())
        {
        for(i=0; i  ＜  Vi.size(); ++i )  
            {
            // if(0 ＜ Vi[i].size())
                // printf("  i= %zd ·",Vi[i].size());
            // else
                // printf("  i=[]\n·");
            // printf("/");
            for(j=0; j ＜  Vi[i].size(); ++j )  
                {
                if(Vi[i][j].size()>0)
                    printf("  j= %zd ·",Vi[i][j].size());
                else
                    printf("  j=[]·");
                }
            printf("\n  --------------(i:%zd,%zd)----\n",i,Vi[i].size());
            }
        }
    else
        printf("  V=[]");
    printf(" \n\n");
    }  
    
template<typename T>
static void PTVSize(cchar c名称[],cvector<vector<vector<vector<T>>>>  &Vi,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k;  
    if(s文件)
        printf("◣ ----VVVVsize %s -------(%zd)-----------------◢行:%zd -------文件:%s\n",c名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("◣ ----size %s -------(%zd)-----------------◢行:%zd \n",c名称,Vi.size(),i行);
    if(0 ＜ Vi.size())
        {
        for(i=0; i  ＜  Vi.size(); ++i )  
            {
            // if(0 ＜ Vi[i].size())
                // printf("  i= %zd ·",Vi[i].size());
            // else
                // printf("  i=[]\n·\n");
            // printf("-----------------\n");
            for(j=0; j ＜  Vi[i].size(); ++j )  
                {
                if(Vi[i][j].size()>0)
                    printf("  j= %zd ·",Vi[i][j].size());
                else
                    printf("  j=[]·");
                printf("//");
                for(k=0; k ＜  Vi[i][j].size(); ++k )  
                    {
                    if(Vi[i][j][k].size()>0)
                        printf("  k= %zd ·",Vi[i][j][k].size());
                    else
                        printf("  k=[]·");
                    }
                printf("\n    ----------(j:%zd,%zd)----\n",j,Vi[i][j].size());
                }
            printf("\n  -------------------------[i:%zd,%zd]----\n",i,Vi[i].size());
            }
        }
    else
        printf("  V=[]");
    printf(" \n\n");
    }  
    
template<typename T>
static void PTVSize(cchar c名称[],cvector<vector<vector<vector<vector<T>>>>>  &Vi,匚int i行=-1,cchar*s文件=NULL)
    {int i,j,k;
    if(s文件)
        printf("◣ ----VVVVVsize %s -------(%zd)-----------------◢行:%zd -------文件:%s\n",c名称,Vi.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("◣ ----VVVVVsize %s -------(%zd)-----------------◢行:%zd \n",c名称,Vi.size(),i行);
    if(0 ＜ Vi.size())
        {
        for(i=0; i  ＜  Vi.size(); ++i )  
            {
            // if(0 ＜ Vi[i].size())
                // printf("  i= %zd ·",Vi[i].size());
            // else
                // printf("  i=[]\n·");
            // printf("-----------------\n");
            for(j=0; j ＜  Vi[i].size(); ++j )  
                {
                if(Vi[i][j].size()>0)
                    printf("  j= %zd ·",Vi[i][j].size());
                else
                    printf("  j=[]·");
                printf("//");
                for(k=0; k ＜  Vi[i][j].size(); ++k )  
                    {
                    if(Vi[i][j][k].size()>0)
                        printf("  k= %zd ·",Vi[i][j][k].size());
                    else
                        printf("  k=[]·");
                    printf("///");
                    for(l=0; l ＜  Vi[i][j][k].size(); l++ )  
                        {
                        if(Vi[i][j][k][l].size()>0)
                            printf("  size l= %zd ·",Vi[i][j][k][l].size());
                        else
                            printf("  l=[]·");
                        }
                    printf("\n      --------(k:%zd,%zd)----\n",k,Vi[i][j][k].size());
                    }
                printf("\n    ---------------------[j:%zd,%zd]----\n",j,Vi[i][j].size());
                }
            printf("\n  ------------------------------------{i:%zd,%zd}----\n",i,Vi[i].size());
            }
        }
    else
        printf("  V=[]");
    printf(" \n\n");
    }  

#ifdef __PRINT__
    #define PTVsize亖亖(Vi)    PTVSize(#Vi,Vi,__LINE__,__FILE__)
    #define PTVsize亖亖if(IF,Vi)    if((IF)!=false)PTVSize(#Vi,Vi,__LINE__,__FILE__)
    #else
        #define PTVsize亖亖(Vi)
        #define PTVsize亖亖if(IF,V)
#endif

#define PTVsize亖亖db(Vi)    PTVSize(#Vi,Vi,__LINE__,__FILE__)
//========================================
template<typename T>
void PRINTt(cvector<T>&V){PTvector亖亖no(V);}
template<typename T>
void PRINTt(cdeque<T>&V){PTvector亖亖no(V);}
////////////////////////////////////////////
template<typename K,typename T>
void PTMname(cmap<K,T>&M,匚int i行=-1,cchar*s文件=NULL)
    {
    PRINT_2(,M.getName(),i行,s,d);
    for(auto&it:M)
        {
        printf("M=  ");PRINTt(it.first);PRINTt(it.second);printf("/n ");
        }
    
    }
template<typename K,typename K2,typename T>
void PTMname(cmap<K,map<K2,T>>&MM,匚int i行=-1,cchar*s文件=NULL)
    {
    PRINT_2(,MM.getName(),i行,s,d);
    for(auto&it:MM)
        {
        printf("MM=  ");PRINTt(it.first);printf("/n ");
        PRINT_1(,it.second.getName(),s);
        for(auto&it2:it.second)
            {
            printf("it2=  ");PRINTt(it2.first);printf("/n ");
            }
        }
    
    }

template<typename K,typename T>
void PTMname(cmap<K,vector<T>>&MV,匚int i行=-1,cchar*s文件=NULL)
    {
    PRINT_2(,MV.getName(),i行,s,d);
    for(auto&it:MV)
        {
        printf("MV=  ");PRINTt(it.first);printf("/n ");
        PRINT_1(,it.second.getName(),s);
        }
    }
template<typename K,typename T>
void PTMsize(cchar s名称[], map<K,vector<T>>&MV,匚int i行=-1,cchar*s文件=NULL)
    {
    int i=0;
    if(s文件)
        printf("----MVsize----%s------(%zd)-----------------行:%zd -------文件:%s\n",s名称,MV.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----MVsize----%s------(%zd)-----------------行:%zd \n",s名称,MV.size(),i行);
    for(auto&it:MV)
        {
        cout<<" ·MV= "<<it.first<<"·size="<<it.second.size();i+=it.second.size();
        }
    cout<<"    i="<<i<<endl<<endl;
    }
template<typename K,typename T>
void PTMsize(cchar s名称[], map<K,map<K,vector<T>>>&MMV,匚int i行=-1,cchar*s文件=NULL)
    {
    int i=0;
    if(s文件)
        printf("----MMVsize----%s------(%zd)-----------------行:%zd -------文件:%s\n",s名称,MV.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----MMVsize----%s------(%zd)-----------------行:%zd \n",s名称,MV.size(),i行);
    for(auto&it:MMV)
        {
        cout<<" ·MMV= "<<it.first<<"·size="<<it.second.size()<<" { ";
        for(auto&it2:it.second)
            {
            cout<<" ·MMV= "<<it2.first<<"·size="<<it2.second.size();i+=it2.second.size();
            }
        }
    cout<<"    i="<<i<<endl<<endl;
    }
//------------------------------
#ifdef __PRINT__
    #ifdef _PRINT_FILE_
        #define PTMname亖亖(M)    PTMname(M,__LINE__,__FILE__);
        #define PTMsize亖亖(M)    PTMsize(#M,M,__LINE__,__FILE__);
        #else    
            #define PTMname亖亖(M)    PTMname(M,__LINE__);
            #define PTMsize亖亖(M)    PTMsize(#M,M,__LINE__);
    #endif    
    
    #else
        #define PTMname亖亖(Ιi) 
        #define PTMsize亖亖(M)
#endif
#define PTMname亖亖db(M)    PTMname(M,__LINE__,__FILE__);
#define PTMsize亖亖db(M)    PTMsize(M,__LINE__,__FILE__);



template<typename K,typename T>
void PTMname有重复(cmap<K,vector<T>>&MV)
    {
    vector<K>Vk;
    for(auto&it:MV)
        {
        if(罒Vector(it.first,Vk))
            {printf("●●有重复= %s\n",it.first);
            PTvector亖亖db(Vk);
            return ;
            }
        cout<<"MV= "<<it.first<<endl;
        Vk.push_back(it.first);
        }
#ifdef _PRINT_HEAD_LIB_
    cout<<"  >>>>> "<<str巜charU(__func__)<<endl;
#endif
    }

//====Dkeys==============================================
template<typename K,typename K2,typename K3,typename T>
void PTDkeys(cchar s名称[],cmap<K,map<K2,map<K3,T>>>&MM,匚int i行=-1,cchar*s文件=NULL)
    {
    if(s文件)
        printf("----DDDkeys----%s ----%d----------------------行:%d -------文件:%s\n",s名称,MM.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----DDDkeys----%s ----%d----------------------行:%d \n",s名称,MM.size(),i行);
    vector<K>Vk,Vk2,Vk3;
    for(auto&it:MM)
        {
        Vk.push_back(it.first);
        }
    printf(" ");PTvector亖亖db(Vk);
    //K k2=Vk.back();Vk.pop_back();PTvector亖亖db(Vk);
    if(Vk.empty()==false)
        {
        printf("  ------------------------\n");
        for(const auto&k:Vk)
            {
            for(auto&it:MM[k])
                {
                Vk2.push_back(it.first);
                }
            printf("  ");PTvector亖亖db(Vk2);
            if(Vk2.empty()==false)
                {
                printf("   ------------------------\n");
                for(const auto&k2:Vk2)
                    {
                    for(auto&it2:MM[k][k2])
                        {
                        Vk3.push_back(it2.first);
                        }
                    printf("   ");PTvector亖亖db(Vk3);
                   } 
                }
            }
        }

    }
    
template<typename K,typename K2,typename T>
void PTDkeys(cchar s名称[],cmap<K,map<K2,T>>&MM,匚int i行=-1,cchar*s文件=NULL)
    {
    if(s文件)
        printf("----DDkeys----%s ----%d----------------------行:%d -------文件:%s\n",s名称,MM.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----DDkeys----%s ----%d----------------------行:%d \n",s名称,MM.size(),i行);
    vector<K>Vk,Vk2;
    for(auto&it:MM)
        {
        Vk.push_back(it.first);
        }
    printf(" ");PTvector亖亖db(Vk);
    //K k2=Vk.back();Vk.pop_back();PTvector亖亖db(Vk);
    if(Vk.empty()==false)
        {
        printf("  ------------------------\n");
        for(const auto&k:Vk)
            {
            for(auto&it:MM[k])
                {
                Vk2.push_back(it.first);
                }
            printf("  ");PTvector亖亖db(Vk2);
            }
        }

    }


template<typename K,typename T>
void PTDkeys(cchar s名称[],cmap<K,T>&M,匚int i行=-1,cchar*s文件=NULL)
    {
    if(s文件)
        printf("----Dkeys----%s ----%d----------------------行:%d -------文件:%s\n",s名称,M.size(),i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Dkeys----%s ----%d----------------------行:%d \n",s名称,M.size(),i行);
    vector<K>Vk;
    for(auto&it:M)
        {
        Vk.push_back(it.first);
        }
    PTvector亖亖db(Vk);

    }

#ifdef __PRINT__
    #ifdef _PRINT_FILE_
        #define PTMkeys亖亖(MV)    PTDkeys(#MV,MV,__LINE__,__FILE__)    
        #else
        #define PTMkeys亖亖(MV)    PTDkeys(#MV,MV,__LINE__)    
    #endif        
        
    #else    
    #define PTMkeys亖亖(MV) 
#endif
#define PTDkeys亖亖db(MV)    PTDkeys(#MV,MV,__LINE__,__FILE__)    

////////////////////////////////////////////
//-----------------------------------------------
static void PTp2f3(cchar s名称[],int i丅数, float**Lf3,匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----p2f3----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----p2f3----%s＝----------------------行:%d \n",s名称,i行);
    for( j=0;j ＜ i丅数;++j)    
        {
        for(i=0;i ＜ 3;++i)
            {
            printf("%f  ",Lf3[j][i]);
            //cout<<""<<f3[i];
            }
        printf("\n    -------------------\n");
        }
    printf("\n");
    }
    
static void PTLf3(cchar s名称[],int i维,cfloat Lf3[][3],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----Lf3----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----Lf3----%s＝----------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ i维;++i)    
        {
        for( j=0;j ＜ 3;++j)
            {
            printf("%f  ",Lf3[i][j]);
            //cout<<""<<f3[i];
            }
        printf("\n    -------------------\n");
        }
    printf("\n");
    }

template<typename T>
static void PTfn(cchar s名称[],int i维,T f3[],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----PTfn----%s-----维=%d-----------------行:%d -------文件:%s\n",s名称,i维,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----PTfn----%s-----维=%d-----------------行:%d \n",s名称,i维,i行);
    for(i=0;i ＜ i维;++i)
        {
        PRINTt(f3[i]);
        }
    printf("\n");
    }    
   
static void PTfn(cchar s名称[],int i维,cfloat fn[][2],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----fnn2----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----fnn2----%s＝----------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ i维;++i)    
        {
        for( j=0;j ＜ 2;++j)
            {
            printf("%f  ",fn[i][j]);
            //cout<<""<<f3[i];
            }
        printf("\n    -------------------\n");
        }
    printf("\n");
    } 
static void PTfn(cchar s名称[],int i维,cfloat fn[][3],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----fnn----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----fnn----%s＝----------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ i维;++i)    
        {
        for( j=0;j ＜ 3;++j)
            {
            printf("%f  ",fn[i][j]);
            //cout<<""<<f3[i];
            }
        printf("\n    -------------------\n");
        }
    printf("\n");
    } 
static void PTfn(cchar s名称[],int i维,cfloat fn[][3][3],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j,k;
    if(s文件)
        printf("----fnn----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----fnn----%s＝----------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ i维;++i)    
        {
        for( j=0;j ＜ 3;++j)
            {
            for( k=0;k ＜ 3;++k)
                {
                printf("%f  ",fn[i][j][k]);
                }
            printf("\n    -------------------\n");
            }
        printf("\n  -------------------\n");
        }
    printf("\n");
    } 
//-----------------------------------------------
//-----------------------------------------------
static void PTf33(cchar s名称[],cfloat f44矩阵[][3],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----f33----%s＝----------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----f33----%s＝----------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ 3;++i)
        {
        for( j=0;j ＜ 3;++j)
            {
            printf("    %f  ,",f44矩阵[i][j]);       
            }
            printf("\n");
        }
    }
//-----------------------------------------------
static void PTf44(cchar s名称[],cfloat f44矩阵[][4],匚int i行=-1,cchar*s文件=NULL)
    {//if(bDB 二二 false)return ;
    int i,j;bool b有跳过=false;
    if(s文件)
        printf("----f44----%s＝------------------------行:%d -------文件:%s\n",s名称,i行,s卝('\\',s文件,false,false,true));
    else
        printf("----f44----%s＝------------------------行:%d \n",s名称,i行);
    for(i=0;i ＜ 4;++i)
        {
        for( j=0;j ＜ 4;++j)
            {
            printf("    %f  ,",f44矩阵[i][j]);       
            }
            printf("\n");
        }
    }    

//-----------------------------------------------
#ifdef __PRINT__    
    #ifdef _PRINT_FILE_
        #define PTp2f3亖亖(i丅数,L)    PTp2f3(#L,i丅数,L,__LINE__,__FILE__)
        #define PTLf3亖亖(i维,L)    PTLf3(#L,i维,L,__LINE__,__FILE__)
        #define PTLf3亖亖if(IF,i维,L)    if((IF)!=false)PTLf3(#L,i维,L,__LINE__,__FILE__)
        #define PTLfn亖亖(i维,L)    PTfn(#L,i维,L,__LINE__,__FILE__)
        #define PTL亖亖(i维,L)    PTfn(#L,i维,L,__LINE__,__FILE__)
        #define PTL亖亖if(IF,i维,L)    if((IF)!=false)PTfn(#L,i维,L,__LINE__,__FILE__)
        #define PTf3亖亖(L)    printf(" ----f3----%s＝------------------------行:%d -------文件:%s\n    %f,  %f,  %f   \n",#L,__LINE__,__FILE__,L[0],L[1],L[2])
        #define PTf33亖亖(m)    PTf33(#m,m,__LINE__,__FILE__)
        #define PTf44亖亖(m)    PTf44(#m,m,__LINE__,__FILE__)
            #else
            #define PTp2f3亖亖(i丅数,L)    PTp2f3(#L,i丅数,L,__LINE__)
            #define PTLf3亖亖(i维,L)    PTLf3(#L,i维,L,__LINE__)
            #define PTLf3亖亖if(i维,L)    if((IF)!=false)PTLf3(#L,i维,L,__LINE__)
            #define PTf3亖亖(L)     printf(" ----f3----%s＝------------------------行:%d \n    %f,  %f,  %f   \n",#L,__LINE__,L[0],L[1],L[2])
            #define PTL亖亖(i维,L)    PTfn(#L,i维,L,__LINE__)
            #define PTL亖亖if(IF,i维,L)    if((IF)!=false)PTfn(#L,i维,L,__LINE__)
            #define PTf33亖亖(m)    PTf33(#m,m,__LINE__)
            #define PTf44亖亖(m)    PTf44(#m,m,__LINE__)
    #endif            
            
    #else    
        #define  PTp2f3亖亖(i丅数,L) 
        #define  PTLf3亖亖(i维,L)  
        #define  PTLf3亖亖if(IF,i维,L)  
        #define PTL亖亖(i维,L) 
        #define PTL亖亖if(IF,i维,L) 
        
        #define PTf3亖亖(L)
        #define  PTf33亖亖(m)   
        #define  PTf44亖亖(m)    
#endif
#define PTp2f3亖亖db(i丅数,L)    PTp2f3(#L,i丅数,L,__LINE__,__FILE__)
#define PTLf3亖亖db(i维,L)    PTLf3(#L,i维,L,__LINE__,__FILE__)
#define PTL亖亖db(i维,L)    PTdn(#L,i维,L,__LINE__,__FILE__)
#define PTf33亖亖db(m)    PTf33(#m,m,__LINE__,__FILE__)
#define PTf44亖亖db(m)    PTf44(#m,m,__LINE__,__FILE__)


    
template<typename T>
cchar*sTypeid(T t)
    {
    // ASSERTR(t 二二 NULL,NULL);
    // ASSERT1( t 二二 NULL);
    return typeid(t).name();
    }
////END////END////END////END////END////END////END////END////
#endif 
