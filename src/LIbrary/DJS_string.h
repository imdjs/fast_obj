
#pragma once

#ifndef __DJS_STRING_H__
    #define __DJS_STRING_H__
    
#ifdef _PRAGMA_MG_
    #pragma message("#:" __FILE__)
#endif
#include"DJS_typedef.h"
#include"DJS_define.h"
#include"print\DJS0_print.h"
#include"global\DJS_global_var.h"

#include<wchar.h>
#include<vector>
#include<string>
#include"MallocFree.h "

static VECTOR(string,Vstr图G);
////////////////////////////////////////////
静联 void 吅s(cchar*s源,char*s__,int i源长,行函件)//只要前面的 [abc]i源长 efg
    {
    ASSERTR入(s源 二二 NULL,i行,func,file,);ASSERTR入(s__ 二二 NULL,i行,func,file,);
    #ifdef PRINT_HEAD
        //if(i源长>strlen(s源))printf("★★iC长>strlen(s源),i源长=%d·strlen(s源)=%d",i源长,strlen(s源));
    #endif

    //ASSERT(i源长>strlen(s源));
    int i=0;
    for(i=0;i ＜ i源长;++i)
        {
        s__[i]=s源[i];//printf("s源= %s源\n",s__[i]);
        }
    s__[i]='\0';
    }
    
静联 void 吅s(cchar*s源,char*s__,行函件)//只要前面的 [abc]i源长 efg
    {
    ASSERTR入(s源 二二 NULL,i行,func,file,);ASSERTR入(s__ 二二 NULL,i行,func,file,);
    #ifdef PRINT_HEAD
        //if(strlen(s__)<strlen(s源))printf("★★strlen(s__)<strlen(s源),strlen(s__)=%d·strlen(s源)=%d",strlen(s__),strlen(s源));
    #endif
    //ASSERT(strlen(s__)<strlen(s源));
    int i=0,i源长=strlen(s源);
    for(i=0;i ＜ i源长;++i)
        {
        s__[i]=s源[i];//printf("s源= %s源\n",s__[i]);
        }
    s__[i]='\0';
    }
//==== s__二二 s1+ s__ ====================================
静联 void 十二s(cchar*s1,char *s__)//s1,s__ 二二 s__+s1
    {
    ASSERT(s1 二二 NULL);ASSERT(s__ 二二 NULL);
    int  i,iSize=strlen(s1),iSize2=strlen(s__),i合=iSize+iSize2;//printf("s1= %s○c2= %s○ iSize= %d○ 
    int j=-1;//printf("1 s__= %s\n",s__);
#ifdef __PRINT__
    if(511 ＜ i合)
        ASSERT1("",511 ＜ i合);
#endif    
    j=iSize2;
    for(i=0;j ＜ i合;++j,++i)
        {//printf("= %d·c2[i]=%s\n",j,s2[i]);
        s__[j]=s1[i];//j一开始是 c__原来的结尾
        }
        
    s__[j]='\0';
    //printf("2 s__= %s\n",s__);
    }
 //==== s__二二 s__+ s1==========================
静联 void 十二s巛(cchar*s1,char*s__)//s1,s__ 二二 s__+s1
    {
    char sTmp[i512];s_s_(s__,sTmp);
    int  i,j=-1,iSize=strlen(s1),iSize2=strlen(s__),i合=iSize+iSize2;//printf("s1= %s○c2= %s○ iSize= %d○ 
#ifdef __PRINT__
    if(511 ＜ i合)
        ASSERT1("",511 ＜ i合);
#endif    
    j=iSize;s_s_(s1,s__);
    for(i=0;j ＜ i合;++j,++i)
        {//printf("= %d·c2[i]=%s\n",j,s2[i]);
        s__[j]=sTmp[i];//j一开始是 c__原来的结尾
        }

    s__[j]='\0';
    //printf("2 s__= %s\n",s__);
    }
    
    
静联 void 十s_(cchar*s1,cchar*s2,char s__[])
    {
    ASSERT(s1 二二 NULL);ASSERT(s2 二二 NULL);
    int  i,iSize=strlen(s1),iSize2=strlen(s2),i合=iSize+iSize2;//printf("s1= %s○c2= %s○ iSize= %d○ i合= %d\n",s1,s2,iSize,);
#ifdef __PRINT__
    if(511 ＜ i合)
        ASSERT1("",511 ＜ i合);
#endif 
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s1[i];
        }
    int j=iSize;//printf("1 s__= %s\n",s__);
    for(i=0;j ＜ i合;++j,++i)
        {//printf("= %d·c2[i]=%s\n",j,s2[i]);
        s__[j]=s2[i];
        }
    s__[j]='\0';
    //printf("2 s__= %s\n",s__);
    }
    
静联 void 十s_(cchar*s1,cchar*s2,cchar*s3,char s__[])
    {
    ASSERT(s1 二二 NULL);ASSERT(s2 二二 NULL);ASSERT(s3 二二 NULL);
    int i,iSize=strlen(s1),iSize2=strlen(s2),iSize3=strlen(s3);
    int i合1=iSize+iSize2, i合2=iSize+iSize2+iSize3;
#ifdef __PRINT__
    if(i合2>i512)
        ASSERT1("",i合2>i512);
#endif 
   for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s1[i];
        }
    int j=iSize;//printf("1 s__= %s\n",s__);
   for(i=0;j ＜ i合1;++j,++i)
        {
        s__[j]=s2[i];
        }
    int key=i合1;//printf("2 s__= %s\n",s__);
   for(i=0;key ＜ i合2;++key,++i)
        {
        s__[key]=s3[i];
        }        
        
    s__[key]='\0';//printf("3 s__= %s\n",s__);

    }
    
