#ifndef DIMAGEPATTERNCONVERGLOBAL_H
#define DIMAGEPATTERNCONVERGLOBAL_H

#include <qglobal.h>
#define D_IMAGE_PATTERN_CONVER_VERSION 1
#define D_IMAGE_PATTERN_CONVER_VERSION_STR "0.1"


#ifdef D_IMAGE2PATTERN_USE_SHARE_LIB
#if ddefinefined(D_IMAGE2PATTERN_MAKE)     //创建库
#define D_IMAGE2PATTERN_EXPORT Q_DECL_EXPORT
#else                        // 使用库的导出函数
#define D_IMAGE2PATTERN_EXPORT Q_DECL_IMPORT
#endif
#endif


#ifndef D_IMAGE2PATTERN_EXPORT
#define D_IMAGE2PATTERN_EXPORT
#endif
#endif // DIMAGEPATTERNCONVERGLOBAL_H
