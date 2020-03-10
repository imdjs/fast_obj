
import bpy,sys,os
from mathutils import*
from ctypes import*
from mathutils import Vector
#------------------------------------------------------------
path目录PYLIB上级 =os.path.abspath(os.path.join(os.path.dirname(__file__),".."));#上级目录 
sPYLIB上级=os.path.basename(path目录PYLIB上级);
path目录MUT = os.path.dirname(__file__); #本py文件所在目录
文件夹此=os.path.basename(path目录MUT);  #IMDJS_NodeTree

fileCG="E:\blender\BlenderLib\CLIB64.dll"
s连接G='';
#///////////////////////////////////////////
#path目录PYLIB上级 =os.path.abspath(os.path.join(os.path.dirname(__file__),".."));#上级目录 
#sPYLIB上级=os.path.basename(path目录PYLIB上级);
# from .global_var_LIB import sPYLIB上级,LG;
#print("_____pathPYLIB_UP==",path目录PYLIB上级,sPYLIB上级);
sPYLIB上级__=sPYLIB上级+".PYLIB_"+sPYLIB上级;#==IMDJS.nodes.PYLIB_IMDJS_nodes 
Ls模块selfG=[sPYLIB上级__+".PYLIB_main",sPYLIB上级__+".PYLIB_math",sPYLIB上级__+".PYLIB_object",sPYLIB上级__+".PYLIB_mesh",sPYLIB上级__+".PYLIB_module",sPYLIB上级__+".PYLIB_attribute",sPYLIB上级__+".PYLIB_algorithm",sPYLIB上级__+".PYLIB_string",sPYLIB上级__+".PYLIB_find",sPYLIB上级__+".PYLIB_operator",sPYLIB上级__+".PYLIB_print",sPYLIB上级__+".PYLIB_transform",sPYLIB上级__+".PYLIB_draw",sPYLIB上级__+".PYLIB_curve",sPYLIB上级__+".PYLIB_image",sPYLIB上级+".global_var_LIB",sPYLIB上级__+""];

Ls模块G=["PYLIB.PYLIB_main","PYLIB.PYLIB_math","PYLIB.PYLIB_object","PYLIB.PYLIB_transform","PYLIB.PYLIB_mesh","PYLIB.PYLIB_module","PYLIB.PYLIB_attribute","PYLIB.PYLIB_algorithm","PYLIB.PYLIB_string","PYLIB.PYLIB_find","PYLIB.PYLIB_operator","PYLIB.PYLIB_print","PYLIB.PYLIB_draw","PYLIB.PYLIB_curve","PYLIB.PYLIB_image","PYLIB.global_var_LIB","PYLIB"];

Ls类型物体网格曲线=["MESH","CURVE","LATTICE"];
Ls类型物体有DATA=["MESH","CURVE","LATTICE","FONT","CAMERA","META","LIGHT","SPEAKER"];
Ls类型非MESH有DATA=["ARMATURE","CURVE","LATTICE","FONT","CAMERA","META","LIGHT","SPEAKER"];
Ls整浮布字=["<class 'float'>","<class 'int'>","<class 'string'>","<class 'bool'>"];
Ls列元矢=["<class 'list'>","<class 'tuple'>","<class 'Vector'>","<class 'bpy_prop_array'>","<class 'Euler'>","<class'Quaternion'>"];
Ls忽略键=["TYPE","OBJECT_TYPE","ID_NAME","POINT_NUM","L_LATTICE_POINT","BEVEL_OBJECT_NAME","TAPER_OBJECT_NAME","PARENT_NAME","TEXTURE_NAME","SPLINE_TYPE","EDITBONE_PROPERTY","POSEBONE_PROPERTY","BONE_NUM","LAMP_TYPE","CHILDREN","EMPTY_PROPERTY","LATTICE_PROPERTY","CAMERA_PROPERTY","LAMP_PROPERTY","ARMATURE_PROPERTY","META_PROPERTY","CURVE_PROPERTY","SPLINE_PROPERTY","MODIFIER","CONSTRAINT","PARTICLE","OBJECT_PROPERTY","MESH_PROPERTY","","","","",""];

