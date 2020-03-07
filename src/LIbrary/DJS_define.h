
#pragma once
#ifndef _DJS_DEFINE_H_
    #define _DJS_DEFINE_H_
#ifndef __cplusplus
    #define __cplusplus
#endif
#ifdef _PRAGMA_MG_
    #pragma message("#:" __FILE__)
#endif

#include<stdio.h>
#include<Windows.h>//●● 这个与 GDNative的Object.hpp冲突
#include<assert.h>
#include<iostream>
using namespace std;
////DJS_define.h////////////////////////////////
static char sPrint512G[512]; 
static wchar_t  wcUnicode512G[512];

static char cNull[2],*sNullG=cNull, s分割512G[512];
// auto null=0;
static void*voidG=NULL;
////////////////////////////////////////////
#ifdef _WIN32
    #undef min // override standard definition
    #undef max // override standard definition
    #undef ERROR // override (really stupid) wingdi.h standard definition
    #undef DELETE // override (another really stupid) winnt.h standard definition
    // #undef MessageBox // override winuser.h standard definition
    #undef interface
    #define  interface  interfaceF//●● 如果#include<vector> 用interface 会出错
    #undef MIN // override standard definition
    #undef MAX // override standard definition
    #undef CLAMP // override standard definition
    #undef Error
    #undef OK
    #undef CONNECT_DEFERRED // override from Windows SDK, clashes with Object enum
#endif

// #define     _O_TEXT
#define  ANSI   _O_BINARY
// #define     _O_WTEXT
#define  UTF8   _O_U8TEXT
#define  UTF16   _O_U16TEXT

////空////////////////////////////////////////
#define 二NULLd
#define 二0d
#define 二1d
#define 二一1d
#define 二空字d
#define 二falsed
#define 二trued

#define LIKELY 
//●●uint-int 结果不正确.
//#define itoa    _itoa_s

#define True    true
#define False    false
#define None    NULL
#define 丶丶     && 
#define 丨丨     ||

// #define __func__   __FUNCTION__
// #ifndef 》 
    // #define 《
    // #define 》    
// #endif
//#define __T(x)   L ##x
//#define _T(x) __T(x)
// #define _STL_ASSERT_
#define 联    __forceinline 
#define 静联   static __forceinline 

#if(defined __LIBdb__||defined __LIBrc__)
    #define 静LIB    static 
    #define 联LIB    __forceinline 
    #define 静联LIB   static __forceinline 
    #else
        #define 静LIB 
        #define 联LIB    
        #define 静联LIB   
#endif
////////////////////////////////////////////////
#define 零D    1e-6  //●注意C++判断一个数（float）等于0不能用==0，而是用<1e-6，所有有时候会有一些很小的误差,1e-6表示1乘以10的负6次方(也就是0.000001)。

#define ．01    0.01f
#define ．001    0.001f
#define ．99    0.99f
#define ．999    0.999f
#define ．9999    0.9999f
#define ．001    0.001f
#define ．0001    0.0001f
#define ．00001    0.00001f
#define ．000001    0.000001f
#define ．0000001    0.0000001f
#define ．00000001    0.00000001f
#define ．000000001    0.000000001f

#define f99    99f
#define f999    999f
#define f9999    9999f
#define i10    10
#define i64    64
#define i128    128
#define i256    256
#define i512    512
#define 千    1000
#define 万    10000
#define 十万    100000
#define 百万    1000000
#define 千万    10000000
#define 亿    100000000
#define 十亿    1000000000


#define PI   3.141592653589793f
#define ㄥ180    3.141592653589793f
    #define ㄥ179    3.13286f
    #define ㄥ181    3.15031f
#define PI2  6.283185307179586f
#define ㄥ360    6.283185307179586f
#define PIΞ2  1.5707963267948966f
#define ㄥ90   1.5707963267948966f
    #define ㄥ89   1.562f
    #define ㄥ91   1.5795f
#define PI3Ξ4  2.356194490192345f
#define ㄥ270   2.356194490192345f
#define PI4Ξ6   2.094395f
#define ㄥ240   2.094395f
#define PIΞ4   0.7853981633974483f
#define ㄥ45    0.7853981633974483f
    #define ㄥ44   0.7766715f
    #define ㄥ46   0.7941248f
#define PIΞ8  0.392699f
#define PIΞ16   0.196349541875f
#define ㄥ11  0.196349541875f
#define SIN45   0.70710678118f
#define COS45   0.70710678118f
#define SIN60   0.86602540378f
#define COS60   0.5f

#define ㄥ170   2.9670598f
#define ㄥ160   2.7925269f
#define ㄥ150   2.6179939f
#define ㄥ140   2.443461f
#define ㄥ130   2.2689281f
#define ㄥ120   2.0943952f
#define ㄥ100   1.7453292f
#define ㄥ95   1.6580628f
#define ㄥ85   1.4835299f
#define ㄥ80   1.3962634f
#define ㄥ75   1.308997f
#define ㄥ70   1.2217305f
#define ㄥ65   1.134464f
#define ㄥ60   1.0471976f
#define ㄥ55   0.9599311f
#define ㄥ50   0.8726646f
#define ㄥ40   0.6981317f
#define ㄥ35   0.6108653f
#define ㄥ30   0.5235988f
#define ㄥ25   0.4363323f
#define ㄥ20   0.3490659f
#define ㄥ10   0.1745329f
#define ㄥ05   0.0872665f
#define ㄥ02   0.0349066f
#define ㄥ01   0.0174533f
        

//------------------------------
#define X轴    0
#define Y轴    1
#define Z轴    2
#define XY轴    3
#define XZ轴    4
#define YZ轴    5

#define （    (
#define ）    )
#ifndef 二二
    #define 二二      ==  
    #define ＜二     <= 
    #define ＜     < 
#endif

#define 行函件    const int&i行=-1,char*func=NULL,char*file=NULL
//------------------------------
#define 对齐·4(len)   ((len + 3) & ~(size_t)3)/* [0,1,2,3,4,5,6,7,8,9]==>[0,4,4,4,4,8,8,8,8,12] */
#define 对齐·8(len)    ((len + 8 - 1) & -8)/*[0,8,16]*/

#define 丨3α(x)    三目2(2<(x),(x)%3,(x)<0,3+(x)%3,(x))/* 0,1,2,0,1,2 */
#define 丨4α(x)    三目2(3<(x),(x)%4,(x)<0,4+(x)%4,(x))/* 0,1,2,3,0,1,2 ,3*/
//●●必须用(x),因为x 可能是表达式,只有这样才正确


