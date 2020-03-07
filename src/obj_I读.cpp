

////////////////////////////////////////////
__forceinline void Δ得物名(char s1行_[],char s名__[],匚int i下标开始=0)
    {
    匚int iSize=strlen(s1行_);int j=0;
    for(int i=i下标开始;i ＜ iSize;++i,++j)
        {
        匚char c=s1行_[i];
        if(c 二二 '\n')//下1个空格也就是结束
            {
            s名__[j]='\0';return ;
            }
        s名__[j]=c;
        
        }

    }
    
__forceinline void Δ得物名(FILE*&Ψfile读,char s名__[],匚int i下标开始=0,匚bool b直到下1行=true)
    {
#ifdef _PRINT_HEAD_
    printf("『『『 %s \n",s巜charU(__func__));
#endif
    char c;int  j=0,i移动=0;
    while(1)
        {
        c=c乛(Ψfile读);++i移动;PRINT1if(IOOBJ,"",c);
        if(i移动 ＜ i下标开始)continue;
        if(c 二二 '\n')//下1个空格也就是结束
            {
            s名__[j]='\0';return ;
            }
        s名__[j]=c;++j;
        }
    if(b直到下1行 二二 false)
        巜乛s(-i移动,Ψfile读);//回退2位
    }

// 二二二二 ξ物G ■, i面数总G ■,i点数总G ■ ,VB物序b有uvG ●二二二二二二二二二二二二二二二二二二二二二二二二二二
EXC int iΔobj点数(cchar *filepath,bool bp导入材质,bool bp分裂物,bool bp检查文件破损,int &i物数__) 
    {printf("◣开始=");
// #ifdef _PRINT_HEAD_
    printf("『『『 %s ,bp导入材质=%d,bp分裂物=%d,bp检查文件破损=%d\n",s巜charU(__func__),bp导入材质,bp分裂物,bp检查文件破损);
// #endif
PTtime亖亖("开始",true);
    int i属性=-1;
    FILE*Ψfile读=file检测后缀(filepath,".obj",".OBJ",i属性);if(Ψfile读 二二 NULL){return 0;}
    i格式G=iWinUnix(Ψfile读);c换行符G=(i格式G 二二 0)? '\n' :'\r';
    PRINT1("●",i格式G);
    //----读写文件 ------------------------------------
    char s物名[i128],*s读=NULL,*s分隔=NULL;int i,j;
    //----CLEAR--------------------------
    i点数总G=i面数总G=ξ点G=ξ面G=ξ环总G=0;ξ物G=-1;
    Δ灬G();
    int R;//卍v v;卍vt vt;卍vn vn;卍fvt fvu;卍fvn fvn;卍fvtn3 fvun;
    // Q物序i点数G.push_back(0);Q物序i环数G.push_back(0);Q物序i面数G.push_back(0);Add(Q物序Q面序i面点数G);//● 无论v o 先后 多1个
    bool b第1次遇g=false,b第1次遇o=false,b已检测uv=false;string str物名;
    bg在o前G=b第1次遇vG=b是v后6个数G=false;b是连续vG=b第1次遇其它G=true;//PRINT0(str--------------------------);
    DEQUE(ushort,Q物序b有uv);DEQUE(ushort,Q物序b有坏数据);DEQUE(ushort,Q物序i有法线);DEQUE(string,Q物序str组);DEQUE(ushort,Q物序b负索引);
    //----判断是否连续v--------------------------
    char s1行_[i256+1];    register char c;register int i移动=0;//I=100;
    //----检查文件破损--------------------------
    if(bp检查文件破损)
        {register int i行数=0;
        while(1)
            {
            c=c乛(Ψfile读);if(c 二二 EOF)break;
            //----V,必须以v为物体开头--------------------------
            if(c 二二 'v')
                {
                while(1)
                    {
                    c=c乛(Ψfile读);
                    if(c 二二 ' ')//v 12.3 12.3
                        {
                        //----第1个物体--------------------------
                        if(b第1次遇其它G)
                            {
                            b第1次遇其它G=False;
                            if(b第1次遇vG 二二 false)
                                {
                                b第1次遇vG=true;++ξ物G;
                                
                                Q物序b有坏数据.push_back(false);
                                }
                            }
                        }
                    //------------------------------
                    else if(c 二二 '	')//坏数据
                        {ASSERT2db("★★OBJ file broken in line:",s巜i(1+i行数),true);
                        二(true,Q物序b有坏数据[ξ物G]);break;
                        }
                    else if(c 二二 '\n')//有可能结尾有' '
                        {++i行数;break;}
                    if(c 二二 EOF)goto GOTO0;
                    }
                }
            //----其它--------------------------
            else
                {
                //----F--------------------------
                if(c 二二 'f')//● 有可能 不是面,例如 g off
                    {
                    while(1)
                        {
                        c=c乛(Ψfile读);//PRINT3if(IOOBJ+0,"□0",ξ面G ,c 二二 ' ',c);乛cPT巜3("1",Ψfile读);
                        if(c 二二 ' ')//f空格123
                            {
                            if(b第1次遇其它G 二二 false)
                                {二(true,b第1次遇其它G);二(false,b第1次遇vG);}
                            }
                        //------------------------------
                        else if(c 二二 '	')//坏数据
                            {ASSERT2db("★★OBJ file broken in line:",s巜i(1+i行数),true);
                            二(true,Q物序b有坏数据[ξ物G]);break;
                            } 
                        else if(c 二二 '\n')//有可能结尾有' '
                            {++i行数;break;}                            
                        if(c 二二 EOF)goto GOTO0;
                        }
                    
                    }
                //----其它行--------------------------
                else
                    {
                    乛乛_丨s(c,Ψfile读);++i行数;
                    }
                }
            
            }
GOTO0:
        丨巜巜s(Ψfile读);//回到文件开头    
        }
        
    //========================================
    while(1)
        {
        // PRINT1if(IOOBJ+0,str----------,s1行_);
        乛s卩(Ψfile读,i256,s1行_,break);//PRINT2if(IOOBJ,"",s1行_,s1行_[0] 二二 'o');
        //乛丨卩丨(s1行_,s分隔,s1行_[0] ,s1行_[1]);
        // PRINT1if(IOOBJ+0,"",s1行_);
        //----V,必须以v为物体开头--------------------------
        if(s1行_[0] 二二 'v')
            { 
            if(s1行_[1] 二二 ' ')//v 12.3 12.3
                {
                //----检测 b是v后6个数G--------------------------
                int 冖行=strlen(s1行_),i几个空格=0;
                while(0 ＜ --冖行)
                    {
                    if(s1行_[冖行]二二 ' ')
                        ++i几个空格;
                    }
                b是v后6个数G=(5 ＜ i几个空格)?  true : false;
                //------------------------------
                乛s卩(Ψfile读,i256,s1行_,break);//第2行
                if(s1行_[0] 二二 'v')
                    { 
                    if(s1行_[1] 二二 ' ')//v
                        {            
                        b是连续vG=true;
                        }
                    else
                        {
                        b是连续vG=false;
                        }
                    break;
                    }
                }
            }
        
        }

    丨巜巜s(Ψfile读);//回到文件开头
    //----------------------------------------
    ξ物G=-1;bg在o前G=b第1次遇vG=b是v后6个数G=false;b是连续vG=b第1次遇其它G=true;
    while(1)
        {
        // PRINT0db (IOOBJ+0,====================================);
        // 乛s卩(Ψfile读,i512,s1行_,break);//PRINT2if(IOOBJ,"",s1行_,c 二二 'o');
        // 丨卌(Ψfile读);
        c=c乛(Ψfile读);++i移动;//PRINT3db("",c,c 二二 EOF, EOF);//向右移动了1位

        if(c 二二 EOF)break;
        // PRINT1if(IOOBJ+0,"◣ ",c);
        //----V,必须以v为物体开头--------------------------
        if(c 二二 'v')
            {
            c=c乛(Ψfile读);++i移动;
            if(c 二二 ' ')//v
                {
                // PRINT3if(IOOBJ+0,"◣◣ ",b第1次遇其它G,b第1次遇vG,c);
                //----第1个物体--------------------------
                if(b第1次遇其它G)
                    {
                    b第1次遇其它G=False;
                    if(b第1次遇vG 二二 false)
                        {
                        b第1次遇vG=true;
                        ξ点G=ξ面G=0;++ξ物G;
                        Q物序i点数G.push_back(0);Q物序i环数G.push_back(0);Q物序i面数G.push_back(0);Add(Q物序Q面序i面点数G);
                        Q物序b有uv.push_back(false);Q物序i有法线.push_back(false);
                        if(bg在o前G 二二 false)
                            Q物序str组.push_back("");
                        b已检测uv=false;
                        }
                    }
                //------------------------------
                ++Q物序i点数G[ξ物G];++i点数总G;
                }
            else if(c 二二 't')//vt
                {
                ++Q物序i环数G[ξ物G];
                }       
            else if(c 二二 'n')//vn 法线
                {

                }
            //----读到尾--------------------------
            if(c!='\n')
                {
                乛s卩(Ψfile读,i256,s1行_,break);
                i移动=0;}
            }
        //----其它--------------------------
        else if(c != 'v')
            {
            //----O--------------------------
            if(c 二二 'o')
                {
                if(b第1次遇g 二二 false)
                    二(true,b第1次遇o);
                //----判断v与o 的先后顺序--------------------------
                Δ得物名(Ψfile读,s物名,0);
                str物名=s物名;
                Q物序str物名G.push_back(str物名);//★★这个 s物名 是临时变量
                //PRINT2if(IOOBJ+0,"2",s巜charU(s物名),ξ物G);
                }
            //----G-有可能没有o 只有g-------------------------
            else if(c 二二 'g')
                {//PRINT1if(IOOBJ+0,"",s1行_);   
                if(b第1次遇o 二二 false)
                    {
                    二(true,b第1次遇g);bg在o前G=true;
                    }
                Δ得物名(Ψfile读,s物名,0);
                if(bg在o前G 二二 false)
                    Q物序str组[ξ物G]=s物名;
                else
                    Q物序str组.push_back(s物名);
                }
            //----F--------------------------
            else if(c 二二 'f')//● 有可能 不是面,例如 g off
                {
                c=c乛(Ψfile读);++i移动;//PRINT3if(IOOBJ+0,"□0",ξ面G ,c 二二 ' ',c);乛cPT巜3("1",Ψfile读);
                if(c 二二 ' ')//f空格123
                    {
                    if(b第1次遇其它G 二二 false)
                        {二(true,b第1次遇其它G);二(false,b第1次遇vG);}                
                    //----检测是否有uv--------------------------
                    if(b已检测uv 二二 false)
                        {
                        c=c乛(Ψfile读);++i移动;
                        int i=2;j=0;int b有uv=0,i有法线=0;
                        if(b是负索引G 二二 false)b是负索引G=c 二二 '-';//第3个c
                        // PRINT2db("0",c,b是负索引G);//4
                        while(1)
                            {
                            c=c乛(Ψfile读);++i移动;//PRINT1db("1",c);//' '
                            if(c 二二 '/')//第1个/
                                {
                                c=c乛(Ψfile读);++i移动;//PRINT1if(IOOBJ+0,"2",c);
                                if(c != '/')//如果连续有第2个 '/' 就是无uv 有法线   ,f v/uv/法 
                                    {
                                    二(1,b有uv);
                                    while(1)
                                        {
                                        c=c乛(Ψfile读);++i移动;//PRINT1db("2",c);
                                        if(c 二二 ' ')//遇空格结束
                                            goto GOTO;
                                        else if(c  二二  '/')//第二个'/'     ,f  v/uv/
                                            {
                                            二(1,i有法线);goto GOTO;
                                            }
                                        }
                                    }
                                else// f v//法   v//法 
                                    {
                                    二(1,i有法线);
                                    }
                                if(c 二二 ' ')//遇空格结束
                                    break;
                                }//if(c 二二 '/')
                            else if(卩换行符(c,i格式G))//结束
                                break;
                            }//while(1)
                    GOTO:
                        Q物序b有uv[ξ物G]=b有uv;Q物序i有法线[ξ物G]=i有法线;PRINT3if(IOOBJ,"++▲",ξ物G,b有uv,i有法线);
                        b已检测uv=True;
                        巜乛s(-i移动+1,Ψfile读);乛cPT巜3("0",Ψfile读);//重头开始
                        }
                    else
                        巜乛s(-2,Ψfile读);//回到第一行开头
                    //----找面点数--------------------------
                    Q物序Q面序i面点数G[ξ物G].push_back(0);
                    while(1)
                        {
                        c=c乛(Ψfile读);
                        // PRINT2if(IOOBJ+0,"□1",ξ面G ,c);
                        if(c 二二 ' ')//第1个空格
                            {
                            c=c乛(Ψfile读);
                            if(c 二二 '\r')//有可能结尾有' '
                                {乛乛_丨s(c,Ψfile读);i移动=0;break;}//读完1行
                            else if(c 二二 '\n')//有可能结尾有' '
                                {break;}//读完1行
                            else if(c 二二 EOF){goto GOTO1;}
                            else//是数字,增加面点数
                                {
                                ++Q物序Q面序i面点数G[ξ物G][ξ面G];//PRINT3if(IOOBJ+0,"++",ξ面G,Q物序Q面序i面点数G[ξ物G][ξ面G],c);
                                }
                            
                            }
                        //------------------------------
                        else if(c 二二 '\r')//有可能结尾有' '
                            {乛乛_丨s(c,Ψfile读);i移动=0;break;}//读完1行
                        else if(c 二二 '\n')//有可能结尾有' '
                            {break;}//读完1行
                        else if(c 二二 EOF)goto GOTO1;
                        //PRINT4db("□",c,c 二二 '\r' ,  c 二二 '\n' ,  c 二二 EOF);if(c 二二 EOF){PRINT0db(GOTO1);goto GOTO1;}
                        
                        }//while
                    // if(b增加)
                        {
                        // Q物序Q面序i面点数G[ξ物G].push_back(0);PTvector亖亖(Q物序Q面序i面点数G);
                        ++ξ面G;++i面数总G;++Q物序i面数G[ξ物G];
                        }
                    
                    }//if(c 二二 ' ')
                //PRINT3if(IOOBJ,"++",ξ面G,i面数总G,s1行_[iSize-3]);//PTvector亖亖if(IOOBJ,Q物序Q面序i面点数G);
                }//else if(c 二二 'f')
            //------------------------------
            else
                {
                if(c 二二 EOF)goto GOTO1;
                if( 卩换行符(c,i格式G) 二二 false)
                    {
                    // 乛乛_丨s(c,Ψfile读);
                    乛s卩(Ψfile读,i256,s1行_,break);
                    i移动=0;}
                }
            }//else if(c != 'v')
        
        }
    //PRINT_5("1",strlen(s分隔),s分隔,c ,s1行_[1],c  二二 ' ',d,s,d);
GOTO1:
//PRINT0db(str--------------------------);
    // 二二  二二 result 二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二 
    i物数__=(bp分裂物)? ξ物G+1  : 1;Q_V(Q物序b有uv,VB物序b有uvG);if(bp检查文件破损)Q_V(Q物序b有坏数据,VB物序b有坏数据G);Q_V(Q物序i有法线,VB物序b有法线G);Q_V(Q物序str组,V物序str组G);
    PRINT4if(IOOBJ+0,"",ξ物G,ξ环总G,i面数总G,i点数总G);
    PTvector亖亖if(IOOBJ+1,Q物序i点数G); PTvector亖亖if(IOOBJ+1,V物序str组G);
    PTvector亖亖if(IOOBJ+1,Q物序i环数G);PTvector亖亖if(IOOBJ+1,Q物序i面数G);
    PTvector亖亖if(IOOBJ+1,Q物序Q面序i面点数G);
    PTvector亖亖if(IOOBJ+0,Q物序str物名G);
    PTvector亖亖if(IOOBJ+1,VB物序b有uvG);PTvector亖亖if(IOOBJ+1,VB物序b有坏数据G);
    PTvector亖亖if(IOOBJ+1,VB物序b有法线G);
    PRINT2("",b是连续vG,b是负索引G);
    
    // PTvector亖亖db(Q物序Q面序i面点数G);
    //------------------------------
    fclose(Ψfile读);
PTtime亖亖(" ",false);
// #ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
// #endif
    // system("PAUSE");
    return 1;
    }
    

