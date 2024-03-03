//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADServer_h
#define CADServer_h
@import Foundation;

#include "CalActivatable-Protocol.h"
#include "ClientConnectionDelegate-Protocol.h"
#include "DatabaseChangeHandling-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject<NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_notificationQueue;
  int _backgroundTaskCount;
  NSXPCListener *_NSXPCListener;
  NSObject<OS_xpc_object> *_xpcConnection;
  NSObject<OS_dispatch_queue> *_xpcQueue;
  NSObject<OS_dispatch_queue> *_tccQueue;
  NSMutableSet *_clientConnections;
  NSLock *_connectionLock;
  NSArray *_signalSensors;
  NSObject<OS_dispatch_queue> *_initDataFirstUnlockQueue;
  BOOL _initializationFinished;
}

@property (retain, nonatomic) NSArray *modules;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithModules:(id)modules;
- (void)dealloc;
- (void)activate;
- (void)deactivate;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_handleDatabaseChanged;
- (void)clientConnectionDied:(id)died;
- (void)_handleXPCConnection:(id)xpcconnection;
- (void)_finishInitializationWithDataAvailable;
- (void)_protectedDataDidBecomeAvailable;
- (void)_migrateIfNeeded;
- (void)_setUpSignalHandlers;
- (void)_tearDownSignalHandlers;
- (void)_trimExtendAndUpdateOccurrenceCache:(BOOL)cache;
- (void)_registerForNotifications;
- (void)_registerForAlarmEvents;
- (void)_registerMaintenanceActivities;
- (void)_registerActivityWithIdentifier:(const char *)identifier block:(id /* block */)block;
- (void)_registerForDatabaseCleanup;
- (void)_registerForAnalyticsCollection;
- (void)_registerForAttachmentCleanup;
- (void)_registerForChangeTableCleanup;
- (void)_registerForConferenceURLRenewal;
- (void)_registerForOccurrenceCacheUpdate;
- (void)cleanupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database;
- (unsigned long long)_lastKnownContactsAuthorization;
- (unsigned long long)_contactsAuthorization;
- (void)_registerContactsAccess;
- (void)_setupBirthdayListener;
- (void)_startBirthdayListener;
- (void)_deactivateAndExit;
- (void)_exit;
- (void)_dumpState;
- (BOOL)isActive;
@end

#endif /* CADServer_h */