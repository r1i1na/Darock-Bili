//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinKey_h
#define CSLBulletinKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CSLBulletinKey : NSObject<NSCopying>

@property (readonly, nonatomic) unsigned long long sectionIDType;
@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, copy, nonatomic) NSString *publisherMatchID;

/* instance methods */
- (id)initWithSectionID:(id)id sectionIDType:(unsigned long long)idtype publisherMatchID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CSLBulletinKey_h */