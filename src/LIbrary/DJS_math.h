
// #pragma once
#ifndef __DJS_MATH_H__
    #define __DJS_MATH_H__

#include<deque>
#include "math.h"

static float 冖累～段实艹G=0;
static VECTOR(卍Vector,V丅点G);static VECTOR(卍Vector*,VΨ点丅);static VECTOR(卍Vector,V丅～点copyG);static VECTOR(卍Vector,V段序～v此乛前段G);static VECTOR(float,V点序冖累～段实G);static VECTOR(float,V点序冖每～段实G);
static VECTOR(卍Vector,V乛工段G);
////DEFINE ////////////////////////////////////
typedef struct 卍RotOrderInfo {
	short axis[3];
	short parity; /* parity of axis permutation (even=0, odd=1) - 'n' in original code */
} 卍RotOrderInfo;

static const 卍RotOrderInfo rotOrders[] = {
	/* i, j, k, n */
	{{0, 1, 2}, 0}, /* XYZ */
	{{0, 2, 1}, 1}, /* XZY */
	{{1, 0, 2}, 1}, /* YXZ */
	{{1, 2, 0}, 0}, /* YZX */
	{{2, 0, 1}, 0}, /* ZXY */
	{{2, 1, 0}, 1}  /* ZYX */
};
#define GET_ROTATIONORDER_INFO(order)    (assert(order >= 0 丶丶 order ＜二 6), (order  ＜  1) ? &rotOrders[0] : &rotOrders[(order) - 1]) //0 XYZ 

#define ABS2(a)    \
    if(a ＜ 0)\
        a=-a

 //=============================================================
template<typename T>
联 cfloat Sqrt_(匚T  f,匚int 行=NULL,char*文件=NULL)
    {
#ifdef __PRINT__
    if(f ＜二 0)
        {
        printf("★★★ 开方 f:%f ＜二 0 ----------行:%d---------文件:%s\n",f,行,文件);
        return 0;
        }
#endif
    return sqrt(f);
    }
    
template<typename T>
联 cfloat asin_(匚T  f,匚int 行=NULL,char*文件=NULL)
    {
#ifdef __PRINT__
    if(f<-1 丨丨 f>1)
        {
        printf("★★★ Asin  f:%f<-1 ----------行:%d---------文件:%s\n",f,行,文件);
        return 0;
        }
#endif
    return asin(f);
    }
    
template<typename T>
联 cdouble acos_(匚T  f,匚int 行=NULL,char*文件=NULL)
    {
#ifdef __PRINT__
    if(f<-1 丨丨 f>1)
        {
        printf("★★★ Acos  f:%f<-1 ----------行:%d---------文件:%s\n",f,行,文件);
        return 0;
        }
#endif
    return acos(f);
    }
template<typename T>
联 cfloat square(const T &x,匚int 行=NULL,char*文件=NULL)    
    {
#ifdef __PRINT__
    //if(x ＜ 0)
        //printf("★★★ 平方 x:%f<-1 ----------行:%d---------文件:%s",x,行,文件);
    //ASSERT1R("平方",x ＜ 0,0);
#endif
    return x*x;
    }
template<typename T>
联 cfloat cube(const T &x,匚int 行=NULL,char*文件=NULL)    
    {
#ifdef __PRINT__
    //if(x ＜ 0)
        //printf("★★★ 立方 x:%f <-1 ----------行:%d---------文件:%s",x,行,文件);
    //ASSERT1R("立方",x ＜ 0,0);
#endif
    return x*x*x;
    }

#ifdef __PRINT__
    #define 开方(f)    Sqrt_(f,__LINE__,__FILE__)
    #define 平方(x)    square(x,__LINE__,__FILE__)
    #define 立方(x)    cube(x,__LINE__,__FILE__)
    #define Asin(f)    asin_(f,__LINE__,__FILE__)
    #define Acos(f)    acos_(f,__LINE__,__FILE__)
    #else
        #define 开方(f)    Sqrt_(f)
        #define 平方(x)    square(x)
        #define 立方(x)   cube(x)
        #define Asin(f)    asin(f)
        #define Acos(f)    acos(f)
#endif

联 cfloat saacos2(float fac)
{
	if      (fac ＜二 -1.0f) return (float)ㄥ180;
	else if (fac >=  1.0f) return 0.0f;
	else                             return acosf(fac);
}

#define 卩奇(i)    (i&1)
// #define 卩偶(i)    (i|1)//ΧΧ

////////////////////////////////////////////
#define F33ΧF33(Ω,ω,f33__)    \
    f33__[0][0] = Ω[0][0]*ω[0][0] + Ω[1][0]*ω[0][1] + Ω[2][0]*ω[0][2];\
    f33__[0][1] = Ω[0][1]*ω[0][0] + Ω[1][1]*ω[0][1] + Ω[2][1]*ω[0][2];\
    f33__[0][2] = Ω[0][2]*ω[0][0] + Ω[1][2]*ω[0][1] + Ω[2][2]*ω[0][2];\
    /**/\
    f33__[1][0] = Ω[0][0]*ω[1][0] + Ω[1][0]*ω[1][1] + Ω[2][0]*ω[1][2];\
    f33__[1][1] = Ω[0][1]*ω[1][0] + Ω[1][1]*ω[1][1] + Ω[2][1]*ω[1][2];\
    f33__[1][2] = Ω[0][2]*ω[1][0] + Ω[1][2]*ω[1][1] + Ω[2][2]*ω[1][2];\
    /**/\
    f33__[2][0] = Ω[0][0]*ω[2][0] + Ω[1][0]*ω[2][1] + Ω[2][0]*ω[2][2];\
    f33__[2][1] = Ω[0][1]*ω[2][0] + Ω[1][1]*ω[2][1] + Ω[2][1]*ω[2][2];\
    f33__[2][2] = Ω[0][2]*ω[2][0] + Ω[1][2]*ω[2][1] + Ω[2][2]*ω[2][2]
    
