
import bpy,os,sys;
from bpy.props import*
from ctypes import*
#from ctypes import c_float,c_int,windll,HMODULE;

#cf3丅鼠initG=(c_float*3)();cf3丅鼠G=(c_float*3)();ci2当前鼠标屏位G=[];#(c_int*2)();

cvpSC=None;cvpA=None;oA=None;C=None;DLLobj=None;

#version="version": (0, 0, 2);
version= (0, 0, 1);
ci停止播放G=c_int();

#----------------------------------------
path目录 = os.path.dirname(__file__) #本py文件所在目录 #E"\blender\addons\Object Presets
文件夹此IOOBJ=os.path.basename(path目录);  #Object Presets

if(文件夹此IOOBJ+".global_var" in sys.modules):
    G=sys.modules[文件夹此IOOBJ+".global_var"];
else:
    exec("import "+文件夹此IOOBJ+".global_var as G");#√
    
dllpathOBJ64 = os.path.abspath("%s/obj_IO64.dll" % path目录);
dllpathOBJ64B ="B:/obj_IO64.dll"  

class 卐卸载DLLobj卐Operator(bpy.types.Operator):
    bl_idname = "dele.dll_lib_io_obj";
    bl_label = "卸载dll";
    #bl_options = {"REGISTER", "UNDO"};
    spDLL:StringProperty(name='',description='',default='',maxlen=0,subtype='NONE',update=None);
    @classmethod
    def poll(cls, context):
        return True; #(obj and obj.type == "MESH")
    def execute(self, context):
        if(G.DLLobj):
            windll.kernel32.FreeLibrary.argtypes = [wintypes.HMODULE];
            windll.kernel32.FreeLibrary(G.DLLobj._handle);#释放dll

            G.cvpSC=G.cvpA=G.oA=G.cvpC=G.vgG=G.DLLobj=None;
        print("delete DLL ~//////////////////////////////////////////",);
        return {"FINISHED"};


class 卐载入DLLobj卐Operator(bpy.types.Operator):
    bl_idname = "load.dll_lib_io_obj";
    bl_label = "载入dll";
    #bl_options = {"REGISTER", "UNDO"};
    #spDLL32:StringProperty(name='',description='',default='',maxlen=0,subtype='NONE',update=None);
    #spDLL64:StringProperty(name='',description='',default='',maxlen=0,subtype='NONE',update=None);
    @classmethod
    def poll(cls, context):
        return True; #(obj and obj.type == "MESH")
    def execute(self, context):
        #D=卐DLL类型();
        try:
            G.DLLobj = CDLL(dllpathOBJ64B);
        except:
            G.DLLobj = CDLL(dllpathOBJ64);
            
        G.cvpSC=c_void_p(context.scene.as_pointer());G.cvpC=c_void_p(context.as_pointer());
        # G.oA=o巜s("ParticleMesh");print("G.oA==",G.oA);
        # if(G.oA):
            # G.cvpA=c_void_p(G.oA.as_pointer());
            
        return {"FINISHED"};

