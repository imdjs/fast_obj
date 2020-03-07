

bl_info = {
    "name": "IMDJS_OBJ(C++)",
    "author": "imdjs",
    "version": (0, 2, 0),
    "blender": (2, 81, 0),
    "location": "File > Import-Export",
    "description": "import export obj using C++ code " ,
    "warning": "",
    "wiki_url":" --",
    "tracker_url": "https://gum.co/eHMMI",
    "category": "Import-Export"}
    
#/////////////////////////////////////////
#if(文件夹此IOOBJ+".global_var" not in sys.modules):  #卸载后再载入
from .global_var import*
from bpy_extras.io_utils import (ImportHelper,ExportHelper,path_reference_mode,axis_conversion, )
from bpy_extras.wm_utils.progress_report import ProgressReport;
# 卐IOOBJO卐 = orientation_helper("IOOBJOrientationHelper", axis_forward='-Z', axis_up='Y')
#/////////////////////////////////////////
try:
    from .PYLIB_IMDJS_io_obj.PYLIB_main import *
except:    
    from PYLIB_IMDJS_io_obj.PYLIB_main import*
    
""""""
#if (文件夹此IOOBJ+".im_obj_cpp" in sys.modules):
    #del sys.modules[文件夹此IOOBJ+".im_obj_cpp"];#先卸载此子模块\
if(文件夹此IOOBJ+".im_obj_cpp" not in sys.modules):  #卸载后再载入
    from .im_obj_cpp import*

#if (文件夹此IOOBJ+".ex_obj_cpp" in sys.modules):
    #del sys.modules[文件夹此IOOBJ+".ex_obj_cpp"];#先卸载此子模块\
# if(文件夹此IOOBJ+".ex_obj_cpp" not in sys.modules):  #卸载后再载入
    # from .ex_obj_cpp import*


#========================================
class 卐重载IO_OBJ卐Operator(bpy.types.Operator):
    bl_idname = "import.reload_io_obj";
    bl_label = "reload_io_obj";
    #bl_description = "reset Ghost_IK hotkeys,if the addon has been updated to newer version but your hotkeys remain older,and are not compatible with the new version"     
    def execute(self, context):
        Δ重载addonG(文件夹此IOOBJ);
        return {"FINISHED"};
        
class 卐卸载DLLobj卐Operator(bpy.types.Operator):
    bl_idname = "import_dele.dll_lib_io_obj";
    bl_label = "x dll";
    bl_options = {'PRESET', 'UNDO'}
    #bl_options = {"REGISTER", "UNDO"};
    spDLL:StringProperty(name='',description='',default='',maxlen=0,subtype='NONE',update=None);
    # @classmethod
    # def poll(cls, context):
        # return True; #(obj and obj.type == "MESH")
    def draw(self, context):
        layout = self.layout
        row = layout.row(align=True)
        row.prop(self, "spDLL",toggle=True);
        
    def execute(self, context):
        if(G.DLLobj):
            windll.kernel32.FreeLibrary.argtypes = [wintypes.HMODULE];
            windll.kernel32.FreeLibrary(G.DLLobj._handle);#释放dll

            G.cvpSC=G.cvpA=G.oA=G.cvpC=G.vgG=G.DLLobj=None;
        self.report({"WARNING"},"X dll obj");#"INFO" "ERROR" "DEBUG" "WARNING"
        print("delete DLL ~//////////////////////////////////////////",);
        return {"FINISHED"};

#/////////////////////////////////////////
class 导入OBJ(bpy.types.Operator, ImportHelper):
    bl_idname = "import.im_obj"#●●这个import 决定能不能用快捷键
    bl_label = "Import OBJ(C++)"
    bl_options = {'PRESET', 'UNDO'}

    filename_ext = ".obj"
    filter_glob : StringProperty( default="*.obj;*.mtl", options={'HIDDEN'},)

    #b用边 = BoolProperty(name="Lines", description="Import lines as edge", default=True,)
    bp检查文件破损 : BoolProperty(name="check file",description="Check the file for any damage",default=True,);
    bp用平滑组 : BoolProperty(name="Smooth Groups",description="Surround smooth groups by sharp edges",default=True,)

    #bpSelected = BoolProperty(name="Only Selected",description="Only Selected Objects",default=True, )
    bp分裂物 : BoolProperty(name="Split as Objects",description="Import OBJ Objects into Blender Objects",default=True, )   
    bp导入材质 : BoolProperty(name="Material",description="Import Materials",default=True, )       
    bpYasZ : BoolProperty(name="Z axis as Y axis",description="Z axis as Y axis",default=False, )   
    bpApply :BoolProperty(name="apply PSR",description="apply position,scale,rotation",default=True, )   
    fpSize:FloatProperty(name='size',description='',default=1.0,min=0.001,max=1000.0,step=3,precision=2,subtype='NONE',unit='NONE',update=None);
    def draw(self, context):
        layout = self.layout

        row = layout.row(align=True)
        row.prop(self, "bp用平滑组",toggle=True);
        row.prop(self, "bp导入材质",toggle=True);

        row = layout.row(align=True)        
        row.prop(self, "bp分裂物",toggle=True);        
        row.prop(self, "bpYasZ",toggle=True);

        row = layout.split(factor=0.67);
        row.prop(self, "fpSize");
        row.prop(self, "bp检查文件破损");        
        # row.prop(self, "bpApply");
        
    def execute(self, context):
        print("self.filepath==",self.filepath);#self.filepath== B:\untitled.obj
        ΔΔ载入(self, context,self.filepath,self.bp用平滑组,self.bp导入材质,self.bp分裂物,self.bpYasZ,self.fpSize,self.bp检查文件破损);
        # if(self.bpApply):
            # bpy.ops.object.transform_apply(location=False, rotation=True, scale=True);
        bpy.ops.import_dele.dll_lib_io_obj();
        return {'FINISHED'};
    pass;


