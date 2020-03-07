
import os
import time

import bpy
import mathutils
import bpy_extras.io_utils


def name_compat(name):
    if (name is None):
        return 'None';
    else:
        return name.replace(' ', '_');


def mesh_triangulate(m2):
    import bmesh;
    bm = bmesh.new();
    bm.from_mesh(m2);
    bmesh.ops.triangulate(bm, faces=bm.faces);
    bm.to_mesh(m2);
    bm.free();


def write_mtl(scene, filepath, path_mode, S复制, Ds材质2):
    from mathutils import Color;

    world = scene.world;
    if (world):
        world_amb = world.ambient_color;
    else:
        world_amb = Color((0.0, 0.0, 0.0));

    source_dir = os.path.dirname(bpy.data.filepath);
    dest_dir = os.path.dirname(filepath);

    file = open(filepath, "w", encoding="utf8", newline="\n");
    Δfw写入器 = file.write;

    Δfw写入器('# Blender MTL File: %r\n' % (os.path.basename(bpy.data.filepath) or "None"));
    Δfw写入器('# Material Count: %i\n' % len(Ds材质2));

    mtl_dict_values = list(Ds材质2.values());
    mtl_dict_values.sort(key=lambda m: m[0]);

    # Write material/image combinations we have used.
    # Using Ds材质2.values() directly gives un-predictable order.
    for mtl_mat_name, mat, face_img in mtl_dict_values:

        # Get the Blender data for the material and the image.
        # Having an image named None will make a bug, dont do it :)

        Δfw写入器('\nnewmtl %s\n' % mtl_mat_name);  # Define a new material: matname_imgname

        if (mat):
            # convert from blenders spec to 0 - 1000 range.
            if (mat.specular_shader == 'WARDISO'):
                tspec = (0.4 - mat.specular_slope) / 0.0004;
            else:
                tspec = (mat.specular_hardness - 1) * 1.9607843137254901;
            Δfw写入器('Ns %.6f\n' % tspec);
            del tspec

            Δfw写入器('Ka %.6f %.6f %.6f\n' % (mat.ambient * world_amb)[:]);  # Ambient, uses mirror color,
            Δfw写入器('Kd %.6f %.6f %.6f\n' % (mat.diffuse_intensity * mat.diffuse_color)[:]);  # Diffuse
            Δfw写入器('Ks %.6f %.6f %.6f\n' % (mat.specular_intensity * mat.specular_color)[:]);  # Specular
            if (hasattr(mat, "raytrace_transparency") and hasattr(mat.raytrace_transparency, "ior")):
                Δfw写入器('Ni %.6f\n' % mat.raytrace_transparency.ior);  # Refraction index
            else:
                Δfw写入器('Ni %.6f\n' % 1.0);
            Δfw写入器('d %.6f\n' % mat.alpha);  # Alpha (obj uses 'd' for dissolve)

            # 0 to disable lighting, 1 for ambient & diffuse only (specular color set to black), 2 for full lighting.
            if (mat.use_shadeless):
                Δfw写入器('illum 0\n');  # ignore lighting
            elif (mat.specular_intensity == 0):
                Δfw写入器('illum 1\n');  # no specular.
            else:
                Δfw写入器('illum 2\n');  # light normaly

        else:
            #write a dummy material here?
            Δfw写入器('Ns 0\n');
            Δfw写入器('Ka %.6f %.6f %.6f\n' % world_amb[:]);  # Ambient, uses mirror color,
            Δfw写入器('Kd 0.8 0.8 0.8\n');
            Δfw写入器('Ks 0.8 0.8 0.8\n');
            Δfw写入器('d 1\n');  # No alpha
            Δfw写入器('illum 2\n');  # light normaly

        # Write images!
        if (face_img):  # We have an image on the LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物!
            filepath = face_img.filepath;
            if (filepath):  # may be '' for generated images
                # write relative image path
                filepath = bpy_extras.io_utils.path_reference(filepath, source_dir, dest_dir,
                                                              path_mode, "", S复制, face_img.library);
                Δfw写入器('map_Kd %s\n' % filepath);  # Diffuse mapping image
                del filepath;
            else:
                # so we write the Lmat image.
                face_img = None;

        if (mat):  # No LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 image. if we havea material search for MTex image.
            image_map = {};
            # backwards so topmost are highest priority
            for mtex in reversed(mat.texture_slots):
                if (mtex and mtex.texture and mtex.texture.type == 'IMAGE'):
                    image = mtex.texture.image;
                    if (image):
                        # texface overrides others
                        if(mtex.use_map_color_diffuse and
                            (face_img is None) and
                            (mtex.use_map_warp is False) and
                            (mtex.texture_coords != 'REFLECTION')):
                            image_map["map_Kd"] = image;
                        if (mtex.use_map_ambient):
                            image_map["map_Ka"] = image;
                        if (mtex.use_map_color_spec):  # specular color
                            image_map["map_Ks"] = image;
                        if (mtex.use_map_hardness):  # specular hardness/glossiness
                            image_map["map_Ns"] = image;
                        if (mtex.use_map_alpha):
                            image_map["map_d"] = image;
                        if (mtex.use_map_translucency):
                            image_map["map_Tr"] = image;
                        if (mtex.use_map_normal):
                            image_map["map_Bump"] = image;
                        if (mtex.use_map_displacement):
                            image_map["disp"] = image;
                        if (mtex.use_map_color_diffuse and (mtex.texture_coords == 'REFLECTION')):
                            image_map["refl"] = image;
                        if (mtex.use_map_emit):
                            image_map["map_Ke"] = image;

            for key, image in sorted(image_map.items()):
                filepath = bpy_extras.io_utils.path_reference(image.filepath, source_dir, dest_dir,path_mode, "", S复制, image.library);
                Δfw写入器('%s %s\n' % (key, repr(filepath)[1:-1]));

    file.close();


