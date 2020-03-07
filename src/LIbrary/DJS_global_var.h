// #pragma once
#ifndef __DJS_GLOBAL_VAR_H__
    #define __DJS_GLOBAL_VAR_H__
#pragma warning(disable:4101 4003  4005  4190 4996  4313 )

#ifdef _PRAGMA_MG_
    #pragma message("#:" __FILE__)
#endif

// #include<string>
// #include<vector>
// using namespace std;
#include"STL\DJS_STL_def0.h"

#include"DJS_typedef.h"
#include"DJS_define.h"
// #if(0)(<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/////////////////////////////////////////////
//bool B,B1,B2,B3;int SIZE一1,SIZE1,SIZE2 ,NUM,NUM1,NUM2,I1,I2,I3,I一,I一1,I一2, I,J,K,L,ξ,ξ0,ξ1,ξ2,艹0,艹,艹1,*ΨI=NULL;
static float fG,f0D=0.0f,f1G,f2G[2],f3G[3],f4G[4],卜G,卜0G,卜1G,ㄥG,ㄥ0G,ㄥ1G,ㄥ2G,ㄥ3G,f3ZG[3]={0,0,1}, f33G[3][3],f44G[4][4],*ΨfG=NULL;
static float f3Tmp[3],f3Tmp1[3],f4Tmp[4],f44Tmp[4][4],f44Tmp1[4][4],*ΨNULL=NULL;
static string STR;

static cchar*S1=NULL;static char*sNULL=NULL;static cint*iNULL=NULL;static cfloat*fNULL=NULL;static cdouble*dNULL=NULL;
static char cG='\0',s1行G[i512],s文G[i512],*ΨNoName="NoName";


//卍Vector V,V0,V1,V2,V3,V4,乛1,乛2,乛01,乛10,乛02,乛20,乛03,乛30,乛12,乛21,乛13,乛31,乛23,乛32,乛04 ,乛40   ,乛14 ,乛41 ,乛24 ,乛42 ,乛34 ,乛43 ,乛N,乛N1,Γ1,丄,丄1,丄2,丅,丅1,丅2,丅3,丅4,丅5,丅6,丅a,丅b,丅c,丅d,丅e,丅f;卍Matrix M,M1,M2,M3;
static HINSTANCE hDllG=NULL;
static int i打印次数G=0,i打印次数2G=0;
static VECTOR(int,__Viξ跟踪G__);static int ξ跟踪点G,__ξ跟踪点G__=-1,__ξ跟踪点2G__=-1;
#ifdef __PRINT__
    #define 二跟踪点(ξω点,ξ跟踪点G)    ξ跟踪点G=ξω点
#else
    #define 二跟踪点(ξω点,ξ跟踪点G)
#endif

static int i0=0,i一1=-1;static float f一1=-1.0f;static double d0=0.0,d一1=-1.0;
static bool b找到G=false,b找到1G=false,b选中G=false;static cbool bTureD=true,bFalseD=false,bFalse2D=false;

static vector<int>ViG,Vi2G(2),Vi3G(3),Vi4G(4);
static float f3黄G[3]={1.0f,1.0f,0.0f},f3红G[3]={1.0f,0.0f,0.0f},f3橙G[3]={0.5f,0.5f,0.0f},f3绿G[3]={0.0f,1.0f,0.0f},f3蓝G[3]={0.2f,0.3f,0.8f},f3青G[3]={0.2f,0.7f,0.8f},f3原来G[3];
////定义函数指针////////////////////////////////////
// typedef void (__stdcall* ΨΔPRINTc)(LPCTSTR,...);//__stdcall 
// typedef void (__stdcall* ΨΔFUNCc)(char*);
// typedef void (__stdcall* ΨΔFUNCi)(int);
// typedef void (__stdcall* ΨΔFUNC)();
// typedef int (__stdcall* ΨiΔFUNC)();

///////////////////////////////////////////
static void*ΨG=NULL;
static const void *NULLG=NULL;static cchar*sNULLG=NULL;
//====定义函数指针==========================
// typedef  int(*ΨiΔG)();typedef  float(*ΨΔfG)();
// typedef  void(*ΨΔG)();typedef  void(*ΨΔiG)(int);typedef  void(*ΨΔcG)(char*);

////DJS_math.h////////////////////////////////////
static uint I11,I22;

////Bool.h////////////////////////////////////
static vector<int>V2一1G={-1,-1};

