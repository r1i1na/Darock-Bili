//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLSuppressSchoolModeAssertionClient_h
#define SCLSuppressSchoolModeAssertionClient_h
@import Foundation;

#include "SCLSuppressSchoolModeAssertionClientDelegate-Protocol.h"
#include "SCLSuppressSchoolModeAssertionXPCServer-Protocol.h"

@class NSString, NSXPCConnection;

@interface SCLSuppressSchoolModeAssertionClient : NSObject<SCLSuppressSchoolModeAssertionXPCServer>

@property (nonatomic) BOOL acquired;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (nonatomic) BOOL entitled;
@property (weak, nonatomic) NSObject<SCLSuppressSchoolModeAssertionClientDelegate> *delegate;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)connectionDidInvalidate;
- (void)acquireWithExplanation:(id)explanation UUID:(id)uuid completion:(id /* block */)completion;
- (BOOL)isAcquired;
- (BOOL)isEntitled;
@end

#endif /* SCLSuppressSchoolModeAssertionClient_h */