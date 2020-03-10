

import bpy,sys,os

from bpy.props import *
# from mathutils import Matrix,Vector,Euler
from ctypes import*
from bpy_extras import object_utils
# import bmesh
from math import*
from .global_var_LIB import sPYLIB上级,LG;

# 文件夹此PYLIB=os.path.basename(os.path.dirname(__file__));

#/////////////////////////////////////////
def dll载入dll(DLL,s键,dllpath1,dllpath2,dllpath3):   
    DLL=getattr(DLL,s键,"none");print("DLL0==",DLL,dllpath1,dllpath2,dllpath3);
    #if os.path.exists("B:/BlenderTest64.dll"):
        #DLL = windll.LoadLibrary(dllpath1)
    if(DLL==None):
        try:
            DLL= CDLL(dllpath1);
            print("DLL1==",DLL);
        except:
            try:
                DLL= CDLL(dllpath2);print("dllpath1 not susses",);     
            except:    
                DLL= CDLL(dllpath3);print("dllpath2 not susses",);
 
    # DLL.SetMain(c_void_p(bpy.context.as_pointer()));
    return DLL;

def dll卸载dll(DLL,s键):   
    DLL=getattr(DLL,s键,"none");print("del DLL==",DLL,s键);
    #if(platform.system()=="Windows"):  
    # while(DLL):
    if(DLL!=None):
        windll.kernel32.FreeLibrary.argtypes = [wintypes.HMODULE];
        windll.kernel32.FreeLibrary(DLL._handle);#释放dll
        print("delete DLL LIB ~  //////////////////////////////////////////\n",);
        DLL=None;
    return DLL;

    
#/////////////////////////////////////////
def 载入模块(Ls模块名):
    for s模块名 in Ls模块名:
        eval("from"+ s模块名+" import *" );


def 删除模块(Ls模块名):
    for s in Ls模块名:
        try:
            if(s in sys.modules):
                del sys.modules[s];
                print("DEL MODULE==",s);
        except:
            print("ERROR DEL MODULE==",s);    

    
#////注册类//////////////////////////////////
def 注册类(LL类,b是打印=False):
    for L类 in LL类:
        for 类 in L类:
            if(b是打印):print("REGISTER_CLASS==",类);
            bpy.utils.register_class(类);
    
def 注销类(LL类,b是打印=False):
    for L类 in LL类:
        for 类 in L类:
            if(b是打印):print("UNREGISTER_CLASS==",类);
            bpy.utils.unregister_class(类);


def 注册1类(类,b是打印=False):
    if(b是打印):print("REGISTER_1CLASS==",类);
    bpy.utils.register_class(类);
    
#====string==========================================================
def s名字增量(s名,Ls名):#把相同的s名_  编上序号
    i = 0
    while (s名 in Ls名):
        i += 1
        if (s名[-3:].isdigit() and s名[-4] == "."): #sk.isdigit() 所有字符都是数字 并且  之后是.
            s名 = "{}{:03d}".format(s名[:len(s名)-3], i)#03d  表示小数点后保留三丅整数 打印name.00i
        else:
            s名 += ".001"
    return s名;
    
#////math///////////////////////////////////////
def L4位小数(Lf):
    if(str(type(Lf)) in["<class 'float'>"]):
        return round(Lf,4);
    elif(str(type(Lf)) in["<class 'int'>","<class 'string'>","<class 'bool'>"]):
        return Lf;

    #----列表浮点---------------------------------------------------------------
    L2=[];Lf=list(Lf);
    for i,f in enumerate(Lf):
        if(f==1):
            f=1.000;
        L2.append(round(f,4));
    return L2;
    
#///////////////////////////////////////////
def L几位小数(Lf,i小数丅):
    if(str(type(Lf)) in["<class 'float'>"]):
        return round(Lf,i小数丅);
    elif(str(type(Lf)) in["<class 'int'>","<class 'string'>","<class 'bool'>"]):
        return Lf;

    #----浮点列表----------------------------------------------------
    L2=[];Lf=list(Lf);#这个会去掉欧拉的"XYZ" 只保留前三个
    for i,f in enumerate(Lf):
        if(f==1.0):
            f=1.000;
        L2.append(round(f,i小数丅));
    return L2;
    
def Ψ2ci(ciIJ):#ciIJ=(c_int*3*2)(*[ci3G]*2);
    ΨCi_ = POINTER(c_int);
    i维=len(ciIJ);
    return (ΨCi_*i维)(*ciIJ);#√
    #return (ΨCi_*i维)(*[*ciIJ]);#√
    
#////MESH////////////////////////////////////////
def 十点线面卩(id,i多少点,i多少边,i多少面,i多少环):
    i要add多少点=i多少点-len(id.vertices);i要add多少边=i多少边-len(id.edges);i要add多少环=i多少环-len(id.loops);i要add多少面=i多少面-len(id.polygons);
    # print("now==",i多少点,i多少边,i多少环,i多少面,id);print("+++++add how==",i要add多少点,i要add多少边,i要add多少环,i要add多少面);#return ;
    if(i要add多少点>0):
        id.vertices.add(i要add多少点);
    if(i要add多少边>0):
        id.edges.add(i要add多少边);    
    if(i要add多少环>0):
        id.loops.add(i要add多少环);    
    if(i要add多少面>0):
        id.polygons.add(i要add多少面);    
        
def 十点线面(id,i要add多少点,i要add多少边,i要add多少面,i要add多少环):
    # print("+++++add==",i要add多少点,i要add多少边,i要add多少环,i要add多少面);
    # if(o.type=="MESH"):
        # id=o.data;
    if(i要add多少点>0):
        id.vertices.add(i要add多少点);
    if(i要add多少边>0):
        id.edges.add(i要add多少边);    
    if(i要add多少环>0):
        id.loops.add(i要add多少环);    
    if(i要add多少面>0):
        id.polygons.add(i要add多少面);
#========================================
def mod罒名(s修改器名,type,o):
    Cmod修改器=o.modifiers;
    if(type=="PARTICLE_SYSTEM"):
        for i,mod in enumerate(Cmod修改器):
            if(mod.type==type and s修改器名==mod.particle_system.name):
               return mod;
    
    else:
        for i,mod in enumerate(Cmod修改器):
            if(mod.type==type and s修改器名==mod.name):
               return mod;

    return None;
    
#////Operator/////////////////////////////////////
import webbrowser
class 卐关于我卐Operator(bpy.types.Operator):
    bl_idname = 'op.about_me'
    bl_label = 'about me'
    bl_description = 'about me'
    bp查看更新:BoolProperty(name="check for update?",description = 'check for update?',default=True);
    bp查看其它插件:BoolProperty(name='check my other addons?',description='check my other addons?',default=True,subtype='NONE',update=None);
    Ls介绍=[
                      "---------------------------------------------------------",
                      "---------------------------------------------------imdjs",                      
                      ];
    
    url更新链接="";
    url其它商业插件1=""
    #------------------------------------------------------------
    @classmethod 
    def poll(self,context):
        return True ;
    
    def draw(self, context):
        """"""
        for s in self.Ls介绍:
            self.layout.label(text=s, text_ctxt="", translate=True, icon='NONE', icon_value=0);
        uil行=self.layout.row(align=False);
        uil行.prop(self, "bp查看更新");   
        # uil行.prop(self, "bp查看其它插件");  
    def invoke(self, context, event):#运行的第1步
        return context.window_manager.invoke_props_dialog(self,width=600,height=50);
    
    def execute(self, context):
        if(self.bp查看更新):
            webbrowser.open(self.url更新链接, new=0, autoraise=True);
        return {'FINISHED'}; 
bpy.utils.register_class(卐关于我卐Operator);
#========================================
class 卐弹出询问窗口卐Operator(bpy.types.Operator):
    bl_idname = "op.ask_for_sure";
    bl_label = "弹出询问窗口";
    bl_options = {"REGISTER", "UNDO"};
    sp:StringProperty(name="注意", description="", default="你确定？");
    pathG:StringProperty(name="文件路径", description="E:/blender/addons/", default="E:/blender/addons/");
    #==============================================================
    @classmethod
    def poll(cls, context):
        return True; #(obj and obj.type == "MESH")

    #==============================================================
    def draw(self, context):    
        self.layout.prop(self, "sp");
        
    def invoke(self, context, event):   return context.window_manager.invoke_props_dialog(self,width=400,height=50);#召唤
bpy.utils.register_class(卐弹出询问窗口卐Operator);

class 卐激活物名给spG卐Operator(bpy.types.Operator):
    bl_idname = "op.imdjs_active_name_sp_lib";
    bl_label = "active_name_sp";
    bl_context='object';
    bl_description="pick the active object"
    
    sp物名:StringProperty(name="", description="", default="");
    #------------------------------------------------------------
    def execute(self, context):
        oA=context.active_object;
        if(oA):
            self.sp物名=oA.name;
            print("pick up object: %s"%oA.name);
        else:
            self.report({"ERROR"},"!!! can't find node");#"INFO" "ERROR" "DEBUG" "WARNING"
        return {"FINISHED"};
bpy.utils.register_class(卐激活物名给spG卐Operator);
    
#////PYLIB_draw////////////////////////////////////////
import bgl,gpu,blf;
from gpu_extras.batch import batch_for_shader
shader = gpu.shader.from_builtin('2D_UNIFORM_COLOR');
shader图 = gpu.shader.from_builtin('2D_IMAGE');
from bpy_extras import view3d_utils
from gpu.types import(GPUBatch,GPUIndexBuf,GPUVertBuf,);

def py_初始化画(b画面=True,b画点厶=False,b画字=False,b画2d=False \
                                ,L2条数丶iSize点=(5,100),L2条数丶iSize一一=(5,10),L2条数丶iSize乛=(5,10) \
                                ,iSize点厶=10,iSize厶=10,iSize囗=10,iSize厶囗=10 \
                                ,iSize一一2d=100 \
                                ,iSize曲线=10):
    print("<<<INIT LG.iSizeG==",LG.dllIMDJS,LG.ciSize乛G.value,LG.ciSize数G.value,LG.CL2条数丶iSize点G.value);
    # if(LG.dllIMDJS):
    LG.CL2条数丶iSize点G=(c_int*2)(*L2条数丶iSize点);LG.CL条序艹点画G=(c_int*L2条数丶iSize点[0])();LG.CL条序col点G=(c_float*4*L2条数丶iSize点[0])();
    LG.CL2条数丶iSize一一G=(c_int*2)(*L2条数丶iSize一一);LG.CL条序艹一一画G=(c_int*L2条数丶iSize一一[0])();LG.CL条序col一一G=(c_float*4*L2条数丶iSize一一[0])();
    LG.CL2条数丶iSize乛G=(c_int*2)(*L2条数丶iSize乛);LG.CL条序艹乛画G=(c_int*L2条数丶iSize乛[0])();LG.CL条序col乛G=(c_float*4*L2条数丶iSize乛[0])();
    LG.L条序艹pre点=[0]*L2条数丶iSize点[0];LG.L条序L点序f2=[[] for i in range(L2条数丶iSize点[0])];#●●必须这样填充,不然会重复id 在 extend([[]]*i一) 时出错
    LG.L条序艹pre一一=[0]*L2条数丶iSize一一[0];LG.L条序LL2f2一一=[[]for i in range(L2条数丶iSize一一[0])];
    LG.L条序艹pre乛=[0]*L2条数丶iSize乛[0];LG.L条序LL6f2=[[]for i in range(L2条数丶iSize乛[0])];
    #------------------------------
    LG.ciSize点厶G.value=iSize点厶;LG.ciSize厶G.value=iSize厶;LG.ciSize囗G.value=iSize囗;LG.ciSize厶囗G.value=iSize厶囗;print("LIB Size==",LG.CL2条数丶iSize点G,L2条数丶iSize点,L2条数丶iSize一一,L2条数丶iSize乛,iSize点厶,iSize厶,iSize囗,iSize厶囗);print("in LG.dllIMDJS==",LG.dllIMDJS);
    # LG.dllIMDJS.py_定义画数test();
    LG.dllIMDJS.py_定义画数(LG.CL2条数丶iSize点G,LG.CL2条数丶iSize一一G,LG.CL2条数丶iSize乛G,LG.ciSize点厶G,LG.ciSize厶G,LG.ciSize囗G,LG.ciSize厶囗G);
    #----初始化--------------------------
    if(LG.CL条序L段序L4f2乛画G==None or LG.CL条序L段序L2f2一一画G==None or LG.CL条序L点序f2画G==None \
                or LG.CL条序L点序f2画G.__len__()!=L2条数丶iSize点[0] or LG.CL条序L段序L2f2一一画G.__len__()!=L2条数丶iSize一一[0] or LG.CL条序L段序L4f2乛画G.__len__()!=L2条数丶iSize乛[0]):
        LG.CL条序L段序L4f2乛画G=(c_float*2*4*LG.CL2条数丶iSize乛G[1]*LG.CL2条数丶iSize乛G[0])();
        LG.CL条序L段序L2f2一一画G=(c_float*2*2*LG.CL2条数丶iSize一一G[1]*LG.CL2条数丶iSize一一G[0])();
        LG.CL条序L点序f2画G=(c_float*2*LG.CL2条数丶iSize点G[1]*LG.CL2条数丶iSize点G[0])();#左边是位置,右边是颜色
        if(b画面 and LG.CL面序L4f4厶画G==None):
            LG.CL面序L4f4厶画G=(c_float*4*4*iSize厶)(); 
            LG.CL面序L5f4囗画G=(c_float*4*5*iSize囗)();
            LG.CL面序Lnf4厶囗画G=(c_float*4*5*iSize厶囗)();
            LG.CL段序L2f2一一序卅画G=(c_float*2*2*300)();
        if(b画点厶 and LG.CLL4f4点厶画G==None):
            LG.CLL4f4点厶画G=(c_float*4*4*iSize点厶)(); 

    #----2d--------------------------
    if(b画2d and LG.CL段序L3i4一一画2dG==None):
        LG.ciSize一一2dG=iSize一一2d;
        LG.dllIMDJS.py_定义画数2d(iSize一一2d);
        LG.CL段序L3i4一一画2dG=(c_int*4*3*iSize一一2d)();
    # if(LG.cvpC==None or LG.cvpOA==None ):
        # LG.C=bpy.context;
        # LG.cvpC=c_void_p(LG.C.as_pointer());#LG.cvpOA=c_void_p(LG.C.active_object.as_pointer());     if(LG.cvpVL):
            #LG.cvpVL = c_void_p(LG.C.view_layer.as_pointer());  
    # if(LG.dllIMDJS):
        # LG.dllIMDJS.b凷rv3d(c_void_p(bpy.context.as_pointer()));
    print(">>INIT LG.iSizeG end==");

#========================================
def 灬gl乚():
    print("<<<CLEAR handles 0==",);
    if(LG.乚2dG ):
        bpy.types.SpaceNodeEditor.draw_handler_remove(LG.乚2dG, 'WINDOW');LG.乚2dG=None; 
        # print("remove LG.乚2dG==",LG.乚2dG);
    if(LG.乚2d面G):
        bpy.types.SpaceView3D.draw_handler_remove(LG.乚2d面G, 'WINDOW');LG.乚2d面G=None;
    if(LG.乚3dG ):
        bpy.types.SpaceView3D.draw_handler_remove(LG.乚3dG, 'WINDOW');LG.乚3dG=None;    
    if(LG.乚字G ):
        bpy.types.SpaceView3D.draw_handler_remove(LG.乚字G, 'WINDOW');LG.乚字G=None;
    #----area,●●有可能换了场景但没换area --------------------------
    # if(LG.area3dG):
        # LG.area3dG.tag_redraw();
    # if(LG.area2dG):
        # LG.area2dG.tag_redraw();
    LG.area2dG=None;LG.area3dG=None;LG.region2dG=None;LG.space2dG=None;
    LG.regionG=None;LG.view3dG=None;
    LG.b是高亮G=False;
    print(">>CLEAR handles 1==",);
    
#========================================
def 灬gl数据():
    print("<<<CLEAR data 0==",);
    #----CF----------------------------------------------
    LG.CL条序L点序f2画G=None;LG.CL段序L2f2一一序卅画G=None;LG.CL条序L段序L2f2一一画G=None;LG.CL条序L段序L4f2乛画G=None;LG.CL面序L4f4厶画G=None;LG.CL面序L5f4囗画G=None;LG.CL面序Lnf4厶囗画G=None;
    LG.CLL2f4丅数画G=None;LG.CLL2f4丅字画G=None;LG.CLs64字G=None;LG.b画面G=False;LG.b画点厶G=False;LG.b画点厶厶囗G=False;LG.b画数G=False;LG.b画字G=False;
    
    LG.CL条序L点序f2画G=None;LG.CL条序L段序L2f2一一画G=None;LG.CL条序L段序L4f2乛画G=None;#多曲线
    
    LG.L条序L点序f2=[];LG.L条序LL2f2一一=[];LG.L条序LL6f2=[];LG.L条序艹pre点=[];LG.L条序艹pre一一=[];LG.L条序艹pre乛=[];LG.f2丅画=None;
    #----2d--------------------------
    LG.ciSize一一2dG=c_int(-1);LG.艹一一画2dG=c_int();LG.CL段序L3i4一一画2dG=None;
    # if(LG.dllIMDJS):
        # LG.dllIMDJS.〇画凸();
        # LG.dllIMDJS=dll卸载dll(LG,"dllIMDJS");
    #----丄-------------------------------------------------
    # LG.CL条序L2f2丄画G=None;
    print(">>CLEAR data 1==",);
    