静联 void 十s_(cchar*s1,cchar*s2,cchar*s3,cchar*s4,char s__[])
    {
    ASSERT(s1 二二 NULL);ASSERT(s2 二二 NULL);ASSERT(s3 二二 NULL);ASSERT(s4 二二 NULL);
    int i,iSize=strlen(s1),iSize2=strlen(s2),iSize3=strlen(s3),iSize4=strlen(s4);
    int i合1=iSize+iSize2, i合2=iSize+iSize2+iSize3, i合3=iSize+iSize2+iSize3+iSize4;
#ifdef __PRINT__
    if(i合3>i512)
        ASSERT1("",i合3>i512);
#endif 
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s1[i];
        }
    int j=iSize;//printf("1 s__= %s\n",s__);
    for(i=0;j ＜ i合1;++j,++i)
        {
        s__[j]=s2[i];
        }
        
    int key=i合1;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合2;++key,++i)
        {
        s__[key]=s3[i];
        }        
    key=i合2;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合3;++key,++i)
        {
        s__[key]=s4[i];
        }          
        
    s__[key]='\0';//printf("3 s__= %s\n",s__);

    }
    
静联 void 十s_(cchar*s1,cchar*s2,cchar*s3,cchar*s4,cchar*s5,char s__[])
    {
    ASSERT(s1 二二 NULL);ASSERT(s2 二二 NULL);ASSERT(s3 二二 NULL);ASSERT(s4 二二 NULL);ASSERT(s5 二二 NULL);
    int i,iSize=strlen(s1),iSize2=strlen(s2),iSize3=strlen(s3),iSize4=strlen(s4),iSize5=strlen(s5);
    int i合1=iSize+iSize2, i合2=iSize+iSize2+iSize3, i合3=iSize+iSize2+iSize3+iSize4, i合4=iSize+iSize2+iSize3+iSize4+iSize5;
#ifdef __PRINT__
    if(i合4>i512)
        ASSERT1("",i合4>i512);
#endif 
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s1[i];
        }
    int j=iSize;//printf("1 s__= %s\n",s__);
    for(i=0;j ＜ i合1;++j,++i)
        {
        s__[j]=s2[i];
        }
        
    int key=i合1;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合2;++key,++i)
        {
        s__[key]=s3[i];
        }        
    key=i合2;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合3;++key,++i)
        {
        s__[key]=s4[i];
        }          
    key=i合3;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合4;++key,++i)
        {
        s__[key]=s5[i];
        }    
        
    s__[key]='\0';//printf("3 s__= %s\n",s__);

    }
    
静联 void 十s_(cchar*s1,cchar*s2,cchar*s3,cchar*s4,cchar*s5,cchar*s6,char s__[])
    {
    ASSERT(s1 二二 NULL);ASSERT(s2 二二 NULL);ASSERT(s3 二二 NULL);ASSERT(s4 二二 NULL);ASSERT(s5 二二 NULL);ASSERT(s6 二二 NULL);
    int i,iSize=strlen(s1),iSize2=strlen(s2),iSize3=strlen(s3),iSize4=strlen(s4),iSize5=strlen(s5),iSize6=strlen(s6);
    int i合1=iSize+iSize2, i合2=iSize+iSize2+iSize3, i合3=iSize+iSize2+iSize3+iSize4, i合4=iSize+iSize2+iSize3+iSize4+iSize5, i合5=iSize+iSize2+iSize3+iSize4+iSize5+iSize6;
#ifdef __PRINT__
    if(i合5>i512)
        ASSERT1("",i合5>i512);
#endif 
    for(i=0;i ＜ iSize;++i)
        {
        s__[i]=s1[i];
        }
    int j=iSize;//printf("1 s__= %s\n",s__);
    for(i=0;j ＜ i合1;++j,++i)
        {
        s__[j]=s2[i];
        }
        
    int key=i合1;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合2;++key,++i)
        {
        s__[key]=s3[i];
        }        
    key=i合2;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合3;++key,++i)
        {
        s__[key]=s4[i];
        }          
    key=i合3;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合4;++key,++i)
        {
        s__[key]=s5[i];
        }    
    key=i合4;//printf("2 s__= %s\n",s__);
    for(i=0;key ＜ i合5;++key,++i)
        {
        s__[key]=s6[i];
        }          
        
    s__[key]='\0';//printf("3 s__= %s\n",s__);

    }    

静联 void 一s(cint&i减数,cchar*s1,char s__[] \
                                                                                        ,bool b减前面=false)
    {
    ASSERT(s1 二二 NULL);ASSERT(i减数 ＜ 1);
    int  i,j,iSize=strlen(s1),SIZE剩=iSize-i减数;//printf("s1= %s○c2= %s○ iSize= %d○ i合= %d\n",s1,s减去,iSize,);
    ASSERT(SIZE剩 ＜二 0);
    if(b减前面 二二 false)
        {
        for(i=0;i ＜ SIZE剩;++i)
            {
            s__[i]=s1[i];
            }
        }
    else
        {
        for(j=i减数-1,i=0;j ＜ iSize;++j,++i)
            {
            s__[i]=s1[j];
            }        
        
        }
    s__[i]='\0';
    //printf("2 s__= %s\n",s__);
    }
 
static char s合512[i512];
静联 cchar Ψ匚 s十(cchar*s1,cchar*s2)
    {
    if(s1 二二 NULL)return s2;
    // ASSERT(s1 二二 NULL);
    ASSERT(s2 二二 NULL);
    int  i,iSize=strlen(s1),iSize2=strlen(s2),i合=iSize+iSize2;
#ifdef __PRINT__
    if(511 ＜ i合)
        ASSERT1("",511 ＜ i合);
#endif    
    十s_(s1,s2,s合512);
    
    return s合512;
    }
    
///转换///////////////////////////////////////
静联 bool bF_char(匚float f,char*s__)
    {
    if(!s__)return false;
    sprintf(s__, "%g", f);
    //printf("s__= %s\n",s__);
    return true;
    }
    
