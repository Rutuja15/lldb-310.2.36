//===-- DNBLog.h ------------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//  Created by Greg Clayton on 6/18/07.
//
//===----------------------------------------------------------------------===//

#ifndef __DNBLog_h__
#define __DNBLog_h__

#include <stdio.h>
#include <stdint.h>
#include "DNBDefs.h"

#ifdef __cplusplus
extern "C" {
#endif

// Flags that get filled in automatically before calling the log callback function
#define DNBLOG_FLAG_FATAL       (1u << 0)
#define DNBLOG_FLAG_ERROR       (1u << 1)
#define DNBLOG_FLAG_WARNING     (1u << 2)
#define DNBLOG_FLAG_DEBUG       (1u << 3)
#define DNBLOG_FLAG_VERBOSE     (1u << 4)
#define DNBLOG_FLAG_THREADED    (1u << 5)

#define DNBLOG_ENABLED

#if defined (DNBLOG_ENABLED)

void        _DNBLog(uint32_t flags, const char *format, ...) __attribute__ ((format (printf, 2, 3)));
void        _DNBLogDebug (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void        _DNBLogDebugVerbose (const char *fmt, ...) __attribute__ ((format (printf, 1, 2))) ;
void        _DNBLogThreaded (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void        _DNBLogThreadedIf (uint32_t mask, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
void        _DNBLogError (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void        _DNBLogFatalError (int err, const char *fmt, ...) __attribute__ ((format (printf, 2, 3)));
void        _DNBLogVerbose (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void        _DNBLogWarning (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
void        _DNBLogWarningVerbose (const char *fmt, ...) __attribute__ ((format (printf, 1, 2)));
bool        DNBLogCheckLogBit (uint32_t bit);
uint32_t    DNBLogSetLogMask (uint32_t mask);
uint32_t    DNBLogGetLogMask ();
void        DNBLogSetLogCallback (DNBCallbackLog callback, void *baton);
DNBCallbackLog DNBLogGetLogCallback ();
bool        DNBLogEnabled ();
bool        DNBLogEnabledForAny (uint32_t mask);
int         DNBLogGetDebug ();
void        DNBLogSetDebug (int g);
int         DNBLogGetVerbose ();
void        DNBLogSetVerbose (int g);

#define     DNBLog(fmt, ...)                    do { if (DNBLogEnabled()) { _DNBLog(0, fmt, ## __VA_ARGS__);                 } } while (0)
#define     DNBLogDebug(fmt, ...)               do { if (DNBLogEnabled()) { _DNBLogDebug(fmt, ## __VA_ARGS__);               } } while (0)
#define     DNBLogDebugVerbose(fmt, ...)        do { if (DNBLogEnabled()) { _DNBLogDebugVerbose(fmt, ## __VA_ARGS__);        } } while (0)
#define     DNBLogThreaded(fmt, ...)            do { if (DNBLogEnabled()) { _DNBLogThreaded(fmt, ## __VA_ARGS__);            } } while (0)
#define     DNBLogThreadedIf(mask, fmt, ...)    do { if (DNBLogEnabledForAny(mask)) { _DNBLogThreaded(fmt, ## __VA_ARGS__);  } } while (0)
#define     DNBLogError(fmt, ...)               do { if (DNBLogEnabled()) { _DNBLogError(fmt, ## __VA_ARGS__);               } } while (0)
#define     DNBLogFatalError(err, fmt, ...)     do { if (DNBLogEnabled()) { _DNBLogFatalError(err, fmt, ## __VA_ARGS__);     } } while (0)
#define     DNBLogVerbose(fmt, ...)             do { if (DNBLogEnabled()) { _DNBLogVerbose(fmt, ## __VA_ARGS__);             } } while (0)
#define     DNBLogWarning(fmt, ...)             do { if (DNBLogEnabled()) { _DNBLogWarning(fmt, ## __VA_ARGS__);             } } while (0)
#define     DNBLogWarningVerbose(fmt, ...)      do { if (DNBLogEnabled()) { _DNBLogWarningVerbose(fmt, ## __VA_ARGS__);      } } while (0)

#else   // #if defined(DNBLOG_ENABLED)

#define     DNBLogDebug(...)            ((void)0)
#define     DNBLogDebugVerbose(...)     ((void)0)
#define     DNBLogThreaded(...)         ((void)0)
#define     DNBLogThreadedIf(...)       ((void)0)
#define     DNBLogError(...)            ((void)0)
#define     DNBLogFatalError(...)       ((void)0)
#define     DNBLogVerbose(...)          ((void)0)
#define     DNBLogWarning(...)          ((void)0)
#define     DNBLogWarningVerbose(...)   ((void)0)
#define     DNBLogGetLogFile()          ((FILE *)NULL)
#define     DNBLogSetLogFile(f)         ((void)0)
#define     DNBLogCheckLogBit(bit)      ((bool)false)
#define     DNBLogSetLogMask(mask)      ((uint32_t)0u)
#define     DNBLogGetLogMask()          ((uint32_t)0u)
#define     DNBLogToASL()               ((void)0)
#define     DNBLogToFile()              ((void)0)
#define     DNBLogCloseLogFile()        ((void)0)

#endif // #else defined(DNBLOG_ENABLED)

#ifdef __cplusplus
}
#endif

#endif // #ifndef __DNBLog_h__
