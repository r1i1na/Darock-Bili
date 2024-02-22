//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFDAMSUpdateConsumer_h
#define _MFDAMSUpdateConsumer_h
@import Foundation;

#include "_MFDAMSBasicConsumer.h"
#include "MFDASyncActionsConsumer-Protocol.h"

@class NSString;

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer<MFDASyncActionsConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)drainMailbox;
- (BOOL)handleItems:(id)items;
- (void)receiveSyncActions:(id)actions;
- (void)commitSyncActions;
- (void)handleResponse:(id)response error:(id)error;
@end

#endif /* _MFDAMSUpdateConsumer_h */