静联 char*s巜i(匚int i数入,char*s结果__,\
                                                                int i进制)//5462
    {/*索引表*/
    //PRINT_1(,i数入,d);
    unsigned i数入2;/*中间变量*/
    int 艹0=0,j,k;
    /*确定unum的值*/
    if(i进制 二二 10 丶丶 i数入 ＜ 0)/*十进制负数*/
        {
        i数入2=(unsigned)-i数入;
        s结果__[艹0++]='-';
        }
    else i数入2=(unsigned)i数入;/*其他情况*/
    /*转换*/
    do
        {
        s结果__[艹0++]=s字母[i数入2%(unsigned)i进制];//5462%10=2→546%10=6
        i数入2/=i进制;//5462→546→54→5→0
        //PRINT_1(,i数入2,d);
        }while(i数入2!=0);
    s结果__[艹0]='\0';
    /*逆序*/
    if(s结果__[0]=='-')k=1;/*十进制负数*/
    else k=0;
    char temp;
    for(j=k;j ＜二 (艹0-1)/2;++j)
        {
        temp=s结果__[j];
        s结果__[j]=s结果__[艹0-1+k-j];
        s结果__[艹0-1+k-j]=temp;
        }
    return s结果__;
    }
    
静联 void  i_s(匚int int_value,char *buffer)
    {
#ifdef __PRINT__
    int I=sprintf(buffer, "%d", int_value); 
    if(I>strlen(buffer))
        {
        printf("★★★strlen(buffer)= %zd ,I= %d,buffer= %s\n",strlen(buffer),I,buffer);
        ASSERT1("",I>strlen(buffer));
        }
    #else
        sprintf(buffer, "%d", int_value);
#endif
    }
静联 void  f_s(float int_value,char *buffer)
    {
#ifdef __PRINT__
    int I=sprintf(buffer, "%f", int_value); 
    if(I>strlen(buffer))
        {
        printf("★★★strlen(buffer)= %zd ,I= %d,buffer= %s\n",strlen(buffer),I,buffer);
        ASSERT1("",I>strlen(buffer));
        }
    #else
        sprintf(buffer, "%f", int_value);
#endif
    // printf("buffer  =   %s   \n",buffer);
    }

//========================================
静联 cchar&c巜i(匚int i数入)
    {
    // itoa (i数入,Ψs转G,10);
    c转G=i数入+'0';
    return c转G;
    }
    
静联 cchar Ψ匚 s巜i(匚int int_value)
    {
#ifdef __PRINT__
    int I=sprintf(Ψs转G, "%d", int_value); 
    if(I>strlen(Ψs转G))
        {
        printf("★★★strlen(Ψs转G)= %zd ,I= %d,Ψs转G= %s\n",strlen(Ψs转G),I,Ψs转G);
        ASSERT1("",I>strlen(Ψs转G));
        }
    #else
        sprintf(Ψs转G, "%d", int_value);
#endif
    return Ψs转G;
    }
//----------------------------------------
静联 cchar Ψ匚 s巜f(匚float int_value)
    {
#ifdef __PRINT__
    int I=sprintf(Ψs转G, "%f", int_value); 
    if(I>strlen(Ψs转G))
        {
        printf("★★★strlen(Ψs转G)= %zd ,I= %d,Ψs转G= %s\n",strlen(Ψs转G),I,Ψs转G);
        ASSERT1("",I>strlen(Ψs转G));
        }
    #else
        sprintf(Ψs转G, "%f", int_value);
#endif
    return Ψs转G;
    }

    
静联 char*Ψs巜string(const string& str)
    {
    string s1 = "abcdefg";
    int len = str.length();
    char *Ψ1s = (char *)malloc((len+1)*sizeof(char));
    str.copy(Ψ1s,len,0);
    return Ψ1s;
    }
    
静联 string str巜char(cchar*s源)
    {//正常转正常
#ifdef __PRINT__
    if (s源  二二  NULL){printf("!!= %d\n",s源);return NULL;}
#endif    
    string s=s源;
    return s;
    }
    
//宽字节转单字节
静联 bool WCharToMByte(LPCWSTR lpcwszStr, LPSTR lpszStr, DWORD dwSize)
    {
    DWORD dwMinSize;
    dwMinSize = WideCharToMultiByte(CP_OEMCP,NULL,lpcwszStr,-1,NULL,0,NULL,FALSE);
    if(dwSize  ＜  dwMinSize)
        {
        return FALSE;
        }

    WideCharToMultiByte(CP_OEMCP,NULL,lpcwszStr,-1,lpszStr,dwSize,NULL,FALSE);
    return TRUE;
    }
    
静联 char* s巜char( cchar* s源 ,\
                                            char*s__=NULL)
    { //√ 这个是想要的转换成>>螖螖鍔燺FFF
#ifdef __PRINT__
    if (s源  二二  NULL){printf("!!= %d\n",s源);return NULL;}
#endif
    int len= WideCharToMultiByte( CP_UTF8,0,(LPCWSTR)s源, -1, NULL, 0,NULL, NULL );
    //int len= MultiByteToWideChar(CP_ACP,0,s源,strlen(s源),NULL,0);
    //char*ΨΨshar = tMalloc(len+1,char);
    //memset( ( void*)ΨΨshar, 0, sizeof( char )*( len + 1 ) );
    if (len ＜二 0)
        return NULL;
    if(511 ＜ len)
        {ASSERT1("s巜char",511 ＜ len);len=511;}
    if(s__)
        {
        s__[len]='\0';
        WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR)s源, -1, s__, len, NULL, NULL);
        return s__;
        }        
    else
        {
        Lchar512G[len]='\0';
        WideCharToMultiByte(CP_UTF8, 0, (LPCWSTR)s源, -1, Lchar512G, len, NULL, NULL);
        return Lchar512G;
        }
    }
    
