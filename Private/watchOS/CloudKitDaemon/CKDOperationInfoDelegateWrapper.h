//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDOperationInfoDelegateWrapper_h
#define CKDOperationInfoDelegateWrapper_h
@import Foundation;

#include "CKDOperationInfoDelegate-Protocol.h"

@class NSString;

@interface CKDOperationInfoDelegateWrapper : NSObject

@property (weak, nonatomic) NSObject<CKDOperationInfoDelegate> *delegate;
@property (copy, nonatomic) NSString *personaID;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)performWithDelegate:(id /* block */)delegate;
@end

#endif /* CKDOperationInfoDelegateWrapper_h */