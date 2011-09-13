#ifndef DATAMANAGER_GLOBAL_H
#define DATAMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DATAMANAGER_LIBRARY)
#  define DATAMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DATAMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DATAMANAGER_GLOBAL_H