静联 char* Ψs巜char(cchar*s源)  
    {  
#ifdef __PRINT__
    if (s源  二二  NULL){printf("!!= %d\n",s源);return NULL;}
#endif
    int len= WideCharToMultiByte( CP_UTF8,0,(LPCWSTR)s源, -1, NULL, 0,NULL, NULL );
    //int len= MultiByteToWideChar(CP_ACP,0,s源,strlen(s源),NULL,0);
    char*ΨΨshar = tMalloc(len+1,char);
    memset( ( void*)ΨΨshar, 0, sizeof( char )*( len + 1 ) );
    WideCharToMultiByte( CP_UTF8,0,(LPCWSTR)s源, -1,ΨΨshar,  len, NULL, NULL );
    return ΨΨshar;
    }
    
静联 char*s巜wstring(const wstring& ws )
    {
    //√ 这个是想要的转换成>>螖螖鍔燺
    // wide char to multi char
    int len= WideCharToMultiByte( CP_UTF8,0,ws.c_str(), -1, NULL, 0,NULL, NULL );//:: 表示它是1个全局的，
    Lchar512G[len]='\0';
    WideCharToMultiByte( CP_UTF8,0,ws.c_str(), -1,Lchar512G,  len, NULL, NULL );
    return Lchar512G;
    }

静联 char*s巜wchar(const wchar_t *wc,\
                                                            char*s__=NULL)//const wchar_t 
    {//●●从"bbc我" 转为 "bbc鎴?"
#ifdef __PRINT__
    if (wc  二二  NULL){printf("!!= %d\n",wc);return NULL;}
#endif
    int len = WideCharToMultiByte(CP_UTF8, 0, wc, -1, NULL, 0, NULL, NULL);
    if (len ＜二 0)
        return NULL;
    ASSERT1R("s巜wchar",511 ＜ len,NULL);
    if(s__)
        {
        s__[len]='\0';
        WideCharToMultiByte(CP_UTF8, 0, wc, -1, s__, len, NULL, NULL);
        return s__;
        }        
    else
        {
        Lchar512G[len]='\0';
        WideCharToMultiByte(CP_UTF8, 0, wc, -1, Lchar512G, len, NULL, NULL);
        return Lchar512G;
        }
    }

静联 char*Ψs巜wchar(const wchar_t *wc)//const wchar_t 
    {//●●从"bbc我" 转为 "bbc鎴?"
#ifdef __STL_TO_LIST__
    if (wc  二二  NULL){PRINT_1(!!,wc,d);return NULL;}
#endif
    int len = WideCharToMultiByte(CP_UTF8, 0, wc, -1, NULL, 0, NULL, NULL);
    if (len ＜二 0)
        return NULL;
    char*ΨΨshar = tMalloc(len+1,char);//memset( ( void*)ΨΨshar, 0, sizeof( char )*( len + 1 ) );
    WideCharToMultiByte(CP_UTF8, 0, wc, -1, ΨΨshar, len, NULL, NULL);
    return ΨΨshar;
    }
    
静联 char*ΨΨs巜wchar2(const wchar_t* wc)//(in,out)  
    {  
    size_t nLen=wcslen(wc)*2,iReturnLen;//wcslen  ＜ string.h>   
    char* lpszBuf=(char*)malloc(nLen);//malloc  ＜ stdlib.h> 丶丶  ＜ malloc.h>   
    iReturnLen=wcstombs(lpszBuf,wc,nLen);//wcstombs  ＜ stdlib.h>   
    if(iReturnLen ＜ 0)  
        {  
        free(lpszBuf);  
        return false;  
        }  
  
    return lpszBuf;  
    }
    
静联 char*s巜wcharU(const wstring&wc,\
                                                                    char*s__=NULL )
    {
    //√ 这个是想要的转换成>>螖螖鍔燺,但打印正常
    // wide char to multi char
    int len= WideCharToMultiByte( CP_ACP,0,wc.c_str(), -1, NULL, 0,NULL, NULL );//:: 表示它是1个全局的，
    if (len ＜二 0)
        return NULL;
    ASSERT1R("s巜wcharU",511 ＜ len,NULL);
    if(s__)
        {
        s__[len]='\0';
        WideCharToMultiByte(CP_ACP, 0, wc.c_str(), -1, s__, len, NULL, NULL);
        return s__;
        }        
    else
        {
        Lchar512G[len]='\0';
        WideCharToMultiByte( CP_ACP,0,wc.c_str(), -1,Lchar512G,  len, NULL, NULL );
        return Lchar512G;
        }

    }
    
//==================================================
静联 wchar_t* wc巜char(cchar*s源,\
                                                        wchar_t*wc__=NULL )  
    {  
    int len = MultiByteToWideChar(CP_ACP,0,s源,strlen(s源),NULL,0);  
    if (len ＜二 0)
        return NULL;
    ASSERT1R("wc巜char",511 ＜ len,NULL);
    if(wc__)
        {
        MultiByteToWideChar(CP_ACP, 0, s源,strlen(s源), wc__, len);
        wc__[len]='\0';
        return wc__;
        }        
    else
        {
        MultiByteToWideChar( CP_ACP,0,s源,strlen(s源),Lwchar512G,  len);
        Lwchar512G[len]='\0';
        return Lwchar512G;
        }    
    }  

静联 wchar_t* wc巜charU(cchar*s源,\
                                                            wchar_t*wc__=NULL )  
    {  
    int len = MultiByteToWideChar(CP_UTF8,0,s源,strlen(s源),NULL,0);  
    if (len ＜二 0)
        return NULL;
    ASSERT1R("wc巜charU",511 ＜ len,NULL);
    if(wc__)
        {
        MultiByteToWideChar(CP_UTF8, 0, s源,strlen(s源), wc__, len);
        wc__[len]='\0';
        return wc__;
        }        
    else
        {
        MultiByteToWideChar( CP_UTF8,0,s源,strlen(s源),Lwchar512G,  len);
        Lwchar512G[len]='\0';
        return Lwchar512G;
        }      
    }  