static char* s巜wcharN(const wchar_t*wc,char*Ψs=NULL)
    {//正常转正常
#ifdef __PRINT__
    if (wc  二二  NULL){printf("wc= %d\n",(int)wc);return NULL;}
#endif
    int len= WideCharToMultiByte(CP_ACP,0,wc,wcslen(wc),NULL,0,NULL,NULL);
    //char*ΨΨchar=Free(len+1,char);
    if(Ψs)
        {
        WideCharToMultiByte(CP_ACP,0,wc,wcslen(wc),Ψs,len,NULL,NULL);
        if (len ＜二 0)
            return NULL;
        if(511 ＜ len)
            {MessageBox (NULL , 0 , "!!!★ s巜wcharU 511 ＜ len" , MB_OK) ;return NULL;}
            
        Ψs[len]='\0';//最后1个
        return Ψs;
        }

    else
        {
        WideCharToMultiByte(CP_ACP,0,wc,wcslen(wc),sPrint512G,len,NULL,NULL);
        if (len ＜二 0)
            return NULL;
        if(511 ＜ len)
            {MessageBox (NULL , 0 , "!!!★ s巜wcharU 511 ＜ len" , MB_OK) ;return NULL;}
            
        sPrint512G[len]='\0';//最后1个
        return sPrint512G;
        }
    }
//========================================
static char *s巜charU(const char*s \
                                                                ,char*s__=NULL,wchar_t*wc__=NULL)//乱码转正常
    {
    //int  len = s->冖();
    int  unicodeLen = MultiByteToWideChar( CP_UTF8, 0, (LPCSTR)s,-1, NULL,  0 );
    if (unicodeLen ＜二 0)
        return NULL;
    if(511 ＜ unicodeLen)
        {MessageBox (NULL , 0 , "!!!★ unicodeLen>511" , MB_OK) ;return NULL;}
    if(wc__)
        {
        wc__[unicodeLen]='\0';
        memset(wc__,0,(unicodeLen+1)*sizeof(wchar_t));
        MultiByteToWideChar( CP_UTF8, 0, (LPCSTR)s, -1, (LPWSTR)wc__, unicodeLen );            
        return s巜wcharN(wc__,s__);

        }
    //------------------------------
    else
        {
        wcUnicode512G[unicodeLen]='\0';
        memset(wcUnicode512G,0,(unicodeLen+1)*sizeof(wchar_t));
        MultiByteToWideChar( CP_UTF8, 0, (LPCSTR)s, -1, (LPWSTR)wcUnicode512G, unicodeLen );            

        return s巜wcharN(wcUnicode512G,s__);
            
        }
    }


//////////////////////////////////
static inline void 十s2_(const char*s1,char s__[])//s__ 二二 s__+s1
    {
    // ASSERT(s1 二二 NULL);
    int  i,iSize1=strlen(s1),iSize2=strlen(s__),i合=iSize1+iSize2;//printf("s1= %s○c2= %s○ iSize1= %d○ 
    int j=iSize2;//printf("1 s__= %s\n",s__);
   for(i=0;j ＜ i合;++j,++i)
        {//printf("= %d·c2[i]=%s\n",j,s2[i]);
        s__[j]=s1[i];//j一开始是 c__原来的结尾
        }
    s__[j]='\0';
    //printf("2 s__= %s\n",s__);
    }
    
static void Δassert(const char *msg ,const char *s名,const char *c条件,unsigned i行 ,const char *c函数  ,const char *file \
                                ,const void *Ψ数=NULL)
    {
    char buf[i512] ,buf2[i128] ;//●●如果不够 大会crash
    int I=sprintf_s(buf , "★!!!出错:%s\n  名 : %s · 条件 : %s  \n   在第: %d  行  \n  函数 : %s \n 文件 : %s" , msg ,s名,c条件, i行 ,s巜charU(c函数),file);
    
    if(I>512)
        {
        printf("★★★strlen(buf)= %zd ,I= %d,buf= %s\n",strlen(buf),I,buf);
        return ;
        }
        
    if(Ψ数)
        {sprintf_s(buf2 ,",Ψ数:%f \n",*(float*)Ψ数);十s2_(buf2,buf);}
    //sprintf_s(buf , "★!!!出错:msg %s \n   c条件 %s \n  文件 : %s\n  函数 : %s\n  在第: %d  行" , msg,c条件,file ,s巜charU(c函数), i行) ;
    //printf( "★!!!出错:%s\n 名 : %s · 条件 : %s  \n 文件 : %s\n  函数 : %s\n  在第: %d  行" , msg ,s名,c条件, file ,s巜charU(c函数), i行) ;
    
    MessageBox (NULL , buf , "assertion failure" , MB_OK) ;
    //exit(0) ;//■不退出
    }

//----const wchar_t *s名,--------------------------
static void Δassert(const char *msg ,const wchar_t *s名,const char *c条件,unsigned i行 ,const char *c函数  ,const char *file \
                        ,const void *Ψ数=NULL)
    {
    char buf[i512] ,buf2[i128] ;
    if(msg ==NULL){MessageBox (NULL , buf , "Δassert(msg ==NULL" , MB_OK);return;}
    char*name=s巜wcharN(s名);
    sprintf_s(buf , "★!!!出错:%s\n  名 : %s · 条件 : %s \n  在第: %d  行  \n  函数 : %s \n 文件 : %s" , msg ,name,c条件, i行 ,s巜charU(c函数),file) ;
    if(Ψ数)
        {sprintf_s(buf2,",Ψ数:%f \n",*(float*)Ψ数);十s2_(buf2,buf);}
    MessageBox (NULL , buf , "assertion failure" , MB_OK) ;
    }
    
static void Δassert2(const char *msg ,const char *s名,const char *c条件,unsigned i行 ,const char *c函数  ,const char *file \
                                ,const void *Ψ数=NULL)
    {
    char buf[i512] ,buf2[i128] ;//●●如果不够 大会crash
    if(msg ==NULL){MessageBox (NULL , buf , "Δassert(msg ==NULL" , MB_OK);return;}
    int I=sprintf_s(buf , "★!!!出错:%s\n  名 : %s · 条件 : %s  \n   在第: %d  行  \n  函数 : %s \n 文件 : %s" , msg ,s名,c条件, i行 ,s巜charU(c函数),file ) ;
    
    if(I>512)
        {
        printf("★★★strlen(buf)= %zd ,I= %d,buf= %s\n",strlen(buf),I,buf);
        return ;
        }
        
    if(Ψ数)
        {sprintf_s(buf2 ,",Ψ数:%f \n",*(float*)Ψ数);十s2_(buf2,buf);}
    MessageBox (NULL , buf , "assertion failure" , MB_OK) ;
    //exit(0) ;//■不退出
    //return NULL;
    }
    