//// f v/uv/法·v/uv/法·v/uv/法·v/uv/法  /////////////////////////
// static int i面点序=0,ξUV位s=0,ξ面位尾s=0;
__forceinline void Δ读F卝1行(FILE*&Ψfile读,匚int i面点数, vector<int>&Vξ面点__,vector<int>&Vξ环this__)
    {
#ifdef _PRINT_HEAD_
    printf("『『『 %s \n",s巜charU(__func__));
#endif
    char s面__[16],sUV__[16];
    register int i面点序=0,ξUV位s=0,ξ面位尾s=0;register char c面;
    // i面点序=0,ξUV位s=0,ξ面位尾s=0;
    //------------------------------
    while(1)
        {
        c面=c乛(Ψfile读);PRINT2if(IOOBJ+0,"有",c面,ξ面位尾s);//开始收集面索
        if(c面 二二 ' ')//第1个' '
            {
            ξ面位尾s=0;c面=c乛(Ψfile读);PRINT1if(IOOBJ+0,"○",c面);
            }
        //------------------------------
        if(c面 二二 '/')//  v/ ,第1个'/'
            {
            s面__[ξ面位尾s]='\0';//结束上1个 面索
            Vξ面点__[i面点序]=atoi十(s面__);PRINT3if(IOOBJ+0,"+",s面__,ξ面位尾s,i面点序);//● 减1
            ξ面位尾s=0;
            //----找UV--------------------------
            while(1)
                {
                c面=c乛(Ψfile读);if(c面 二二 EOF){PRINT1if(IOOBJ+0,"◢◢ 退出",c面);return;}
                cchar&cUV=c面;//PRINT3if(IOOBJ+1,"",cUV,ξUV位s,卩换行符(cUV,i格式G));
                if(cUV 二二 '/' 丨丨 cUV 二二 ' ' 丨丨  卩换行符(cUV,i格式G))//第2个/或' ' 就结束这个uv,1/1/
                    {
                    sUV__[ξUV位s]='\0';//PRINT2if(IOOBJ+1,"+1",ξUV位s,i面点序);
                    Vξ环this__[i面点序]=atoi十(sUV__);
                    // PRINT3if(IOOBJ+1,"+2",Vξ环this__[i面点序],sUV__[0],sUV__[1]);
                    ξUV位s=0;//ASSERTexedb("",万 ＜ Vξ环this__[i面点序],PRINT3("",i面点序,Vξ环this__,Vξ环this__[i面点序]););
                    break;
                    }
                
                sUV__[ξUV位s]=cUV;++ξUV位s;//● 可能是几位数
                }
            ++i面点序;PRINT1if(IOOBJ+0,"++",i面点序,c面);
            if(i面点序 二二 i面点数){乛乛_丨s(c面,Ψfile读);PRINT1if(IOOBJ+0,"◢◢ 2退出",c面);return;}//有可能最后有空格
            // continue;//结束一个面点
            }
        else if(c面 二二 EOF 丨丨  卩换行符(c面,i格式G)){PRINT0if(IOOBJ+0,"◢◢ 退出1");return;}
        s面__[ξ面位尾s]=c面;++ξ面位尾s;
        // PTvector亖亖if(IOOBJ+0,Vξ面点__);
        // PTvector亖亖if(IOOBJ+0,Vξ环this__);//● 可能是几位数
        }
    
    }
    