#define F44ΧF44(Ω,ω,f44__)    \
    f44__[0][0] = Ω[0][0]*ω[0][0] + Ω[1][0]*ω[0][1] + Ω[2][0]*ω[0][2] + Ω[3][0]*ω[0][3];\
    f44__[0][1] = Ω[0][1]*ω[0][0] + Ω[1][1]*ω[0][1] + Ω[2][1]*ω[0][2] + Ω[3][1]*ω[0][3];\
    f44__[0][2] = Ω[0][2]*ω[0][0] + Ω[1][2]*ω[0][1] + Ω[2][2]*ω[0][2] + Ω[3][2]*ω[0][3];\
    f44__[0][3] = Ω[0][3]*ω[0][0] + Ω[1][3]*ω[0][1] + Ω[2][3]*ω[0][2] + Ω[3][3]*ω[0][3];\
    /**/\
    f44__[1][0] = Ω[0][0]*ω[1][0] + Ω[1][0]*ω[1][1] + Ω[2][0]*ω[1][2] + Ω[3][0]*ω[1][3];\
    f44__[1][1] = Ω[0][1]*ω[1][0] + Ω[1][1]*ω[1][1] + Ω[2][1]*ω[1][2] + Ω[3][1]*ω[1][3];\
    f44__[1][2] = Ω[0][2]*ω[1][0] + Ω[1][2]*ω[1][1] + Ω[2][2]*ω[1][2] + Ω[3][2]*ω[1][3];\
    f44__[1][3] = Ω[0][3]*ω[1][0] + Ω[1][3]*ω[1][1] + Ω[2][3]*ω[1][2] + Ω[3][3]*ω[1][3];\
    /**/\
    f44__[2][0] = Ω[0][0]*ω[2][0] + Ω[1][0]*ω[2][1] + Ω[2][0]*ω[2][2] + Ω[3][0]*ω[2][3];\
    f44__[2][1] = Ω[0][1]*ω[2][0] + Ω[1][1]*ω[2][1] + Ω[2][1]*ω[2][2] + Ω[3][1]*ω[2][3];\
    f44__[2][2] = Ω[0][2]*ω[2][0] + Ω[1][2]*ω[2][1] + Ω[2][2]*ω[2][2] + Ω[3][2]*ω[2][3];\
    f44__[2][3] = Ω[0][3]*ω[2][0] + Ω[1][3]*ω[2][1] + Ω[2][3]*ω[2][2] + Ω[3][3]*ω[2][3];\
    /**/\
    f44__[3][0] = Ω[0][0]*ω[3][0] + Ω[1][0]*ω[3][1] + Ω[2][0]*ω[3][2] + Ω[3][0]*ω[3][3];\
    f44__[3][1] = Ω[0][1]*ω[3][0] + Ω[1][1]*ω[3][1] + Ω[2][1]*ω[3][2] + Ω[3][1]*ω[3][3];\
    f44__[3][2] = Ω[0][2]*ω[3][0] + Ω[1][2]*ω[3][1] + Ω[2][2]*ω[3][2] + Ω[3][2]*ω[3][3];\
    f44__[3][3] = Ω[0][3]*ω[3][0] + Ω[1][3]*ω[3][1] + Ω[2][3]*ω[3][2] + Ω[3][3]*ω[3][3]
    
////DJS_math_v////////////////////////////////////////
静联 匚卍Vector 丄(vector<卍Vector> V面点序点丅);
//----工_------------------------------------------------------
EXCLIB void ΔΔ归零f3B(float f3R__[3]);

联 float fΔnormal_tri_v3(cfloat v壹[3], cfloat v2[3], cfloat v3[3],float nResult[3]);
联 void Δ三点丄LIB( cvector<卍Vector>&V丅点,float nResult[3]);
联 float fΔnormal_quad_v3(cfloat v壹[3], cfloat v2[3], cfloat v3[3], cfloat v4[3],float nResult[3]);
联 float Δ四点丄LIB( cvector<卍Vector>&V丅点,float nResult[3]);

// EXCLIB float fΔΔ四Φ互相乘和f4一f4二(cfloat q1[4], cfloat q2[4]);
// EXCLIB void ΔΔ积各Φf一给f4二( cfloat& f,float f4[4]);
// EXCLIB void ΔΔ变f44一为f4二向(float f44[][4],float f4[4] );

//-----------------------------------------------
联 float f33竖1卜f3(float M[3][3], cfloat a[3]);
联 float f33竖2卜f3(float M[3][3], cfloat a[3]);
联 float f33竖3卜f3(float M[3][3], cfloat a[3]);

静联 bool 卩〇(匚卍f3 v);
静联 bool 卩〇(匚卍Vector v);
静联 bool 卩〇(匚卍Matrix33 m);
静联 bool 卩〇(匚卍Matrix m);
静联 bool 卩〇(匚卍f44 f44);



template<typename T>
    联 float  冖(匚T v);
template<typename T,typename T1>
    联 float  冖(匚T v,匚T1 f3_);
template<typename T>
    联 float  冖2(匚T v);
template<typename T,typename T1>
    联 float  冖2(匚T v,匚T1 v壹);
    
template<typename T>
    联 bool  冖丨(cfloat& 冖_,  T&v二__);
template<typename T>
    联 bool  丨冖(cfloat& 冖_,  T&v二__);
    
联 float 冖SK(cfloat*a, cfloat*b );

联 float f3_f3工(cfloat a[3],float f3__[3]);


静联 void 工(卍Vector&v,cbool& b检测长度 =false);
template<typename T>
    联 void 工(匚卍Vector v,T&t__,匚bool b检测长度 =false);
静联 void 工(卍f3&v,cbool& b检测长度 =false);
template<typename T>
    联 void 工(卍f3&f3,T&t__,匚bool b检测长度 =false);
静联 void 工(卍f3Ψ&f3,匚bool b检测长度 =false);
template<typename T>    
    联 void 工(卍f3Ψ&f3,T&t__,匚bool b检测长度 =false);
    