#ifdef __PRINT__
    //#ifdef _SET_NAMES_
    #define ASSERT(b条件)      if(b条件) Δassert("__" ,"_",#b条件 ,__LINE__,__FUNCTION__,__FILE__ ) /*●只有b条件 二二 true 才运行*/
    #define ASSERTR(b条件,T)      if(b条件){Δassert("__", "_",#b条件 ,__LINE__,__FUNCTION__,__FILE__ );return T;}
    #define ASSERTexe(str,b条件,exe)      if(b条件){Δassert(str, "_",#b条件 ,__LINE__,__FUNCTION__,__FILE__ );exe}    
     #define ASSERTdR(b条件,i,T)      if(b条件){Δassert("__", "_",#b条件 ,__LINE__,__FUNCTION__,__FILE__ ,&i);return T;}
    #define ASSERT1(str,b条件)      if(b条件) Δassert(str,"_",#b条件, __LINE__,__FUNCTION__,__FILE__ )  
    #define ASSERT1R(str,b条件,T)      if(b条件){Δassert(str,"_",#b条件, __LINE__,__FUNCTION__,__FILE__ ) ;return T;}
    #define ASSERT2(str,s类名,b条件)      if(b条件) Δassert(str,s类名 ,#b条件,__LINE__,__FUNCTION__,__FILE__ )
    #define ASSERT2R(str,s类名,b条件,T)      if(b条件){Δassert(str,s类名 ,#b条件,__LINE__,__FUNCTION__,__FILE__ );return T;} 
    //----传入行--------------------------
    #define ASSERT入(b条件,i行,func,file)      if(b条件) Δassert("__" ,"_",#b条件 ,i行,func,file  ) 
    #define ASSERTR入(b条件,i行,func,file,T)      if(b条件){Δassert("__", "_",#b条件 ,i行,func,file  );return T;}
    #define ASSERTdR入(b条件,i行,func,file,i,T)      if(b条件){Δassert("__", "_",#b条件 ,i行,func,file  ,&i);return T;}
    #define ASSERT1入(str,b条件,i行,func,file)      if(b条件) Δassert(str,"_",#b条件, i行,func,file)  
    #define ASSERT1R入(str,b条件,i行,func,file,T)      if(b条件){Δassert(str,"_",#b条件, i行,func,file) ;return T;}
    #define ASSERT2入(str,s类名,b条件,i行,func,file)      if(b条件) Δassert(str,s类名 ,#b条件,i行,func,file  )
    #define ASSERT2R入(str,s类名,b条件,i行,func,file,T)      if(b条件){Δassert(str,s类名 ,#b条件,i行,func,file);return T;}
    #else
        #define ASSERT(b条件)
        #define ASSERT1(str,b条件)
        #define ASSERT2(str,s类名,b条件)
        #define ASSERTR(b条件,T)
        #define ASSERTexe(b条件,T)
        #define ASSERTdR(b条件,i,T)
        #define ASSERT1R(str,b条件,T)
        #define ASSERT2R(str,s类名,b条件,T)    
        //----传入行--------------------------
        #define ASSERT入(b条件,i行,func,file)    
        #define ASSERTR入(b条件,i行,func,file,T)      
        #define ASSERTdR入(b条件,i行,func,file,i,T)     
        #define ASSERT1入(str,b条件,i行,func,file)      
        #define ASSERT1R入(str,b条件,i行,func,file,T)      
        #define ASSERT2入(str,s类名,b条件,i行,func,file)    
        #define ASSERT2R入(str,s类名,b条件,i行,func,file,T)     
#endif       
//----------------------------------------
#define ASSERTdb(b条件)      (b条件 二二 false 丨丨  (Δassert("__" ,"◆",#b条件 ,__LINE__,__FUNCTION__,__FILE__ ) , 0) )//●只有b条件 二二 true 才运行
#define ASSERTRdb(b条件,T)       if(b条件){ Δassert("__" ,"◆",#b条件 ,__LINE__,__FUNCTION__,__FILE__ );return T; }//●只有b条件 二二 true 才运行
#define ASSERTexedb(str,b条件,exe)      if(b条件){Δassert(str, "◆",#b条件 ,__LINE__,__FUNCTION__,__FILE__ );exe} 

#define ASSERTdRdb(b条件,i,T)       if(b条件){ Δassert("__" ,"◆",#b条件 ,__LINE__,__FUNCTION__,__FILE__ ,&i);return T; }
#define ASSERT1db(str,b条件)     (b条件 二二 false  丨丨  (Δassert(str,"◆",#b条件, __LINE__,__FUNCTION__,__FILE__ ) , 0) )
#define ASSERT1Rdb(str,b条件,T)      if(b条件){Δassert(str,"◆",#b条件, __LINE__,__FUNCTION__,__FILE__ ) ;return T;}
#define ASSERT2db(str,s类名,b条件)      (b条件 二二 false  丨丨  (Δassert(str,s类名 ,#b条件,__LINE__,__FUNCTION__,__FILE__ ) , 0) )
#define ASSERT2Rdb(str,s类名 ,b条件,T)       if(b条件){ Δassert(str,s类名 ,#b条件 ,__LINE__,__FUNCTION__,__FILE__ );return T; }
    //----传入行--------------------------
#define ASSERT入db(b条件,i行,func,file)      if(b条件) Δassert("__" ,"_",#b条件 ,i行,func,file  ) 
#define ASSERTR入db(b条件,i行,func,file,T)      if(b条件){Δassert("__", "_",#b条件 ,i行,func,file  );return T;}
#define ASSERTdR入db(b条件,i行,func,file,i,T)      if(b条件){Δassert("__", "_",#b条件 ,i行,func,file  ,&i);return T;}
#define ASSERT1入db(str,b条件,i行,func,file)      if(b条件) Δassert(str,"_",#b条件, i行,func,file)  
#define ASSERT1R入db(str,b条件,i行,func,file,T)      if(b条件){Δassert(str,"_",#b条件, i行,func,file) ;return T;}
#define ASSERT2入db(str,s类名,b条件,i行,func,file)      if(b条件) Δassert(str,s类名 ,#b条件,i行,func,file  )
#define ASSERT2R入db(str,s类名,b条件,i行,func,file,T)      if(b条件){Δassert(str,s类名 ,#b条件,i行,func,file);return T;}
//------------------------------
#define Assert(s)      Δassert(s,"◆","",__LINE__,__FUNCTION__,__FILE__ )
////////////////////////////////////////////
#define NullReturn(s信息,Ψ,T)    if(Ψ 二二 NULL){PRINT0(s信息);return T;}