def test_nurbs_compat(ob):
    if (ob.type != 'CURVE'):
        return False;

    for nu in ob.data.splines:
        if (nu.point_count_v == 1 and nu.type != 'BEZIER'):  # not a surface and not bezier
            return True;

    return False;

#======================================================
def iΔΔ写入NURBS(Δfw写入器, ob, m物):
    tot_verts = 0;
    cu = ob.data;

    # use negative indices
    for nu in cu.splines:
        if (nu.type == 'POLY'):
            DEG_ORDER_U = 1;
        else:
            DEG_ORDER_U = nu.order_u - 1;  # odd but tested to be correct

        if (nu.type == 'BEZIER'):
            print("\tWarning, bezier curve:", ob.name, "only poly and LNURBS curves supported");
            continue;

        if (nu.point_count_v > 1):
            print("\tWarning, surface:", ob.name, "only poly and LNURBS curves supported");
            continue;

        if (len(nu.points) <= DEG_ORDER_U):
            print("\tWarning, order_u is lower then vert count, skipping:", ob.name);
            continue;

        pt_num = 0;
        do_closed = nu.use_cyclic_u;
        do_endpoints = (do_closed == 0) and nu.use_endpoint_u;

        for pt in nu.points:
            Δfw写入器('v %.6f %.6f %.6f\n' % (m物 * pt.co.to_3d())[:]);
            pt_num += 1;
        tot_verts += pt_num;

        Δfw写入器('g %s\n' % (name_compat(ob.name)));  # name_compat(ob.getData(1)) could use the data name too
        Δfw写入器('cstype bspline\n');  # not ideal, hard coded
        Δfw写入器('deg %d\n' % DEG_ORDER_U);  # not used for curves but most files have it still

        curve_ls = [-(i + 1) for i in range(pt_num)];

        # 'curv' keyword
        if (do_closed):
            if (DEG_ORDER_U == 1):
                pt_num += 1;
                curve_ls.append(-1);
            else:
                pt_num += DEG_ORDER_U;
                curve_ls = curve_ls + curve_ls[0:DEG_ORDER_U];

        Δfw写入器('curv 0.0 1.0 %s\n' % (" ".join([str(i) for i in curve_ls])));  # Blender has no U and V values for the curve

        # 'parm' keyword
        tot_parm = (DEG_ORDER_U + 1) + pt_num;
        tot_parm_div = float(tot_parm - 1);
        parm_ls = [(i / tot_parm_div) for i in range(tot_parm)];

        if (do_endpoints):  # end points, force param
            for i in range(DEG_ORDER_U + 1):
                parm_ls[i] = 0.0;
                parm_ls[-(1 + i)] = 1.0;

        Δfw写入器("parm u %s\n" % " ".join(["%.6f" % i for i in parm_ls]));

        Δfw写入器('end\n');

    return tot_verts;