//----UTF-8 to Unicode----------------------------------------------
静联 void wchar_string(const wchar_t*wc,string& sDst_)
    {
    const wchar_t*wText = wc;
    DWORD dwNum = ::WideCharToMultiByte(CP_OEMCP,NULL,wText,-1,NULL,0,NULL,FALSE);// WideCharToMultiByte的运用
    char*psText; // psText为char*的临时数组，作为三给string的中间变量
    psText = tMalloc(dwNum,char);
    ::WideCharToMultiByte (CP_OEMCP,NULL,wText,-1,psText,dwNum,NULL,FALSE);// WideCharToMultiByte的再次运用
    sDst_ = psText;// string三
    Free(psText);// psText的清除
    }
静联 string str巜wchar(const wchar_t*wc)
    {
    const wchar_t*wText = wc;
    DWORD dwNum = ::WideCharToMultiByte(CP_OEMCP,NULL,wText,-1,NULL,0,NULL,FALSE);// WideCharToMultiByte的运用
    char*psText; // psText为char*的临时数组，作为三给string的中间变量
    psText = tMalloc(dwNum,char);
    ::WideCharToMultiByte (CP_OEMCP,NULL,wText,-1,psText,dwNum,NULL,FALSE);// WideCharToMultiByte的再次运用
    string sDst= psText;// string三
    delete []psText;// psText的清除
    return sDst;
    }

静联 string str巜stringU( const string& str ) //乱码转正常
    {
    //int  len = str.冖();
    int  unicodeLen = ::MultiByteToWideChar( CP_UTF8, 0, str.c_str(),-1, NULL,  0 );
    if (unicodeLen ＜二 0)
        return NULL;
    ASSERT1R("str巜stringU",511 ＜ unicodeLen,NULL);
    wcUnicode512G[unicodeLen]='\0';
    memset(wcUnicode512G,0,(unicodeLen+1)*sizeof(wchar_t));
    ::MultiByteToWideChar( CP_UTF8, 0, str.c_str(), -1, (LPWSTR)wcUnicode512G, unicodeLen );

    string STR;wchar_string(wcUnicode512G,STR);
    //wstring ws__ = ( wchar_t*)wcUnicode512G;
    
    return STR;
    //return  ws__;

    }
    

静联 string str巜charU(cchar*s源 )//乱码转正常
    {
    //int  len = s源->冖();
    int  unicodeLen = ::MultiByteToWideChar( CP_UTF8, 0, (LPCSTR)s源,-1, NULL,  0 );
    if (unicodeLen ＜二 0)
        return NULL;
    ASSERT1R("str巜charU",511 ＜ unicodeLen,NULL);
    wcUnicode512G[unicodeLen]='/0';
    memset(wcUnicode512G,0,(unicodeLen+1)*sizeof(wchar_t));
    ::MultiByteToWideChar( CP_UTF8, 0, (LPCSTR)s源, -1, (LPWSTR)wcUnicode512G, unicodeLen );

    string STR;wchar_string(wcUnicode512G,STR);
    //wstring ws__ = ( wchar_t*)wcUnicode512G;
    
    return STR;
    //return  ws__;

    }
    

  //wstring高字节不为0，返回FALSE
静联 bool bWstring_string_(const wstring &wstr,string &str__)
    {    

    int nLen = (int)wstr.length();    
    str__.assign(nLen,' ');
    
    int nResult = ::WideCharToMultiByte(CP_ACP,0,(LPCWSTR)wstr.c_str(),nLen,(LPSTR)str__.c_str(),nLen,NULL,NULL);
    
    if (nResult  二二  0)
        {
        return false;
        }
    return true;
    }
        

////////////////////////////////////////////
静联 void 〇(char*s源__)
    {
    ASSERTR(s源__ 二二 NULL,);
    s源__[0]='\0';
    }
静联 bool 卩〇(char*s源__)
    {
    ASSERTR(s源__ 二二 NULL,false);
    return s源__[0]=='\0';
    }
// 静联 uint 冖(char*s源__)
    // {
    // ASSERTR(s源__ 二二 NULL,0);
    // return strlen(s源__);
    // }
静联 uint 冖s(cchar*s)
    {
    if(s 二二 NULL)return 0;
    return strlen(s);
    }
静联 float& f巜s(char*S)
    {
    sscanf( S, "%f", &fChar);return fChar;
    }
静联 int& i巜s(char*S)
    {
    sscanf( S, "%d", &iChar);return iChar;
    }
静联 cint& i巜c(char c)
    {
    // return atoi(c);
    // char c1='3';
    return c-'0';
    }
    
//====只复制 i源长====================================================
静联 void 吅s(cchar*s源,char*s__,int i源长)//只要前面的 [abc]i源长 efg
    {
    ASSERT(s源 二二 NULL);ASSERT(s__ 二二 NULL);
    #ifdef _PRINT_HEAD_LIB_
        //if(i源长>strlen(s源))printf("★★iC长>strlen(s源),i源长=%d·strlen(s源)=%d",i源长,strlen(s源));
    #endif

    //ASSERT(i源长>strlen(s源));
    int i=0;
    for(i=0;i ＜ i源长;++i)
        {
        s__[i]=s源[i];//printf("s源= %s源\n",s__[i]);
        }
    s__[i]='\0';
    }

    
静联 char*Ψchar(匚int i数入 \
                                    ,char*c前缀=0,char*c后缀=0)//5462
    {
    char s[128];
    itoa (i数入,s,10);
    //printf("i数入= %d·%s\n",i数入,s);
    if(c前缀 丶丶 c后缀)
        十s_(c前缀,s,c后缀,s转成数字G);
    else if(c前缀)
        十s_(c前缀,s,s转成数字G);
    else if(c后缀)
        十s_(s,c后缀,s转成数字G);
    
    //printf("s转成数字G=%s\n",s转成数字G);
    return s转成数字G;
    }
    