def ΔΔ画n点(ξ):
    # print("ξ==",ξ);
    if(0<LG.CL条序艹点画G[ξ]):
        i一=LG.CL条序艹点画G[ξ]-LG.L条序艹pre点[ξ];#print("==",i一,[*LG.CL条序艹点画G],LG.L条序艹pre点,LG.L条序L点序f2);
        if(0<i一):
            LG.L条序L点序f2[ξ].extend([[]]*i一);LG.L条序艹pre点[ξ]=LG.CL条序艹点画G[ξ];#print("++",[*LG.CL条序艹点画G],LG.L条序艹pre点,LG.L条序L点序f2);
        elif(i一<0):#现在比之前少了,就缩小
            LG.L条序L点序f2[ξ]=LG.L条序L点序f2[ξ][:LG.CL条序艹点画G[ξ]];LG.L条序艹pre点[ξ]=LG.CL条序艹点画G[ξ];#print("--",LG.L条序艹pre点,LG.L条序L点序f2);
        # print("==",[*LG.CL条序艹点画G],LG.L条序L点序f2,LG.CL条序L点序f2画G);
        for i in range(LG.CL条序艹点画G[ξ]):
            # print("==",i,LG.CL条序L点序f2画G[ξ][i]);
            LG.L条序L点序f2[ξ][i]=LG.CL条序L点序f2画G[ξ][i];
        # print("LG.CL条序L点序f2画G==",LG.L条序L点序f2[ξ]);#,*LG.CL条序L点序f2画G
        
        #------------------------------
        vbo_format = shader.format_calc();len=LG.L条序L点序f2[ξ].__len__();
        V点 = GPUVertBuf(vbo_format,len);
        V点.attr_fill(id="pos",data=LG.L条序L点序f2[ξ]);
        #------------------------------
        shader.bind();
        shader.uniform_float("color", LG.CL条序col点G[ξ]);
        GPUBatch(type='POINTS', buf=V点).draw(shader);
        
def ΔΔ画n一一(ξ):
    if(0<LG.CL条序艹一一画G[ξ]):
        i一=LG.CL条序艹一一画G[ξ]-LG.L条序艹pre一一[ξ];
        if(0<i一):
            LG.L条序LL2f2一一[ξ].extend([[]]*2*i一);LG.L条序艹pre一一[ξ]=LG.CL条序艹一一画G[ξ];#增加容量
            # print("++id(L条序LL2f2一一)==",LG.L条序LL2f2一一.__len__(),id(LG.L条序LL2f2一一));
        elif(i一<0):
            LG.L条序LL2f2一一[ξ]=LG.L条序LL2f2一一[ξ][:2*LG.CL条序艹一一画G[ξ]];LG.L条序艹pre一一[ξ]=LG.CL条序艹一一画G[ξ];#减少容量
            # print("--id(L条序LL2f2一一)==",LG.L条序LL2f2一一.__len__(),id(LG.L条序LL2f2一一));
        for i in range(LG.CL条序艹一一画G[ξ]):
            LG.CL2f2=LG.CL条序L段序L2f2一一画G[ξ][i];
            j=i*2;
            LG.L条序LL2f2一一[ξ][j]=LG.CL2f2[0];LG.L条序LL2f2一一[ξ][j+1]=LG.CL2f2[1];
        #------------------------------
        vbo_format = shader.format_calc();len=LG.L条序LL2f2一一[ξ].__len__();#print("L条序LL2f2一一==",LG.name,LG.L条序LL2f2一一,LG.L条序LL2f2一一.__len__(),id(LG.L条序LL2f2一一));
        V点 = GPUVertBuf(vbo_format,len);
        V点.attr_fill(id="pos",data=LG.L条序LL2f2一一[ξ]);
        #------------------------------
        shader.bind();
        shader.uniform_float("color",LG.CL条序col一一G[ξ]);
        GPUBatch(type='LINES', buf=V点).draw(shader);
