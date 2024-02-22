//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSystemStateXPCRequestValidator_h
#define CSLSystemStateXPCRequestValidator_h
@import Foundation;

#include "CSLSessionManaging-Protocol.h"
#include "IOSSHLApplicationsProviding-Protocol.h"

@interface CSLSystemStateXPCRequestValidator : NSObject {
  /* instance variables */
  NSObject<IOSSHLApplicationsProviding> *_applicationProvider;
  NSObject<CSLSessionManaging> *_sessionManager;
}

/* instance methods */
- (id)initWithApplicationProvider:(id)provider sessionManager:(id)manager;
- (id)errorForRequestType:(unsigned long long)type onSystemState:(id)state withConnection:(id)connection;
- (id)_errorForRequestDisableOnSystemState:(id)state withConnection:(id)connection;
- (id)_errorForRequestEnableOnSystemState:(id)state withConnection:(id)connection;
- (id)_entitlementsForState:(id)state;
- (id)_requiredSessionTypesForState:(id)state;
- (id)_errorForSetEnabledOnSystemState:(id)state withConnection:(id)connection;
- (id)_errorForSetDisabledOnSystemState:(id)state withConnection:(id)connection;
- (id)_errorForBackgroundControlOnSystemState:(id)state withConnection:(id)connection;
- (id)_errorForRequiringSessionTypeOnSystemState:(id)state withConnection:(id)connection;
@end

#endif /* CSLSystemStateXPCRequestValidator_h */