//==================================================
静联 string str寻隔左右(cchar s找[],char&_c分隔,bool b是左)
    {
    int i丅;string s左右;
    for(i丅=0;i丅 ＜ strlen(s找);i丅++)
        {
        printf("s找  %s源\n",s找[i丅]);
        if(s找[i丅]==_c分隔)
            break;
        }
    if(b是左)
        {
        s左右.assign(s找, 0, i丅);
        //memcpy(&s左右,s找,sizeof(char)*i丅);
        }
    //-----------------------------------------------
    else
        {  
        s左右.assign(s找, i丅+1,strlen(s找) );
        }
    printf("i丅  %d \n",i丅);
    
    return s左右;
    }    


////////////////////////////////////////////
静联 char* ΨΨs(int iSize)
    {int i;
    if(iSize ＜ 1)return NULL;
    //char*Ψ1s=tMalloc(iSize+1,char);Ψ1s[iSize]='\0';//●●这个在release 下为零长度.
    char*Ψ1s=tMalloc(iSize+1,char);for(i=0;i ＜ iSize;++i){Ψ1s[i]='0';}
    Ψ1s[iSize]='\0';
    return Ψ1s;
    }    
    
静联 char*ΨΨs(cchar*s源)//●传入指针引用0
    {
    if(s源 二二 NULL)return NULL;
    int i=0,iSize=strlen(s源);char*Ψ1s=tMalloc(iSize+1,char);
    for(i=0;i ＜ iSize;++i)
        {
        Ψ1s[i]=s源[i];//printf("s源= %s源\n",Ψ1s[i]);
        }
    Ψ1s[i]='\0';
    return Ψ1s;
    }
   
静联 bool 罒s(cchar*s找,cchar*s源 \
                                                                    ,匚bool b不提示error=false,匚bool b匹配后面=false)//s源 必须 > s找
    {
    ASSERT(s找 二二 NULL);ASSERT(s源 二二 NULL);
    int 冖源=strlen(s源),冖找=strlen(s找);int i剩=冖源-冖找;
    //PRINT4if(DJS,"",s源,s找,strcmp(s源,s找),i剩);
    //printf("s找= %s,源= %s,%d,%d,",s找,s源,strcmp(s源,s找),i剩);
    if(i剩 ＜ 0)
        {
        if(b不提示error 二二 false)
            {
            // printf("!!!★★i长对比>冖源  罒s,  冖找= %d ·i长源 = %d·c对比=%s·c源=%s \n",冖找,冖源,s找,s源);
            }
        return false;
        }
    if(i剩 二二 0)
        {
        if(strcmp(s源,s找)==0)
            {
            //printf("▲找到  Ψs前_= %s · s找= %s\n",Ψs前_,s找);
            return true;
            }
        }
    //------------------------------
    char *Ψs前_=ΨΨs(冖找+1);//printf("strlen(Ψs前_)=%d○i分隔=%d",strlen(Ψs前_),冖找);
    if(b匹配后面)
        b卝(i剩,s源,Ψs前_,false);
    else
        b卝(冖找,s源,Ψs前_,true);
    //printf("s源= %s · Ψs前_= %s\n",s源,Ψs前_);
    if(strcmp(Ψs前_,s找)==0)
        {
        //printf("▲找到  Ψs前_= %s · s找= %s\n",Ψs前_,s找);
        Free(Ψs前_);
        return true;
        }
    //MALLOC(10,float,Ψf);Free(Ψf);
    Free(Ψs前_);
    return false;
    }
//deque<int>Qξc;
//----是数字--------------------------
静联 cbool b是数(char*S,匚int ξ=0)
    {
    return S[ξ]=='-'||(S[ξ]>='0'&&S[ξ] ＜二 '9');
    }
    
//----是字母--------------------------
静联 cbool b是字母(char*S,匚int ξ=0)
    {
    return (S[ξ]>='a'&&S[ξ] ＜二 'z')||(S[ξ]>='A'&&S[ξ] ＜二 'Z');
    }

静联 bool&b是注释(ccharΨc&s源 \
                                                ,cchar c编程语言='c' )
    {{
    匚int iSize=strlen(s源),SIZE一1=iSize-1;
    if(c编程语言=='c')
        {
        for(int i=0;i ＜ iSize;++i)
            {
            cchar&c=s源[i];
            if(c==' ')
                continue;
            //------------------------------
            else if(c=='/')
                {
                if(i!=SIZE一1)
                    {
                    if(s源[i+1]=='/')//
                        return b是否G=true;
                    // else if(s源[i+1]=='*')//*
                        // {
                        // }
                    }
                
                }
            else if(c=='#')
                return b是否G=true;
            }
        }
    //----py--------------------------
    else if(c编程语言=='p')
        {
        for(int i=0;i ＜ iSize;++i)
            {
            cchar&c=s源[i];
            if(c==' ')
                continue;
            //------------------------------
            else if(c=='#')
                {
                return b是否G=true;
                }
            }

        }
    return b是否G=false;
    }}
    
静联 bool&b是define(ccharΨc&s源)
    {{
    匚int iSize=strlen(s源),SIZE一1=iSize-1;
    for(int i=0;i ＜ iSize;++i)
        {
        cchar&c=s源[i];
        if(c==' ')
            continue;
        //------------------------------
        else if(c=='#')
            {
            return b是否G=true;
            }
        }

    return b是否G=false;
    }}
    

//========================================
静联 char c首符(ccharΨc&s源)
    {
    匚int iSize=strlen(s源);
    for(int i=0;i ＜ iSize;++i)
        {
        cchar&c=s源[i];
        if(c==' ')
            continue;
        else
            return c;
        }
    return '\0';
    }
    
静联 bool b全空格(ccharΨc&s源)
    {
    匚int iSize=strlen(s源);
    for(int i=0;i ＜ iSize;++i)
        {
        cchar&c=s源[i];
        if(c==' ')
            continue;
        else
            return false;
        }
    return true;
    }
    
