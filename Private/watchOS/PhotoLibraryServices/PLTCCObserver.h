//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLTCCObserver_h
#define PLTCCObserver_h
@import Foundation;

#include "PLPhotoLibraryBundleController.h"

@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_observerQueue;
  PLPhotoLibraryBundleController *_libraryBundleController;
}

/* instance methods */
- (id)initWithLibraryBundleController:(id)controller;
- (void)registerAsTCCObserver;
- (void)_handleTCCEvent:(unsigned long long)tccevent auth_record:(id)auth_record;
- (id)_systemPhotoLibrary;
@end

#endif /* PLTCCObserver_h */