//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryServiceURLRepresentation_h
#define WBSHistoryServiceURLRepresentation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface WBSHistoryServiceURLRepresentation : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSData *urlHash;
@property (readonly, copy, nonatomic) NSData *urlSalt;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithURLString:(id)urlstring;
- (id)initWithURLHash:(id)urlhash salt:(id)salt;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* WBSHistoryServiceURLRepresentation_h */