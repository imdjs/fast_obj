
#pragma once
#ifndef __DJS_TRANSFROM_H__
#define __DJS_TRANSFROM_H__

#include<vector>
#include<list>
#include<deque>

//----DJS_math----------------------------------------------------
#define N_N(iSize,N,N__)    for(int n=0;n ＜ iSize;++n){N__[n]=N[n];}
////吅/////////////////////////////////////////////
template<typename T,typename T1>
静联 void f2_f2(const T f2[2],T1  f2__[2],匚bool b检测空=true,行函件)
    { if(b检测空){ASSERT入(f2 二二 NULL,i行,func,file);ASSERT入(f2__ 二二 NULL,i行,func,file);}else if(f2 二二 NULL 丨丨 f2__ 二二 NULL)return;
#ifdef _PRINT_HEAD_LIB_
    // printf("《 《 《 %s \n",s巜charU(__func__));
#endif
    f2__[0]=f2[0];f2__[1]=f2[1];
    }
    
static int I几位=-1;
#define F2_F2(f2,f2__)   {几位n(f2,I几位);ASSERT1入(#f2,I几位!=-1 丶丶 I几位!=2,I几位,__FUNCTION__,__FILE__);几位n(f2__,I几位);ASSERT1入(#f2__,I几位!=-1 丶丶 I几位!=2,I几位,__FUNCTION__,__FILE__);f2_f2(f2,f2__,true,__LINE__,__FUNCTION__,__FILE__);}
//====----------==========================
template<typename T,typename T1>
静联 void f3_f3(const T f3[3],T1 f3__[3],匚bool b检测空=true,行函件)
    {if(b检测空){ASSERT入(f3 二二 NULL,i行,func,file);ASSERT入(f3__ 二二 NULL,i行,func,file);}else if(f3 二二 NULL 丨丨 f3__ 二二 NULL)return;
    // printf("=%s,=%s\n",typeid(f3).name(),typeid(f3__).name());
// if(b检测空)ASSERT入(strcmp(typeid(f3).name(),"float [3]")!=0,__LINE__,__FUNCTION__,__FILE__);if(b检测空)ASSERT入(strcmp(typeid(f3__).name(),"float [3]")!=0,__LINE__,__FUNCTION__,__FILE__);
    f3__[0] = f3[0]; f3__[1] = f3[1]; f3__[2] = f3[2];
    }    
template<typename T>
静联 void f3_f3(const 卍Vector&f3,T f3__[3],匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(f3__ 二二 NULL,i行,func,file);else if(f3__ 二二 NULL)return;
    f3__[0] = f3.x; f3__[1] = f3.y; f3__[2] = f3.z;
    }   

#define F3_F3(f3,f3__)   {几位n(f3,I几位);ASSERT1入(#f3,I几位!=-1 丶丶 I几位!=3,I几位,__FUNCTION__,__FILE__);几位n(f3__,I几位);ASSERT1入(#f3__,I几位!=-1 丶丶 I几位 ＜ 3,I几位,__FUNCTION__,__FILE__);f3_f3(f3,f3__,true,__LINE__,__FUNCTION__,__FILE__);}

//
template<typename T,typename T1>
静联 void fn_fn(const initializer_list<T>&f2一,T1 fn__[],匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(fn__ 二二 NULL,i行,func,file);else if(fn__ 二二 NULL)return;
    int i=0;
    //if(f2一!=NULL)
        {
        for(auto p = f2一.begin();p != f2一.end();++p,++i)
        //printf("= %f\n",f2一[0]);
            fn__[i]=* p;
        }
    } 
#define FN_FN(f2一,fn__)   fn_fn(f2一,fn__,true,__LINE__,__FUNCTION__,__FILE__)

template<typename T,typename T1>
静联 void n_n_(int i,const T f2一[],T1 fn__[],匚bool b检测空=true,行函件)
    {if(b检测空){ASSERT入(f2一 二二 NULL,i行,func,file);ASSERT入(fn__ 二二 NULL,i行,func,file);}else if(f2一 二二 NULL 丨丨 fn__ 二二 NULL)return;
    int n;
    N_N(i,f2一,fn__);
    } 
#define n_n(f2一,fn__)   n_n_(f2一,fn__,__LINE__,__FUNCTION__,__FILE__)
    