静联 void 工(卍Quaternion&f4,cbool& b检测长度 =false);
静联 void 工(卍f4&f4,cbool& b检测长度 =false);
静联 void 工(卍Matrix&m__,cbool& b检测长度 =false);
静联 void 工(卍Matrix33&m__,cbool& b检测长度 =false);

template<typename T> 
    联 匚T 工_(T&v,cbool& b检测长度 =false);
template<typename T>    
    联 T _工(匚T m,cbool& b检测长度 =false);
    

//====2d==========================
template<typename T>
    联 void 工2(T&v,cbool& b检测长度 =false);
template<typename T>
    联 匚T 工2_(T&v,cbool& b检测长度 =false);
template<typename T>
    联 匚卍Vector _工2(T&v,cbool& b检测长度 =false);
template<typename T>
    联 void 工2(匚T v,float f3ThisN__[3],cbool& b检测长度 =false);


template<typename T,typename T1>
    联 卍Vector 一(匚T v,匚T1 v壹);


template<typename T,typename T1>
    联 float 卜(匚T v,匚T1 v壹);
template<typename T,typename T1>
    联 float 卜2(匚T v,匚T1 v壹);



联 void Γ_(cfloat f3a[3],cfloat f3b[3],float f3__[3]);
template<typename T,typename T1>
    联 卍Vector Γ(匚T v,匚T1 v壹);
template<typename T,typename T1,typename T2>
    联 void Γ_(匚T v,匚T1 v壹,T2&f3__);
template<typename T,typename T1,typename T2>
    联 void Γ2_(匚T v,匚T1 v壹,T2&f3__);



静联 float Λ(float f3a[3],float f3b[3] \
                                                                            ,cbool& b工1=true,cbool& b工2=true);

template<typename T,typename T1> 
    联 float Λ(T v,T1 v壹 \
                                                    ,cbool& b工1 =true,cbool& b工2 =true);
    
静联 void 十2(cfloat a[2], cfloat b[2],float f2R__[2]);
静联 void 十2(cvector<double>&a,cvector<double>&b,float f2R__[2]);
// 静联 void 十(cfloat a[3], cfloat b[3],float f3__[3]);
// 静联 void 十(cfloat a[3], cfloat b[3],cfloat c[3],float f3__[3]);
// 静联 void 十(cfloat a[3], cfloat b[3],卍Vector& f3__);
静联 void 十(cfloat a[3], 匚卍Vector b,float f3__[3]);

template<typename T>
    静联 void 十_(cfloat a[3], cfloat b[3],T &f3__);
template<typename T>
    静联 T 十(cfloat a[3], cfloat b[3]);
template<typename T,typename T1>
    联 卍Vector 十(匚T v,匚T1 v壹);
template<typename T,typename T1>
    联 void 十二(匚T v,T1&v__);
template<typename T>
    联 void 十二(匚T v,float*v__);
template<typename T,typename T1,typename T2>
    联 void 十_(匚T v,匚T1 v壹,T2&v__);
template<typename T,typename T1,typename T2,typename T3>
    联 卍Vector 十(匚T v,匚T1 v壹,匚T2 v贰);
template<typename T,typename T1,typename T2,typename T3>
    联 void 十_(匚T v,匚T1 v壹,匚T2 v贰,T3&v叁__);

template<typename T,typename T1,typename T2,typename T3>
    联 卍Vector 十(匚T v,匚T1 v壹,匚T2 v贰,匚T3 v叁);
template<typename T,typename T1,typename T2,typename T3,typename T4>
    联 void 十_(匚T v,匚T1 v壹,匚T2 v贰,匚T3 v叁,T4&v四__);

template<typename T>
    联 卍Vector 十(匚T v,匚float f);
template<typename T>
    联 卍Vector 十(匚T v,匚int f);
template<typename T>
    联 void 十_(匚T v,匚float f,T&v__);
template<typename T>
    联 void 十_(匚T v,匚int f,T&v__);

template<typename T>
    联 卍Quaternion 十(匚卍Quaternion f4,匚T v壹);
template<typename T>
    联 卍Quaternion 十(匚卍f4 f4,匚T v壹);


联 void 一_(cfloat a[3], cfloat b[3],float f3__[3]);
联 void 一_(cdouble a[3], cdouble b[3],float f3__[3]);
联 void 一2_(cfloat a[2], cfloat b[2],float f2R__[2] );
联 void 一_(cfloat a[3], cfloat b[3],卍Vector&f3__);    

template<typename T,typename T1>
    联 卍Vector 一(匚T v,匚T1 v壹);
template<typename T,typename T1>
    联 void 一二(匚T v,T1&f3__);
template<typename T,typename T1,typename T2>
    联 void 一_(匚T v,匚T1 v壹,T2&v__);
template<typename T>
    联 卍Vector 一(匚T v,匚float f);
template<typename T>
    联 卍Vector 一(匚T v,匚int f);
    
//==============================
静联 void Χ_(cfloat f3[3],float f,float f3__[3]);


template<typename T>
    联 卍Vector Χ(匚T v壹, 匚float f);
template<typename T>
    联 void Χ_(匚T v壹, 匚float f,卍Vector&r__);
template<typename T>
    联 void Χ_(匚T v壹, 匚float f,float r__[3]);


//----2d--------------------------
静联 void  Χ二2( float f,float f3__[2]);
静联 void Χ2_(cfloat f3[2],float f,float f3__[2]);
静联 void Χ2_(cfloat v壹[2], cfloat v2[2],float r__[2]);
template<typename T>
    联 void Χ2_(匚T v壹, 匚T v2,卍Vector&r__);
template<typename T>
    联 T Χ2(匚T v壹, 匚T v2);
template<typename T>
    联 T Χ2(匚T v壹, 匚float f);
template<typename T>
    联 void Χ2_(匚T v壹, 匚float f,卍Vector&r__);
  
//------------------------------
template<typename T>
    联 void  Χ二(匚float f,T&f3__);