静联 bool 罒c(char c找,cchar*s源 \
                                            ,bool b巛=false)//s源 必须 > c找
    {
    ASSERT1R("罒c",strlen(s源)==0,false);
    if(b巛 二二 false)
        {
        while (*s源 != '\0' 丶丶 *s源 != c找)
            s源++;
        
        if (*s源  二二 c找)
            return (char *)s源;
        }
    else
        {
        int i,i长源=strlen(s源)-1;
        for(i=i长源;i>-1;--i)
            {
            if(c找 二二 s源[i])
                return true;
            }
        }
	return false;
    }
//========================================
静联 bool 罒c(initializer_list<char> Ls找,cchar*s源 \
                                            ,bool b巛=false);//s源 必须 > s找
    
//====只要找到1个==========================
静联 bool 罒丨c(initializer_list<char> Ls找,cchar*s源 \
                                            ,bool b巛=false);//s源 必须 > s找

静联 ccharΨc&s罒后缀(cchar*&s源)
    {
    if(s源 二二 NULL){ASSERT(s源 二二 NULL );return sNULLG;}
    int i=0,j=0,k=0,iSize=strlen(s源);〇(Lchar512G);
    // char Lchar256G[i128],Lchar512G[i128];
    for(i=iSize-1;i>-1;--i,++j)
        {
        cchar&c=s源[i];
        Lchar256G[j]=c;//printf("j=%d,Lchar256G[j]= %c\n",j,Lchar256G[j]);//[ppc.]
        if(c=='.')
            {--j;//不要.
            for(k=0;j>-1;--j,++k)
                {//printf("k=%d,j=%d,Lchar256G[j]= %c\n",k,j,Lchar256G[j]);
                Lchar512G[k]=Lchar256G[j];
                }
            Lchar512G[k]='\0';//printf("k=%d,Lchar512G= %s\n",k,Lchar512G);
            return Ψchar512G;
            }
        }
    return Ψchar512G;
    }

静联 int iCharCmp(cchar *c1,cchar * c2长,cchar _c分隔)
    {
    int i, iLen=strlen(c2长);//bool b是相等=false;
    for(i=0;i ＜ iLen;++i)
        {
        if(c2长[i]==_c分隔)
            break;        
        if(c1[i]!=c2长[i])
            {return -1;}

        }
    
    return 0;
    }

静联 bool bDeleteStr( string &s,cchar _c分隔)//改变s自己
    {
    bool b有分隔=false;
    for(string::iterator ψ=s.begin();ψ!=s.end();ψ++)
        {
        if(*ψ 二二 _c分隔)
            {s.erase(ψ,s.end());b有分隔=true;break;}
            
        }
    #ifdef __PRINT__
        cout<<"delete s="<<s<<endl;    
    #endif

    if(b有分隔)
        return true;
    else
        return false;
    }
    
静联 char*ΨΨ十(cchar*c1,cchar*c2)
    {
    //PRINT_2(ΨΨ十,c1,c2,s,s);
    ASSERT(c1 二二 NULL);ASSERT(c2 二二 NULL);
    int i,iSize=strlen(c1),iSize2=strlen(c2);//printf("c1= %s○c2= %s○ iSize= %d\n",c1,c2,iSize);
    ASSERT1(c1,iSize 二二 0);ASSERT1(c2,iSize2 二二 0);
    char*Ψc合=tMalloc(iSize+iSize2+1,char);
    int i合=iSize+iSize2;
    //char*Ψc合=ΨΨs(i合+1);
   for(i=0;i ＜ iSize;++i)
        {
        Ψc合[i]=c1[i];
        }
    int j=iSize;//printf("1 Ψc合= %s\n",Ψc合);
   for(i=0;j ＜ i合;++j,++i)
        {
        Ψc合[j]=c2[i];
        }
    Ψc合[j]='\0';
    //printf("2 Ψc合= %s\n",Ψc合);
    return Ψc合;
    }
    
静联 char*ΨΨ十(cchar*c1,cchar*c2,cchar*c3)
    {
    //PRINT_3(ΨΨ十,c1,c2,c3,s,s,s);
    ASSERT(c1 二二 NULL);ASSERT(c2 二二 NULL);ASSERT(c3 二二 NULL);
    int i,iSize=strlen(c1),iSize2=strlen(c2),iSize3=strlen(c3);//printf("c1= %s○c2= %s○ iSize= %d○ iSize2= %d○ iSize3= %d\n",c1,c2,iSize,iSize2,iSize3);
    ASSERT(iSize 二二 0 丨丨 iSize2 二二 0 丨丨 iSize3 二二 0);
    char*Ψc合=tMalloc(iSize+iSize2+iSize3+1,char);
    int i合1=iSize+iSize2, i合2=iSize+iSize2+iSize3;
    //char*Ψc合=ΨΨs(i合+1);
   for(i=0;i ＜ iSize;++i)
        {
        Ψc合[i]=c1[i];
        }
    int j=iSize;//printf("1 Ψc合= %s\n",Ψc合);
   for(i=0;j ＜ i合1;++j,++i)
        {
        Ψc合[j]=c2[i];
        }
    int key=i合1;//printf("2 Ψc合= %s\n",Ψc合);
   for(i=0;key ＜ i合2;key++,++i)
        {
        Ψc合[key]=c3[i];
        }        
        
    Ψc合[key]='\0';//printf("3 Ψc合= %s\n",Ψc合);
    return Ψc合;
    }


// template<typename T>
// bool in(匚T i要找,initializer_list<T> Vi被找)
    // {
    // for(const auto&i被找:Vi被找)
        // {printf("i被找= %s,%s,%d\n",i要找,i被找,i要找 二二 i被找);
        // if(i要找 二二 i被找)
            // return true;
        // }
    // return false;
    // }
    
