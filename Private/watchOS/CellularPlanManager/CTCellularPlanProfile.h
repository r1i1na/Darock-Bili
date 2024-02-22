//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTCellularPlanProfile_h
#define CTCellularPlanProfile_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isBootstrap;
@property (nonatomic) BOOL isDisableNotAllowed;
@property (nonatomic) BOOL isDeleteNotAllowed;
@property (nonatomic) BOOL requiresUserConsent;
@property (copy, nonatomic) NSData *profileId;
@property (copy, nonatomic) NSString *iccid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProfileId:(id)id iccid:(id)iccid selected:(BOOL)selected bootstrap:(BOOL)bootstrap disableNotAllowed:(BOOL)allowed deleteNotAllowed:(BOOL)allowed requiresUserConsent:(BOOL)consent;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CTCellularPlanProfile_h */