#------------------------------
def ΔΔ画n乛(ξ):
    # print("LG.CL条序艹乛画G[ξ]==",ξ,[*LG.CL条序艹乛画G],LG.L条序艹pre乛,LG.CL条序L段序L4f2乛画G[ξ]);
    if(0<LG.CL条序艹乛画G[ξ]):
        i一=LG.CL条序艹乛画G[ξ]-LG.L条序艹pre乛[ξ];#print("LG.CL条序艹乛画G[ξ]==",LG.L条序艹pre乛,LG.CL条序艹乛画G[ξ],i一,LG.L条序LL6f2[ξ].__len__(),id(LG.L条序LL6f2[ξ]));
        if(0<i一):
            LG.L条序LL6f2[ξ].extend([[]]*6*i一);LG.L条序艹pre乛[ξ]=LG.CL条序艹乛画G[ξ];#print("++id(L条序LL6f2[ξ])==",LG.L条序LL6f2[ξ].__len__(),id(LG.L条序LL6f2[ξ]));
        elif(i一<0):
            LG.L条序LL6f2[ξ]=LG.L条序LL6f2[ξ][:6*LG.CL条序艹乛画G[ξ]];LG.L条序艹pre乛[ξ]=LG.CL条序艹乛画G[ξ];#LG.L条序LL6f2[ξ]=LG.L条序LL6f2[ξ];
            #print("--id(L条序LL6f2[ξ])==",LG.L条序LL6f2[ξ].__len__(),id(LG.L条序LL6f2[ξ]));
        for i in range(LG.CL条序艹乛画G[ξ]):
            LG.CL4f2=LG.CL条序L段序L4f2乛画G[ξ][i];#print("CL4f2==",*LG.CL4f2[0],*LG.CL4f2[1],*LG.CL4f2[2],*LG.CL4f2[3]);
            j=i*6;#[0,1,2,3,4,5    ,   6,7,8,9,10,11] 
            LG.L条序LL6f2[ξ][j]=LG.CL4f2[0];LG.L条序LL6f2[ξ][j+1]=LG.CL4f2[1];LG.L条序LL6f2[ξ][j+2]=LG.CL4f2[1];LG.L条序LL6f2[ξ][j+3]=LG.CL4f2[2];LG.L条序LL6f2[ξ][j+4]=LG.CL4f2[1];LG.L条序LL6f2[ξ][j+5]=LG.CL4f2[3];
        #------------------------------
        vbo_format = shader.format_calc();len=LG.L条序LL6f2[ξ].__len__();#print("LG.L条序LL6f2[ξ]==",LG.L条序LL6f2[ξ],LG.L条序LL6f2[ξ].__len__(),id(LG.L条序LL6f2[ξ]));
        V点 = GPUVertBuf(vbo_format,len);
        V点.attr_fill(id="pos",data=LG.L条序LL6f2[ξ]);
        #------------------------------
        shader.bind();
        shader.uniform_float("color",LG.CL条序col乛G[ξ]);
        GPUBatch(type='LINES', buf=V点).draw(shader);
        
#--------------------------------------------------
def Δ画厶(CL4f4):
    # print("TRIS==",(CL4f4[0][0],CL4f4[0][1]),(CL4f4[1][0],CL4f4[1][1]),(CL4f4[2][0],CL4f4[2][1]),*CL4f4[3],*CL4f4[4]);
    vbo_format = shader.format_calc();
    V点 = GPUVertBuf(vbo_format, 4);#print("CL4f4==",CL4f4);
    V点.attr_fill(id="pos",data=[(CL4f4[0][0],CL4f4[0][1]),(CL4f4[1][0],CL4f4[1][1]),(CL4f4[2][0],CL4f4[2][1]),(CL4f4[0][0],CL4f4[0][1])]);
    #------------------------------
    shader.bind();
    shader.uniform_float("color", CL4f4[3]);
    GPUBatch(type='TRIS', buf=V点).draw(shader);#TRI_FAN
    
def Δ画囗(CL5f4):
    # return;
    vbo_format = shader.format_calc();
    V点 = GPUVertBuf(vbo_format, 4);#print("CL5f4==",CL5f4);
    V点.attr_fill(id="pos",data=[(CL5f4[0][0],CL5f4[0][1]),(CL5f4[1][0],CL5f4[1][1]),(CL5f4[2][0],CL5f4[2][1]),(CL5f4[3][0],CL5f4[3][1])]);
    #------------------------------
    shader.bind();
    shader.uniform_float("color", CL5f4[4]);
    GPUBatch(type='TRI_FAN', buf=V点).draw(shader);
    
#////////////////////////////////////////////
Ls模块selfG=[];Ls模块G=[];
#///end////end////end////end////end////end////end////end////end////