静联 void s_s_(const char*s源,char*s__,\
                                                                      const bool& b忽略长度2=false,行函件)
    {
    ASSERTR入(s源 二二 NULL,i行,func,file,);ASSERTR入(s__ 二二 NULL,i行,func,file,);
    const int&iSize=strlen(s源);
#ifdef __PRINT__
    if(i512 ＜ iSize)
        ASSERTR入(i512 ＜ iSize,i行,func,file,);
#endif    
    ASSERTR入(b忽略长度2 二二 false 丶丶 s__ 二二 NULL,i行,func,file,);
    // int iSize=strlen(s源);int i=0;
    int i;
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s源[i];
        }
    s__[i]='\0';
    }

静联 void s_s_(const wchar_t*s源,wchar_t *s__,\
                                                                                    const bool& b忽略长度2=false,行函件)
    {
    ASSERTR入(s源 二二 NULL,i行,func,file,);ASSERTR入(b忽略长度2 二二 false 丶丶 s__ 二二 NULL,i行,func,file,);
    int iSize=wcslen(s源);int i=0;
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s源[i];
        }
    s__[i]='\0';
    }

静联 void s_s_(const string&str源,char*s__,\
                                                                                    const bool& b忽略长度2=false,行函件)
    {
    ASSERTR入(str源.empty(),i行,func,file,);ASSERTR入(b忽略长度2 二二 false 丶丶 s__ 二二 NULL,i行,func,file,);
    int iSize=str源.size();int i=0;
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=str源[i];//PRINT2if(DJS,"",str源[i],s__[i]);
        }
    s__[i]='\0';//PRINT2if(DJS,"",str源,s__);
    }
    
#define s_s(s源,s__)    s_s_(s源,s__,false,__LINE__,__FUNCTION__,__FILE__)

//====s====================================================

#define MALLOC_NAME(s名,name)     if(s名){Malloc(strlen(s名)+1,(name));s_s(s名,(name));}
#define FREE_NAME(name)    if((name)!=NULL){Free((name));}/* PRINT1("~~",name); */

#ifdef __PRINT_STL__
    #define SET_NAME(s,t)    t.SetName(s)
    #define GET_NAME(t)    t.getName()
    #else
        #define SET_NAME(s,t)    
        #define GET_NAME(t)   "_NO_"
#endif
////条件//////////////////////////////////////
#define 三目2(条件1,a,条件2,b,s)    \
    (条件1)  ?  a  :  ((条件2)  ?  b  :  s)
#define 三目3(条件1,a,条件2,b,条件3,s,d)    \
    (条件1)  ?  a  :  ((条件2)   ?  b  :  ((条件3)  ?  s  :  d))
#define 三目4(条件1,a,条件2,b,条件3,s,条件4,d,e)    \
    (条件1)  ?  a  :  ((条件2)   ?  b  :  ((条件3)  ?  s  :  ((条件4)  ?  d  :  e)))
//----------------------------------------
#define FOR(V,iSize,I_)    const int& iSize=V.size();     for(int I_=0;I_ ＜ iSize;++I_)
#define For(iSize,I_)    for(int I_=0;I_ ＜ iSize;++I_)
////////////////////////////////////////////
静联 bool b卝(int ξ分隔,const char *s源,char *s__ \
                                    ,bool b要左边=false)//要左面的或 要右面的
    {
    ASSERTRdb(s源 二二 NULL,false);ASSERTRdb(s__ 二二 NULL,false);
    int i源长=strlen(s源),i剩=i源长-ξ分隔;
    if(i剩 ＜ 0 丨丨 i剩 二二 0)
        {printf("!!!i剩 ＜二 0 ,  s__=%s · strlen(s__)= %zd·i分隔= %d",s__,strlen(s__),ξ分隔);return false;}
    // if(b要左边 丶丶 strlen(s__) ＜ ξ分隔+1)
        // {printf("!!!strlen(s__)<ξ分隔,  s__=%s · strlen(s__)= %zd · i分隔+1= %d",s__,strlen(s__),ξ分隔+1);return false;}
    
    int i,j=0;
    if(b要左边)
        {
        i=0;
        for(;i ＜ ξ分隔;++i)//不要 ξ分隔与后面的 [0,1,2,    ξ分隔no,no,no,no,no]
            {
            s__[i]=s源[i];
            }
        if(strlen(s__)>ξ分隔){s__[i]='\0';}
        }
    //----要后面的--------------------------
    else
        {
        i=ξ分隔;
        for(;i ＜ i源长;++i,++j)//要 ξ分隔与后面的 [no,no,no,  ξ分隔 3,4,5,6,7]
            {
            s__[j]=s源[i];
            }
        if(i剩 ＜ strlen(s__)){s__[j]='\0';}
        }
    return true;
    }

//========================================
静联 char*s卝(const int&ξ分隔,const char*s源 \
                                                                   ,bool b要左边=false,char*s__=NULL)//abcd [分efgh] 要后面的
    {
    ASSERTRdb(s源 二二 NULL,NULL);
    //printf("s分割G= %d · s源= %d\n",strlen(s分割G),strlen(s源));
    int i,j=0,i长源=strlen(s源);ASSERTRdb(i长源-1 ＜ ξ分隔,NULL);
    if(s__ 二二 NULL)s__=s分割512G;
    if(ξ分隔==-1)//找不到分隔
        {
        // strcpy_s(s__,i长源,s源);
       s_s(s源,s__);//PRINT3if(DJS,"!!!",ξ分隔,s源,s__);
        return s__;
        }
    //----要前面的--------------------------
    //i剩长=i长源-ξ分隔;
    if(b要左边)
        {
        i=0;//PRINT1if(DJS,"",s源);
        for(;i ＜ ξ分隔;++i)
            {
            s__[i]=s源[i];//PRINT1if(DJS,"",s__[i]);
            }
        if(ξ分隔 ＜ i512)s__[i]='\0';
        }
    //----要后面的--------------------------
    else
        {
        i= ξ分隔;
        for(;i ＜ i长源;++i,++j)
            {
            s__[j]=s源[i];//PRINT2if(DJS,"",i,strlen(ΨsG));printf("s源[i]= %s   ,  ΨsG[j]=%s\n",s源[i],ΨsG[j]);
            }
        if(j ＜ i512)s__[j]='\0';
            
        //PRINT5("",ξ分隔,i剩长,ΨsG,strlen(ΨsG),sizeof(*ΨsG));
        }
    return s__;
    }