template<typename T,typename T1>
静联 void f4_f4(const T f3[4],T1 f3__[4],匚bool b检测空=true,行函件)
    {if(b检测空){ASSERT入(f3 二二 NULL,i行,func,file);ASSERT入(f3__ 二二 NULL,i行,func,file);}else if(f3 二二 NULL 丨丨 f3__ 二二 NULL)return;
    if(f3!=NULL)
        {
        f3__[0] = f3[0]; f3__[1] = f3[1]; f3__[2] = f3[2]; f3__[3] = f3[3];
        }
    }
#define F4_F4(f3,f3__)   {几位n(f3,I几位);ASSERT1入(#f3,I几位!=-1 丶丶 I几位!=4,I几位,__FUNCTION__,__FILE__);几位n(f3__,I几位);ASSERT1入(#f3__,I几位!=-1 丶丶 I几位 ＜ 4,I几位,__FUNCTION__,__FILE__);f4_f4(f3,f3__,true,__LINE__,__FUNCTION__,__FILE__);}

template<typename T,typename T1>
静联 void L_L_(int i下标,const T f3[],T1 f3__[],匚bool b检测空=true,行函件)
    {if(b检测空){ASSERT入(f3 二二 NULL,i行,func,file);ASSERT入(f3__ 二二 NULL,i行,func,file);}else if(f3 二二 NULL 丨丨 f3__ 二二 NULL)return;
    if(f3!=NULL)
        {
        int n;
        N_N(i下标,f3,f3__);
        }
    }
#define L_L(i下标,f3,f3__)   L_L_(i下标,f3,f3__,__LINE__,__FUNCTION__,__FILE__)
    
////吅/////////////////////////////////////////////
#define F33_F33(F33,F33__)    \
    F33__[0][0]=F33[0][0];F33__[0][1]=F33[0][1];F33__[0][2]=F33[0][2];/* XΦ */\
    F33__[1][0]=F33[1][0];F33__[1][1]=F33[1][1];F33__[1][2]=F33[1][2];/* YΦ */\
    F33__[2][0]=F33[2][0];F33__[2][1]=F33[2][1];F33__[2][2]=F33[2][2];/* ZΦ */
    
#define F44_F44(F44,F44__)    \
    F44__[0][0]=F44[0][0];F44__[0][1]=F44[0][1];F44__[0][2]=F44[0][2];F44__[0][3]=F44[0][3];\
    F44__[1][0]=F44[1][0];F44__[1][1]=F44[1][1];F44__[1][2]=F44[1][2];F44__[1][3]=F44[1][3];\
    F44__[2][0]=F44[2][0];F44__[2][1]=F44[2][1];F44__[2][2]=F44[2][2];F44__[2][3]=F44[2][3];\
    F44__[3][0]=F44[3][0];F44__[3][1]=F44[3][1];F44__[3][2]=F44[3][2];F44__[3][3]=F44[3][3]; 
    
静联 void f44_f44(cfloat f44[4][4],float f44__[4][4])
    {
    F44_F44(f44,f44__)
    }
    
静联 void f33_f33(cfloat f33[3][3],float f33__[3][3])//my
    {
    F33_F33(f33,f33__)
    }
    
静联 void f33_f44(cfloat f33[3][3],float f44__[4][4]) 
    {
    F33_F33(f33,f44__)
    }
静联 void f44_f33(cfloat f44[4][4],float f33__[3][3])
    {
    F33_F33(f44,f33__)
    }

template<typename T,typename T1>
联 void f44_f16(const T f44[4][4],T1 f16__[16])
    {
    int i,j,艹=0;
    for(i=0;i ＜ 4;++i)
        {
        for(j=0;j ＜ 4;++j)
            {
            f16__[艹]=f44[i][j];++艹;//PRINTif(DJS,"",f44[i][j]);
            }
        }
    }
template<typename T,typename T1>
联 void f16_f44(const T f16[16],T1 f44__[4][4])
    {
    int i,j,艹=0;
    for(i=0;i ＜ 4;++i)
        {
        for(j=0;j ＜ 4;++j)
            {
            f44__[i][j]=f16[艹];++艹;
            }
        }
    }
