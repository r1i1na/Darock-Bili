//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDElectrocardiogramSessionServer_h
#define HDElectrocardiogramSessionServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HKElectrocardiogramSessionServerInterface-Protocol.h"

@class HKElectrocardiogramSessionConfiguration, NSString;
@protocol OS_dispatch_queue;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer<HKElectrocardiogramSessionServerInterface> {
  /* instance variables */
  HKElectrocardiogramSessionConfiguration *_sessionConfiguration;
  NSObject<OS_dispatch_queue> *_queue;
  long long _sessionState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (void)remote_startWithCompletion:(id /* block */)completion;
- (void)remote_abortWithCompletion:(id /* block */)completion;
@end

#endif /* HDElectrocardiogramSessionServer_h */