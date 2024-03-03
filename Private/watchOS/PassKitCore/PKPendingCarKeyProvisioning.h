//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPendingCarKeyProvisioning_h
#define PKPendingCarKeyProvisioning_h
@import Foundation;

#include "PKPendingProvisioning.h"
#include "NSSecureCoding-Protocol.h"
#include "PKAddCarKeyPassConfiguration.h"

@interface PKPendingCarKeyProvisioning : PKPendingProvisioning<NSSecureCoding>

@property (retain, nonatomic) PKAddCarKeyPassConfiguration *configuration;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)uniqueIdentifierForBrandIdentifier:(id)identifier pairedReaderIdentifier:(id)identifier;
+ (id)uniqueIdentifierForCarKeyConfiguration:(id)configuration;
+ (id)uniqueIdentifierForSubcredential:(id)subcredential;

/* instance methods */
- (id)initWithCarKeyConfiguration:(id)configuration;
- (id)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)representsPass:(id)pass;
@end

#endif /* PKPendingCarKeyProvisioning_h */