#========================================
wmG=bpy.context.window_manager;
class 卐DLL类型():
    def __init__(self):
        self.dll=None;
        #if(".." not in sys.path):sys.path.append("..");
        if("B:\\" not in sys.path):sys.path.append("B:\\");

_卐DLL=卐DLL类型();
dllCG=None;dllTEST=None;dllIMDJS=None;dllMESH=None;dllSHARE=None;
cvpC=None;cvpSP=None;cvpOA=None;cvpVL=None;
oA=None;scene=None;C=None;Co=None;Cmesh=None;
dllDRIVER=None;
space节点G=None;region节点G=None;regionG=None;view3dG=None;area3dG=None;
# f2屏丅G=[None,None];f2屏丅preG=[None,None];v丅G=Vector((0.0,0.0,0.0));
# L4f2屏G=[[None,None],[None,None],[None,None],[None,None]];#画面

#----高亮--------------------------

b是高亮G=False;i高亮ξG=-1;s上次模式G="";
#====view==============================================
ci2当前鼠标屏位G=[0,0];
#====色=======================================================
黑=(0.0,0.0,0.0,1);白=(1.0,1.0,1.0,1);灰=(0.5,0.5,0.5,1);
浅黑D=(0.2,0.2,0.2,1);灰蓝=(0.6,0.6,0.7,1);灰青=(0.7,0.7,0.9,1);

#------------------------------------------------------------
红=(8.0,0.0,0.0,1);橙=(1.0,0.6,0.0,1);黄=(1.0, 1.0, 0.0,1);绿=(0.0,1.0,0.0,1);青=(0.0,1.0,1.0,1);浅青=(0.3,0.8,1.0,1);蓝=(0.0,0.0,1.0,1);紫=(1.0,0.0,1.0,1);粉紫=(1.0,0.5,1.0,1);粉红=(1.0,0.7,0.7,1);

深红=(0.5,0.0,0.0,1);深绿=(0.0,0.5,0.0,1);深蓝=(0.0,0.0,0.5,1);

透红D=(8.0,0.0,0.0,0.2);
#----画线---------------------------------------------------------
i缩放G=4;i显示3dG=-1;
area2dG=None;space2dG=None;region2dG=None;b画面G=False;b画曲线G=False;b画圆G=False;b画点厶G=False;b画点厶囗G=False;b画数G=False;b画字G=False;b画多曲线G=False;
乚2dG=None;乚3dG=None;乚2d面G=None;乚字G=None;
s返回值G=None;

#----画图标--------------------------
i图标高宽G=-1;imageG=None;
Mn角色冫ipG={};

#----版本--------------------------
b中文界面G=False;b试玩版G=False;

#----丄----------------------------------------------------------
CL条序L2f2丄画G=None;
#----矩阵-----------------------------------------------------------
L红绿蓝D=[红,绿,蓝,青];

L条序L点序f2=[];L条序LL2f2一一=[];CL2f2=None;CL4f2=None;CL5f4=None;CL4f4=None;
L条序LL6f2=[];f2丅画=None;L条序艹pre点=[];L条序艹pre一一=[];L条序艹pre乛=[];

#----多曲线--------------------------
ciSize曲线G=c_int(-1);
CL2条数丶iSize点G=None;CL2条数丶iSize一一G=None;CL2条数丶iSize乛G=None;
CL条序艹点画G=None;CL条序艹一一画G=None;CL条序艹乛画G=None;
CL条序L点序f2画G=None;CL条序L段序L2f2一一画G=None;CL条序L段序L4f2乛画G=None;
CL条序col点G=(c_float*4*4)();CL条序col一一G=(c_float*4*4)();CL条序col乛G=(c_float*4*4)();
#----单曲线--------------------------
# CL2条数丶iSize点G=c_int(-1);ciSize一一G=c_int(-1);ciSize乛G=c_int(-1);