//========================================
静联 char*s卝(const char&c分隔,const char*s源 \
                                                                        ,bool b包含分隔符=false,bool b要左边=false,bool b最后1个分隔=false,int ξ从这个索引开始=-1,char*s__=NULL)//abcd [分efgh] 要后面的
    {
    ASSERTRdb(s源 二二 NULL,NULL);
    //printf("s分割G= %d · s源= %d\n",strlen(s分割G),strlen(s源));
    int i长源=strlen(s源),ξ分隔=-1,i=0;
    //------------------------------
    if(b最后1个分隔 二二 false)
        {
        i=(ξ从这个索引开始!=-1)? ξ从这个索引开始  : 0;
        for(;i ＜ i长源;++i)
            {//printf("c分隔=%s,s源[i]= %s  ,c分隔 二二 s源[i]=%d\n",c分隔,s源[i],c分隔 二二 s源[i]);
            if(c分隔 二二 s源[i])
                {
                ξ分隔=i;break;//最先的 c分隔
                }
            }//printf("ξ分隔=%d  ,i长源= %d\n",ξ分隔,i长源);
        }
    //----从后面检测--------------------------
    else
        {
        i=(ξ从这个索引开始!=-1)? ξ从这个索引开始  : i长源-1;
        for(;-1 ＜ i;--i)
            {//printf("c分隔=%s,s源[i]= %s  ,c分隔 二二 s源[i]=%d\n",c分隔,s源[i],c分隔 二二 s源[i]);
            if(c分隔 二二 s源[i])
                {
                ξ分隔=i;break;//最后的 c分隔
                }
            }
        //printf("ξ分隔=%d  ,i长源= %d\n",ξ分隔,i长源);  
        }
    ξ分隔=(b包含分隔符)  ?  ξ分隔+1  :  ξ分隔;
    return s卝(ξ分隔,s源,b要左边,s__);
    }

//========================================
静联 char*s2卝(const char&c分隔,const char&c分隔1,const char*s源 \
                                                                        ,bool b包含分隔符=false,bool b要左边=false,bool b最后1个分隔=false,int ξ从这个索引开始=-1,char*s__=NULL)//abcd [分efgh] 要后面的
    {
    ASSERTRdb(s源 二二 NULL,NULL);
    //printf("s分割G= %d · s源= %d\n",strlen(s分割G),strlen(s源));
    int i长源=strlen(s源),ξ分隔=-1,i=0;
    //------------------------------
    if(b最后1个分隔 二二 false)
        {
        i=(ξ从这个索引开始!=-1)? ξ从这个索引开始  : 0;
        for(;i ＜ i长源;++i)
            {//printf("c分隔=%s,s源[i]= %s  ,c分隔 二二 s源[i]=%d\n",c分隔,s源[i],c分隔 二二 s源[i]);
            if(c分隔 二二 s源[i]||c分隔1 二二 s源[i])
                {
                ξ分隔=i;break;//最先的 c分隔
                }
            }//printf("ξ分隔=%d  ,i长源= %d\n",ξ分隔,i长源);
        }
    else
        {
        i=(ξ从这个索引开始!=-1)? ξ从这个索引开始  : 0;
        for(;i ＜ i长源;++i)
            {//printf("c分隔=%s,s源[i]= %s  ,c分隔 二二 s源[i]=%d\n",c分隔,s源[i],c分隔 二二 s源[i]);
            if(c分隔 二二 s源[i]||c分隔1 二二 s源[i])
                {
                ξ分隔=i;//break;//最后的 c分隔
                }
            }//printf("ξ分隔=%d  ,i长源= %d\n",ξ分隔,i长源);  
        }
    ξ分隔=(b包含分隔符)  ?  ξ分隔+1  :  ξ分隔;
    return s卝(ξ分隔,s源,b要左边,s__);
    }
//==================================================
static const char *s位=NULL;
#ifdef __PRINT__
    #define 几位n(f3,I__) \
        {\
        s位=typeid(f3).name();I__=-1;/*  printf("s位= %s\n",s位); */ \
        for(int i=strlen(s位)-1;i>-1;--i)\
            {\
            if(s位[i]==']')\
                {\
                I__=s位[i-1]-'0';/*  printf("I__= %d\n",I__); */ \
                break;\
                }\
            else if(s位[i]=='*')\
                {\
                /* printf("I__= %d\n",I__); */ \
                break;\
                }\
            }\
        /* printf("尾:I__= %d\n",I__); */\
        }
    #else
        #define 几位n(f3,I__)
#endif


//========================================
静联 const char*S(const char*s,const bool b不报告=false)
    {
#ifdef __PRINT__
    if(b不报告 二二 false 丶丶 s  二二  NULL)printf("★★NULL char = %d\n",s);
    ASSERT1("★★NULL char",b不报告 二二 false 丶丶 s  二二  NULL);
#endif
    return s;
    }
静联 const wchar_t*WC(const wchar_t*s,const bool b不报告=false)
    {
#ifdef __PRINT__
    if(b不报告 二二 false 丶丶 s  二二  NULL)printf("★★NULL wchar = %d\n",s);
    ASSERT1("★★NULL wchar_t",b不报告 二二 false&s  二二  NULL);
#endif
    return s;
    }
////卐ptr///////////////////////////////////
template<typename T>
class 卐ptr
    {
    //char*name;
    char name[128];
    public:
        T*ptr=NULL;
        //T&get(char*s名,int i行,char*s文件)const {if(ptr 二二 NULL){printf("★★★get ptr 二二 NULL·name: %s· #name:%s,----行:%d----文件:%s\n",name,s名,i行,s文件);printf("return null;");MessageBox (NULL ,s名 , "★★★get ptr 二二 NULL" , MB_OK) ;return *(T*)null;} else{  return *ptr;}}//ExitProcess(0);exit(0);*(T*)null); return *ptr;ASSERT2("★★★get ptr 二二 NULL",s名,true);
        T&get()const {if(ptr 二二 NULL){printf("★★★get ptr 二二 NULL·name: %s\n",name);printf("return null;");MessageBox (NULL ,name , "★★★get ptr 二二 NULL" , MB_OK) ;return *(T*)null;} else{  return *ptr;}}
        void 巜(T* Ψ){if(Ψ 二二 NULL){printf("★★★巜 Ψ 二二 NULL= %s\n",name);MessageBox(NULL ,name ,"★★★巜 Ψ 二二 NULL",MB_OK);}this->ptr=Ψ;}
        
        卐ptr(){s_s("NOname",name);}
        //卐ptr(T* Ψ){ptr=Ψ;}
        卐ptr(char*s名,T* Ψ){this->SetName(s名);ptr=Ψ;}
        
        //~卐ptr(){Free(name);}printf("建\n");
        void SetName(char*s名)
            {        
            if(strlen(s名)>64){s名[63]='\0';}
            s_s(s名,name);//printf("name= %s\n",name);
            }
            
        const char*getName()const {return name;}  
            
    };
    