template<typename T>
联 void  Χ二(匚int f,T&f3__);
template<typename T>
    联 void Ξ二(T&f__, 匚float f1);
template<typename T>
    联 void Ξ二(T&f__, 匚int f1);
    
//----M＠M--------------------------
template<typename T>
    联 卍Matrix ＠(匚T m,匚卍Matrix ω);
template<typename T,typename T1>    
    联 void ＠(匚T m,匚卍Matrix ω,T1&m__);
template<typename T>    
    联 void ＠二(匚T m,卍Matrix&ω);
    
template<typename T>    
    联 卍Matrix ＠(匚T m,匚卍f44 ω);
template<typename T,typename T1>    
    联 void ＠(匚T m,匚卍f44 ω,T1&m__);
template<typename T>    
    联 void ＠二(匚T m,卍f44&ω);

template<typename T>    
    联 卍Matrix ＠(匚T m,cfloat ω[4][4]);
template<typename T,typename T1>    
    联 void ＠(匚T m,cfloat ω[4][4],T1&m__);
template<typename T> 
    联 void ＠二(匚T m,float ω[4][4]);
静联 卍Matrix ＠(cfloat [4][4],cfloat ω[4][4]);
静联 卍Matrix ＠(cfloat m[4][4],匚卍Matrix ω);

template<typename T> 
    联 卍Matrix33 ＠(匚T m,匚卍Matrix33 ω);
template<typename T,typename T1>    
    联 void ＠(匚T m,匚卍Matrix33 ω,T1&m__);
template<typename T> 
    联 void ＠二(匚T m,卍Matrix33&ω);

template<typename T,typename T1>    
    联 void ＠(匚T m,cfloat ω[3][3],T1&m__); 
template<typename T>    
    联 void ＠二(匚T m,float ω[3][3]);



//----M＠V--------------------------
template<typename T> 
    联 c卍Vector ＠(匚T m,cfloat v[3]);
template<typename T,typename T1> 
    联 void ＠二(匚T m,float f3__[3]);
    
template<typename T> 
    联 c卍Vector ＠(cfloat f33[3][3],匚T v);
template<typename T> 
    联 c卍Vector ＠(cfloat f44[4][4],匚T v);    

template<typename T,typename T1> 
    联 void ＠(cfloat f33[3][3],匚T v,卍Vector&v__); 
template<typename T> 
    联 void ＠(cfloat f44[4][4],匚T v,卍Vector&v__);
静联 void ＠(cfloat f44[4][4],cfloat v[3],卍Vector&v__);
静联 void ＠(cfloat f44[4][4],cfloat v[3],float f3__[3]);    
template<typename T> 
    联 void ＠二(cfloat f44[4][4],T&f3__);
    

静联 c卍Vector ＠(匚卍f44 m,匚卍Vector v);
template<typename T>
    联 void ＠(匚卍f44 m,匚T v,卍Vector&v__);
template<typename T>
    联 void ＠(匚卍f44 m,匚T v,卍f3&v__);
template<typename T>
    联 void ＠(匚卍f44 m,匚T v,float v__[3]);
静联 void ＠二(匚卍f44 m,卍Vector&v);

静联 c卍Vector ＠(匚卍Matrix m,匚卍Vector v);
template<typename T>
    联 void ＠(匚卍Matrix m,匚T v,卍Vector&v__);
template<typename T>
    联 void ＠(匚卍Matrix m,匚T v,卍f3&v__);
template<typename T>
    联 void ＠(匚卍Matrix m,匚T v,float v__[3]);
静联 void ＠二(匚卍Matrix m,卍Vector&v);

静联 c卍Vector ＠(匚卍Matrix33 m,匚卍Vector v);
template<typename T>
    联 void ＠(匚卍Matrix33 m,匚T v,卍Vector&v__);
template<typename T>
    联 void ＠(匚卍Matrix33 m,匚T v,float v__[3]);
静联 void ＠二(匚卍Matrix33 m,卍Vector&v) ;
//----把q 当成v 计算--------------------------
template<typename T> 
    联 c卍Vector ＠(匚T m,匚卍f4 v);

// ----只旋转不移动--------------------------
静联 c卍Vector  ＠0(匚卍Matrix m,匚卍Vector v);
静联 void  ＠0(匚卍Matrix m,匚卍Vector v,卍Vector&v__);
静联 void  ＠0二(匚卍Matrix m,卍Vector&v__);

template<typename T>
    联 卍Vector  Ξ(匚T v,匚int f);
template<typename T>
    联 卍Vector Ξ(匚T v,const size_t f);
template<typename T>
    联 卍Vector Ξ(匚T v,匚float f);
template<typename T>
    联 卍Vector  Ξ(匚T v,匚double f);
template<typename T,typename T1>
    联 void Ξ_(匚T f, 匚float f1,T1&f__);
template<typename T,typename T1>
    联 void Ξ_(匚T f, 匚int f1,T1&f__);
template<typename T>
    联 void Ξ二(T&f__, 匚float f1);
template<typename T>
    联 void Ξ二(T&f__, 匚int f1);



template<typename T> 
    联 c卍Matrix Ξ(匚卍Matrix m,匚T ω);
template<typename T> 
    联 c卍Matrix Ξ(匚T m,匚卍Matrix ω);
template<typename T,typename T1> 
    联 void Ξ_(匚卍Matrix m,匚T ω,T1&m__);
template<typename T,typename T1> 
    联 void Ξ_(匚T m,匚卍Matrix ω,T1&m__);

//------------------------------
静联 void 〇(float f3__[3]);

template<typename T,typename T1>
    联 void α(匚float ㄥ旋角,T&Φ轴_,T1&v__ \
                                                                                ,cbool& b工Φ=false);
template<typename T,typename T1>
    联 T1 _α(匚float ㄥ旋角,T&Φ轴_,匚T1 v \
                                                                                           ,cbool& b工Φ =false);
template<typename T,typename T1>
    联 匚T1 α_(匚float ㄥ旋角,T&Φ轴_,T1&v__ \
                                                                                           ,cbool& b工Φ =false);