#//////////////////////////////////////
class ExportOBJ(bpy.types.Operator, ExportHelper):
    bl_idname = "export.ex_obj"
    bl_label = 'Export OBJ(C++)'
    bl_options = {'PRESET'}

    filename_ext = ".obj"
    filter_glob : StringProperty(default="*.obj;*.mtl", options={'HIDDEN'},  )


    bp只选中 : BoolProperty(  name="Selection Only", description="Export selected objects only",  default=False,)
    use_animation : BoolProperty(name="Animation", description="Write out an OBJ for each frame", default=False, )

    bp用修改器 : BoolProperty( name="Apply Modifiers",  description="Apply modifiers (preview resolution)",default=True,)


    b用边 : BoolProperty( name="Include Edges",description="",  default=True, )
    b用平滑组 : BoolProperty( name="Smooth Groups", description="Write sharp edges as smooth groups",  default=False,)
    use_smooth_groups_bitflags : BoolProperty(  name="Bitflag Smooth Groups",description="Same as 'Smooth Groups', but generate smooth groups IDs as bitflags " "(produces at most 32 different smooth groups, usually much less)", default=False, )
    bp转法线 : BoolProperty( name="Write Normals",description="Export one normal per vertex and per LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物, to represent flat LLLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 and sharp edges", default=True, )
    bp转uv : BoolProperty( name="Include UVs",description="Write out the active UV coordinates", default=True, )
    bp有材质 : BoolProperty(  name="Write Materials",  description="Write out the MTL file",default=True,  )
    use_triangles : BoolProperty(  name="Triangulate Faces", description="Convert all LLLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 to triangles", default=False,)
    use_nurbs : BoolProperty(  name="Write Nurbs", description="Write LNURBS curves as OBJ LNURBS rather than " "converting to geometry",default=False,  )
    use_vertex_groups : BoolProperty( name="顶点组",description="", default=False, )

    use_blen_objects : BoolProperty(name="Objects as OBJ Objects", description="",default=True,)
    bp分裂物 : BoolProperty(  name="Objects as OBJ Groups ", description="",  default=False,  )
    group_by_material : BoolProperty( name="Material Groups", description="",default=False, )
    keep_vertex_order : BoolProperty(  name="Keep Vertex Order",  description="", default=False,  )

    global_scale : FloatProperty(name="Scale",min=0.01, max=1000.0,default=1.0, )

    path_mode : path_reference_mode

    check_extension = True

    def execute(self, context):
        # from mathutils import Matrix
        # keywords = self.as_keywords(ignore=("axis_forward", "axis_up", "global_scale", "check_existing","filter_glob", ))

        # m全局矩阵 = (Matrix.Scale(self.global_scale, 4) *axis_conversion(to_forward=self.axis_forward,  to_up=self.axis_up, ).to_4x4())

        # keywords["m全局矩阵"] = m全局矩阵
        # return ΔΔ保存(self, context, **keywords)
        if(G.DLLobj==None):
            bpy.ops.load.dll_lib_io_obj();
        filepath=self.filepath;
        source_dir = os.path.dirname(bpy.data.filepath);
        dest_dir = os.path.dirname(filepath);
        print("source_dir==%s,%s,%s"%(source_dir,dest_dir,self.filepath));
        G.DLLobj.Δ灬数据();
        # for o in context.selected_objects:
            # if(o.type=="MESH"):
                # G.DLLobj.Δ导入1mesh();
            
        G.DLLobj.Δ物转数据(G.cvpC,self.bp只选中,self.bp转uv,self.bp转法线,self.bp有材质,self.bp分裂物,self.filepath.encode('utf-8'));
        
        bpy.ops.import_dele.dll_lib_io_obj();
        return {"FINISHED"};
    pass;
    
def Δimport菜单(self, context):
    self.layout.operator(导入OBJ.bl_idname, text="import .OBJ(C++)", icon="IMPORT");    
    # self.layout.operator(卐重载IO_OBJ卐Operator.bl_idname,translate=True, icon="FILE_TICK");
    self.layout.operator(卐卸载DLLobj卐Operator.bl_idname, text="X  OBJ", icon="CANCEL");#translate=False,

    
def Δexport菜单(self, context):
    self.layout.operator(ExportOBJ.bl_idname, text="export .OBJ (C++)", icon="EXPORT")

#/////////////////////////////////////////
def register():
    # bpy.utils.register_module(__name__)
    注册类([(导入OBJ,ExportOBJ,卐卸载DLLobj卐Operator,卐载入DLLobj卐Operator,)]);
    bpy.types.TOPBAR_MT_file_import.append(Δimport菜单)
    # bpy.types.TOPBAR_MT_file_export.append(Δexport菜单)


def unregister():
    bpy.ops.import_dele.dll_lib_io_obj();
    注销类([(导入OBJ,ExportOBJ,卐卸载DLLobj卐Operator,卐载入DLLobj卐Operator,)]);
    # bpy.utils.unregister_module(__name__)
    bpy.types.TOPBAR_MT_file_import.remove(Δimport菜单)
    # bpy.types.TOPBAR_MT_file_export.remove(Δexport菜单)

    for s in [文件夹此IOOBJ,文件夹此IOOBJ+".im_obj_cpp",文件夹此IOOBJ+".im_obj_cpp",文件夹此IOOBJ+".global_var"]:
        if(s in sys.modules):
            del sys.modules[s]
#------------------------------------------------------------
if __name__ == "__main__":
    register()

#////end////end////end////end////end////end////end////end////end///

