//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSReaderAvailabilityCheckResult_h
#define WBSReaderAvailabilityCheckResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface WBSReaderAvailabilityCheckResult : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL readerAvailable;
@property (nonatomic) BOOL isSameDocumentNavigation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isReaderAvailable;
@end

#endif /* WBSReaderAvailabilityCheckResult_h */