template<typename T,typename T1,typename T2>
    联 void α(匚T v原始,匚float ㄥ旋角,T1&Φ轴_,T2&v__ \
                                                                                           ,cbool& b工Φ =false);

// template<typename T,typename T1>
    // 联 T1 _α(匚float ㄥ旋角,T&Φ轴_,T1&v__);
template<typename T>
    联 void α二(匚float ㄥ旋角,匚T v另,T&v);
        
//----------------------------------------
联 void α(cdouble& ㄥ旋角,double f3Φ[3],double f3__[3],cbool& b工Φ=true);

EXCLIB 联 void α(cfloat& ㄥ旋角,匚卍Vector vΦ,float f3__[3]);
template<typename T>
    联 匚卍Vector euler(匚T m,const short&order =0);
template<typename T,typename T1>
    联 void euler_m(匚T euler,T1&m__);
template<typename T,typename T1>
    联 void m_euler(匚T m,T1&euler__,const short&order =0);
template<typename T,typename T1>
    联 void m_丅(匚T m,T1& loc__);
    
    
                                                     
EXCLIB 联 void XYZ_f44(cfloat X[3],cfloat Y[3],cfloat Z[3],float f44__[4][4]);
静联 void Δadd_newell_cross_v3_v3v3(float n[3], cfloat v_prev[3], cfloat v_curr[3]);
//void _project_v3_v3v3(float out[3], const float p[3], const float v_proj[3]);

静联 cfloat cos(匚卍Vector v,匚卍Vector v二 \
                                                           ,cbool& b工此 =true,cbool& b工二 =true);
//////////////////////////////////////////
template<typename T,typename T2>
联 int iΞf(T2 i, T f)
    {float iΞ,f小数;int Ii;
    ASSERTR(f 二二 0,-1);
    iΞ=i/(float)f;Ii=iΞ;
    f小数=iΞ-Ii;//PRINT_3(,f实数,i实数,f小数,f,d,f);
    if(0.5 ＜ f小数){++Ii;}
    return Ii;
    }
    
// template<typename T,typename T2>
静联 float fΞf(匚float i, 匚float f,匚bool b不提示=true)
    {
    if(f 二二 0)
        {
        if(b不提示 二二 false)
            {ASSERTR(f 二二 0,千万);}
        else
            return 千万;
        }
    return i/(float)f;
    }
    
static inline int 卩二二(匚int i, 匚int f)//等于0,小于-1,大于1
    {
    if(i 二二 f)return 1;
    else return 0;
    }
    
//template<typename T,typename T2>
static inline int 卩二二(cfloat& i, cfloat& f,\
                                                                                short i乘=10000)//等于0,小于-1,大于1
    {
    
    I11= i*i乘;I22= f*i乘;
    //PRINT5if(DJS数学,"",i,I11,f,I22,f*100000);
    if(I11 二二 I22)return 0;
    else if(I11 ＜ I22)return -1;
    else return 1;
    }
    
static inline int 卩二二(cdouble& i, cdouble& f,\
                                                                                                short i乘=10000)//等于0,小于-1,大于1
    {
    I11= i*i乘;I22= f*i乘;
    //PRINT5if(DJS数学,"",i,I11,f,I22,f*100000);
    if(I11 二二 I22)return 0;
    else if(I11 ＜ I22)return -1;
    else return 1;
    }
static inline int 卩二二(cfloat& i, cdouble& f,\
                                                                                short i乘=10000)//等于0,小于-1,大于1
    {
    I11= i*i乘;I22= f*i乘;
    //PRINT5if(DJS数学,"",i,I11,f,I22,f*100000);
    if(I11 二二 I22)return 0;
    else if(I11 ＜ I22)return -1;
    else return 1;
    }
static inline int 卩二二(cdouble& i, cfloat& f,\
                                                                                        short i乘=10000)//等于0,小于-1,大于1
    {
    I11= i*i乘;I22= f*i乘;
    //PRINT5if(DJS数学,"",i,I11,f,I22,f*100000);
    if(I11 二二 I22)return 0;
    else if(I11 ＜ I22)return -1;
    else return 1;
    }
    
static inline bool 卩二二(cchar*a,cchar*b)
    {//PRINT0if(DJS数学,char);
    ASSERTexe("",a 二二 NULL 丨丨 b 二二 NULL,PRINT2("",a,b);return false;);
    return (a[0]==b[0])&&strcmp(a,b)==0;
    }
    
//----f3--------------------------
static inline  int 卩二二(cint f3一[3],cint f3二[3])
    {
    if(f3一[0]==f3二[0]&&f3一[1]==f3二[1]&&f3一[2]==f3二[2])
        return 0;
    else
        return -1;
    }
    
static inline int 卩二二(cfloat f3一[3],cfloat f3二[3])
    {
    if(f3一[0]==f3二[0]&&f3一[1]==f3二[1]&&f3一[2]==f3二[2])
        return 0;
    else
        return -1;
    }
   
template<typename T,typename T1>
联 bool 卩二二(匚T a,const T1&b,匚int i数)
    {//PRINT0if(DJS数学,T);
    if(i数 二二 3)
        return a[0]==b[0]&&a[1]==b[1]&&a[2]==b[2];
    if(i数 二二 2)
        return a[0]==b[0]&&a[1]==b[1];            
    }


template<typename T,typename T1>
联 bool 卩abs＜(匚T a,const T1&b)
    {//PRINT0if(DJS数学,T);
    if(0 ＜ a)//a== 1
        {
        if(0 ＜ b)//[1,2]
            return a ＜ b;
        else if(b ＜ 0)// [1,-2]
            return a ＜ abs(b);
        else if(b 二二 0)//[1,0]
            return false;
        }
    else if(a  ＜  0)//a== -1
        {
        if(0 ＜ b)//[-1,2]
            {
            return  abs(a) ＜ b;
            }
        else if(b ＜ 0)//[-1, -2]
            {
            return abs(a) ＜ abs(b);
            }
        else //[-1, 0]
            {
            return false;
            }
        }
    else //[0,2],[0,-2],[0,0]
        {
        return false;
        }
    }