////转换///////////////////////////////////////////
静联 void 负(cfloat f3[3],float f3__[3])
    {ASSERTR(f3 二二 NULL,);ASSERTR(f3__ 二二 NULL,);
    f3__[0]=-f3[0];f3__[1]=-f3[1];f3__[2]=-f3[2];
    }
静联 vector<卍Vector> Vv巜Lf3_Vv(int i个数,cfloat Lf3丅 [][3])
    {int i;
    vector<卍Vector>V序丅;
    V序丅.resize(i个数);
    for(i=0;i ＜ i个数;++i)  V序丅[i]=Lf3丅[i];
    return V序丅;
    }


template < typename T,typename T1>
静联 void Ι_L_(clist<T>&Ι,T1*L__,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(L__ 二二 NULL,i行,func,file);else if(L__ 二二 NULL)return;
    int i=0;
    if(Ι.empty())
        return ;
    //for_each(Ι.begin(), Ι.end(),[&](list<float>::reference r)//Χ 当传入参数是const 时会错误
    for_each(Ι.begin(), Ι.end(),[&](T r)//√
        {
        L__[i]=r;
        ++i;
        });
    }  
#define Ι_L(Ι,L__)   Ι_L_(Ι,L__,true,__LINE__,__FUNCTION__,__FILE__)
    
template < typename T>
联 void Ι_V(clist<T>&Ι,vector<T>&V__)
    {
    int i=0;
    if(Ι.empty())
        return ;
    //for_each(Ιi.begin(), Ιi.end(),[&](list<float>::reference r)//Χ 当传入参数是const 时会错误
    if(Ι.size()!=V__.size()){V__.resize(Ι.size());}
    for_each(Ι.begin(), Ι.end(),[&](T r)//√
        {
        V__[i]=r;
        ++i;
        });
    }    
    
template < typename T>
联 void ΙΙ_VV(clist<list<T>>&ΙΙ,vector<vector<T>>&VV__)
    {
#ifdef _PRINT_HEAD_LIB_
    printf("<  ＜   ＜  %s\n",s巜charU(__func__));
#endif
    int i=0,j=0;
    if(ΙΙ.empty())
        return ;
    //for_each(Ιi.begin(), Ιi.end(),[&](list<float>::reference r)//Χ 当传入参数是const 时会错误
#ifndef __PRINT__
    if(ΙΙ.size()!=VV__.size())
#endif
        {Resize(ΙΙ.size(),VV__);}
    for_each(ΙΙ.begin(), ΙΙ.end(),[&](list<T> r)//√
        {
        j=0;
        for_each(r.begin(), r.end(),[&](T rj)        
            {
            if(r.size()!=VV__[i].size()){VV__[i].resize(r.size());}
            VV__[i][j]=rj;
            ++j;
            });
        ++i;
        });
    }      
    
    
template < typename T>
联 void V_Ι(cvector<T>&V,list<T>&Ι__)
    {
    int i=0;
    if(V.empty())
        return ;
    //for_each(Ιi.begin(), Ιi.end(),[&](list<float>::reference r)//Χ 当传入参数是const 时会错误
    if(V.size()!=Ι__.size()>0){Ι__.resize(V.size());}
    list<T>::iterator ψ=Ι__.begin();
    for_each(V.begin(), V.end(),[&](T r)//√
        {
        *ψ=r;
        ++i;ψ++;
        });
    }       
//========================================
template < typename T>
联 void V_L2_(cvector<卍Vector>&V,T L__[][2],匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(L 二二 NULL,i行,func,file);else if(L 二二 NULL)return;
    int i;匚int iSize=V.size();
    For(iSize,i) 
        {
        L__[i][0]=V[i].x;L__[i][1]=V[i].y;
        }
        
    }
template < typename T>
联 void V_L2_(cvector<vector<T>>&V,T L__[][2],匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(L__ 二二 NULL,i行,func,file);else if(L__ 二二 NULL)return;
    int i;匚int iSize=V.size();
    For(iSize,i) 
        {
        L__[i][0]=V[i][0];L__[i][1]=V[i][1];
        }
        
    }