//////////////////////////////////
#ifdef __PRINT__
    //----map----------------------------------------------------
    template<typename VAL>
    void Δ合并名(int key,map<int,VAL>&Mt_,char *ch合__=NULL)
        {
        #ifdef PRINT_HEAD地
            cout<<"<  ＜   ＜  int "<<str巜charU(__func__)<<endl;
        #endif
        //const char* cID=typeid(VAL).name();//找vector
        //PRINT_1(,cID,s);
        //if(strlen(cID)>13)//class std::map 或 class std::vector
            {
            //if(罒s("class std::vector",cID))
                {
                const char*s名D=Mt_.getName();
                char c_[2]="{",*ΨΨs合=ΨΨ十(s名D,c_);//Dxx{
                if(s名D)
                    {
                    //printf("ΨΨs合= %s\n",s名D);//return true;
                    //const char*cKid=typeid(key).name();
                    char *ΨΨs合合=NULL;//Dxx{key
                    //----int--------------------------
                    char c数[10];
                    itoa((int)key,c数,10);
                    ΨΨs合合=ΨΨ十(ΨΨs合,c数);
                    Mt_[key].SetName(ΨΨs合合);//PRINT_1(,ΨΨs合合,s);
                    if(ch合__)
                        {s_s_(ΨΨs合合,ch合__);}
                    Free(ΨΨs合合);
                    }
                    
                Free(ΨΨs合);
                }
            }
        }    
        
    template<typename VAL>
    void Δ合并名(float key,map<float,VAL>&Mt_,char *ch合__=NULL)
        {
        #ifdef _PRINT_HEAD_LIB_
            //cout<<"<  ＜   ＜  float "<<str巜charU(__func__)<<endl;
        #endif
        //const char* cID=typeid(VAL).name();//找vector
        //if(strlen(cID)>13)
            {
            //if(罒s("class std::vector",cID))
                {
                char c_[2]="{",*s名D=Mt_.getName(),*ΨΨs合=ΨΨ十(s名D,c_);//Dxx{
                if(s名D)
                    {
                    //printf("ΨΨs合= %s\n",s名D);//return true;
                    //const char*cKid=typeid(key).name();
                    char *ΨΨs合合=NULL;//Dxx{key
                    //----float--------------------------
                    char c数[10];
                    bF_char((float)key,c数);
                    ΨΨs合合=ΨΨ十(ΨΨs合,c数);
                    Mt_[key].SetName(ΨΨs合合);
                    if(ch合__)
                        {s_s_(ΨΨs合合,ch合__);}
                    Free(ΨΨs合合);
                    }
                Free(ΨΨs合);
                }
            }
        }
    template<typename VAL>
    void Δ合并名(char*key,map<char*,VAL>&Mt_,char *ch合__=NULL)
        {
        #ifdef _PRINT_HEAD_LIB_
            //cout<<"<  ＜   ＜  char "<<str巜charU(__func__)<<endl;
        #endif
        //const char* cID=typeid(VAL).name();//找vector
        //if(strlen(cID)>13)
            {
            //if(罒s("class std::vector",cID))
                {
                const char c_[2]="{",*s名D=Mt_.getName();char*ΨΨs合=ΨΨ十(s名D,c_);//Dxx{
                if(s名D)
                    {
                    //printf("ΨΨs合= %s\n",s名D);//return true;
                    //const char*cKid=typeid(key).name();
                    char *ΨΨs合合=NULL;//Dxx{key
                    //----char--------------------------
                    ΨΨs合合=ΨΨ十(ΨΨs合,key);
                    Mt_[key].SetName(ΨΨs合合);
                    if(ch合__)
                        {s_s_(ΨΨs合合,ch合__);}
                    Free(ΨΨs合合);
                    }
                Free(ΨΨs合);
                }
            }
        }
    template<typename VAL>
    void Δ合并名(string key,map<string,VAL>&Mt_,char *ch合__=NULL)
        {
        #ifdef _PRINT_HEAD_LIB_
            //cout<<"<  ＜   ＜  char "<<str巜charU(__func__)<<endl;
        #endif
        //const char* cID=typeid(VAL).name();//找vector
        //if(strlen(cID)>13)
            {
            //if(罒s("class std::vector",cID))
                {
                const char c_[2]="{",*s名D=Mt_.getName();char*ΨΨs合=ΨΨ十(s名D,c_);//Dxx{
                if(s名D)
                    {
                    //printf("ΨΨs合= %s\n",s名D);//return true;
                    //const char*cKid=typeid(key).name();
                    char *ΨΨs合合=NULL;//Dxx{key
                    //----string--------------------------class std::basic_string<....
                    ΨΨs合合=ΨΨ十(ΨΨs合,key.data());
                    Mt_[key].SetName(ΨΨs合合);
                    if(ch合__)
                        {s_s_(ΨΨs合合,ch合__);}
                    Free(ΨΨs合合);
                    }
                Free(ΨΨs合);
                }
            }
        }
    //========================================
    #else
        #define Δ合并名

#endif


//====只得出正数====================================
静联 uint atoi十(const char *src)
    {
    register uint I= 0;
      // bool b负 = false;
  
    while(*src == ' ')  //跳过空白符
        {
        ++src; 
        }
  
    if(*src == '+'  丨丨  *src == '-')//如果遇到正负号，说明可以往后继续走
        {
        // if(*src == '-')
            // {
            // b负 = true;
            // }
        ++src;
        }
    else if(*src < '0'  丨丨  *src > '9')  //如果第一位既不是符号也不是数字，直接返回异常值
        {
        I = 88888888;
        return  I;
        }
  
    while(*src != '\0' 丶丶 '0'  ＜二 *src 丶丶 *src ＜二  '9')//如果遇到的数字说明可以继续往下走
        {
        I =  I* 10 + *src - '0';
        ++src;
        }
    return I;
    // return s * (b负 ? -1 : 1);
    }
    

    
//==============================
静联 void PRINTt(const wchar_t*wc)
    {
    if(wc 二二 NULL){printf("★★ wc二二 NULL\n");return;}
    
    printf("%s",s巜wcharU(wc));
    }

////END////END////END////END////END////END////END////END////
#endif
    



    