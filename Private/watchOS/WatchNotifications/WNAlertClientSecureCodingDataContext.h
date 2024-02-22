//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNAlertClientSecureCodingDataContext_h
#define WNAlertClientSecureCodingDataContext_h
@import Foundation;

#include "WNAlertClientContext.h"

@class NSData, NSString;

@interface WNAlertClientSecureCodingDataContext : WNAlertClientContext {
  /* instance variables */
  NSString *_className;
  NSData *_data;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithSecureCodingObject:(id)object;
- (Class)rootObjectClass;
- (long long)contextType;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)data;
@end

#endif /* WNAlertClientSecureCodingDataContext_h */