//====f v v v v====================================
__forceinline void Δ读F卝1行无uv(FILE*&Ψfile读, 匚int i面点数,vector<int>&Vξ面点__)
    {//从第1个空格开始
#ifdef _PRINT_HEAD_
    printf("『『『 %s \n",s巜charU(__func__));
#endif
    char s面__[16];
    register int i面点序=0,ξ面位尾s=0;register char c面;
    //------------------------------
    while(1)
        {
        c面=c乛(Ψfile读);PRINT2if(IOOBJ+0,"无uv",c面,ξ面位尾s);//开始收集面索
        // if(c面 二二 EOF)return;
        if(c面 二二 ' ')//f空v空v   前面的第1个' ' 
            {
            //----收集  s面__--------------------------
            while(1)
                {
                c面=c乛(Ψfile读);PRINT2if(IOOBJ+0,"in",c面,c面 二二 ' ');
                if(c面 二二 EOF)return;
                else if(c面 二二 ' ')//第2个' '
                    {s面__[ξ面位尾s]='\0';Vξ面点__[i面点序]=atoi十(s面__); PRINT4if(IOOBJ+0,"空格 ▍break ",s面__,ξ面位尾s,i面点序,Vξ面点__);
                    ξ面位尾s=0;++i面点序;
                    if(i面点序 二二 i面点数){乛乛_丨s(c面,Ψfile读);PRINT1if(IOOBJ+0,"◢◢ 2退出",c面);return;}//有可能最后有空格
                    }//第2个' '
                else if(卩换行符(c面,i格式G))//最后
                    {
                    s面__[ξ面位尾s]='\0';Vξ面点__[i面点序]=atoi十(s面__); PRINT4if(IOOBJ+0,"◢ return ",s面__,ξ面位尾s,i面点序,Vξ面点__);//● 可能是几位数
                    return;
                    }
                else//是数字
                    {s面__[ξ面位尾s]=c面;++ξ面位尾s;}
                }//到下一个空格为止
            //结束上1个 面索
            // s面__[ξ面位尾s]='\0';Vξ面点__[i面点序]=减(atoi十(s面__),1);PRINT3if(IOOBJ,"",s面__,ξ面位尾s,i面点序);
            break;
            // continue;//结束一个面点
            }
        
        else if(c面 二二 EOF)return;
           
        }
#ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
#endif
    }
    