/* 
#include<vector>
template<typename T>                               
static T& tΔ一乛(vector<T>*Ψ,const char *s名,unsigned i行 ,const char *c函数,const char *file)
    {
    printf("★★★★ 一乛(%s),%s  二二 NULL, i行= %d, c函数= %s, file= %s\n",s名,s名,i行,s巜charU(c函数),s卝('\\',file,false,false,true));
    #ifdef _STL_ASSERT_
        ASSERT1("一乛()",true);
    #endif
    T t;
    return t;
    }   
*/    
template<typename T>                               
static T tΔ一乛(T*Ψ,const char *s名,unsigned i行 ,const char *c函数,const char *file)
    {
    printf("★★★★ 一乛(%s),%s  二二 NULL, i行= %d, c函数= %s, file= %s\n",s名,s名,i行,s巜charU(c函数),s卝('\\',file,false,false,true));
    #ifdef _STL_ASSERT_
        ASSERT1("一乛()",true);
    #endif
    T t;
    return t;
    } 

/**/
// int I0=0;
static void Δ一乛(const char *s名,unsigned i行 ,const char *c函数,const char *file)
    {
    printf("★★★★ 一乛(%s),%s  二二 NULL, i行= %d, c函数= %s, file= %s\n",s名,s名,i行,s巜charU(c函数),s卝('\\',file,false,false,true));
    #ifdef _STL_ASSERT_
        ASSERT1("一乛()",true);
    #endif
    // return &I0;
    // return nullptr;
    }

template<typename T>
T&tΔЖ(T*Ψ,const char *s名,unsigned i行 ,const char *c函数,const char *file)
    {
    printf("★★★★ Ж(%s), %s  二二 NULL, i行= %d, c函数= %s, file= %s\n",s名,s名,i行,s巜charU(c函数),s卝('\\',file,false,false,true));
    // #ifdef _STL_ASSERT_
        ASSERT1("Ж()",true);
    // #endif
    T t;
    return t;
    }
    
template<typename T>
T*ΨΔЖ(T*Ψ,const char *s名,unsigned i行 ,const char *c函数,const char *file)
    {
    printf("★★★★ Ж(%s), %s  二二 NULL, i行= %d, c函数= %s, file= %s\n",s名,s名,i行,s巜charU(c函数),s卝('\\',file,false,false,true));
    // #ifdef _STL_ASSERT_
        ASSERT1("Ж()",true);
    // #endif
    return Ψ;
    }
    
#ifdef __PRINT__
    //#define 一乛(Ψ)    (Ψ 二二 NULL)  ?  Δassert2("Ψ 二二 NULL",#Ψ,"_",__LINE__,__FUNCTION__,__FILE__) :  Ψ->
    //#define Ж(Ψ)    (Ψ 二二 NULL)  ?   Δassert2("Ψ 二二 NULL",#Ψ,"_",__LINE__,__FUNCTION__,__FILE__)  :  *Ψ
    //#define 一乛(Ψ)    (Ψ 二二 NULL)  ?  MessageBox (NULL ,#Ψ , "Ψ 二二 NULL" , MB_OK) :  Ψ->
    //#define Ж(Ψ)    (Ψ 二二 NULL)  ?   MessageBox (NULL ,#Ψ , "Ψ 二二 NULL" , MB_OK)  :  *Ψ
    // #define 一乛Δ(Ψ,Δ,I)    ((Ψ)==NULL)  ?  tΔ一乛(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : Ψ->Δ(I)
    
    // #define 一乛at(Ψ,I)    ((Ψ)==NULL)  ?  tΔ一乛(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : Ψ->at(I)
    #define 一乛(Ψ)    (Ψ 二二 NULL)  ?  Δ一乛(#Ψ,__LINE__,__FUNCTION__,__FILE__) : Ψ->
    #define t一乛(Ψ)    (Ψ 二二 NULL)  ?  tΔ一乛(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : Ψ->
    #define 卩(Ψ)    (Ψ 二二 NULL)  ?   ΨΔЖ(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : Ψ
    // #define Ж(Ψ)    (Ψ 二二 NULL)  ?   tΔЖ(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : (*Ψ)
    #define Ж(Ψ)    (Ψ 二二 NULL)  ?   tΔЖ(Ψ,#Ψ,__LINE__,__FUNCTION__,__FILE__) : *Ψ
    #else
        #define 一乛(Ψ)    Ψ->
        #define Ж(Ψ)    *Ψ
        #define 卩(Ψ)    Ψ
#endif


//==============================
#define QUAT_EPSILON ．00001
 
#ifndef __BIG_ENDIAN__
    #define __BIG_ENDIAN__ 4321
#endif

#ifndef __LITTLE_ENDIAN__
    #define __LITTLE_ENDIAN__ 1234
#endif

#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

#ifndef WIN32
    #define WIN32
#endif


//----MY----------------------------------------------------
#define 载入DLL(s函数名,sDLL,hDLL,ΨΔ)    B=卩载入dll(s函数名,sDLL,hDLL,ΨΔ);if(B 二二 false){printf("!!卩载入dll not sussece %s, 行:%d",s函数名,__LINE__);return ;}



//====UNIT=====================================================
#define BLI_ASSERT_UNIT_EPSILON 0.0002f

#define BLI_ASSERT_UNIT_F3(v)  {         \
    cfloat& _test_unit = 平方和(v); \
    assert((fabsf(_test_unit - 1.0f)  ＜  BLI_ASSERT_UNIT_EPSILON)  丨丨   (fabsf(_test_unit)  ＜  BLI_ASSERT_UNIT_EPSILON));         \
} (void)0