#define V_L2(V,L__)   V_L2_(V,L__,true,__LINE__,__FUNCTION__,__FILE__)    
//========================================
template < typename T,typename T1>
联 void V_L_(cvector<T>&V, T1 L__[],匚bool b检测空=true,行函件)//L__有可能是double
    {
    // PRINTifR(V.empty(),"★★V_L_ V.empty()",,);//
    if(b检测空)ASSERT入(L__ 二二 NULL,i行,func,file);else if(L__ 二二 NULL)return;
    int i,iSize=V.size();
    for(i=0;i ＜ iSize;++i)  
        L__[i]=V[i];
    }


template < typename T>
联 void V_L_(cvector<卍Vector>&V,T L__[][3],匚bool b检测空=true,行函件 )//L__有可能是double
    {
    // PRINTifR(V.empty(),"★★V_L_ V.empty()",V.getName(),);
    if(b检测空)ASSERT入(L__ 二二 NULL,i行,func,file);else if(L__ 二二 NULL)return;
    int i;匚int iSize=V.size();
    For(iSize,i)  
        F3_F3(V[i],L__[i]);
    }


#define V_L(V,L__)   V_L_(V,L__,true,__LINE__,__FUNCTION__,__FILE__)        
//========================================
template < typename T,typename T1>
联 void L_V_(int i维,const T1 *L,vector<T>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(L 二二 NULL,i行,func,file);
    int i;
    if(V__.size()!=i维)
        V__.resize(i维);
    for(i=0;i ＜ i维;++i)  
        V__[i]=L[i];
    }
#define L_V(i维,L,V__)   L_V_(i维,L,V__,true,__LINE__,__FUNCTION__,__FILE__)     
    
template < typename T>
联 void L_V_(int i维,const T L[][3] ,vector<卍Vector>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(L 二二 NULL,i行,func,file);else if(L__ 二二 NULL)return;
    int i;
    if(V__.size()!=i维)
        V__.resize(i维);
    for(i=0;i ＜ i维;++i)  
        V__[i]=L[i];
    }
#define L_V(i维,L,V__)   L_V_(i维,L,V__,true,__LINE__,__FUNCTION__,__FILE__)      
 //==============================