//====f 1//法 2//法 ====================================
__forceinline void Δ读F卝1行无uv有法(FILE*&Ψfile读,匚int i面点数, vector<int>&Vξ面点__)
    {//从第1个空格开始
    char s面__[16];
    register int i面点序=0,ξ面位尾s=0;register char c面;
    //------------------------------
    while(1)
        {
        c面=c乛(Ψfile读);PRINT2if(IOOBJ,"无uv有法",c面,ξ面位尾s);//开始收集面索
        // if(c面 二二 EOF)return;
        if(c面 二二 ' ')//   f v//法 v//法   v前面的' '
            {
            //----收集  s面__--------------------------
            while(1)
                {
                c面=c乛(Ψfile读);
                if(c面 二二 EOF)return;
                else if(c面 二二 '/'){break;}else if(卩换行符(c面,i格式G))return;//第1个'/'
                s面__[ξ面位尾s]=c面;++ξ面位尾s;//PTvector亖亖if(IOOBJ,Vξ面点__);//● 可能是几位数
                }//到下一个/为止
            s面__[ξ面位尾s]='\0';//结束上1个 面索
            Vξ面点__[i面点序]=atoi十(s面__);PRINT3if(IOOBJ,"",s面__,ξ面位尾s,i面点序);//● 减1
            ξ面位尾s=0;++i面点序;//第2个'/'
            if(i面点序 二二 i面点数){乛乛_丨s(c面,Ψfile读);PRINT1if(IOOBJ+0,"◢◢ 2退出",c面);return;}
            // continue;//结束一个面点
            }
        //----有可能尾部没有空格只有\n--------------------------
        else if(c面 二二 EOF)return;
        // else if(卩换行符(c面,i格式G))
            // {PRINT0(c面 二二 c换行符G--------------------------);
            // s面__[ξ面位尾s]='\0';PRINT2if(IOOBJ,"s面__",ξ面位尾s,s面__[ξ面位尾s]);//● 减1       //结束上1个 面索
            // Vξ面点__[i面点序]=减(atoi十(s面__),1);               
            // return;
            // }
        /* PTvector亖亖if(IOOBJ,Vξ面点__);//● 可能是几位数 */
        }
    
    }
    
