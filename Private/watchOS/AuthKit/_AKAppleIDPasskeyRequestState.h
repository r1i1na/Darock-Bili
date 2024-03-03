//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef _AKAppleIDPasskeyRequestState_h
#define _AKAppleIDPasskeyRequestState_h
@import Foundation;

#include "AKAppleIDPasskeyCredentialRequestContext.h"

@interface _AKAppleIDPasskeyRequestState : NSObject

@property (retain, nonatomic) AKAppleIDPasskeyCredentialRequestContext *context;
@property (copy, nonatomic) id /* block */ completion;

/* class methods */
+ (id)stateWithContext:(id)context completion:(id /* block */)completion;

/* instance methods */
@end

#endif /* _AKAppleIDPasskeyRequestState_h */