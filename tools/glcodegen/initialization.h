glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)DGL_GETPROCADDRESS("glDrawRangeElements");
glTexImage3D = (PFNGLTEXIMAGE3DPROC)DGL_GETPROCADDRESS("glTexImage3D");
glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)DGL_GETPROCADDRESS("glTexSubImage3D");
glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)DGL_GETPROCADDRESS("glCopyTexSubImage3D");
glActiveTexture = (PFNGLACTIVETEXTUREPROC)DGL_GETPROCADDRESS("glActiveTexture");
glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)DGL_GETPROCADDRESS("glSampleCoverage");
glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)DGL_GETPROCADDRESS("glCompressedTexImage3D");
glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)DGL_GETPROCADDRESS("glCompressedTexImage2D");
glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)DGL_GETPROCADDRESS("glCompressedTexImage1D");
glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)DGL_GETPROCADDRESS("glCompressedTexSubImage3D");
glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)DGL_GETPROCADDRESS("glCompressedTexSubImage2D");
glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)DGL_GETPROCADDRESS("glCompressedTexSubImage1D");
glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)DGL_GETPROCADDRESS("glGetCompressedTexImage");
glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)DGL_GETPROCADDRESS("glBlendFuncSeparate");
glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)DGL_GETPROCADDRESS("glMultiDrawArrays");
glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)DGL_GETPROCADDRESS("glMultiDrawElements");
glPointParameterf = (PFNGLPOINTPARAMETERFPROC)DGL_GETPROCADDRESS("glPointParameterf");
glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)DGL_GETPROCADDRESS("glPointParameterfv");
glPointParameteri = (PFNGLPOINTPARAMETERIPROC)DGL_GETPROCADDRESS("glPointParameteri");
glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)DGL_GETPROCADDRESS("glPointParameteriv");
glBlendColor = (PFNGLBLENDCOLORPROC)DGL_GETPROCADDRESS("glBlendColor");
glBlendEquation = (PFNGLBLENDEQUATIONPROC)DGL_GETPROCADDRESS("glBlendEquation");
glGenQueries = (PFNGLGENQUERIESPROC)DGL_GETPROCADDRESS("glGenQueries");
glDeleteQueries = (PFNGLDELETEQUERIESPROC)DGL_GETPROCADDRESS("glDeleteQueries");
glIsQuery = (PFNGLISQUERYPROC)DGL_GETPROCADDRESS("glIsQuery");
glBeginQuery = (PFNGLBEGINQUERYPROC)DGL_GETPROCADDRESS("glBeginQuery");
glEndQuery = (PFNGLENDQUERYPROC)DGL_GETPROCADDRESS("glEndQuery");
glGetQueryiv = (PFNGLGETQUERYIVPROC)DGL_GETPROCADDRESS("glGetQueryiv");
glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)DGL_GETPROCADDRESS("glGetQueryObjectiv");
glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)DGL_GETPROCADDRESS("glGetQueryObjectuiv");
glBindBuffer = (PFNGLBINDBUFFERPROC)DGL_GETPROCADDRESS("glBindBuffer");
glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)DGL_GETPROCADDRESS("glDeleteBuffers");
glGenBuffers = (PFNGLGENBUFFERSPROC)DGL_GETPROCADDRESS("glGenBuffers");
glIsBuffer = (PFNGLISBUFFERPROC)DGL_GETPROCADDRESS("glIsBuffer");
glBufferData = (PFNGLBUFFERDATAPROC)DGL_GETPROCADDRESS("glBufferData");
glBufferSubData = (PFNGLBUFFERSUBDATAPROC)DGL_GETPROCADDRESS("glBufferSubData");
glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)DGL_GETPROCADDRESS("glGetBufferSubData");
glMapBuffer = (PFNGLMAPBUFFERPROC)DGL_GETPROCADDRESS("glMapBuffer");
glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)DGL_GETPROCADDRESS("glUnmapBuffer");
glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)DGL_GETPROCADDRESS("glGetBufferParameteriv");
glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)DGL_GETPROCADDRESS("glGetBufferPointerv");
glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)DGL_GETPROCADDRESS("glBlendEquationSeparate");
glDrawBuffers = (PFNGLDRAWBUFFERSPROC)DGL_GETPROCADDRESS("glDrawBuffers");
glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)DGL_GETPROCADDRESS("glStencilOpSeparate");
glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)DGL_GETPROCADDRESS("glStencilFuncSeparate");
glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)DGL_GETPROCADDRESS("glStencilMaskSeparate");
glAttachShader = (PFNGLATTACHSHADERPROC)DGL_GETPROCADDRESS("glAttachShader");
glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)DGL_GETPROCADDRESS("glBindAttribLocation");
glCompileShader = (PFNGLCOMPILESHADERPROC)DGL_GETPROCADDRESS("glCompileShader");
glCreateProgram = (PFNGLCREATEPROGRAMPROC)DGL_GETPROCADDRESS("glCreateProgram");
glCreateShader = (PFNGLCREATESHADERPROC)DGL_GETPROCADDRESS("glCreateShader");
glDeleteProgram = (PFNGLDELETEPROGRAMPROC)DGL_GETPROCADDRESS("glDeleteProgram");
glDeleteShader = (PFNGLDELETESHADERPROC)DGL_GETPROCADDRESS("glDeleteShader");
glDetachShader = (PFNGLDETACHSHADERPROC)DGL_GETPROCADDRESS("glDetachShader");
glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)DGL_GETPROCADDRESS("glDisableVertexAttribArray");
glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)DGL_GETPROCADDRESS("glEnableVertexAttribArray");
glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)DGL_GETPROCADDRESS("glGetActiveAttrib");
glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)DGL_GETPROCADDRESS("glGetActiveUniform");
glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)DGL_GETPROCADDRESS("glGetAttachedShaders");
glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)DGL_GETPROCADDRESS("glGetAttribLocation");
glGetProgramiv = (PFNGLGETPROGRAMIVPROC)DGL_GETPROCADDRESS("glGetProgramiv");
glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)DGL_GETPROCADDRESS("glGetProgramInfoLog");
glGetShaderiv = (PFNGLGETSHADERIVPROC)DGL_GETPROCADDRESS("glGetShaderiv");
glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)DGL_GETPROCADDRESS("glGetShaderInfoLog");
glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)DGL_GETPROCADDRESS("glGetShaderSource");
glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)DGL_GETPROCADDRESS("glGetUniformLocation");
glGetUniformfv = (PFNGLGETUNIFORMFVPROC)DGL_GETPROCADDRESS("glGetUniformfv");
glGetUniformiv = (PFNGLGETUNIFORMIVPROC)DGL_GETPROCADDRESS("glGetUniformiv");
glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)DGL_GETPROCADDRESS("glGetVertexAttribdv");
glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)DGL_GETPROCADDRESS("glGetVertexAttribfv");
glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)DGL_GETPROCADDRESS("glGetVertexAttribiv");
glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)DGL_GETPROCADDRESS("glGetVertexAttribPointerv");
glIsProgram = (PFNGLISPROGRAMPROC)DGL_GETPROCADDRESS("glIsProgram");
glIsShader = (PFNGLISSHADERPROC)DGL_GETPROCADDRESS("glIsShader");
glLinkProgram = (PFNGLLINKPROGRAMPROC)DGL_GETPROCADDRESS("glLinkProgram");
glShaderSource = (PFNGLSHADERSOURCEPROC)DGL_GETPROCADDRESS("glShaderSource");
glUseProgram = (PFNGLUSEPROGRAMPROC)DGL_GETPROCADDRESS("glUseProgram");
glUniform1f = (PFNGLUNIFORM1FPROC)DGL_GETPROCADDRESS("glUniform1f");
glUniform2f = (PFNGLUNIFORM2FPROC)DGL_GETPROCADDRESS("glUniform2f");
glUniform3f = (PFNGLUNIFORM3FPROC)DGL_GETPROCADDRESS("glUniform3f");
glUniform4f = (PFNGLUNIFORM4FPROC)DGL_GETPROCADDRESS("glUniform4f");
glUniform1i = (PFNGLUNIFORM1IPROC)DGL_GETPROCADDRESS("glUniform1i");
glUniform2i = (PFNGLUNIFORM2IPROC)DGL_GETPROCADDRESS("glUniform2i");
glUniform3i = (PFNGLUNIFORM3IPROC)DGL_GETPROCADDRESS("glUniform3i");
glUniform4i = (PFNGLUNIFORM4IPROC)DGL_GETPROCADDRESS("glUniform4i");
glUniform1fv = (PFNGLUNIFORM1FVPROC)DGL_GETPROCADDRESS("glUniform1fv");
glUniform2fv = (PFNGLUNIFORM2FVPROC)DGL_GETPROCADDRESS("glUniform2fv");
glUniform3fv = (PFNGLUNIFORM3FVPROC)DGL_GETPROCADDRESS("glUniform3fv");
glUniform4fv = (PFNGLUNIFORM4FVPROC)DGL_GETPROCADDRESS("glUniform4fv");
glUniform1iv = (PFNGLUNIFORM1IVPROC)DGL_GETPROCADDRESS("glUniform1iv");
glUniform2iv = (PFNGLUNIFORM2IVPROC)DGL_GETPROCADDRESS("glUniform2iv");
glUniform3iv = (PFNGLUNIFORM3IVPROC)DGL_GETPROCADDRESS("glUniform3iv");
glUniform4iv = (PFNGLUNIFORM4IVPROC)DGL_GETPROCADDRESS("glUniform4iv");
glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)DGL_GETPROCADDRESS("glUniformMatrix2fv");
glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)DGL_GETPROCADDRESS("glUniformMatrix3fv");
glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)DGL_GETPROCADDRESS("glUniformMatrix4fv");
glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)DGL_GETPROCADDRESS("glValidateProgram");
glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)DGL_GETPROCADDRESS("glVertexAttrib1d");
glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)DGL_GETPROCADDRESS("glVertexAttrib1dv");
glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)DGL_GETPROCADDRESS("glVertexAttrib1f");
glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)DGL_GETPROCADDRESS("glVertexAttrib1fv");
glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)DGL_GETPROCADDRESS("glVertexAttrib1s");
glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)DGL_GETPROCADDRESS("glVertexAttrib1sv");
glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)DGL_GETPROCADDRESS("glVertexAttrib2d");
glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)DGL_GETPROCADDRESS("glVertexAttrib2dv");
glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)DGL_GETPROCADDRESS("glVertexAttrib2f");
glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)DGL_GETPROCADDRESS("glVertexAttrib2fv");
glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)DGL_GETPROCADDRESS("glVertexAttrib2s");
glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)DGL_GETPROCADDRESS("glVertexAttrib2sv");
glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)DGL_GETPROCADDRESS("glVertexAttrib3d");
glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)DGL_GETPROCADDRESS("glVertexAttrib3dv");
glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)DGL_GETPROCADDRESS("glVertexAttrib3f");
glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)DGL_GETPROCADDRESS("glVertexAttrib3fv");
glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)DGL_GETPROCADDRESS("glVertexAttrib3s");
glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)DGL_GETPROCADDRESS("glVertexAttrib3sv");
glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nbv");
glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Niv");
glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nsv");
glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nub");
glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nubv");
glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nuiv");
glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)DGL_GETPROCADDRESS("glVertexAttrib4Nusv");
glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)DGL_GETPROCADDRESS("glVertexAttrib4bv");
glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)DGL_GETPROCADDRESS("glVertexAttrib4d");
glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)DGL_GETPROCADDRESS("glVertexAttrib4dv");
glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)DGL_GETPROCADDRESS("glVertexAttrib4f");
glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)DGL_GETPROCADDRESS("glVertexAttrib4fv");
glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)DGL_GETPROCADDRESS("glVertexAttrib4iv");
glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)DGL_GETPROCADDRESS("glVertexAttrib4s");
glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)DGL_GETPROCADDRESS("glVertexAttrib4sv");
glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)DGL_GETPROCADDRESS("glVertexAttrib4ubv");
glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)DGL_GETPROCADDRESS("glVertexAttrib4uiv");
glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)DGL_GETPROCADDRESS("glVertexAttrib4usv");
glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)DGL_GETPROCADDRESS("glVertexAttribPointer");
glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)DGL_GETPROCADDRESS("glUniformMatrix2x3fv");
glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)DGL_GETPROCADDRESS("glUniformMatrix3x2fv");
glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)DGL_GETPROCADDRESS("glUniformMatrix2x4fv");
glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)DGL_GETPROCADDRESS("glUniformMatrix4x2fv");
glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)DGL_GETPROCADDRESS("glUniformMatrix3x4fv");
glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)DGL_GETPROCADDRESS("glUniformMatrix4x3fv");
glColorMaski = (PFNGLCOLORMASKIPROC)DGL_GETPROCADDRESS("glColorMaski");
glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)DGL_GETPROCADDRESS("glGetBooleani_v");
glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)DGL_GETPROCADDRESS("glGetIntegeri_v");
glEnablei = (PFNGLENABLEIPROC)DGL_GETPROCADDRESS("glEnablei");
glDisablei = (PFNGLDISABLEIPROC)DGL_GETPROCADDRESS("glDisablei");
glIsEnabledi = (PFNGLISENABLEDIPROC)DGL_GETPROCADDRESS("glIsEnabledi");
glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)DGL_GETPROCADDRESS("glBeginTransformFeedback");
glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)DGL_GETPROCADDRESS("glEndTransformFeedback");
glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)DGL_GETPROCADDRESS("glBindBufferRange");
glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)DGL_GETPROCADDRESS("glBindBufferBase");
glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)DGL_GETPROCADDRESS("glTransformFeedbackVaryings");
glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)DGL_GETPROCADDRESS("glGetTransformFeedbackVarying");
glClampColor = (PFNGLCLAMPCOLORPROC)DGL_GETPROCADDRESS("glClampColor");
glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)DGL_GETPROCADDRESS("glBeginConditionalRender");
glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)DGL_GETPROCADDRESS("glEndConditionalRender");
glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)DGL_GETPROCADDRESS("glVertexAttribIPointer");
glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)DGL_GETPROCADDRESS("glGetVertexAttribIiv");
glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)DGL_GETPROCADDRESS("glGetVertexAttribIuiv");
glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)DGL_GETPROCADDRESS("glVertexAttribI1i");
glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)DGL_GETPROCADDRESS("glVertexAttribI2i");
glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)DGL_GETPROCADDRESS("glVertexAttribI3i");
glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)DGL_GETPROCADDRESS("glVertexAttribI4i");
glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)DGL_GETPROCADDRESS("glVertexAttribI1ui");
glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)DGL_GETPROCADDRESS("glVertexAttribI2ui");
glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)DGL_GETPROCADDRESS("glVertexAttribI3ui");
glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)DGL_GETPROCADDRESS("glVertexAttribI4ui");
glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)DGL_GETPROCADDRESS("glVertexAttribI1iv");
glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)DGL_GETPROCADDRESS("glVertexAttribI2iv");
glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)DGL_GETPROCADDRESS("glVertexAttribI3iv");
glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)DGL_GETPROCADDRESS("glVertexAttribI4iv");
glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)DGL_GETPROCADDRESS("glVertexAttribI1uiv");
glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)DGL_GETPROCADDRESS("glVertexAttribI2uiv");
glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)DGL_GETPROCADDRESS("glVertexAttribI3uiv");
glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)DGL_GETPROCADDRESS("glVertexAttribI4uiv");
glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)DGL_GETPROCADDRESS("glVertexAttribI4bv");
glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)DGL_GETPROCADDRESS("glVertexAttribI4sv");
glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)DGL_GETPROCADDRESS("glVertexAttribI4ubv");
glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)DGL_GETPROCADDRESS("glVertexAttribI4usv");
glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)DGL_GETPROCADDRESS("glGetUniformuiv");
glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)DGL_GETPROCADDRESS("glBindFragDataLocation");
glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)DGL_GETPROCADDRESS("glGetFragDataLocation");
glUniform1ui = (PFNGLUNIFORM1UIPROC)DGL_GETPROCADDRESS("glUniform1ui");
glUniform2ui = (PFNGLUNIFORM2UIPROC)DGL_GETPROCADDRESS("glUniform2ui");
glUniform3ui = (PFNGLUNIFORM3UIPROC)DGL_GETPROCADDRESS("glUniform3ui");
glUniform4ui = (PFNGLUNIFORM4UIPROC)DGL_GETPROCADDRESS("glUniform4ui");
glUniform1uiv = (PFNGLUNIFORM1UIVPROC)DGL_GETPROCADDRESS("glUniform1uiv");
glUniform2uiv = (PFNGLUNIFORM2UIVPROC)DGL_GETPROCADDRESS("glUniform2uiv");
glUniform3uiv = (PFNGLUNIFORM3UIVPROC)DGL_GETPROCADDRESS("glUniform3uiv");
glUniform4uiv = (PFNGLUNIFORM4UIVPROC)DGL_GETPROCADDRESS("glUniform4uiv");
glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)DGL_GETPROCADDRESS("glTexParameterIiv");
glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)DGL_GETPROCADDRESS("glTexParameterIuiv");
glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)DGL_GETPROCADDRESS("glGetTexParameterIiv");
glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)DGL_GETPROCADDRESS("glGetTexParameterIuiv");
glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)DGL_GETPROCADDRESS("glClearBufferiv");
glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)DGL_GETPROCADDRESS("glClearBufferuiv");
glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)DGL_GETPROCADDRESS("glClearBufferfv");
glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)DGL_GETPROCADDRESS("glClearBufferfi");
glGetStringi = (PFNGLGETSTRINGIPROC)DGL_GETPROCADDRESS("glGetStringi");
glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)DGL_GETPROCADDRESS("glIsRenderbuffer");
glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)DGL_GETPROCADDRESS("glBindRenderbuffer");
glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)DGL_GETPROCADDRESS("glDeleteRenderbuffers");
glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)DGL_GETPROCADDRESS("glGenRenderbuffers");
glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)DGL_GETPROCADDRESS("glRenderbufferStorage");
glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)DGL_GETPROCADDRESS("glGetRenderbufferParameteriv");
glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)DGL_GETPROCADDRESS("glIsFramebuffer");
glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)DGL_GETPROCADDRESS("glBindFramebuffer");
glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)DGL_GETPROCADDRESS("glDeleteFramebuffers");
glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)DGL_GETPROCADDRESS("glGenFramebuffers");
glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)DGL_GETPROCADDRESS("glCheckFramebufferStatus");
glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)DGL_GETPROCADDRESS("glFramebufferTexture1D");
glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)DGL_GETPROCADDRESS("glFramebufferTexture2D");
glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)DGL_GETPROCADDRESS("glFramebufferTexture3D");
glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)DGL_GETPROCADDRESS("glFramebufferRenderbuffer");
glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)DGL_GETPROCADDRESS("glGetFramebufferAttachmentParameteriv");
glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)DGL_GETPROCADDRESS("glGenerateMipmap");
glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)DGL_GETPROCADDRESS("glBlitFramebuffer");
glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)DGL_GETPROCADDRESS("glRenderbufferStorageMultisample");
glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)DGL_GETPROCADDRESS("glFramebufferTextureLayer");
glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)DGL_GETPROCADDRESS("glMapBufferRange");
glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)DGL_GETPROCADDRESS("glFlushMappedBufferRange");
glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)DGL_GETPROCADDRESS("glBindVertexArray");
glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)DGL_GETPROCADDRESS("glDeleteVertexArrays");
glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)DGL_GETPROCADDRESS("glGenVertexArrays");
glIsVertexArray = (PFNGLISVERTEXARRAYPROC)DGL_GETPROCADDRESS("glIsVertexArray");