//====ξ物G ●,ξ物G ●====================================
__forceinline void Δ读F1行ngon(FILE*&Ψfile读, 匚int i面点数,vector<int>&Vξ面点_,vector<int>&Vξ环this_,bool b检测第1个空格=true)
    {
    // PRINT2if(IOOBJ+1,"Δ读F1行 ▃",VB物序b有uvG[ξ物G],VB物序b有法线G[ξ物G] );
    //----从第3个位置开始--------------------------
    if(VB物序b有uvG[ξ物G])//f v/uv/? v/uv/?
        {
        // if(VB物序b有法线G[ξ物G])//f v/uv/法 v/uv/法
            {
            Δ读F卝1行(Ψfile读,i面点数,Vξ面点_,Vξ环this_);
            }
        }
    //----无UV--------------------------
    else
        {
        if(VB物序b有法线G[ξ物G] )//    1//3 2//4 3//5
            {
            Δ读F卝1行无uv有法(Ψfile读,i面点数,Vξ面点_);//   v//法   
            }
        //------------------------------
        else//    1 2 3
            {
            Δ读F卝1行无uv(Ψfile读,i面点数,Vξ面点_);// v v
            }
        
        }//else 无UV

    // PTvector亖亖if(IOOBJ+0,Vξ面点_);PTvector亖亖if(IOOBJ+0,Vξ环this_);
    // PTvector亖亖if(IOOBJ+0,Vξ面点_);PTvector亖亖if(IOOBJ+0,Vξ环this_);
    }