#======================================================
def ΔΔ写入文件(filepath, objects, scene,
                                   EXPORT_TRI=False,
                                   EXPORT_EDGES=False,
                                   EXPORT_SMOOTH_GROUPS=False,
                                   EXPORT_SMOOTH_GROUPS_BITFLAGS=False,
                                   EXPORT_NORMALS=False,
                                   EXPORT_UV=True,
                                   EXPORT_MTL=True,
                                   EXPORT_APPLY_MODIFIERS=True,
                                   EXPORT_BLEN_OBS=True,
                                   EXPORT_GROUP_BY_OB=False,
                                   EXPORT_GROUP_BY_MAT=False,
                                   EXPORT_KEEP_VERT_ORDER=False,
                                   EXPORT_POLYGROUPS=False,
                                   EXPORT_CURVE_AS_NURBS=True,
                                   EXPORT_GLOBAL_MATRIX=None,
                                   EXPORT_PATH_MODE='AUTO',
                                   ):
    if (EXPORT_GLOBAL_MATRIX is None):
        EXPORT_GLOBAL_MATRIX = mathutils.Matrix();

    def     f3Δ四丅数(v):
        return round(v.x, 4), round(v.y, 4), round(v.z, 4);

    def     f2Δ四丅数(v):
        return round(v[0], 4), round(v[1], 4);

    def     sΔ找顶点组名(LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物, vWeightMap):
        weightDict = {};
        for vert_index in LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物.vertices:
            vWeights = vWeightMap[vert_index];
            for vGroupName, weight in vWeights:
                weightDict[vGroupName] = weightDict.get(vGroupName, 0.0) + weight;

        if (weightDict):
            return max((weight, vGroupName) for vGroupName, weight in weightDict.items())[1];
        else:
            return '(null)';

    #----写入到文件---------------------------------------------------------------
    #print('OBJ Export path: %r' % filepath)

    time1 = time.time();

    file = open(filepath, "w", encoding="utf8", newline="\n");
    Δfw写入器 = file.write;

    # Write Header
    Δfw写入器('# Blender v%s OBJ File: %r\n' % (bpy.app.version_string, os.path.basename(bpy.data.filepath)));
    Δfw写入器('# www.blender.org\n');

    #----写入材质--------------------------------------------------------------
    if (EXPORT_MTL):
        file材质 = os.path.splitext(filepath)[0] + ".mtl";
        Δfw写入器('mtllib %s\n' % repr(os.path.basename(file材质))[1:-1]);  # filepath can contain non utf8 chars, use repr

    # Initialize totals, these are updated each object
    i总顶点数 = i总UV数 = i总丄数 = 1;

    #ξ面点 = 1;

    Ds材质2 = {};
    Ds材质 = {};

    S复制 = set();
    #----导出多个物体---------------------------------------------------------------
    # Get all meshes
    for o in objects:
        if(o.parent and o.parent.instance_type in {'VERTS', 'FACES'}):
            # XXX
            print(o.name, 'is a dupli child - ignoring');
            continue;

        LLo复制m物 = [];
        if (o.instance_type != 'NONE'):
            # XXX
            print('creating dupli_list on', o.name);
            o.dupli_list_create(scene);
            LLo复制m物 = [(dob.object, dob.matrix) for dob in o.dupli_list];
            #print(o.name, 'has', len(LLo复制m物), 'dupli children')
        else:
            LLo复制m物 = [(o, o.matrix_world)];
        #------------------------------------------------------------
        for ob, m物 in LLo复制m物:
            iUV环 = i丄数 = 0;

            # Nurbs curve support
            if (EXPORT_CURVE_AS_NURBS and test_nurbs_compat(ob)):
                m物 = EXPORT_GLOBAL_MATRIX * m物;
                i总顶点数 += iΔΔ写入NURBS(Δfw写入器, ob, m物);
                continue;
            # END NURBS

            try:
                m2 = ob.to_mesh(scene, EXPORT_APPLY_MODIFIERS, 'PREVIEW', calc_edges_loose=False); #Create a Mesh datablock with modifiers applied
            except RuntimeError:
                m2 = None;

            if (m2 is None):
                continue;

            m2.transform(EXPORT_GLOBAL_MATRIX * m物); #Transform mesh vertices by a matrix

            if (EXPORT_TRI):
                # _must_ do this first since it re-allocs arrays
                mesh_triangulate(m2);

            if (EXPORT_UV):
                b有UV = len(m2.uv_layers) > 0;
                if (b有UV):
                    Lmtp = m2.uv_layers.active.data[:]; #MeshTexturePoly
                    Lmuvl = m2.uv_layers.active.data[:]; #MeshUVLoop
            else:
                b有UV = False;

            Lmv = m2.vertices[:];

            # Make our own list so it can be sorted to reduce context switching
            L序Lmp面ξ面 = [(mp面, index) for index ,mp面 in enumerate(m2.polygons)];
            # LLLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 = [ f for f in m2.tessfaces ]

            if (EXPORT_EDGES):
                Lme = m2.edges;
            else:
                Lme = [];

            if (not (len(L序Lmp面ξ面) + len(Lme) + len(Lmv))):
                bpy.data.meshes.remove(m2);
                continue;  # dont bother with this mesh.

            if (EXPORT_NORMALS and L序Lmp面ξ面):
                m2.calc_normals_split();
                # No need to call m2.free_normals_split later, as this mesh is deleted anyway!
                Cml环 = m2.loops;
            else:
                Cml环 = [];

            if ((EXPORT_SMOOTH_GROUPS or EXPORT_SMOOTH_GROUPS_BITFLAGS) and L序Lmp面ξ面):
                Li平滑组, i平滑组数 = m2.calc_smooth_groups(EXPORT_SMOOTH_GROUPS_BITFLAGS); #
                if (i平滑组数 <= 1):
                    Li平滑组, i平滑组数 = (), 0;
            else:
                Li平滑组, i平滑组数 = (), 0;

            Lmat = m2.materials[:];
            Ls材质名 = [m.name if m else None for m in Lmat];

            # avoid bad index errors
            if (not Lmat):
                Lmat = [None];
                Ls材质名 = [name_compat(None)];

            # Sort by Material, then images
            # so we dont over context switch in the obj file.
            if (EXPORT_KEEP_VERT_ORDER):#保持顶点顺序
                pass;
            else:
                if (b有UV):
                    if (Li平滑组):
                        sort_func = lambda a: (a[0].material_index,
                                               hash(Lmtp[a[1]].image),
                                               Li平滑组[a[1]] if a[0].use_smooth else False);
                    else:
                        sort_func = lambda a: (a[0].material_index,
                                               hash(Lmtp[a[1]].image),
                                               a[0].use_smooth);
                elif (len(Lmat) > 1):
                    if (Li平滑组):
                        sort_func = lambda a: (a[0].material_index,Li平滑组[a[1]] if a[0].use_smooth else False);
                    else:
                        sort_func = lambda a: (a[0].material_index,a[0].use_smooth);
                else:
                    # no Lmat
                    if (Li平滑组):
                        sort_func = lambda a: Li平滑组[a[1] if a[0].use_smooth else False];
                    else:
                        sort_func = lambda a: a[0].use_smooth;

                L序Lmp面ξ面.sort(key=sort_func);

                del sort_func;

            # Set the default mat to no material and no image.
            contextMat = 0, 0;  # Can never be this, so we will label a new material the first chance we get.
            contextSmooth = None ; # Will either be true or false,  set bad to force initialization switch.

            if (EXPORT_BLEN_OBS or EXPORT_GROUP_BY_OB):
                name1 = ob.name;
                name2 = ob.data.name;
                if (name1 == name2):
                    obnamestring = name_compat(name1);
                else:
                    obnamestring = '%s_%s' % (name_compat(name1), name_compat(name2));

                if (EXPORT_BLEN_OBS):
                    Δfw写入器('o %s\n' % obnamestring); # 写入物名
                else:  # if EXPORT_GROUP_BY_OB:
                    Δfw写入器('g %s\n' % obnamestring);

            #----写入顶点--------------------------------------------------------------
            for v in Lmv:
                Δfw写入器('v %.6f %.6f %.6f\n' % v.co[:]); #保持6丅小数

            #----写入uv------------------------------------------------
            if (b有UV):
                # in case removing some of these dont get defined.
                uv = ξ面 = i步 = f2UV = i环 = Li环 = None;

                Lξ面Li环 = [None] * len(L序Lmp面ξ面);

                Df2UVi环 = {};
                ΔDuvGet = Df2UVi环.get;
                for mp面, ξ面 in L序Lmp面ξ面:
                    #print("EXP==",mp面);
                    Li环 = Lξ面Li环[ξ面] = [];
                    for i步, i环 in enumerate(mp面.loop_indices):
                        uv = Lmuvl[i环].uv;
                        f2UV = f2Δ四丅数(uv);
                        i环 = ΔDuvGet(f2UV);#●●只能有1个uv键
                        if (i环 is None):
                            i环 = Df2UVi环[f2UV] = iUV环;
                            Δfw写入器('vt %.6f %.6f\n' % uv[:]);
                            iUV环 += 1;
                        Li环.append(i环);#Li环 变化 Lξ面Li环 也跟着变化

                del Df2UVi环, uv, ξ面, i步, Li环, ΔDuvGet, f2UV, i环;
                # Only need iUV环 and Lξ面Li环

            #----写入丄-------------------------------------------------------------
            if (EXPORT_NORMALS):
                f3丄 = i丄值 = None;
                Df3丄i值 = {};

                ΔDi丄get = Df3丄i值.get;
                L序i不同的丄 = [0] * len(Cml环);#[0,0,0]
                for mp面, ξ面 in L序Lmp面ξ面:
                    for i环 in mp面.loop_indices:
                        f3丄 = f3Δ四丅数(Cml环[i环].normal);
                        #print("f3丄==",f3丄);
                        i丄值 = ΔDi丄get(f3丄);#如果丄不同 i丄值也不同
                        #print("GET VALUE==",i丄值,Df3丄i值);
                        if (i丄值 is None):#第1次是None
                            i丄值 = Df3丄i值[f3丄] = i丄数;#这个值是不断递增的
                            Δfw写入器('vn %.6f %.6f %.6f\n' % f3丄);
                            #print("NORMAL==",f3丄);
                            i丄数 += 1;
                        L序i不同的丄[i环] = i丄值;

                del Df3丄i值, ΔDi丄get, f3丄, i丄值;
            else:
                L序i不同的丄 = [];
                
            #print("LiNormal==",L序i不同的丄);

            if (not b有UV):
                f_image = None;

            #----多边形组--------------------------------------------------------------
            if (EXPORT_POLYGROUPS):
                # Retrieve the list of vertex groups
                vertGroupNames = ob.vertex_groups.keys();
                if (vertGroupNames):
                    currentVGroup = '';
                    # Create a dictionary keyed by LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 id and listing, for each vertex, the vertex groups it belongs to
                    vgroupsMap = [[] for _i in range(len(Lmv))];
                    for v_idx, v_ls in enumerate(vgroupsMap):
                        v_ls[:] = [(vertGroupNames[g.group], g.weight) for g in Lmv[v_idx].groups];

            for mp面, ξ面 in L序Lmp面ξ面:
                b用平滑 = mp面.use_smooth;
                if (b用平滑 and Li平滑组):
                    b用平滑 = Li平滑组[ξ面];
                f_mat = min(mp面.material_index, len(Lmat) - 1);

                if (b有UV):
                    tface = Lmtp[ξ面];
                    f_image = tface.image;

                # MAKE KEY
                if (b有UV and f_image):  # Object is always true.
                    key = Ls材质名[f_mat], f_image.name;
                else:
                    key = Ls材质名[f_mat], None;  # No image, use None instead.

                # Write the vertex group
                if (EXPORT_POLYGROUPS):
                    if (vertGroupNames):
                        # find what vertext group the LLξ面丅Lξ面丄Lξ面图mat材质g平滑组o物 belongs to
                        vgroup_of_face = sΔ找顶点组名(mp面, vgroupsMap);
                        if vgroup_of_face != currentVGroup:
                            currentVGroup = vgroup_of_face;
                            Δfw写入器('g %s\n' % vgroup_of_face);

                # CHECK FOR CONTEXT SWITCH
                if (key == contextMat):
                    pass;  # Context already switched, dont do anything
                else:
                    if (key[0] is None and key[1] is None):
                        # Write a null material, since we know the context has changed.
                        if (EXPORT_GROUP_BY_MAT):
                            # can be mat_image or (null)
                            Δfw写入器("g %s_%s\n" % (name_compat(ob.name), name_compat(ob.data.name)));  # can be mat_image or (null)
                        if (EXPORT_MTL):
                            Δfw写入器("usemtl (null)\n");  # mat, image

                    else:
                        mat_data = Ds材质2.get(key);
                        if (not mat_data):
                            s材质名 = "%s" % name_compat(key[0]);
                            if (Ds材质.get(s材质名, None) not in {key, None}):
                                if (key[1] is None):
                                    tmp_ext = "_NONE";
                                else:
                                    tmp_ext = "_%s" % name_compat(key[1]);
                                i = 0;
                                while (Ds材质.get(s材质名 + tmp_ext, None) not in {key, None}):
                                    i += 1;
                                    tmp_ext = "_%3d" % i;

                                s材质名 += tmp_ext;
                            mat_data = Ds材质2[key] = s材质名, Lmat[f_mat], f_image;
                            Ds材质[s材质名] = key;

                        if (EXPORT_GROUP_BY_MAT):
                            Δfw写入器("g %s_%s_%s\n" % (name_compat(ob.name), name_compat(ob.data.name), mat_data[0]));  # can be mat_image or (null)
                        if (EXPORT_MTL):
                            Δfw写入器("usemtl %s\n" % mat_data[0]);  # can be mat_image or (null)

                contextMat = key;
                #------------------------------------------------------------
                if (b用平滑 != contextSmooth):
                    if (b用平滑):  # on now off
                        if (Li平滑组):
                            b用平滑 = Li平滑组[ξ面];
                            Δfw写入器('s %d\n' % b用平滑);
                        else:
                            Δfw写入器('s 1\n');
                    else:  # was off now on
                        Δfw写入器('s off\n');
                    contextSmooth = b用平滑;
                    
                #----写入 面, UV ,丄-----------------------------------------------------------
                #Li面点序mv点i环 = [(i面点序, Lmv[v_idx]) for i面点序, v_idx in enumerate(mp面.vertices)]
                Li面点序mv点i环 = [(i面点序, Lmv[ξ面点], i环) for i面点序, (ξ面点, i环) in enumerate(zip(mp面.vertices, mp面.loop_indices))]
                Δfw写入器('f');
                if (b有UV):
                    if (EXPORT_NORMALS):
                        for i面点序, mv点, i环 in Li面点序mv点i环:
                            Δfw写入器(" %d/%d/%d" %
                                       (i总顶点数 + mv点.index,#这时i总顶点数==1
                                        i总UV数 + Lξ面Li环[ξ面][i面点序],#这时i总UV数==1
                                        i总丄数 + L序i不同的丄[i环],
                                        ));  # vert, uv, normal
                            
                    else:  # No Normals
                        for i面点序, mv点, i环 in Li面点序mv点i环:
                            Δfw写入器(" %d/%d" % 
                                       (i总顶点数 + mv点.index,
                                       i总UV数 + Lξ面Li环[ξ面][i面点序],
                                       ));# vert, uv
                        
                    #ξ面点 += len(Li面点序mv点i环);
                #----没有UV---------------------------------------------------------------
                else: 
                    if (EXPORT_NORMALS):
                        for i面点序, mv点, i环 in Li面点序mv点i环:
                            Δfw写入器(" %d//%d" % (i总顶点数 + mv点.index, i总丄数 + L序i不同的丄[i环]));
                    else:  # No Normals
                        for i面点序, mv点, i环 in Li面点序mv点i环:
                            Δfw写入器(" %d" % (i总顶点数 + mv点.index));

                Δfw写入器('\n');
            #----导出边--------------------------------------------------------------
            # Write Lme.
            if (EXPORT_EDGES):
                for me in Lme:
                    if (me.is_loose):#松散的边
                        Δfw写入器('l %d %d\n' % (i总顶点数 + me.vertices[0], i总顶点数 + me.vertices[1]));

            # Make the indices global rather then per mesh
            i总顶点数 += len(Lmv);print("TOT VRT==",i总顶点数);#这个是1个物体加一次
            i总UV数 += iUV环;
            i总丄数 += i丄数;

            # clean up
            bpy.data.meshes.remove(m2);

        if (o.instance_type != 'NONE'):
            o.dupli_list_clear();
    #----结束写入数据--------------------------------------------------------------
    file.close();

    # Now we have all our Lmat, ΔΔ保存 them
    if (EXPORT_MTL):
        write_mtl(scene, file材质, EXPORT_PATH_MODE, S复制, Ds材质2);

    # copy all collected files.
    bpy_extras.io_utils.path_reference_copy(S复制);

    print("OBJ Export time: %.2f" % (time.time() - time1));

#======================================================
def _write(context, filepath,
              EXPORT_TRI,  # ok
              EXPORT_EDGES,
              EXPORT_SMOOTH_GROUPS,
              EXPORT_SMOOTH_GROUPS_BITFLAGS,
              EXPORT_NORMALS,  # not yet
              EXPORT_UV,  # ok
              EXPORT_MTL,
              EXPORT_APPLY_MODIFIERS,  # ok
              EXPORT_BLEN_OBS,
              EXPORT_GROUP_BY_OB,
              EXPORT_GROUP_BY_MAT,
              EXPORT_KEEP_VERT_ORDER,
              EXPORT_POLYGROUPS,
              EXPORT_CURVE_AS_NURBS,
              EXPORT_SEL_ONLY,  # ok
              EXPORT_ANIMATION,
              EXPORT_GLOBAL_MATRIX,
              EXPORT_PATH_MODE,
              ):  # Not used

    base_name, 后辍 = os.path.splitext(filepath);
    Ls名称后辍 = [base_name, '', '', 后辍];  # Base name, scene name, frame number, extension

    scene = context.scene;

    # Exit edit mode before exporting, so current object states are exported properly.
    if (bpy.ops.object.mode_set.poll()):
        bpy.ops.object.mode_set(mode='OBJECT');

    i当前帧 = scene.frame_current;
    #------------------------------------------------------------
    # Export an animation?
    if (EXPORT_ANIMATION):
        Li帧 = range(scene.frame_start, scene.frame_end + 1);  # Up to and including the end frame.
    else:
        Li帧 = [i当前帧]  # Dont export an animation.

    # Loop through all frames in the scene and export.
    for frame in Li帧:
        if (EXPORT_ANIMATION):  # Add frame to the filepath.
            Ls名称后辍[2] = '_%.6d' % frame;

        scene.frame_set(frame, 0.0)
        if (EXPORT_SEL_ONLY):
            objects = context.selected_objects;
        else:
            objects = context.view_layer.objects;

        full_path = ''.join(Ls名称后辍);

        # erm... bit of a problem here, this can overwrite files when exporting frames. not too bad.
        # EXPORT THE FILE.
        ΔΔ写入文件(full_path, objects, scene,
                   EXPORT_TRI,
                   EXPORT_EDGES,
                   EXPORT_SMOOTH_GROUPS,
                   EXPORT_SMOOTH_GROUPS_BITFLAGS,
                   EXPORT_NORMALS,
                   EXPORT_UV,
                   EXPORT_MTL,
                   EXPORT_APPLY_MODIFIERS,
                   EXPORT_BLEN_OBS,
                   EXPORT_GROUP_BY_OB,
                   EXPORT_GROUP_BY_MAT,
                   EXPORT_KEEP_VERT_ORDER,
                   EXPORT_POLYGROUPS,
                   EXPORT_CURVE_AS_NURBS,
                   EXPORT_GLOBAL_MATRIX,
                   EXPORT_PATH_MODE,
                   );

    scene.frame_set(i当前帧, 0.0);


#======================================================
def ΔΔ保存(operator, context, filepath="",
        use_triangles=False,
        b用边=True,
        bp转法线=False,
        b用平滑组=False,
        use_smooth_groups_bitflags=False,
        bp转uv=True,
        bp有材质=True,
        bp用修改器=True,
        use_blen_objects=True,
        bp分裂物=False,
        group_by_material=False,
        keep_vertex_order=False,
        use_vertex_groups=False,
        use_nurbs=True,
        bp只选中=True,
        use_animation=False,
        m全局矩阵=None,
        path_mode='AUTO'
        ):

    _write(context, filepath,
           EXPORT_TRI=use_triangles,
           EXPORT_EDGES=b用边,
           EXPORT_SMOOTH_GROUPS=b用平滑组,
           EXPORT_SMOOTH_GROUPS_BITFLAGS=use_smooth_groups_bitflags,
           EXPORT_NORMALS=bp转法线,
           EXPORT_UV=bp转uv,
           EXPORT_MTL=bp有材质,
           EXPORT_APPLY_MODIFIERS=bp用修改器,
           EXPORT_BLEN_OBS=use_blen_objects,
           EXPORT_GROUP_BY_OB=bp分裂物,
           EXPORT_GROUP_BY_MAT=group_by_material,
           EXPORT_KEEP_VERT_ORDER=keep_vertex_order,
           EXPORT_POLYGROUPS=use_vertex_groups,
           EXPORT_CURVE_AS_NURBS=use_nurbs,
           EXPORT_SEL_ONLY=bp只选中,
           EXPORT_ANIMATION=use_animation,
           EXPORT_GLOBAL_MATRIX=m全局矩阵,
           EXPORT_PATH_MODE=path_mode,
           );

    return {'FINISHED'};

#////end////end////end////end////end////end////end////end////end///

