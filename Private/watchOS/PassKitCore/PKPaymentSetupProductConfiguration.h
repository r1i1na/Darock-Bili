//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupProductConfiguration_h
#define PKPaymentSetupProductConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface PKPaymentSetupProductConfiguration : NSObject<NSCopying>

@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *dirtyStateIdentifier;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *discoveryCardIdentifier;

/* instance methods */
- (id)initWithProductDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPaymentSetupProductConfiguration_h */