//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKVectorOverlayData_h
#define VKVectorOverlayData_h
@import Foundation;

#include "VKVectorOverlayDelegate-Protocol.h"

@interface VKVectorOverlayData : NSObject

@property (weak, nonatomic) NSObject<VKVectorOverlayDelegate> *delegate;
@property (nonatomic) long long blendMode;

/* instance methods */
- (id)init;
- (id)_delegate;
- (void)_setDelegate:(id)delegate;
@end

#endif /* VKVectorOverlayData_h */