////DJS_STL_find.h/////////////////////////////////
static int idxG=-1;
////DJS_string0.h/////////////////////////////////
static char Lchar256G[i256],Lchar512G[i512];static cchar*Ψchar256G=Lchar256G,*Ψchar512G=Lchar512G;
static wchar_t Lwchar512G[i256];
static char s转G[i256],*Ψs转G=s转G,c转G='0';static  cchar*Ψs转fG;
static cchar s字母[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static float fChar;static int iChar,iChar1,iChar2;static char s转成数字G[128];
static bool b是否G=false;

static char c换行符G='\0';static int i格式G=-1;
//====位运算==============================================
//====●整数==========================
静联 int 加1(int a)
    {
    int I=1;
    while(a & I)
        {
        a = a^(a & -a);
        I<<= 1;
        }
    return a |= I;
    }
// 从二进制位的角度来看加1就是把最靠右的那位0变成1,之后的1全变为0 像这样100011 0 111 + 1 = 100011 1 000,循环过程就是在寻找最右端0的位置并将其后的1置0, a = a^(a & -a);的作用是将最右的1变成0 

    
静联 int 加(int a, int b)
    {
    return (b) ? 加((a)^(b), ((a)&(b))<<1) : (a);
    }
    
静联 int 负(int a)     //get -a,把正整数转负数,或负数转正整数
    {
    return 加(~(a), 1);
    }
静联 int 减(int a, int b)
    {
    return 加((a), 负(b));
    }

//----●正整数--------------------------
静联 double 乘方(double x, int n指数) {
    if (!n指数)
        return 1;
    if (n指数  ＜  0) {
        return 1 / (x * 乘方(x, ~n指数));
    }
    double result = 1;  
    for(; 0 ＜  n指数 ; x *= x, n指数 >>= 1) {  
         if (0<(n指数 & 1) )  
            result *= x;  
    }  
    return result;
}
静联 int 乘(int a, int b)
    {
    int ans = 0;
    while(b)
        {
        if(b&1)
            ans = 加(ans, a);
        a = a << 1;
        b = b >> 1;
        }
    return ans;
    }

静联 int 除(int a, int b)
    {
    int coun = 0;
    while(a >= b)
        {
        a = 减(a, b);
        coun = 加(coun, 1);
        }
    return coun;
    }


//====判断是否是负整数，0，●整数==========================
静联 bool 卩负(int a)
    {
    return a & 0x8000;
    }
静联 bool 卩0(int a)
    {
    return !(a & 0xFFFF);
    }
静联 bool 卩正(int a)
    {
    return (a&0xFFFF) 丶丶 !(a&0x8000);
    }
//====●负整数 的乘法和除法==========================
静联 int 乘负(int a, int b)
    {
    if(卩0(a)  丨丨  卩0(b))
        return 0;
    if(卩负(a))
        {
        if(卩负(b))
            return 乘(负(a), 负(b));
        else
            return 负(乘(负(a), b));
        }else if(卩负(b))
        return 负(乘(a, 负(b)));
    else
        return 乘(a, b);
    }
//==============================
静联 int 除负(int a, int b)
    {
    if(卩0(b))
        {
        cout << "Error!" << endl;
        exit(1);
        }
    if(卩0(a))
        return 0;
    if(卩负(a))
        {
        if(卩负(b))
            return 除(负(a), 负(b));
        else
            return 负(除(负(a), b));
        }else if(卩负(b))
        return 负(除(a, 负(b)));
    else
        return 除(a, b);

    }
    
//----● 整数--------------------------
#define 乘2(i)    (i<<1)
#define 乘4(i)    (i<<2)
#define 乘8(i)    (i<<3)
#define 乘10(i)     加(i<<3,i<<1)
#define 除2(i)    (i>>1)
#define 除4(i)    (i>>1)
#define 除8(i)    (i>>1)
//----● 正整数------------------------------------
static int diff;
静联 bool 卩＜(匚int 小, 匚int 大) 
    { 
    diff = 小 ^ 大; if (!diff) return 0; // 001xxxxx -> 00100000
    diff |= diff >> 1; diff |= diff >> 2; diff |= diff >> 4; diff |= diff >> 8; diff |= diff >> 16; diff ^= diff >> 1;
    return 小 & diff ? false : true;
    }

/* 理解：
1.a 二二 b 异或则为0
2.a  ＜  b 从高位向低位数起，二者第一次出现不同的二进制位时，a在该位处的值一定为0，b在该位处的值一定为1,反之亦然。
diff = a ^ b ，找diff中为1的那一位，a | 0 不变，a | 1 置1 ，那么>>16之后，为1的那一位还是1，为1之后的所有位都被置1
    diff |= diff >> 1;
    diff |= diff >> 2;
    diff |= diff >> 4;
    diff |= diff >> 8;
    diff |= diff >> 16;
为1的那一位置1，其他所有位因为异或，置0
    diff ^= diff >> 1;
检验a在该位是0还是1，是0的话说明a小，是1的话说明a大
    a & diff */


////////////////////////////////////////////
//------------------------------
#ifdef _MATH查_
    // #include<string\DJS_string0.h>
    // #include"global\DJS_global_var.h"
    #include"math\math查300.h"
    // #define sin    sin查
    // #define cos    cos查
    // #define asin    asin查
    // #define acos    acos查 //★★会出错stack overflow
    // #define 平方    平方查 ●● 这个只在1以内才有效
    // #define 立方    立方查
    // #define 开方    开方查
#endif
#include"math\MatQuatVec.h"
static c卍Vector v0D(0,0,0),v1D(1,1,1),ΦXD(1,0,0),ΦYD(0,1,0),ΦZD(0,0,1),上D(0,0,1),下D(0,0,-1);
static 卍Vector 乛0G,乛1G,乛2G,ΦG,乛3G,ΓG,Γ0G,丄G,丄1G,丄2G,丅0G,丅1G,丅2G,丅3G,丅4G;
static 卍Vector v重力D(0.0f,0.0f,-0.00981f);static float fp重力倍数G=10;//■■
static VECTOR(卍Vector,V丅G);
static c卍Matrix m0D;

static vector<vector<卍Color>>V行序VcolG;
// static const 卍Quaternion q0D(0);//★★★出错

// #endif>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
////END////END////END////END////END////END////END////END////
#endif



















