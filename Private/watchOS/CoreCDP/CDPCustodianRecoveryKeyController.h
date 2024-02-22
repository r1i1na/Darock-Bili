//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPCustodianRecoveryKeyController_h
#define CDPCustodianRecoveryKeyController_h
@import Foundation;

@interface CDPCustodianRecoveryKeyController : NSObject
/* instance methods */
- (void)createRecoveryKeyWithContext:(id)context forUUID:(id)uuid completion:(id /* block */)completion;
- (void)deleteRecoveryKeyWithContext:(id)context forUUID:(id)uuid completion:(id /* block */)completion;
- (void)validateRecoveryKey:(id)key withContext:(id)context completion:(id /* block */)completion;
- (BOOL)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithContext:(id)context error:(id *)error;
- (BOOL)_isSOSTrustAndSyncingEnabled;
- (BOOL)_isInSOSCircleWithContext:(id)context;
- (void)checkCustodianRecoveryKey:(id)key withContext:(id)context completion:(id /* block */)completion;
@end

#endif /* CDPCustodianRecoveryKeyController_h */