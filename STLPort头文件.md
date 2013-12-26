#STLPort头文件

##stlport_prefix.h
src目标下,30个cpp文件和2个c文件,第一个include文件都为stlport_prefix.h,路径这 src/stlport_prefix.h.  
    
    #include "stlport_prefix.h"

**stlport_prefix.h的预处理结果**  
在环境VS2010/Win8/64bit下,通过分析VS的预处理文件.i,stlport_prefix.h实际预处理后包含的文件如下:  
>   src\\stlport_prefix.h  
>   >   src\\warning_disable.h  
>   >   stlport\\stl\\config\\features.h  
>   >   stlport\\stl\\_stlport_version.h  
>   >   stlport\\stl\\config\\user_config.h  
>   >   stlport\\stl\\config\\compat.h  
>   >   stlport\\stl\\config\\host.h  
>   >   stlport\\stl\\config\\_system.h  
>   >   stlport\\stl\\config\\_msvc.h  
>   >   stlport\\stl\\config\\_detect_dll_or_lib.h  
>   >   stlport\\stl\\config\\_auto_link.h  
>   >   stlport\\stl\\config\\_feedback.h  
>   >   stlport\\stl\\config\\_windows.h  
>   >   stlport\\stl\\config\\_native_headers.h  
>   >   stlport\\stdarg.h  
>   >   stlport\\ctype.h  
>   >   stlport\\string.h  
>   >   stlport\\stl\\config\\stl_confix.h  
>   >   src\\stlport_prefix.h  
>   >   stlport\\ctime  
>   >   stlport\\stl\\_prolog.h  
>   >   stlport\\stl\\_cprolog.h  
>   >   stlport\\stl\\config\\_prolog.h  
>   >   stlport\\stl\\config\\_warnings_off.h  
>   >   stlport\\stl\\debug\\_debug.h  
>   >   stlport\\stl\\_ctime.h  
>   >   stlport\\time.h  
>   >   stlport\\stl\\_epilog.h  
>   >   stlport\\stl\\config\\_epilog.h  
>   >   stlport\\stl\\_config_compat_post.h  