#define BLI_ASSERT_UNIT_V(v)  {         \
    cfloat& _test_unit = 冖2(v); \
    assert((fabsf(_test_unit - 1.0f)  ＜  BLI_ASSERT_UNIT_EPSILON)  丨丨   (fabsf(_test_unit)  ＜  BLI_ASSERT_UNIT_EPSILON));\
    }
    
#define BLI_ASSERT_UNIT_F2(v)  {                                            \
    cfloat& _test_unit = len_squared_v2(v);                               \
    assert((fabsf(_test_unit - 1.0f)  ＜  BLI_ASSERT_UNIT_EPSILON)  丨丨         \
               (fabsf(_test_unit)         ＜  BLI_ASSERT_UNIT_EPSILON));         \
} (void)0

#define BLI_ASSERT_UNIT_QUAT(q)  {                                          \
    cfloat& _test_unit = Δdot_qtqt(q, q);                                  \
    assert((fabsf(_test_unit - 1.0f)  ＜  BLI_ASSERT_UNIT_EPSILON*10)  丨丨    \
               (fabsf(_test_unit)         ＜  BLI_ASSERT_UNIT_EPSILON*10));    \
} (void)0

#define BLI_ASSERT_ZERO_M3(m)  {                                            \
    assert(dot_vn_vn((cfloat*)m, (cfloat*)m, 9) != 0.0);      \
} (void)0

#define BLI_ASSERT_ZERO_M4(m)  {                                            \
    assert(dot_vn_vn((cfloat*)m, (cfloat*)m, 16) != 0.0);     \
} (void)0

#define BLI_ASSERT_UNIT_M3(m)  {                                            \
    BLI_ASSERT_UNIT_F3((m)[0]);                                               \
    BLI_ASSERT_UNIT_F3((m)[1]);                                               \
    BLI_ASSERT_UNIT_F3((m)[2]);                                               \
} (void)0
//----blender math--------------------------
#ifndef M_SQRT2
#define M_SQRT2     1.41421356237309504880  /* sqrt(2) */
#endif
#ifndef M_SQRT1_2
#define M_SQRT1_2   0.70710678118654752440  /* 1/sqrt(2) */
#endif
#ifndef M_SQRT3
#define M_SQRT3     1.73205080756887729352  /* sqrt(3) */
#endif
#ifndef M_SQRT1_3
#define M_SQRT1_3   0.57735026918962576450  /* 1/sqrt(3) */
#endif
#ifndef M_1_PI
#define M_1_PI      0.318309886183790671538  /* 1/pi */
#endif
#ifndef M_E
#define M_E         2.7182818284590452354  /* e */
#endif
#ifndef M_LOG2E
#define M_LOG2E     1.4426950408889634074  /* log_2 e */
#endif
#ifndef M_LOG10E
#define M_LOG10E    0.43429448190325182765  /* log_10 e */
#endif
#ifndef M_LN2
#define M_LN2       0.69314718055994530942  /* log_e 2 */
#endif
#ifndef M_LN10
#define M_LN10      2.30258509299404568402  /* log_e 10 */
#endif
////MY///////////////////////////////////////////
#ifndef EXCLIB
    #ifndef UN_EXCLIB
        #define EXCLIB  extern "C" __declspec(dllexport)//●●这个可以被py调用  //加1个 extern "C"的用处就是：因为编译器害怕你写的函数与本有的函数重名，所以在产生链接时‘可能’会加一点儿东西，会把原来的的函数名称改变，当你精简用程序调用函数时，以前的那个函数名称已经改变，所以自然调用不到，因此会出错！！！！加1个 extern "C" 就是解决编译器乱改名称的问题！！！但是利用限定符extern “C”可以解决C++和C之间相互调用时函数命名的问题，●●但是这种方丄有1个缺陷，就是不能用于导出1个类的成员函数，只能用于导出全局函数。
        
        // #define IM   __declspec(dllimport)//extern "C"
        #define EX   __declspec(dllexport)//
        // #define IMC   extern "C" __declspec(dllimport)
        #else
            #define EXCLIB
            // #define IM
            #define EX
            // #define IMC
    #endif
#endif
#define  EXC  extern "C" __declspec(dllexport)//●●这个可以被py调用


#ifdef __PRINT__
    #define PASS printf("pass--->\n");
    #else
        #define PASS  
#endif

//----windowmanager/WM_types.h----------------------------------------------
#define NOTE_CATEGORY		0xFF000000
#define NC_WM				(1<<24)
#define NC_WINDOW			(2<<24)
#define NC_SCREEN			(3<<24)
#define NC_SCENE			(4<<24)
#define NC_OBJECT			(5<<24)
#define NC_MATERIAL			(6<<24)
#define NC_TEXTURE			(7<<24)
#define NC_LAMP				(8<<24)
#define NC_GROUP			(9<<24)
#define NC_IMAGE			(10<<24)
#define NC_BRUSH			(11<<24)
#define NC_TEXT				(12<<24)
#define NC_WORLD			(13<<24)
#define NC_ANIMATION		(14<<24)
#define NC_SPACE			(15<<24)
#define NC_GEOM				(16<<24)
#define NC_NODE				(17<<24)
#define NC_ID				(18<<24)
#define NC_LOGIC			(19<<24)
#define NC_MOVIECLIP			(20<<24)
#define NC_MASK				(21<<24)
#define NC_GPENCIL			(22<<24)
#define NC_LINESTYLE			(23<<24)
#define NC_CAMERA			(24<<24)

/*data type, i512 entries is enough, it can overlap*/
#define NOTE_DATA			0x00FF0000

	/*NC_WM windowmanager*/
#define ND_FILEREAD			(1<<16)
#define ND_FILESAVE			(2<<16)
#define ND_DATACHANGED		(3<<16)
#define ND_HISTORY			(4<<16)
#define ND_JOB				(5<<16)
#define ND_UNDO				(6<<16)

	/*NC_SCREEN screen*/
#define ND_SCREENBROWSE		(1<<16)
#define ND_SCREENDELETE		(2<<16)
#define ND_SCREENCAST		(3<<16)
#define ND_ANIMPLAY			(4<<16)
#define ND_GPENCIL			(5<<16)
#define ND_EDITOR_CHANGED	(6<<16) /*sent to new editors after switching to them*/
#define ND_SCREENSET		(7<<16)
#define ND_SKETCH			(8<<16)

	/*NC_SCENE Scene*/
