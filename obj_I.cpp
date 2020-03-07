

#include"obj_I读.cpp"


// 二二  二二  Ψξ物G ●,V物序V面序V4ξ序面点G ■,V物序V面序Vξ环thisG ■ 二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  
void Δ解obj所有行(FILE*Ψfile读,bool bp导入材质) 
    {
// #ifdef _PRINT_HEAD_
    printf("『『『 %s  , ξ物G=%d ,b第1次遇vG=%d\n",s巜charU(__func__),ξ物G,b第1次遇vG);
// #endif
    register char c; int i,ξ面=0;char s1行_[i256+1];//i移动=0,
    // PRINT2if(IOOBJ,"▃▃",s1行_[0],s1行_);//ξ物G=ξ物G;//这个直接赋值
    while(1)
        {
        c=c乛(Ψfile读);//向右移动了1位
        if(c 二二 EOF)break;
        PRINT1if(IOOBJ+1,"◣◣ ",c);
        //----Vertex--------------------------
        if (c   二二  'v')//● 可能在 o 之上
            {
            c=c乛(Ψfile读);PRINT1if(IOOBJ+1,"◣1 ",c);
            if(c  二二  ' ') //-5 .644004 0.000000 5.644004,第1个空格
                {
                if(b第1次遇其它G)
                    {
                    b第1次遇其它G=False;
                    if(b第1次遇vG 二二 false)
                        {
                        b第1次遇vG=true;
                        ξ点G=ξ面G=0;++ξ物G;PRINT2if(IOOBJ+0,"艹",ξ物G,c);
                        vector<卍Vector>&V点序丅_=V物序V点序丅G[ξ物G];
                        //----所有点,●有可能v不是连续的--------------------------
                        匚int i点数=Q物序i点数G[ξ物G];巜乛s(-2,Ψfile读);int iR;//c乛PT(Ψfile读);c乛PT(Ψfile读);c乛PT(Ψfile读);c乛PT(Ψfile读);
                        if(b是连续vG)
                            {
                            if(b是v后6个数G)
                                {
                                for(i=0;i ＜ i点数;++i)
                                    {
                                    乛s卩(Ψfile读,i256,s1行_,break);
                                    strtok(s1行_, " ");//v
                                    丅G.x=strtod(strtok(NULL, " "), NULL);//NULL的作用只是为了使得每次调用时，都不是从"My name is XiaoMing."的头开始，而是从上次调用时查找所停止的位置开始，如此循环下去，直到无法再找到匹配token的时候位置
                                    丅G.y=strtod(strtok(NULL, " "), NULL);
                                    丅G.z=strtod(strtok(NULL, " "), NULL);
                                    // PRINT1if(IOOBJ+0,"v后6个数",丅G);
                                    //------------------------------
                                    V点序丅_[ξ点G]=丅G;
                                    ++ξ点G;
                                    }       
                                }
                            
                            else
                                {
                                for(i=0;i ＜ i点数;++i)
                                    {
                                    iR=fscanf(Ψfile读,"%s%f%f%f\n",vG.name,&vG.x,&vG.y,&vG.z);
                                    丅G.x=vG.x;丅G.y=vG.y;丅G.z=vG.z;//PRINT4if(IOOBJ+1,"连续",iR,i,vG.name,丅G);
                                    //------------------------------
                                    V点序丅_[ξ点G]=丅G;
                                    ++ξ点G;
                                    }       
                                }
                            }
                        //----不是连续v--------------------------
                        else
                            {
                            vector<卍Vector>&V点序uv_=V物序V序uvG[ξ物G];
                            // 丨卌(Ψfile读);//记录v开始位置
                            for(i=0;i ＜ i点数;++i)//●点数与vt数一样
                                {
                                iR=fscanf(Ψfile读,"%s%f%f%f\n",vG.name,&vG.x,&vG.y,&vG.z);
                                丅G.x=vG.x;丅G.y=vG.y;丅G.z=vG.z;
                                // PRINT3if(IOOBJ+0,"",iR,vG.name,丅G);//PTvector亖亖(丅G);
                                //------------------------------
                                V点序丅_[ξ点G]=丅G;
                                while(卩二二("vt",vG.name) 二二 false)
                                    {
                                    iR=fscanf(Ψfile读,"%s%f%f%f\n",vG.name,&vG.x,&vG.y,&vG.z);
                                    if(卩二二("vt",vG.name))
                                        {
                                        丅G.x=vG.x;丅G.y=vG.y;丅G.z=vG.z;//PRINT3("",vG.name,ξ点G,丅G);
                                        V点序uv_[ξ点G]=丅G;break;
                                        }
                                    }                                    

                                ++ξ点G;
                                }
                                
                            }

                        //------------------------------
                        if(b第1次遇vG)
                            {b第1次遇vG=false;}
                        else
                            {++ξ物G;//PRINT1if(IOOBJ,"艹2",ξ物G);
                            }//1 ,第二次才加
                        // PTvector亖亖if(IOOBJ,V点序丅_);
                        }//if(b第1次遇vG 二二 false)
                    }
                //PTvector亖亖(丅G);
                }
            //----UV--------------------------
            else if(c  二二  't' 丶丶 b是连续vG )//vt 
                {//continue;
                //----第1个  vt 0.995000 0.005000 --------------------------
                if(V物序b第1个vtG[ξ物G])
                    {
                    V物序b第1个vtG[ξ物G]=false;//PRINT2if(IOOBJ,"1",s1行_,s行G);
                    //----所有vt--------------------------
                    匚int i环数=Q物序i环数G[ξ物G];巜乛s(-2,Ψfile读);//PRINT1if(IOOBJ,"",i环数一1);
                    for(i=0;i ＜ i环数;++i)
                        {
                        乛s卩(Ψfile读,i256,s1行_,break);//PRINT1if(IOOBJ+1,"uv",s1行_);
                        Δ读1行uv(s1行_,V物序V序uvG[ξ物G][i]);
                        // 匚int iR=fscanf(Ψfile读,"%s%f%f\n",vG.name,&vG.x,&vG.y);丅G.x=vG.x;丅G.y=vG.y;PRINT2if(IOOBJ+1,"+uv",iR,丅G);
                        
                        //------------------------------
                        // V环序uv总G[ξ环总G]=丅G;

                        // ++ξ环总G;
                        }

                    }    
                }
            
            }
            
        //----其它--------------------------
        else if(c != 'v')
            {
            if(bp导入材质)
                {
                if (c   二二  'u')
                    {
                    c=c乛(Ψfile读);
                    if (c   二二  's')
                        {
                        巜乛s_(4,Ψfile读,c);
                        c=c乛(Ψfile读);
                        if(c 二二 ' ')//f空格
                            {
                            
                            }
                        }
                    }
                }
            //----读所有的 Face--------------------------
            if (c 二二  'f')
                {
                c=c乛(Ψfile读);PRINT1if(IOOBJ+1,"□0",c);
                if(c 二二 ' ')//f空格123
                    {
                    二(true,b第1次遇其它G);二(false,b第1次遇vG);                
                    // PRINT3if(IOOBJ+0,"〓",ξ物G,ξ面G,Q物序i面数G[ξ物G]-1);
                    //----V物序V面序Vξ环thisG ■--------------------------
                    匚int i面数=Q物序i面数G[ξ物G];巜乛s_(-2,Ψfile读,c);PRINT3if(IOOBJ+0,"读面",i面数,ξ面G,c);//乛cPT巜3("",Ψfile读);//回到第一行开始
                    // bool b之前是ngon=false;
                    for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                        {
                        vector<int>&Vξ面点_=V物序V面序V4ξ序面点G[ξ物G][ξ面];
                        vector<int>&Vξ环this_=V物序V面序Vξ环thisG[ξ物G][ξ面];//PTvector亖亖if(IOOBJ,Vξ环this_);
                        匚int i面点数=Vξ面点_.size();
                        //----ngon--------------------------
                        // if(4 ＜ i面点数)
                            {
                            //----下1个面--------------------------
                            // PRINT4if(IOOBJ+0,"◣ F ",c,c!='f',i面数,ξ面);
                            while(c!='f' 丶丶 c != EOF)//有可能下1行不是f v/uv,例如有g 
                                {
                                乛乛_丨s(c,Ψfile读);
                                c=c乛(Ψfile读);//PRINT1if(IOOBJ,"2",s1行_);
                                }
                            Δ读F1行ngon(Ψfile读,i面点数,Vξ面点_,Vξ环this_);//PTvector亖亖if(IOOBJ+1,Vξ环this_);//if(ξ面 ＜ 20)PTvector亖亖if(IOOBJ+0,Vξ面点_);
                            c=c乛(Ψfile读);//下1行的形头
                            // 二(true,b之前是ngon);
                            }PRINT3if(IOOBJ+0,"",ξ面,i面点数,c);
                        #if(0)(<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                        //----3,4 --------------------------
                        else
                            {
                            if(b之前是ngon)
                                {巜巜_丨(NULL,Ψfile读);//c乛PT(Ψfile读);巜乛s(-1,Ψfile读);
                                b之前是ngon=false;}//回到上1行开头
                            Δ读F1行(Ψfile读,i面点数,Vξ面点_,Vξ环this_);
                            }
                        #endif>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                        }//for(int ξ面=0;ξ面 ＜ i面数一1;++ξ面)
                    巜乛s_(-1,Ψfile读,c);//最后一行多读了1个,要退回到开头
                    }//if(c 二二 ' ')
                }//if (c   二二  'f')
            else if(c 二二 EOF)break;
            else if(c!='\n')
                乛乛_丨s(c,Ψfile读);
            }//其它
        }
// #ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
// #endif
    }
    
// 二二  二二 Ψξ物G ●  ■ 二二V物序V面序Vξ环thisG ■  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二
EXC void Δ打开obj(cchar *filepath,bool bp导入材质,bool bp分裂物) 
    {
// #ifdef _PRINT_HEAD_
    printf("『『『 %s ,ξ物G=%d,ξ点G=%d,ξ面G=%d\n",s巜charU(__func__),ξ物G,ξ点G,ξ面G);
// #endif
    int i属性=-1;
    FILE*Ψfile读=fopen(filepath,"rb");if(Ψfile读 二二 NULL){return ;}
    //----读写文件 ------------------------------------
    char s1行_[i512+1];
    int 艹行=0,R;bool b有uv=false;
    //----RESIZE,Q物序i点数G ,因为之前可能多添加了1个----------------------------
    匚int i物数1=ξ物G+1;int i,j;
    Resize(i物数1,V物序V点序丅G);Resize(i物数1,V物序V面序Vξ环thisG);
    if(bp分裂物)Resize(i物数1,V物序V面序Vuv环序G);else Resize(1,V物序V面序Vuv环序G);
    Resize(i物数1,V物序V面序V4ξ序面点G);Resize(i物数1,V物序V序uvG);
    灬冖(i物数1,1,V物序b第1个vtG);
    for(i=0;i ＜ i物数1;++i)
        {
        V物序V点序丅G[i].resize(Q物序i点数G[i]);V物序V序uvG[i].resize(Q物序i环数G[i]);
        Resize(Q物序i面数G[i],V物序V面序V4ξ序面点G[i]);Resize(Q物序i面数G[i],V物序V面序Vξ环thisG[i]);
        if(bp分裂物)Resize(Q物序i面数G[i],V物序V面序Vuv环序G[i]);
        PRINT2if(IOOBJ,"",Q物序i面数G[i],V物序V面序Vξ环thisG[i].size());
        for(j=0;j ＜ Q物序i面数G[i];++j)
            {
            V物序V面序V4ξ序面点G[i][j].assign(Q物序Q面序i面点数G[i][j],-1);V物序V面序Vξ环thisG[i][j].assign(Q物序Q面序i面点数G[i][j],-1);
            if(bp分裂物)V物序V面序Vuv环序G[i][j].resize(Q物序Q面序i面点数G[i][j]);
            }
        }
// PTvector亖亖丨db(V物序V面序V4ξ序面点G[0],30,30);
    //----重遍历------------------------------------
    ξ点G=ξ面G=0;ξ物G=-1;b第1次遇vG=false;b第1次遇其它G=true;

    Δ解obj所有行(Ψfile读,bp导入材质);

    fclose(Ψfile读);PRINT3if(IOOBJ+0,"",ξ点G,ξ面G,b是v后6个数G);
    
    // PTvector亖亖if(IOOBJ+1,V物序V序uvG);
    // PTvector亖亖if(IOOBJ+1,V物序V面序Vξ环thisG);
    PTvector亖亖丨if(IOOBJ+1,V物序V面序Vξ环thisG[0],20,20);

    // PTvector亖亖if(IOOBJ+1,V物序V点序丅G);
    // PTvector亖亖db(V物序V面序V4ξ序面点G);
    // PTvector亖亖丨db(V物序V面序V4ξ序面点G[0],20,20);
    // PTvector丨亖亖db(V物序V面序V4ξ序面点G[0],100);
    // if(1 ＜ V物序V面序V4ξ序面点G.size())
        // PTvector亖丨亖db(V物序V面序V4ξ序面点G[1],7500,100);
    //
    // PRINT1if(IOOBJ,"",ξ物G);
#if(0)(<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    //----检测面索------------------------------------
    int i面序=0;//PTvector亖亖if(IOOBJ+0,V物序V面序V4ξ序面点G[0]);PTvector亖亖if(IOOBJ+0,V物序V面序V4ξ序面点G[1]);
    for(int i物序=0;i物序 ＜ V物序V面序V4ξ序面点G.size();++i物序)
        {
        PRINT2db("",i物序,V物序V点序丅G[i物序].size());
        cvector<vector<int>>&V面序V4ξ序面点=V物序V面序V4ξ序面点G[i物序];
       i面序=0;
        for(auto&V4ξ序面点:V面序V4ξ序面点)
            {
            for(auto&ξ序面点:V4ξ序面点)
                { 
                ASSERTexedb("",ξ序面点 ＜ 0,PRINT3db("",i物序,i面序,V4ξ序面点););
                ASSERTexedb( "",V物序V点序丅G[i物序].size() ＜ ξ序面点,PRINT3db("",i物序,i面序,V4ξ序面点););
                }
            ++i面序;
            }
        }
        
#endif>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
PTtime亖亖(" ",false);
// #ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
// #endif
    }
    
// 二二  二二  Q物序str物名G ●二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二
EXC void Δ转换(bool bp导入材质,bool bp分裂物,bool bpYasZ,bool bp检查文件破损,float fpSize,int CL物序i点数__[],int CL物序i边数__[],int CL物序i环数__[],int CL物序i面数__[],char CL物序s名__[][i64],int CL物序b有UV__[]) 
    {
// #ifdef _PRINT_HEAD_
    printf("『『『 %s   ,bp分裂物=%d,fpSize=%f  ,bpYasZ=%d,ξ物G=%d\n",s巜charU(__func__),bp分裂物,fpSize,bpYasZ,ξ物G);//PTvector亖亖(V物序V点序丅G);
// #endif
    // PTvector亖亖if(IOOBJ,Q物序str物名G);
    // PTvector亖亖if(IOOBJ,VB物序b有uvG);
    int j,k,i物序=0, ξ点=0,ξ面=0,ξ面总=0, iSize,i环序,i环数,i面数,i物点数this,i物环数,i面点数;
    卍Vector ΦX(1,0,0);
    //----转换--------------------------
    if(bpYasZ)
        {
        for(auto&V点序丅点:V物序V点序丅G)
            {
            for(auto&丅点_:V点序丅点)
                {
                // 匚float ㄥ=atan(丅点_.z/丅点_.y);
                // α(-ㄥ90,,丅点_.y,丅点_.z);
                α(ㄥ90,ΦX,丅点_);
                }
            }
        }
    if(fpSize!=1.0)
        {
        for(auto&V点序丅点:V物序V点序丅G)
            {
            for(auto&丅点_:V点序丅点)
                {
                Χ二(fpSize,丅点_);
                }
            }
        }    //PTvector亖亖(V物序V点序丅G);
    
    //----合并物 V点序丅G ■,V面序V4ξ序面点G ■,●合并物强制有uv------------------------
    if(bp分裂物 二二 false)
        {
        Resize(i点数总G,V点序丅G);Resize(i面数总G,V面序V4ξ序面点G);
        匚int i物数=V物序V面序V4ξ序面点G.size();
        ξ面总=0;CL物序b有UV__[0]=false;int i物点数上个=0,i物环数上个=0;  
        for(i物序=0;i物序 ＜ i物数;++i物序)
            {
           匚int i物点数this=Q物序i点数G[i物序],i物环数this=Q物序i环数G[i物序];
            vector<vector<int>>&V面序V4ξ序面点_=V物序V面序V4ξ序面点G[i物序];
            vector<vector<int>>&V面序Vξ环_=V物序V面序Vξ环thisG[i物序];
            if(b是负索引G)//●●如果有负索引就加1
                {
                i面数=V面序V4ξ序面点_.size();
                for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                    {
                    vector<int>&V4ξ序面点_=V面序V4ξ序面点_[ξ面];
                    vector<int>&Vξ环_=V面序Vξ环_[ξ面];
                    减数(i物点数this,V4ξ序面点_);加数(i物点数上个,V4ξ序面点_);//-1==>1==>(8-1)==>7
                    //----环--------------------------
                    减数(i物环数this,Vξ环_);//[-11,-12,-13],[-11,-12,-13]==>[0,1,2],[0,1,2]==>[0,1,2],[3,4,5]
                    V面序V4ξ序面点G[ξ面总]=V4ξ序面点_;
                    ++ξ面总;
                    }
                i物点数上个+=i物点数this;
                }
            else
                {
                i面数=V面序V4ξ序面点_.size();
                for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                    {
                    vector<int>&V4ξ序面点_=V面序V4ξ序面点_[ξ面];
                    vector<int>&Vξ环_=V面序Vξ环_[ξ面];       //PRINT1("0",Vξ环_);
                    减1(V4ξ序面点_);减1(Vξ环_);加数(-i物环数上个,Vξ环_);//PRINT3("",ξ面,i物环数上个,Vξ环_);
                    V面序V4ξ序面点G[ξ面总]=V4ξ序面点_;//[0,1,2],[3,4,5]
                    ++ξ面总;  
                    }
                i物环数上个+=Q物序i环数G[i物序]; 
                }
            if(VB物序b有uvG[i物序])
                二(true,CL物序b有UV__[0]);
            }
        //----UV------------------------------------
        // PTvector亖亖丨if(IOOBJ+1,V面序V4ξ序面点G,20,20);
        PTvector亖亖丨if(IOOBJ+0,V物序V面序Vξ环thisG[0],20,20);
        PTvector亖亖if(IOOBJ+0,V物序V序uvG);
        ξ面总=0;Resize2(V面序V4ξ序面点G,V物序V面序Vuv环序G[0]);

        for(i物序=0;i物序 ＜ i物数;++i物序)
            {
            // if(VB物序b有uvG[i物序])//合并的话,无论如何都合并uv
            vector<vector<int>>&V面序Vξ环_=V物序V面序Vξ环thisG[i物序];//物序[4面数,9面数] 
            i面数=V面序Vξ环_.size();
            if(bp检查文件破损 丶丶 VB物序b有坏数据G[i物序])
                {
                for(j=0;j ＜ i面数;++j)
                    {
                    cvector<int>&Vξ环=V面序Vξ环_[j];i环数=Vξ环.size();
                    for(i环序=0;i环序 ＜ i环数;++i环序)
                        {
                        匚int ξ环=Vξ环[i环序];//●如果没有uv 为-1
                        if(-1 ＜ ξ环 丶丶  ξ环 ＜ V物序V序uvG[i物序].size())
                            V物序V面序Vuv环序G[0][ξ面总][i环序]=V物序V序uvG[i物序][ξ环];
                            // V面序V4uv环序G[ξ面总][i环序]=V物序V序uvG[i物序][ξ环];
                        else
                            V物序V面序Vuv环序G[0][ξ面总][i环序]=v0D;
                            // V面序V4uv环序G[ξ面总][i环序]=v0D;
                        }
                    ++ξ面总;
                    }
                }
            else
                {
                for(j=0;j ＜ i面数;++j)
                    {
                    cvector<int>&Vξ环=V面序Vξ环_[j];i环数=Vξ环.size();
                    for(i环序=0;i环序 ＜ i环数;++i环序)
                        {
                        匚int ξ环=Vξ环[i环序];
                        if(-1 ＜ ξ环 丶丶  ξ环 ＜ V物序V序uvG[i物序].size())
                            V物序V面序Vuv环序G[0][ξ面总][i环序]=V物序V序uvG[i物序][ξ环];
                            // V面序V4uv环序G[ξ面总][i环序]=V物序V序uvG[i物序][ξ环];
                        else
                            {
                            V物序V面序Vuv环序G[0][ξ面总][i环序]=v0D;
                            }
                            // V面序V4uv环序G[ξ面总][i环序]=v0D;
                        }
                    ++ξ面总;
                    }
                }
            }
            
        for(const auto&V点序丅点:V物序V点序丅G)
            {
            for(const auto&丅点:V点序丅点)
                {
                V点序丅G[ξ点]=丅点;++ξ点;
                }
            }
        //----清除内存--------------------------
        Δ凵裂G();
        //----V面序V4uv环序G ■--------------------------
        算面边点ξ1(i点数总G,V面序V4ξ序面点G,V面序V4ξ面边G,V边序V2ξ边点G);//V面序V4ξ面边G ■,V边序V2ξ边点G ■ 
        // 算面边点ξ(V面序V4ξ序面点G,V面序V4ξ面边G,V边序V2ξ边点G);//V面序V4ξ面边G ■,V边序V2ξ边点G ■ 
        CL物序i边数__[0]=V边序V2ξ边点G.size();CL物序i环数__[0]=iSumSize(V面序V4ξ序面点G);
        CL物序i点数__[0]=V点序丅G.size();CL物序i面数__[0]=V面序V4ξ序面点G.size();
        if(Q物序str物名G.empty())
            {Q物序str物名G.push_back("NO_NAME");}
        else
            {s_s(Q物序str物名G[0].c_str(),CL物序s名__[0]);}
        
        //------------------------------
        PRINT2if(IOOBJ,"get",Q物序str物名G[0],CL物序s名__[0]);
        //CL物序s名__=Q物序str物名G.c_str() ;
    
        PRINT1if(IOOBJ,"",CL物序b有UV__);
        // PTvector亖亖if(IOOBJ,V点序丅G);//PTvector亖亖丨if(IOOBJ+0,V面序V4uv环序G,20,20);
        }
        
    //====分裂物====================================
    else
        {
        ξ面=0;匚int i物数=V物序V面序V4ξ序面点G.size();
        // PTvector亖亖(b是负索引G);PTvector亖亖db(V物序V面序V4ξ序面点G[0]);PTvector亖亖db(V物序V点序丅G[0]);
        // PTvector亖亖if(IOOBJ,V物序V面序Vξ环thisG);
        //---- 把负索 变成 正索引--------------------------
        if(b是负索引G)
            {
            for(i物序=0;i物序 ＜ i物数;++i物序)
                {
               匚int i物点数this=Q物序i点数G[i物序],i物环数this=Q物序i环数G[i物序];PRINT1("",i物点数this);
                vector<vector<int>>&V面序V4ξ序面点_=V物序V面序V4ξ序面点G[i物序];           //[[-11,-12,-13],[-11,-12,-13]]

                for(auto&V4ξ序面点:V面序V4ξ序面点_)
                    {
                    减数(i物点数this,V4ξ序面点);//[[0,1,3],[0,1,2]]
                    }
                    
                vector<vector<int>>&V面序Vξ环_=V物序V面序Vξ环thisG[i物序];
                i面数=V面序Vξ环_.size();
                for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                    {
                    vector<int>&Vξ环_=V面序Vξ环_[ξ面];
                    减数(i物环数this,Vξ环_);
                    }                    
                }
            }
        else
            {
            //----第1个物--------------------------
            vector<vector<int>>&V面序V4ξ序面点_=V物序V面序V4ξ序面点G[i物序];           
           
            for(auto&V4ξ序面点:V面序V4ξ序面点_)
                {
                减1(V4ξ序面点);
                }
            
            if(VB物序b有uvG[0])
                {
                vector<vector<int>>&V面序Vξ环_=V物序V面序Vξ环thisG[i物序];
                i面数=V面序Vξ环_.size();
                for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                    {
                    vector<int>&Vξ环_=V面序Vξ环_[ξ面];
                    减1(Vξ环_);
                    }                    
                }
            //----从第2个物开始,减去之前物总点数--------------------------
            int i物点数上个=Q物序i点数G[0],i物环数上个=Q物序i环数G[0];//第1个
            for(i物序=1;i物序 ＜ i物数;++i物序)
                {
                vector<vector<int>>&V面序V4ξ序面点_=V物序V面序V4ξ序面点G[i物序];//[[0,1,3],[4,5,6]]
                vector<vector<int>>&V面序Vξ环_=V物序V面序Vξ环thisG[i物序];
                i物点数this= Q物序i点数G[i物序];i物环数= Q物序i环数G[i物序];i面数=V面序V4ξ序面点_.size();
                for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                    {
                    vector<int>&V4ξ序面点_=V面序V4ξ序面点_[ξ面];
                    i面点数=V4ξ序面点_.size();
                    for(k=0;k ＜ i面点数;++k)
                        {
                        int &ξ序面点_=V4ξ序面点_[k];ASSERTexe("",ξ序面点_ ＜ i物点数上个,PRINT4if(IOOBJ+0,"!!!",i面数,ξ序面点_,i物点数上个,V4ξ序面点_););--ξ序面点_;
                        ξ序面点_-=i物点数上个;//[[0,1,3],[0,1,2]]
                        }
                    //----环--------------------------
                    if(VB物序b有uvG[i物序])
                        {
                        vector<int>&Vξ环_=V面序Vξ环_[ξ面];
                        i环数=Vξ环_.size();
                        for(k=0;k ＜ i面点数;++k)
                            {
                            int &ξ环_=Vξ环_[k];ASSERTexe("",ξ环_ ＜ i物环数上个,PRINT4if(IOOBJ+0,"!!!",i面数,ξ环_,i物环数上个,Vξ环_););--ξ环_;
                            ξ环_-=i物环数上个;//[[0,1,3],[0,1,2]]
                            }
                        }
                    }
                i物点数上个+=i物点数this;i物环数上个+=i物环数;PRINT2if(IOOBJ,"▲",i物点数上个,i物环数上个);//给下1个
            
                }
            }
     
        // PTvector亖亖if(IOOBJ+0,V物序V面序V4ξ序面点G);
        // PTvector亖亖丨ifdb(IOOBJ+0,V物序V面序V4ξ序面点G[0],20,20);
        // PTvector亖亖if(IOOBJ+1,V物序V面序Vξ环thisG);
        // PTvector亖亖丨ifdb(IOOBJ+0,V物序V面序Vξ环thisG[0],20,20);
        // PTvector亖亖if(IOOBJ+1,V物序V点序丅G);
        // PTvector亖亖丨ifdb(IOOBJ+0,V物序V点序丅G[0],20,20);        
#if(0)(<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<       
        //----检测面索--------------------------
        int i面序=0,i最大面点索=-亿,i点数=0;//PTvector亖亖db(V物序V面序V4ξ序面点G[0]);//PTvector亖亖db(V物序V点序丅G[0]);
        for(i物序=0;i物序 ＜ V物序V面序V4ξ序面点G.size();++i物序)
            {
            vector<vector<int>>&V面序V4ξ序面点=V物序V面序V4ξ序面点G[i物序];
            i面序=0;i最大面点索=-亿;i点数=V物序V点序丅G[i物序].size();
            for(auto&V4ξ序面点:V面序V4ξ序面点)
                {
                for(auto&ξ序面点:V4ξ序面点)
                    { 
                    丨＜(ξ序面点,i最大面点索); 
                    ASSERTexedb("",ξ序面点 ＜ 0,PRINT2if(IOOBJ,"",i面序,V4ξ序面点););
                    ASSERTexedb( "",V物序V点序丅G[i物序].size() ＜ ξ序面点,PRINT2if(IOOBJ,"",i面序,V4ξ序面点);); 
                    }
                ++i面序;
                }
            ASSERTexedb("",i点数 ＜ i最大面点索+1,PRINT2if(IOOBJ,"",i点数,i最大面点索););
            PRINT2db("",i点数,i最大面点索);
            }
#endif>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
PTtime亖亖("算面边点ξ",false);
// PRINT0db(算面边点ξ--------------------------);
        //----------------------------------------
        Resize(i物数,V物序V面序V4ξ面边G);Resize(i物数,V物序V边序V2ξ边点G);
        for(i物序=0;i物序 ＜ i物数;++i物序)
            {
            算面边点ξ1(Q物序i点数G[i物序],V物序V面序V4ξ序面点G[i物序],V物序V面序V4ξ面边G[i物序],V物序V边序V2ξ边点G[i物序]);

            CL物序i边数__[i物序]=V物序V边序V2ξ边点G[i物序].size();CL物序i环数__[i物序]=iSumSize(V物序V面序V4ξ序面点G[i物序]);
            CL物序i点数__[i物序]=V物序V点序丅G[i物序].size();CL物序i面数__[i物序]=V物序V面序V4ξ序面点G[i物序].size();
            if(Q物序str物名G.empty())
                {
                Q物序str物名G.assign(i物数,"NO_NAME");
                }
            else
                {s_s(Q物序str物名G[i物序],CL物序s名__[i物序]);}
            PRINT4if(IOOBJ,"get",i物序,Q物序str物名G,CL物序s名__[i物序],VB物序b有uvG[i物序]);
            //CL物序s名__[i物序]=Q物序str物名G[i物序].c_str() ;
            if(VB物序b有uvG[i物序])
                {
                //----UV--------------------------
                i面数=V物序V面序Vξ环thisG[i物序].size();
                if(bp检查文件破损 丶丶 VB物序b有坏数据G[i物序])
                    {
                    for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                        {
                        i环数=V物序V面序Vξ环thisG[i物序][ξ面].size();cvector<int>&Vξ环=V物序V面序Vξ环thisG[i物序][ξ面];PTvector亖亖if(IOOBJ,Vξ环);
                        for(i环序=0;i环序 ＜ i环数;++i环序)
                            {
                            匚int ξ环=Vξ环[i环序] ;
                            if(ξ环 ＜ V物序V序uvG[i物序].size())
                                V物序V面序Vuv环序G[i物序][ξ面][i环序]=V物序V序uvG[i物序][ξ环];
                            else
                                V物序V面序Vuv环序G[i物序][ξ面总][i环序]=v0D;
                            }
                        }
                    }
                
                else
                    {
                    for(ξ面=0;ξ面 ＜ i面数;++ξ面)
                        {
                        i环数=V物序V面序Vξ环thisG[i物序][ξ面].size();cvector<int>&Vξ环=V物序V面序Vξ环thisG[i物序][ξ面];PTvector亖亖if(IOOBJ,Vξ环);
                        for(i环序=0;i环序 ＜ i环数;++i环序)
                            {
                            匚int ξ环=Vξ环[i环序] ;
                            V物序V面序Vuv环序G[i物序][ξ面][i环序]=V物序V序uvG[i物序][ξ环];
                            }
                        }
                    }
                }
            CL物序b有UV__[i物序]=VB物序b有uvG[i物序];PRINT1if(IOOBJ,"",CL物序b有UV__[i物序]);
            }        
        // PTvector亖亖ifdb(IOOBJ+0,V物序V面序Vξ环thisG[0],20,20);            
        // PTvector亖亖if(IOOBJ+1,V物序V面序Vuv环序G);
        // PTvector亖亖if(IOOBJ+1,V物序V序uvG);
        PTvector亖亖if(IOOBJ,Q物序str物名G);
        }//分裂物
PTtime亖亖(" ",false);Δ灬QG();
    //system("PAUSE");
// #ifdef _PRINT_HEAD_
    printf(" 』』%s \n",s巜charU(__func__));
// #endif
    }
    
// 二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二 
EXC void Set1UV凸(Mesh*mesh,bool bp分裂物,cint i物序)
    {
    SetUV(mesh,&V物序V面序Vuv环序G[i物序]);

    Swap(V物序V面序Vuv环序G[i物序]);
    }
    
EXC void 重属性1网凸(bContext*C,Mesh*mesh,bool bp导入材质,cbool bp分裂物,cint i物序)
    {
    // PTvector亖亖(V点序丅G);
    // PTvector亖亖if(IOOBJ,V面序V4ξ序面点G);//PTvector亖亖if(IOOBJ,V面序V4ξ面边G);PTvector亖亖if(IOOBJ,V边序V2ξ边点G);
    // PTvector亖亖if(IOOBJ,V物序V面序V4ξ序面点G);PTvector亖亖(V物序V点序丅G);
    // 二二  二二 reattri 二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二  二二 
    // 匚bool b计算面边点索=(V物序V点序丅G.size()二二 1)? false  : true;
    if(bp分裂物)
        {
        重属性网(mesh,V物序V点序丅G[i物序],V物序V面序V4ξ序面点G[i物序],&V物序V面序V4ξ面边G[i物序],&V物序V边序V2ξ边点G[i物序],NULL,NULL,false);PTvector亖亖if(IOOBJ+0,V物序V面序V4ξ面边G[i物序]);PTvector亖亖if(IOOBJ+0,V物序V边序V2ξ边点G[i物序]);
        Δ凵裂G(i物序);vector<vector<int>>().swap(V物序V面序V4ξ面边G[i物序]);vector<vector<int>>().swap(V物序V边序V2ξ边点G[i物序]);
        }
    else
        {
        重属性网(mesh,V点序丅G,V面序V4ξ序面点G,&V面序V4ξ面边G,&V边序V2ξ边点G,NULL,NULL,false);
        Δ凵合G();
        }
    
    // 凵meshG();
PTtime亖亖("结束",false);
    }
    
//OpenGL的glut中使用glutMouseFunc函数注册鼠标响应事件，使用glutKeyboardFunc函数注册键盘响应事件，对键盘上特殊的4个方向按键的响应函数是glutSpecialFunc。
/*
OBJ格式
mtllib  filename    材质文件
v  1 1 1         顶点数据
vn 0 1 0         法线
vt 0 1 0          纹理坐标
s 光滑组(Smoothing group)
g Box001                                             #开始图元（group name），1个obj可含多个group
usemtl wire_224086086              #当前图元所使用材质名
f 1 2 3 4                                              #四边形(无UV)，索引起始于1
f 1 2 3                                                 #三角形(无UV)
f 1/1 2/2 3/3                                     #顶点索引(要减1)/uv索引(要减1)
f 1//1 2//2 3//3                                      #顶点索引//法线索引
f 1/1/1 2/2/1 3/3/1 4/4/1            #顶点索引/uv索引/法线索引
 
说明：顶点、纹理坐标、法线个数之间没有对应关系，多个点可共用不同的纹理或法线
索引均开始于1。
//----如果面索引是负数,就要把 总点数加原来索引 等到面索,但记录时要加1  -----------------
# 1844 vertices
f -302 -1460 -1844 -1459 
f -1460 -268 -1458 -1844 
转换后:
f 1543 385 1 386
f 385 1577 387 1
#----------------------------------------
顶点数据(Vertex data)：
　v 几何体顶点(Geometric vertices)
    vt 贴图坐标点(Texture vertices)
    vn 顶点法线(Vertex normals)
    vp 参数空格顶点 (Parameter space vertices)

自由形态曲线(Free-form curve)/表面属性(surface attributes):
　 deg   度(Degree)
    bmat   基础矩阵(Basis matrix)
    step   步尺寸(Step size)
    cstype 曲线或表面类型 (Curve 丨丨 surface type)

元素(Elements):
    p  点(Point)
    l  线(Line)
    f  面(Face)
    curv  曲线(Curve)
    curv2  2D曲线(2D curve)
    surf  表面(Surface)

自由形态曲线(Free-form curve)/表面主体陈述(surface body statements):
    parm 参数值(Parameter values )
    trim 外部修剪循环(Outer trimming loop)
    hole 内部整修循环(Inner trimming loop)
    scrv 特殊曲线(Special curve)
    sp 特殊的点(Special point)
    end  结束陈述(End statement)

自由形态表面之间的链接(Connectivity between free-form surfaces):
    con 链接 (Connect)

成组(Grouping):
    g  组名称(Group name)
    s 光滑组(Smoothing group)
    mg 合并组(Merging group)
    o 对象名称(Object name)

显示(Display)/渲染属性(render attributes):
　bevel 导角插值(Bevel interpolation)
    c_interp 颜色插值(Color interpolation)
    d_interp 溶解插值(Dissolve interpolation)
    lod 细节层次(Level of detail)
    usemtl 材质名称(Material name)
    mtllib 材质库(Material library)
 shadow_obj  投射阴影(Shadow casting)
     trace_obj  光线跟踪(Ray tracing)
           ctech  曲线近似技术(Curve approximation technique)
           stech  表面近似技术 (Surface approximation technique)
           
*/    
    
    