#ifndef JAGUARUI_GLOBAL_H
#define JAGUARUI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(JAGUARUI_LIBRARY)
#  define JAGUARUISHARED_EXPORT Q_DECL_EXPORT
#else
#  define JAGUARUISHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // JAGUARUI_GLOBAL_H
