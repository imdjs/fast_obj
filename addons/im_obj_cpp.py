

import bpy

from .global_var import *;
# from .global_var import G,卐卸载DLLobj卐Operator,卐载入DLLobj卐Operator;
try:
    from PYLIB_IMDJS_io_obj.PYLIB_mesh import 十点线面卩
except:  
    from .PYLIB_IMDJS_io_obj.PYLIB_mesh import 十点线面卩
    


#======================================================
def ΔΔ载入(operator, context, filepath, bp用平滑组=True,bp导入材质=True,bp分裂物=False,bpYasZ=False,fpSize=1.0,bp检查文件破损=False):
    if(G.DLLobj==None):
        bpy.ops.load.dll_lib_io_obj();
    ci物数=c_int();
    I=G.DLLobj.iΔobj点数(filepath.encode('gb2312'),bp导入材质,bp分裂物,bp检查文件破损,byref(ci物数));
    print("ci物数 NUM==",ci物数.value);
    if(I==0):return ;
    # return ;
    G.DLLobj.Δ打开obj(filepath.encode('gb2312'),bp导入材质,bp分裂物);
    # return;    
    CLi点数__=(c_int*ci物数.value)();CLi边数__=(c_int*ci物数.value)();CLi环数__=(c_int*ci物数.value)();CLi面数__=(c_int*ci物数.value)();CLc物名__=(c_char*64*ci物数.value)();CLi有UV__=(c_int*ci物数.value)();

    G.DLLobj.Δ转换(bp导入材质,bp分裂物,bpYasZ,bp检查文件破损,c_float(fpSize),CLi点数__,CLi边数__,CLi环数__,CLi面数__,CLc物名__,CLi有UV__);
    # return ;    
    Cmesh=bpy.data.meshes;Co场景=context.view_layer.objects;Co集=context.scene.collection.objects;mesh新=None;o=None;
    if(0<ci物数.value):
        mesh= Cmesh.new("NEW");ξ最后=ci物数.value-1;
        o= bpy.data.objects.new("NO_NAME",mesh);
    for i in range(ci物数.value):
        # if(2<i):return;
        if(i==ξ最后):
            mesh新=mesh;o十=o;
        else:
            # mesh新=mesh.copy();#mesh新.select_set(True);#有可能是.001
            mesh新=Cmesh.new("NEW");o十=o.copy();
        十点线面卩(mesh新,CLi点数__[i],CLi边数__[i],CLi面数__[i],CLi环数__[i]);#print("==",CLi点数__[i],CLi边数__[i],CLi环数__[i],CLi面数__[i]);
        G.DLLobj.重属性1网凸(c_void_p(context.as_pointer()),c_void_p(mesh新.as_pointer()),bp导入材质,bp分裂物,i);
        #if(o头皮.name+"_HAIR" in bpy.data.meshes.keys()):
        #print("NEW MESH==",mesh新);
        # return;
        #----新建物-------------------------------------------------------
        # s物名=CLc物名__[i].value.decode("utf-8");#gb2312 utf-8 gbk
        try:
            s物名=CLc物名__[i].value.decode("utf-8");    
        except:
            s物名=CLc物名__[i].value.decode("gb2312");   
        print("NAME==",s物名);
        o十.name=s物名;
        o十.data=mesh新; o十.data.name=s物名;
       
        bpy.ops.object.select_all(action='DESELECT');

        Co集.link(o十);
        if(CLi有UV__[i]):
            if(Co场景.active!=o十):Co场景.active=o十;
            o十.select_set(True);
            
            bpy.ops.mesh.uv_texture_add();
            G.DLLobj.Set1UV凸(c_void_p(mesh新.as_pointer()),bp分裂物,i);
        if(bp用平滑组):
            o十.select_set(True);
            bpy.ops.object.shade_smooth();
            
        mesh新.update(calc_edges=False,calc_edges_loose=False);

    G.DLLobj.凵meshG凸();

        
#////end////end////end////end////end////end////end////end////end//









