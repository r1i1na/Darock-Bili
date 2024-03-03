//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingHintCacheData_h
#define CSLStingHintCacheData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface CSLStingHintCacheData : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSDictionary *dataCache;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)fromExportData:(id)data;

/* instance methods */
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)toExportData;
@end

#endif /* CSLStingHintCacheData_h */