//====vt f f f ====================================
__forceinline void Δ读1行uv(cchar*s1行_,卍Vector&uv__)
    {//从第1个空格开始
#ifdef _PRINT_HEAD_
    printf("『『『 %s \n",s巜charU(__func__));
#endif
    PRINT1if(IOOBJ+0,"",s1行_);
    int 艹2=0;register char c下=EOF;char sUV__[128];int i,j=0;float fuv_[2];
    for(i=0;i ＜ 256;++i)
        {
        if(艹2 二二 2)break;
        匚char c=s1行_[i];PRINT1if(IOOBJ+0,"",c);
        if(c 二二 ' ')
            {
            j=0;++i;
            while(i ＜ 256)
                {//if(60 ＜ i)break;
                c下=s1行_[i];PRINT1if(IOOBJ+0,"",c下);
                if(c下 二二 ' '){--i;PRINT2if(IOOBJ+0,"break ",i,c下);break;}
                else if(c下 二二 '\n'){--i;PRINT2if(IOOBJ+0,"break2 ",i,c下);break;}
                sUV__[j]=c下;
                ++i;++j;
                }
            sUV__[j]='\0';fuv_[艹2]=atof(sUV__);
            ++艹2;PRINT2if(IOOBJ+0,"",艹2,sUV__);
            }
// if(100 ＜ i)break;
        }
    uv__=fuv_;PRINT1if(IOOBJ+0,"〓",uv__);
       
#ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
#endif
    }
    

////END////END////END////END////END////END////END////END////