#define  卩丨＜丨(min,max,b)    (min ＜ b 丶丶 b ＜ max)
#define  卩丨丨＜丨丨(min,max,b)    (min ＜二 b 丶丶 b ＜二 max)
#define  卩丨丨＜丨(min,max,b)    (min ＜二 b 丶丶 b ＜ max)
#define  卩丨＜丨丨(min,max,b)    (min ＜ b 丶丶 b ＜二 max)

#define 丨exe丨(b条件,exe)    if(b条件)exe
//----只能变大--------------------------
静联 匚int 丨＜(const uint&min,int&R)
    {//PRINT4("",min,R,min+R,R < min);
    if(R  ＜(int)min)R=min;
    return R;
    }
静联 uint& 丨＜(cint&min,uint&R)
    {//PRINT4("",min,R,min+R,R < min);
    if((int)R < min)R=min;
    return R;
    }
静联 float& 丨＜(cfloat&min,float&R)
    {//PRINT4("",min,R,min+R,R < min);
    if(R < min)R=min;
    return R;
    }
// template<typename T,typename T1>
// T1& 丨＜(const T &min,T1&R)
    // {//PRINT4("",min,R,min+R,R < min);
    // if(R < min)R=min;
    // return R;
    // }
template<typename T,typename T1>
T1 _丨＜(const T &min,const T1 R)
    {
    if(R ＜ min)return min;
    return R;
    }
//----只能变小--------------------------
静联 匚int ＜丨(const uint&max,int&R)
    {//PRINT4("",max,R,max+R,R < max);
    if((int)max ＜ R)R=max;
    return R;
    }
静联 uint& ＜丨(cint&max,uint&R)
    {//PRINT4("",max,R,max+R,R < max);
    if(max < (int)R)R=max;
    return R;
    }
    
静联 float& ＜丨(cfloat&max,float&R)
    {//PRINT4("",max,R,max+R,R < max);
    if(max <R)R=max;
    return R;
    }
// template<typename T,typename T1>
// T1& ＜丨(const T &max,T1&R)
    // {
    // if(max ＜ R)R=max;
    // return R;
    // }

    
static void ＜丨(cint max,char*R)
    {
    if(max ＜ strlen(R))R[max]='\0';
    }
    
//------------------------------
template<typename T,typename T1>
T1& 丨＜abs(T &min,T1&R)
    {
    if(R ＜ abs(min))R=min;
    return R;
    }
    
template<typename T,typename T1>
T1& ＜abs丨(T &max,T1&R)
    {
    if(abs(max)<R)R=max;
    return R;
    }
    
#define 丨＜丨(min,max,R)    {if(max ＜ R)R=max;else if(R ＜ min)R=min;}
#define 丨＜丨＜(a__,b__)   { if(b__ ＜ a__)b__=a__;else if(a__ ＜ b__)a__=b__ ;}/*只能变大*/
#define ＜丨＜丨(a__,b__)    {if(a__ ＜ b__)b__=a__;else if(b__ ＜ a__)a__=b__ ;}/*只能变小*/
// #define 丨＜丨(min,max,R)    {if(max ＜ R)R=max;else if(R ＜二 min)R=min;}
// #define 丨＜丨丨(min,max,R)    {if(max ＜二 R)R=max;else if(R ＜ min)R=min;}
#define  艹丨(i,b__)    if(b__ ＜ i)++b__
#define  艹x丨(i,x,b__)    if(b__ ＜ i)b__+=x
#define  丨艹x丨(i,x,b__)    {if(b__ ＜ i)b__+=x;else if(i ＜ b__)b__=i;}
#define  丨一一(i,b__)    if(i ＜ b__)--b__
#define  丨一一x(i,x,b__)    if(i ＜ b__)b__-=x
#define  丨一一x丨(i,x,b__)    {if(i ＜ b__)b__-=x;else if(b__ ＜ i)b__=i;}
#define 卩a巜b (a,b)     return a<(b)||-(b)<a 
#define ＜丨ㄥ90(max,R)    {if(ㄥ90 ＜ R)R=ㄥ180-(max);}
静联 void 负f3(float r[3]);

//====公式=====================================================
// ○○○4
// ○○▲3
// ○▲▲2
// ▲▲▲1
 // 1  2   3      ←n
#define i累加(n)    ((1+(n))*(n)/2)
// ☐☐☐☐☐☐☐☐┆┃☐
// ☐☐☐☐☐☐☐☐│┃☐
// ☐☐☐☐☐☐☐/▲┃☐
// ☐☐☐☐☐☐/▲▲┃☐
// ☐☐☐☐┄─▲▲▲┃☐
// ☐━━─▲▲▲▲▲┃☐
// ☐━━━━━━━━┴☐☐☐☐☐☐☐☐
#define i平方累加(n)    ((n)*((n)+1)*(2*(n)+1)/6)
#define 冖平方累加per(S,n)    开方( (S)/((n)*((n)+1)*(2*(n)+1)/6))

静联 float determinant_f33_array(cfloat m[3][3]);
inline void adjoint_f33_f33(cfloat m[3][3] ,float m__[3][3]);


////blender////////////////////////////////////////
/* convenience, avoids setting Y axis everywhere */
静联 void Unit_axis_angle(float axis[3], float *Λ);
//====知3边,求C角==========================
静联 cfloat ㄥ厶(cfloat&a边,cfloat&b边,cfloat&c边)
    {//cos C=(a边^2+b边^2-c边^2)/2*a边*b边;
    return Acos(  (平方(a边)+平方(b边)-平方(c边))/(2*a边*b边 )  );//求C角
    // return acos查(  (平方(a边)+平方(b边)-平方(c边))/(2*a边*b边 )  );
    } 
