//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIResponder_Override_Host_Entry_h
#define _UIResponder_Override_Host_Entry_h
@import Foundation;

#include "UIResponder.h"

@interface _UIResponder_Override_Host_Entry : NSObject

@property (readonly, weak) UIResponder *overridden;
@property (readonly) long long type;

/* class methods */
+ (id)entryWithResponder:(id)responder forType:(long long)type;

/* instance methods */
- (unsigned long long)hash;
- (id)description;
@end

#endif /* _UIResponder_Override_Host_Entry_h */