template < typename T>
联 void V_V_(int i数,cvector<T>&V, vector<T>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {
    int i,iSize=V.size();if(b检测空)ASSERT入(i数>V.size(),i行,func,file);else if(i数>V.size())return;
    if(V.size()!=i数){V__.resize(i数);}
    for(i=0;i ＜ i数;++i)  
        V__[i]=V[i];
    }
#define V_Vi(i数,V,V__)   V_V_(i数,V,V__,true,__LINE__,__FUNCTION__,__FILE__)       
    
template < typename T>
联 void Q_V_(int i数,const deque<T>&Q, vector<T>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {
    int i,iSize=Q.size();if(b检测空)ASSERT入(Q.size() ＜ i数,i行,func,file);else if(Q.size() ＜ i数)return;
    if(Q.size()!=i数){V__.resize(i数);}
    for(i=0;i ＜ i数;++i)  
        V__[i]=Q[i];
    }
#define Q_Vi(i数,V,V__)   Q_V_(i数,V,V__,true,__LINE__,__FUNCTION__,__FILE__)         

//==============================
template<typename T>
联 void V_V_(cvector<T>&V,vector<卍Vector>&V__,匚int i下标开始=0,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(V.empty(),i行,func,file);else if(V.empty())return;
    int iSize=V.size();int i;
    if(iSize!=V__.size()+i下标开始){Resize(iSize,V__);}
    for(i=0;i ＜ iSize;++i)  
        {V__[i]=V[i];}//PRINT3if(DJS,"",V[i][j],V__[i][j],V.getName());
    }
    
template < typename T>
联 void V_V_(cvector<vector<T>>&V, vector<vector<T>>&V__,匚int i下标开始=0,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(V.empty(),i行,func,file);else if(V.empty())return;
    int iSize=V.size();int i,j;
    if(iSize!=V__.size()+i下标开始){Resize(iSize,V__);}
    for(i=0;i ＜ iSize;++i)  
        {if(V[i].size()!=V__[i].size()){V__[i].resize(V[i].size());}
        for( j=0;j ＜ V[i].size();++j)  
            {V__[i][j]=V[i][j];//PRINT3if(DJS,"",V[i][j],V__[i][j],V.getName());
            }
        }
    }

template < typename T>
联 void V_V_(cvector<deque<T>>&V, vector<vector<T>>&V__,匚int i下标开始=0,匚bool b检测空=true,行函件)//L__有可能是double
    {
    if(b检测空)ASSERT入(V.empty(),i行,func,file);else if(V.empty())return;
    int iSize=V.size();int i,j;
    if(iSize!=V__.size()+i下标开始){Resize(iSize,V__);}
    for(i=0;i ＜ iSize;++i)  
        {if(V[i].size()!=V__[i].size()){V__[i].resize(V[i].size());}
        for( j=0;j ＜ V[i].size();++j)  
            {V__[i][j]=V[i][j];//PRINT3if(DJS,"",V[i][j],V__[i][j],V.getName());
            }
        }
    }
    
#define V_V一(V,V__)   V_V_(V,V__,0,false,__LINE__,__FUNCTION__,__FILE__)     
#define V_V(V,V__)   V_V_(V,V__,0,true,__LINE__,__FUNCTION__,__FILE__)          
#define V_V卝(i下标开始,V,V__)   V_V_(V,V__,i下标开始,true,__LINE__,__FUNCTION__,__FILE__)       
//==============================
template < typename T>
联 void Q_V_(const deque<T>&V, vector<T>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(V.empty(),i行,func,file);
    int i,iSize=V.size();
    if(iSize!=V__.size()){V__.resize(iSize);}
    for(i=0;i ＜ iSize;++i)  
        V__[i]=V[i];
    }
    
template < typename T>
联 void Q_V_(const deque<deque<T>>&Q, vector<vector<T>>&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(Q.empty(),i行,func,file);
    int i,j,iSize=Q.size(),iSize2;
    if(iSize!=V__.size()){Resize(iSize,V__);}
    // if(b反序 二二 false)
        {
        for(i=0;i ＜ iSize;++i)  
            {
            iSize2=Q[i].size();if(Q[i].size()!=V__[i].size()){V__[i].resize(Q[i].size());}
            for(j=0;j ＜ iSize2;++j)  
                V__[i][j]=Q[i][j];
            }
        }
    // else
        // {
        // for(i=0;i ＜ iSize;++i)  
            // {
            // iSize2=Q[i].size();if(Q[i].size()!=V__[i].size()){V__[i].resize(Q[i].size());}
            // for(j=0;j ＜ iSize2;++j)  
                // V__[i][j]=Q[i][iSize2-j-1];
            // }
        // }        
    }
    
struct 卍Bool;
template < typename T>
联 void Q_V_(const deque<T>&V, 卍Bool&V__,匚bool b检测空=true,行函件)//L__有可能是double
    {if(b检测空)ASSERT入(V.empty(),i行,func,file);
    int i,iSize=V.size();
    if(iSize!=V__.冖()){V__.Resize(iSize);}
    for(i=0;i ＜ iSize;++i)  
        V__[i]=(bool)V[i];
    }
    
#define Q_V一(V,V__)   Q_V_(V,V__,false,__LINE__,__FUNCTION__,__FILE__)    
#define Q_V(V,V__)   Q_V_(V,V__,true,__LINE__,__FUNCTION__,__FILE__)    
     
template < typename T>
联 void V_Q(cvector<T>&V, deque<T>&V__)//L__有可能是double
    {
    int i,iSize=V.size();
    if(V.size()!=V__.size()){V__.resize(V.size());}
    for(i=0;i ＜ iSize;++i)  
        V__[i]=V[i];
    }    

template < typename T>
联 vector<vector<T>> VV巜Ψ2_(int I,int J,T**LL__,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(LL__ 二二 NULL,i行,func,file);
    vector<vector<T>>VVi(I);int i,j;
    for(i=0;i ＜ I;++i)
        {
        VVi[i].resize(J);
        for( j=0;j ＜ J;++j)
            {
            VVi[i][j]=LL__[i][j];
            }
        }
    return VVi;
    }   
#define VV巜Ψ2(I,J,LL__)   VV巜Ψ2_(I,J,LL__,true,__LINE__,__FUNCTION__,__FILE__)      
    
template < typename T>
联 void VV_Ψ2_(cvector<vector<T>>&VV,T**LL__,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(LL__ 二二 NULL,i行,func,file);
    int iSize=VV.size();int i,j;
    for(i=0;i ＜ iSize;++i)
        {
        int iSize2=VV[i].size();
        for( j=0;j ＜ iSize2;++j)
            {
            LL__[i][j]=VV[i][j];
            }
        
        }
    }
#define VV巜Ψ2(VV,LL__)   VV巜Ψ2_(VV,LL__,true,__LINE__,__FUNCTION__,__FILE__)          
    
template < typename T>
联 vector<T> V巜L_(int i数,T*L,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(L 二二 NULL,i行,func,file);
    vector<T>V(i数);int i,j;
    for(i=0;i ＜ i数;++i)
        {
        V[i]=L[i];
        }
    return V;
    }
#define V巜L(i数,L)   V巜L_(i数,L,__LINE__,__FUNCTION__,__FILE__)
    
template < typename T>
联 vector<T> V巜Ι(clist<T>&Ι)
    {
    vector<T>V(Ι.size());int i,j;
    int i=0;
    for_each(Ι.begin(),Ι.end(),[&i,&V](list<T>::reference r)
        {
        V[i]=r;++i;
        });

    return V;
    }
       
template < typename T>
联 list<T> Ι巜V(cvector<T>&V)
    {
    list<T>Ι(V.size());//list<T>&Ι=Ι0;
    int i=0;
    //for_each(V.begin(), V.end(),[&i,&Ι](vector<T>::reference r)//Χ
    for(auto&i:Ι)
        {
        i=V[i];
        }
    /*
    for_each(V.begin(), V.end(),[&i,&Ι](T r)//Χ
        {
        Ι[i]=r;++i;
        });
    */
    return Ι;
    }    
     
template < typename T>
联 void VΙ_Ψ2_(cvector<list<T>>&VΙ,T**LL__,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(LL__ 二二 NULL,i行,func,file);
    int iSize=VΙ.size();int i,j;
    for(i=0;i ＜ iSize;++i)
        {
        //int iSize2=VΙ[i].size();
        j=0;
        for_each(VΙ[i].begin(), VΙ[i].end(),[&](T r)
            {
            LL__[i][j]=r;
            ++j;
            });
        }
    }
    
#define VΙ_Ψ2(VΙ,LL__)   VΙ_Ψ2_(VΙ,LL__,__LINE__,__FUNCTION__,__FILE__)
    
template < typename T>
联 vector<list<T>> VΙ巜Ψ2_(int I,int J,T**LL__,匚bool b检测空=true,行函件)
    {if(b检测空)ASSERT入(LL__ 二二 NULL,i行,func,file);
    vector<list<T>>VΙf_(I);int i,j;
    for(i=0;i ＜ I;++i)
        {
        VΙf_[i].resize(J);j=0;
        for_each(VΙf_[i].begin(), VΙf_[i].end(),[&](T r)
            {
            r=LL__[i][j];
            ++j;
            });
        }
    return VΙf_;
    }        
#define VΙ巜Ψ2(I,J,LL__)   VΙ巜Ψ2_(I,J,LL__,true,__LINE__,__FUNCTION__,__FILE__)
    
静联 void Lf3_Ψ2f(int i维,float Lf3[][3],float**Ψ2f_)
    {int i;
   for(i=0;i ＜ i维;++i)
        {
        F3_F3(Lf3[i],Ψ2f_[i]);
        }
    #ifdef _PRINT_FREQ2_
        cout<<"  》》 "<<str巜charU(__FUNCTION__)<<endl;
    #endif
    }
    
静联 void Ψ2f_Lf3(int i维,float**Ψ2f,float Lf3_[][3])
    {int i;
   for(i=0;i ＜ i维;++i)
        {
        F3_F3(Ψ2f[i],Lf3_[i]);
        }
    #ifdef _PRINT_FREQ2_
        cout<<"  》》 "<<str巜charU(__FUNCTION__)<<endl;
    #endif
    }
静联 void Ψ2f_Ψ2f(int i维,int j维,float**Ψ2f,float**Ψ2f_)
    {int i,j;
   for(i=0;i ＜ i维;++i)
        {
        for(j=0;j ＜ j维;++j)
            {
            Ψ2f_[i][j]=Ψ2f[i][j];
            }
        }
    #ifdef _PRINT_FREQ2_
        cout<<"  》》 "<<str巜charU(__FUNCTION__)<<endl;
    #endif
    }
    
静联 void Ψ3f_Ψ3f(int i维,int j维,int k维,float***Ψ3f,float***Ψ3f_)
    {int i,j,k;
    for(i=0;i ＜ i维;++i)
        {
        for(j=0;j ＜ j维;++j)
            {
            for(k=0;k ＜ k维;++k)
                {
                Ψ3f_[i][j][k]=Ψ3f[i][j][k];
                }
            }
        }
    }
    
////L V////////////////////////////////////////
template<typename T>
静联 void Vv_Ψ2f(cvector<T>&Vv,float**Ψ2f_)
    {
    int i,iSize=Vv.size();
    for(i=0;i ＜ iSize;++i)
        {
        Vv[i].乛(Ψ2f_[i]);
        }
    }
template<typename T>
静联 void VVv_Ψ3f(cvector<vector<T>>&VVv,float ***Ψ3f_)
    {int i;
    for(i=0;i ＜ VVv.size();++i)
        {
        Vv_Ψ2f(VVv[i],Ψ3f_[i]);
        }
    
    }    
    
template<typename T>
静联 void Ιv_Lf3(clist<T>&Ιv,float Lf3[][3])
    {
    int j=0;
    for_each(Ιv.begin(), Ιv.end(),[&](T  r)
        {
        r.乛(Lf3[j]);
        ++j;
        });

    }

template<typename KEY,typename T>
联 void Mkey_V(cmap<KEY,T>&M,vector<KEY>&Vt__)
    {
    Vt__.resize(M.size());int 艹=0,iSize=M.size();
    for(const auto&it:M)
        {
        Vt__[艹]=it.first;++艹;
        }
    }

// #define 二((a),b__)   if((a)!=b__)b__=(a);
template<typename T,typename T1>
联 void 二(const T &const a,T1&b__)
    {
    if(a!=b__)
        {//printf("a 不等于 b__  %d,%d\n",a,b__);
        b__=a;//printf("a 二二 b__  %d,%d\n",a,b__);
        }
    } 
//template<typename T,typename T,typename T1>
//联 void 二卩(匚T a,const T&val,T1&b__)
   // {
#define 二二卩(a,val,b__)    if(b__ 二二 a)b__=val;
#define 二一1(a,b__)    if(b__ 二二 -1)b__=a;
    //}
template<typename T,typename T1>
联 void 二null(匚T Ψ,T1&Ψ__)
    {
    if(Ψ__ 二二 NULL)Ψ__=Ψ;
    }
    
template<typename T,typename T1>
联 void ＆二有(T&t,T1&Ψ__)
    {
    if(Ψ__!=NULL)Ψ__=&t;
    }
template<typename T,typename T1>
联 void 二有(const T&t,T1&Ψ__)
    {
    if(Ψ__!=NULL)*Ψ__=t;
    }
    
template<typename T,typename T1>
联 void 有二(const T&Ψ,T1&Ψ__)
    {
    if(Ψ!=NULL)Ψ__=Ψ;
    }

template<typename T,typename T1>
联 void true二(const T&t,T1&t__)
    {
    if(t 二二 true)t__=t;
    }
template<typename T,typename T1>
联 void 二b(cbool& b,匚T t,T1&t__)
    {
    if(b 二二 true)t__=t;
    }
    
////each///////////////////////////////////
static bool b传值成功G=false;

template<typename T,typename T1>
联 void 巜V(const T &t,vector<T1>&Vt__)
    {
    for(auto&t_:Vt__)
        {
        //t_=t;
        二(t,t_);
        }
    
    }
    
template<typename T,typename T1>
联 bool &二3_(const T Ψ匚 a,T1*b__,匚bool b检测空=true,行函件)
    {
    int i;b传值成功G=false;
    ASSERTR入db(a 二二 NULL,i行,func,file,b传值成功G);ASSERTR入db(b__ 二二 NULL,i行,func,file,b传值成功G);
    // ASSERTRdb(a 二二 NULL,);ASSERTRdb(b__ 二二 NULL,);
    for(i=0;i ＜ 3;++i)
        {
        二(a[i],b__[i]);
        }
    return b传值成功G=true;
    }
#define 二3(a,b__)    二3_(a,b__,__LINE__,__FUNCTION__,__FILE__)

template<typename T,typename T1>
联 bool &二4_(const T Ψ匚 a,T1*b__,匚bool b检测空=true,行函件)
    {
    int i;ASSERTR入db(a 二二 NULL,i行,func,file,b传值成功G);ASSERTR入db(b__ 二二 NULL,i行,func,file,b传值成功G);
    for(i=0;i ＜ 4;++i)
        {
        二(a[i],b__[i]);
        }
    return b传值成功G=true;
    }
#define 二4(a,b__)    二4_(a,b__,__LINE__,__FUNCTION__,__FILE__)

template<typename T,typename T1>
联 bool &二n_(int I,const T Ψ匚 a,T1*b__,匚bool b检测空=true,行函件)
    {
    int i;ASSERTR入db(a 二二 NULL,i行,func,file,b传值成功G);ASSERTR入db(b__ 二二 NULL,i行,func,file,b传值成功G);
    for(i=0;i ＜ I;++i)
        {
        二(a[i],b__[i]);
        }
    return b传值成功G=true;
    }
#define 二n(a,b__)    二n_(a,b__,__LINE__,__FUNCTION__,__FILE__)

////////////////////////////////////////////
template < typename T,typename T1>
联 vector<T> V1巜M(cmap<T,T1>&D)
    {
    vector<T>V(D.size());
    int 艹0=0;
    for(const auto&it:D)
        {
        V[艹0]=it.first;
        }
    return V;
    }

////fill////////////////////////////////////////
//-----------------------------------------------
template<typename T>
联 void FillL_(int i数量,T t,T Lt__[],匚bool b检测空=true,行函件)
    {int i;if(b检测空)ASSERT入(Lt__ 二二 NULL,i行,func,file);
    for(i=0;i ＜ i数量;++i)
        Lt__[i]=t;
    }
#define FillL(f2一,fn__)   FillL_(f2一,fn__,true,__LINE__,__FUNCTION__,__FILE__)

template<typename T>
联 void FillLL_(int i数量,int j数量,T t,T** LLt__,匚bool b检测空=true,行函件)
    {int i,j;if(b检测空)ASSERT入(LLt__ 二二 NULL,i行,func,file);
    for(i=0;i ＜ i数量;++i)
        for( j=0;j ＜ j数量;++j)
            LLt__[i][j]=t;
    }
#define FillLL(i数量,j数量,t,LLt__)   FillLL_(i数量,j数量,t,LLt__,true,__LINE__,__FUNCTION__,__FILE__)

template<typename T>
联 void FillOrderL_(int i数量,T Lt__[],匚bool b检测空=true,行函件)
    {int i;if(b检测空)ASSERT入(Lt__ 二二 NULL,i行,func,file);
    for(i=0;i ＜ i数量;++i)
        Lt__[i]=i;
    }
#define FillOrderL(f2一,fn__)   FillOrderL_(f2一,fn__,true,__LINE__,__FUNCTION__,__FILE__)

联 void FillOrderΙ(int i数量,list<int>&Lt__)
    {
    int 艹0=0;Lt__.resize(i数量);
    for(auto&i:Lt__)
        {
        i=艹0;艹0++;
        }

    }
    
template<typename T>
联 void FillOrderV(int i数量,vector<T >&Vt__,int i步=1)
    {int i,艹=-1;i数量/=i步;
    Vt__.resize(i数量);
    for(i=0;i ＜ i数量;++i)
        {
        if(i步>1)
            {
            艹+=i步;
            Vt__[i]=艹;
            }
        else
            Vt__[i]=i;
        }
    }
    
//========================================
template<typename T>
联 void Swap(T &t1,T &t2)
    {
    T temp=t1;t1=t2;t2=temp;
    }

////声明////////////////////////////////////////
//联 void s_s(const char*c,char *c2__);

联 void uchar_color(匚int 高,匚int 宽,匚int i位,匚int i类型,uchar Ψ匚 buffer,vector<vector<卍Color>>&V行序Vcol__);

////END////END////END////END////END////END////END////END////
#endif 

