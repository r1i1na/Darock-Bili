//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMCounter_h
#define DOMCounter_h
@import Foundation;

#include "DOMObject.h"

@class NSString;

@interface DOMCounter : DOMObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *listStyle;
@property (readonly, copy) NSString *separator;

/* instance methods */
- (void)dealloc;
@end

#endif /* DOMCounter_h */