
// #pragma once

#ifndef _DJS_TPYDEF_H__
#define _DJS_TPYDEF_H__
#ifndef __cplusplus
    #define __cplusplus
#endif

#ifdef _PRAGMA_MG_
    #pragma message("#:" __FILE__)
#endif

#include<stdio.h>
#include<windows.h>//●● 这个与 GDNative的Object.hpp冲突
// #include"DJS_define.h"
struct 卍Vector;struct 卍f3;struct 卍f4;struct 卍f44;struct 卍f3Ψ;struct 卍Matrix;struct 卍Matrix33;struct 卐ParentPb;struct 卐Object;struct 卍Quaternion;struct 卍Color;struct 卍PSR;struct 卍PSRpose;struct 卍Node;struct 卍囗;struct 卍囗I;struct 卍tex;
// class vector;class map;class deque;class list;
// #ifndef __PRINT__
// #include<map>//●●必须先包含 ＜ map> 不然在包含 ＜ unordered_map>会出错
#include<unordered_map>
#include<algorithm>
// #ifndef __PRINT__
#define map    unordered_map
// #endif

//------------------------------

// #define 匚(T)   匚T 
// #define 匚匚(T)    const T const &
typedef const int    cint; 
typedef const bool    cbool;
typedef const float    cfloat;
typedef const long    clong;
typedef const double    cdouble;
typedef const wchar_t    cwchar;
typedef const char    cchar;
typedef char*const  charΨc;   
typedef const char*const ccharΨc;   

typedef unsigned int    uint;

typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned long long    ullong;
typedef unsigned short    ushort;    

typedef cint&  匚int;
typedef cfloat&   匚float;
typedef cdouble&   匚double;
typedef cbool&    匚bool;
typedef cchar&    匚char;

// typedef uchar   unsigned char //●●冲突e:\src\blender\source\blender\blenlib\BLI_sys_types.h
typedef const 卍Vector&    匚卍Vector;
typedef const 卍Vector    c卍Vector;
typedef const 卍f3&    匚卍f3;
typedef const 卍f3    c卍f3;
typedef const 卍f3Ψ&    匚卍f3Ψ;
typedef const 卍f3Ψ    c卍f3Ψ;
typedef const 卍f4&    匚卍f4;
typedef const 卍f4    c卍f4;
typedef const 卍f44&    匚卍f44;
typedef const 卍f44    c卍f44;
typedef const 卍Quaternion&    匚卍Quaternion;
typedef const 卍Quaternion    c卍Quaternion;
typedef const 卍Matrix&    匚卍Matrix;
typedef const 卍Matrix    c卍Matrix;
typedef const 卍Matrix33&    匚卍Matrix33;
typedef const 卍Matrix33    c卍Matrix33;
typedef const 卍Color    c卍Color;
typedef const 卍Color&    匚卍Color;
typedef const 卍PSR&    匚卍PSR;
typedef const 卍PSRpose&    匚卍PSRpose;
typedef const 卐ParentPb&    匚卐ParentPb;
typedef const 卐Object&    匚卐Object;
typedef const 卍Node    c卍Node;
typedef const 卍Node&    匚卍Node;
typedef const 卍囗    c卍囗;
typedef const 卍囗&    匚卍囗;
typedef const 卍囗I    c卍囗I;
typedef const 卍囗I&    匚卍囗I;
typedef const 卍tex    c卍tex;
typedef const 卍tex&    匚卍tex;


#define cvector    const vector
#define 匚vector    const vector<int>&
#define cmap    const map
#define 匚map    const map<int,int>
#define clist    const list
#define cdeque    const deque
#define 匚deque   const deque<int>&
#define 匚auto    const auto&
#define  Ψ匚   *const &
#define 匚T   const T&
#define 匚T1   const T1&
#define 匚T2   const T2&
#define 匚T3   const T3&
#define 匚T4   const T4&
#define cT   const T
#define cT1   const T1
#define cT2   const T2
#define cT3   const T3
#define cT4   const T4

#ifndef 二二
    #define 二二      ==  
    #define ＜二      <= 
    #define ＜     < 
#endif


//====定义函数指针 定义========================================================
#define  定义函数指针(T返回类型,Δ)   typedef T返回类型(*ψ##Δ)();ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(){return(*Ψ##Δ)();   } 

#define  定义函数指针1(T返回类型,Δ,参数类型)    typedef T返回类型(*ψ##Δ)(参数类型);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(参数类型 x){return(*Ψ##Δ)(x);   } 

#define  定义函数指针2(T返回类型,Δ,T,T1)    typedef T返回类型(*ψ##Δ)(T,T1);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y){return(*Ψ##Δ)(x,y);   } 

#define  定义函数指针3(T返回类型,Δ,T,T1,T2)    typedef T返回类型(*ψ##Δ)(T,T1,T2);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y,T2 z){return(*Ψ##Δ)(x,y,z);}

#define  定义函数指针4(T返回类型,Δ,T,T1,T2,T3)    typedef T返回类型(*ψ##Δ)(T,T1,T2,T3);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y,T2 z,T3 w){return(*Ψ##Δ)(x,y,z,w);}

#define  定义函数指针5(T返回类型,Δ,T,T1,T2,T3,T4)    typedef T返回类型(*ψ##Δ)(T,T1,T2,T3,T4);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y,T2 z,T3 w,T4 q){return(*Ψ##Δ)(x,y,z,w,q);} 

#define  定义函数指针6(T返回类型,Δ,T,T1,T2,T3,T4,T5)    typedef T返回类型(*ψ##Δ)(T,T1,T2,T3,T4,T5);ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y,T2 z,T3 w,T4 q,T5 t){return(*Ψ##Δ)(x,y,z,w,q,t);} 
//------------------------------
/* #define  定义函数指针0C(T返回类型,Δ)   typedef T返回类型(*ψ##Δ)()const ;ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(){return(*Ψ##Δ)();   }    
#define  定义函数指针1C(T返回类型,Δ,参数类型)   typedef T返回类型(*ψ##Δ)(参数类型)const ;ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(参数类型 x){return(*Ψ##Δ)(x);   }   
#define  定义函数指针2C(T返回类型,Δ,T,T1)   typedef T返回类型(*ψ##Δ)(T,T1)const ;ψ##Δ   Ψ##Δ=NULL;T返回类型 Δ(T x,T1 y){return(*Ψ##Δ)(x,y);   }   
#define  定义函数指针3C(T返回类型,Δ,T,T1,T2)   typedef T返回类型(*ψ##Δ)(T,T1,T2)const ;ψ##Δ   Ψ##Δ=NULLL;T返回类型 Δ(T x,T1 y,T2 z){return(*Ψ##Δ)(x,y,z);   } */

#ifdef  __PRINT__
    #define 三函数指针(hDLL,Δ)    {Ψ##Δ=(ψ##Δ)GetProcAddress(hDLL,#Δ);ASSERTRdb(Ψ##Δ 二二 NULL);}
    #define 三函数指针W(hDLL,Δ)   { Ψ##Δ=(ψ##Δ)GetProcAddress(hDLL,s巜wchar(L#Δ));  ASSERTRdb(Ψ##Δ 二二 NULL);}

    #else
        #define 三函数指针(hDLL,Δ)    Ψ##Δ=(ψ##Δ)GetProcAddress(hDLL,#Δ)
        #define 三函数指针W(hDLL,Δ)    Ψ##Δ=(ψ##Δ)GetProcAddress(hDLL,s巜wchar(L#Δ))
#endif



////END////END////END////END////END////END////END////END////
#endif 