ciSize厶G=c_int(-1);ciSize囗G=c_int(-1);ciSize厶囗G=c_int(-1);ciSize数G=c_int(-1);ciSize字G=c_int(-1);ciSize点厶G=c_int(-1);
艹数画G=c_int();艹字画G=c_int();艹绑画G=c_int();艹厶画G=c_int();艹囗画G=c_int();艹厶囗画G=c_int();艹点厶画G=c_int();


CLL2f4丅数画G=None;#左是位置,右是rbga颜色
CLL2f4丅字画G=None;CLs64字G=None;

CL面序L4f4厶画G=None;CL面序L5f4囗画G=None;CL面序Lnf4厶囗画G=None;CLL4f4点厶画G=None;
#----2d--------------------------
ciSize一一2dG=c_int(-1);艹一一画2dG=c_int();CL段序L3i4一一画2dG=None;

#----线段---------------------------------------------------------
#L条序Lv线段序画G=None;
#☐☐☐☐☐┄☐☐☐☐☐☐
#☐☐☐┄─┃\☐☐☐☐☐☐
#☐┄─☐☐┃☐\☐☐☐☐☐
CL段序L2f2一一序绑画G=None;CL开始序f2画G=None;

#----更新---------------------------------------------------------
b停止仌G=False;b在播放G=False;

b下LG=c_int();b下RG=c_int();b下中键G=c_int();

#----CTYPES--------------------------------------------------------
ci2〇G=(c_int*2)(0,0);cf2〇G=(c_float*2)(0.0,0.0);ci3〇G=(c_int*3)(0,0,0);cf3〇G=(c_float*3)(0.0,0.0,0.0);
ci2一G=(c_int*2)(-1,-1);ci3一G=(c_int*3)(-1,-1,-1);ci4一G=(c_int*4)(-1,-1,-1,-1);
cf2一G=(c_float*2)(-1.0,-1.0);cf3一G=(c_float*3)(-1.0,-1.0,-1.0);cf4一G=(c_float*4)(-1.0,-1.0,-1.0,-1.0);
cf33一G=(c_float*3*3)(*[cf3一G]*3);cf44一G=(c_float*4*4)(*[cf4一G]*4);
Lcf3G=[];LLcf3G=[];
#----MESH--------------------------
ci点数G=c_int(-1);ci面数G=c_int(-1);ci边数G=c_int(-1);ci环数G=c_int(-1);

#====IMPORT==========================
if("PYLIB.global_var_LIB" in sys.modules):
    LG=sys.modules["PYLIB.global_var_LIB"];
else:
    try:
        import PYLIB.global_var_LIB as LG;
    except:
        if(sPYLIB上级+".PYLIB_"+sPYLIB上级+".global_var_LIB" in sys.modules):
            LG=sys.modules[sPYLIB上级+".PYLIB_"+sPYLIB上级+".global_var_LIB"];
        else:
            exec("import "+sPYLIB上级+".PYLIB_"+sPYLIB上级+".global_var_LIB as LG");

def 灬cvp():
    LG.cvpC=None; LG.cvpSP=None; LG.cvpOA=None;LG.cvpVL=None; LG.C=None; LG.Co=None; LG.Cmesh=None;LG.oA=None;
    print("~~~UNLOAD cvp==",);
    
def 叵cvp(context,o=None):
    LG.C=context;
    if(o):
        LG.oA=o;
    else:
        LG.oA=LG.C.active_object;
    if(LG.oA):
        LG.cvpOA = c_void_p(LG.oA.as_pointer());
    if(LG.cvpVL):
        LG.cvpVL = c_void_p(LG.C.view_layer.as_pointer());        
    LG.scene=LG.C.scene;
    LG.cvpC= c_void_p(LG.C.as_pointer());
    print("###LOAD cvp==",);