// 联 cdouble ㄥ厶(cdouble&a,cdouble&b,cdouble&c);
//====知2边1角,求边==========================
静联 cfloat 冖厶(cfloat&a,cfloat&b,cfloat&ㄥC);
//====知2边1角,求另1角==========================
静联 cfloat ㄥ厶2(cfloat&a,cfloat&b,cfloat&ㄥC);
//====算丄====================================================
// 联 void Δ修正夹角过大LIB(bool bp是平滑Λ,匚卍Vector vГpre_,卍Vector& vГ_);

EXCLIB 联 int ΔΔ反转f44一为f44二(float mat[4][4],float f44反[4][4]);
EXCLIB 联 void ΔΔ开方三Φ互乘和f44一给f3二( float mat[][4],float size[3]);

////圆////////////////////////////////////////
//=============================================================
静联 float ㄥΔ3点夹角弧2d十(匚卍Vector f2头,匚卍Vector f2尾,匚卍Vector f2圆心)
    {
    //☐☐☐☐◇f2头●━━━━━━━━→●f2尾☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐↖☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐☐\☐☐☐☐☐☐│☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐☐☐\☐☐☐☐┆☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐☐☐☐\☐☐☐│☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐☐☐☐☐\☐┆☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐☐
    //☐☐☐☐☐☐☐☐☐☐☐☐●f2圆心☐☐☐☐☐☐    
    float 冖心头=开方( 平方(f2头.x-f2圆心.x)+平方(f2头.y-f2圆心.y)  ) ;
    float 冖心尾=开方( 平方(f2尾.x-f2圆心.x)+平方(f2尾.y-f2圆心.y)  );
    float 冖头尾=开方( 平方(f2头.x-f2尾.x)+平方(f2头.y-f2尾.y) );
    float cosA=( 冖心头*冖心头+冖心尾*冖心尾-冖头尾*冖头尾) /(2*冖心头*冖心尾 );//角度只能从0到180度 没有负角度
    float f夹角弧十=acos(cosA );//cos值 从-1到1
    
    //printf("f对弧C++＝%d\n", f夹角弧十, "cosA＝%d\n",cosA);
    return f夹角弧十;//的弧永远小于半圆
    }
    
静联 float ㄥΔ3点夹角弧十(匚卍Vector 丅头,匚卍Vector 丅尾,匚卍Vector 丅圆心)
    {
    匚float 冖心头=冖(一(丅头,丅圆心)),冖头尾=冖(一(丅尾,丅头));//冖心尾=(丅尾-丅圆心).冖(),
    if(冖头尾 二二 冖心头*2)return ㄥ180;//PRINT5("▲",丅头,丅尾,丅圆心,冖心头,冖头尾);
    return ㄥ厶(冖心头,冖心头,冖头尾);
    }
    
联 int i圆心丶半径2d(匚卍Vector 丅头,匚卍Vector 丅间,匚卍Vector 丅尾,卍Vector&丅XYR_);
联 int i圆心丶半径(匚卍Vector 丅头,匚卍Vector 丅间,匚卍Vector 丅尾, 卍Vector&丅圆心_,float*Ψ冖半径__=NULL);

静联 int i圆心丶半径2d(cfloat f2头[2],cfloat f2间[2],cfloat f2尾[2],float f3XYR_[3])
    {卍Vector 丅头(f2头),丅间(f2间),丅尾(f2尾),丅XYR_(f3XYR_);
    return i圆心丶半径2d(丅头,丅间,丅尾,丅XYR_);丅XYR_.乛(f3XYR_);
    }

静联 int i圆心丶半径(cfloat f2头[2],cfloat f2间[2],cfloat f2尾[2],float f3圆心_[3],float*Ψ冖半径__=NULL)
    {卍Vector 丅头(f2头),丅间(f2间),丅尾(f2尾),丅圆心_(f3圆心_);
    return i圆心丶半径(丅头,丅间,丅尾,丅圆心_,Ψ冖半径__);丅圆心_.乛(f3圆心_);
    }
    
静联 float  弧(float f角度)
    {
    return  f角度 /180 *PI;//角度转弧度： 
    }

静联 float  角(float f孤度)
    {
    return  f孤度/PI *180;//弧度转角度：
    }    

静联 void 转弧_(float f3孤度__[3])
    {int i;
   for(i=0;i ＜ 3;++i)
        {
        f3孤度__[i]=弧(f3孤度__[i]);
        }
    }
静联 void 转弧(cfloat f3角度[3],float f3孤度__[3])
    {int i;
   for(i=0;i ＜ 3;++i)
        {
        f3孤度__[i]=弧(f3角度[i]);
        }
    }
    
静联 void 转角_(float f3孤度__[3])
    {int i;
   for(i=0;i ＜ 3;++i)
        {
        f3孤度__[i]=角(f3孤度__[i]);
        }
    }
静联 void 转角(cfloat f3角度[3],float f3孤度__[3])
    {int i;
   for(i=0;i ＜ 3;++i)
        {
        f3孤度__[i]=角(f3角度[i]);
        }
    }
//-------------------------------------------------
静联 float atan3(float x,float y)//出360度内正弧度
    {
    if(y>=0 )//在↑
        return acos( x/开方(平方(x)+平方(y)) );
    else//(y ＜ 0 丶丶  x ＜二 0)//在↙
        {
        printf("y ＜二 0\n");
        float c=acos( x/开方(平方(x)+平方(y)) );

        return c+(PI-c)*2;
        }
    }


静联 float 十Γ厶(cfloat& a,cfloat& b)
    {
    return 开方(平方(a)+平方(b));
    }
静联 float 一Γ厶(cfloat& a,cfloat& b)
    {
    return 开方(平方(a)-平方(b));
    }
    
静联 void 十Γ厶(cfloat& a,cfloat& b,float& c__)
    {
    c__=开方(平方(a)+平方(b));
    }
静联 void 一Γ厶(cfloat& a,cfloat& b,float& c__)
    {
    c__=开方(平方(a)-平方(b));
    }
    
