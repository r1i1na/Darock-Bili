//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 920.3.0.0.0
//
#ifndef NRMutableDeviceProperty_h
#define NRMutableDeviceProperty_h
@import Foundation;

#include "NRMutableStateBase.h"
#include "NRPBMutableDeviceProperty.h"

@protocol NSObject><NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase

@property (readonly, retain, nonatomic) NSObject<NSObject><NSCopying> *value;
@property (retain, nonatomic) NRPBMutableDeviceProperty *protobuf;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)diffFrom:(id)from to:(id)to;

/* instance methods */
- (id)init;
- (id)initWithValue:(id)value;
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)applyDiff:(id)diff upOnly:(BOOL)only notifyParent:(BOOL)parent unconditional:(BOOL)unconditional;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* NRMutableDeviceProperty_h */