#define ND_SCENEBROWSE		(1<<16)
#define ND_MARKERS			(2<<16)
#define ND_FRAME			(3<<16)
#define ND_RENDER_OPTIONS	(4<<16)
#define ND_NODES			(5<<16)
#define ND_SEQUENCER		(6<<16)
#define ND_OB_ACTIVE		(7<<16)
#define ND_OB_SELECT		(8<<16)
#define ND_OB_VISIBLE		(9<<16)
#define ND_OB_RENDER		(10<<16)
#define ND_MODE				(11<<16)
#define ND_RENDER_RESULT	(12<<16)
#define ND_COMPO_RESULT		(13<<16)
#define ND_KEYINGSET		(14<<16)
#define ND_TOOLSETTINGS		(15<<16)
#define ND_LAYER			(16<<16)
#define ND_FRAME_RANGE		(17<<16)
#define ND_TRANSFORM_DONE	(18<<16)
#define ND_WORLD			(92<<16)
#define ND_LAYER_CONTENT	(101<<16)

	/*NC_OBJECT Object*/
#define ND_TRANSFORM		(18<<16)
#define ND_OB_SHADING		(19<<16)
#define ND_POSE				(20<<16)
#define ND_BONE_ACTIVE		(21<<16)
#define ND_BONE_SELECT		(22<<16)
#define ND_DRAW				(23<<16)
#define ND_MODIFIER			(24<<16)
#define ND_KEYS				(25<<16)
#define ND_CONSTRAINT		(26<<16)
#define ND_PARTICLE			(27<<16)
#define ND_POINTCACHE		(28<<16)
#define ND_PARENT			(29<<16)
#define ND_LOD				(30<<16)
#define ND_DRAW_RENDER_VIEWPORT	(31<<16)  /*for camera & sequencer viewport update, also /w NC_SCENE*/

	/*NC_MATERIAL Material*/
#define	ND_SHADING			(30<<16)
#define	ND_SHADING_DRAW		(31<<16)
#define	ND_SHADING_LINKS	(32<<16)
#define	ND_SHADING_PREVIEW	(33<<16)

	/*NC_LAMP Lamp*/
#define	ND_LIGHTING			(40<<16)
#define	ND_LIGHTING_DRAW	(41<<16)
#define   ND_SKY				(42<<16)

	/*NC_WORLD World*/
#define	ND_WORLD_DRAW		(45<<16)

	/*NC_TEXT Text*/
#define ND_CURSOR			(50<<16)
#define ND_DISPLAY			(51<<16)
	
	/*NC_ANIMATION Animato*/
#define ND_KEYFRAME			(70<<16)
#define ND_KEYFRAME_PROP	(71<<16)
#define ND_ANIMCHAN			(72<<16)
#define ND_NLA				(73<<16)
#define ND_NLA_ACTCHANGE	(74<<16)
#define ND_FCURVES_ORDER	(75<<16)

	/*NC_GPENCIL*/
#define ND_GPENCIL_EDITMODE	(85<<16)

	/*NC_GEOM Geometry*/
	/*Mesh, Curve, MetaBall, Armature, ..*/
#define ND_SELECT			(90<<16)
#define ND_DATA				(91<<16)
#define ND_VERTEX_GROUP		(92<<16)

	/*NC_NODE Nodes*/

	/*NC_SPACE*/
#define ND_SPACE_CONSOLE		(1<<16) /*general redraw*/
#define ND_SPACE_INFO_REPORT	(2<<16) /*update for reports, could specify type*/
#define ND_SPACE_INFO			(3<<16)
#define ND_SPACE_IMAGE			(4<<16)
#define ND_SPACE_FILE_PARAMS	(5<<16)
#define ND_SPACE_FILE_LIST		(6<<16)
#define ND_SPACE_NODE			(7<<16)
#define ND_SPACE_OUTLINER		(8<<16)
#define ND_SPACE_VIEW3D			(9<<16)
#define ND_SPACE_PROPERTIES		(10<<16)
#define ND_SPACE_TEXT			(11<<16)
#define ND_SPACE_TIME			(12<<16)
#define ND_SPACE_GRAPH			(13<<16)
#define ND_SPACE_DOPESHEET		(14<<16)
#define ND_SPACE_NLA			(15<<16)
#define ND_SPACE_SEQUENCER		(16<<16)
#define ND_SPACE_NODE_VIEW		(17<<16)
#define ND_SPACE_CHANGED		(18<<16) /*sent to a new editor type after it's replaced an old one*/
#define ND_SPACE_CLIP			(19<<16)

/*subtype, i512 entries too*/
#define NOTE_SUBTYPE		0x0000FF00

/*subtype scene mode*/
#define NS_MODE_OBJECT			(1<<8)

#define NS_EDITMODE_MESH		(2<<8)
#define NS_EDITMODE_CURVE		(3<<8)
#define NS_EDITMODE_SURFACE		(4<<8)
#define NS_EDITMODE_TEXT		(5<<8)
#define NS_EDITMODE_MBALL		(6<<8)
#define NS_EDITMODE_LATTICE		(7<<8)
#define NS_EDITMODE_ARMATURE	(8<<8)
#define NS_MODE_POSE			(9<<8)
#define NS_MODE_PARTICLE		(10<<8)

/*subtype 3d view editing*/
#define NS_VIEW3D_GPU			(16<<8)

/*action classification*/
#define NOTE_ACTION			(0x000000FF)
#define NA_EDITED			1
#define NA_EVALUATED		2
#define NA_ADDED			3
#define NA_REMOVED			4
#define NA_RENAME			5
#define NA_SELECTED			6
#define NA_PAINTING			7

/***************Gesture Manager data***************/

/*wmGesture->type*/
#define WM_GESTURE_TWEAK		0
#define WM_GESTURE_LINES		1
#define WM_GESTURE_RECT			2
#define WM_GESTURE_CROSS_RECT	3
#define WM_GESTURE_LASSO		4
#define WM_GESTURE_CIRCLE		5
#define WM_GESTURE_STRAIGHTLINE	6

/*
typedef enum eRotationModes {
	ROT_MODE_QUAT   = 0,
	ROT_MODE_EUL = 1,     
	ROT_MODE_XYZ = 1,
	ROT_MODE_XZY = 2,
	ROT_MODE_YXZ = 3,
	ROT_MODE_YZX = 4,
	ROT_MODE_ZXY = 5,
	ROT_MODE_ZYX = 6,

	ROT_MODE_AXISANGLE = -1,

	ROT_MODE_MIN = ROT_MODE_AXISANGLE,
	ROT_MODE_MAX = ROT_MODE_ZYX
} eRotationModes;
*/
////END////END////END////END////END////END////END////END////
#endif 