静联 float fΔΔ两矢量夹角弧正(cfloat f2点一[],cfloat f2点二[])
    {
    //float f2圆心[]={0.0f,0.0f    };float f2头
    float f对弧一=atan3(f2点一[0],f2点一[1]);//  Y/X
    float f对弧二=atan3(f2点二[0],f2点二[1]);
    return abs(f对弧一-f对弧二);

    }
    
静联 void ΔΔ角邻边矢量(cfloat f2长邻边矢量[2],cfloat f2斜边矢量[2],float f2邻边矢量_[2])//得邻边的矢量
    {
    float f夹角弧=fΔΔ两矢量夹角弧正(f2长邻边矢量,f2斜边矢量);
    float f长邻边长=开方(平方(f2长邻边矢量[0])+平方(f2长邻边矢量[1]));    
    float f斜边长=开方(平方(f2斜边矢量[0])+平方(f2斜边矢量[1]));    
    float f邻边长=f斜边长*cos(f夹角弧);
    float f邻边比例=f邻边长/f长邻边长;
    f2邻边矢量_[0]=f2长邻边矢量[0]*f邻边比例;f2邻边矢量_[1]=f2长邻边矢量[1]*f邻边比例;
    //memcpy(f2邻边矢量_,Lf2uv选序[i序真],sizeof(f2邻边矢量_));
    
    }

//=============================================================
静联 float fΔΔ加弧正真(cfloat f2头[],cfloat f2圆心[],float f加弧正,bool b顺)
    {
    float fX头減,fY头減,f头弧正,f加弧正真;
    fX头減=f2头[0]-f2圆心[0]; fY头減=f2头[1]-f2圆心[1];
    float f2XY[2]={fX头減,fY头減    };
    f头弧正=atan3(f2XY[0],f2XY[1]);
    //printf("f头弧正%d\n", f头弧正,  "角%d\n",转角(f头弧正))
    if( b顺)
        { 
        if((f加弧正+f头弧正)<PI2){f加弧正真=f加弧正+f头弧正; }
        if((f加弧正+f头弧正)>PI2){f加弧正真=(f加弧正+f头弧正)-PI2; }
        if((f加弧正+f头弧正)>PI2*2){f加弧正真=(f加弧正+f头弧正)-PI2*2; }
        else{f加弧正真=(f加弧正+f头弧正)-PI2; }
        }
    else
        {
        if((f加弧正+f头弧正)<PI2){f加弧正真=-f加弧正+f头弧正; }
        if((f加弧正+f头弧正)>PI2){f加弧正真=(-f加弧正+f头弧正)-PI2; }
        if((f加弧正+f头弧正)>PI2*2){f加弧正真=(-f加弧正+f头弧正)-PI2*2; }
        else{f加弧正真=(-f加弧正+f头弧正)-PI2; }
        }
    if (f加弧正真 ＜ 0)//#如果  弧为负
        f加弧正真=f加弧正真+PI2;
   //printf("f加弧正真%d\n", f加弧正真,"角%d\n",转角(f加弧正真) , "f加弧正%d\n", f加弧正,"角%d\n",转角(f加弧正) )
    return f加弧正真;
    
    }

////VECTOR/////////////////////////////////
#ifdef __GNUC__
#  define UNLIKELY(x)     __builtin_expect(!!(x), 0)
#else
#  define UNLIKELY(x)     (x)
#endif
   
静联 void 负f3(float r[3])
    {
	r[0]=-r[0];r[1]=-r[1];r[2]=-r[2];
    }

inline void Δf3生成指数卝值LIB(cfloat f3前后key差值[],匚int i本节点已过时间,匚int i本节时间,bool b是奇数,bool b是q,匚int i指数,float f3卝值__[]);
// inline void Δpsr生成指数卝值LIB(匚卍Vector v前后key差值,匚int i本节点已过时间,匚int i本节时间,bool b是奇数,bool b是q,匚int i指数,卍Vector&v卝值__);
// inline void Δpsr生成指数卝值LIB(匚卍Quaternion q前后key差值,匚int i本节点已过时间,匚int i本节时间,bool b是奇数,bool b是q,匚int i指数,卍Quaternion&q卝值__);
          
static float f4前后key差值[4],f4卝值__[4];
inline void Δpsr生成指数卝值LIB(匚卍Vector v前后key差值,匚int i本节点已过时间,匚int i本节时间,bool b是奇数,bool b是q,匚int i指数,卍Vector&v卝值__)
    {
    v前后key差值.乛(f4前后key差值);
    Δf3生成指数卝值LIB(f4前后key差值,i本节点已过时间,i本节时间,b是奇数,b是q,i指数,f4卝值__);
    v卝值__=f4卝值__;
#ifdef _PRAGMA_MG_
    #pragma message(__FILE__".Δpsr生成指数卝值LIB")
#endif
    }
//------------------------------
inline void Δpsr生成指数卝值LIB(匚卍Quaternion q前后key差值,匚int i本节点已过时间,匚int i本节时间,bool b是奇数,bool b是q,匚int i指数,卍Quaternion&q卝值__)
    {
    q前后key差值.乛(f4前后key差值);
    Δf3生成指数卝值LIB(f4前后key差值,i本节点已过时间,i本节时间,b是奇数,b是q,i指数,f4卝值__);
    q卝值__=f4卝值__;
    }
////DJS_math_image///////////////////////////////                    
EXCLIB inline void 图点值(cfloat CL宽序f高像素[],cint L2i图像宽高[2],cint L2i宽高找[2],float L4rgba__[4]);
EXCLIB inline float f图点灰(cfloat L4rgba[4] ,bool b反);                 


//========================================
static VECTOR(double,V2f1元2次G);static VECTOR(double,V3f1元3次G);
vector<double>& V2f1元2次方程(double a,double b,double c,vector<double>&V2f1元2次__);
vector<double> &V3f1元3次方程(double a,double b,double c,double d,vector<double> &V3f1元3次__);


////DEFINE///////////////////////////////////
#define sin60    0.8660254f

////END////END////END////END////END////END////END////END////
#endif 

