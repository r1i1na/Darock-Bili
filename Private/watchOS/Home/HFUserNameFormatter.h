//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFUserNameFormatter_h
#define HFUserNameFormatter_h
@import Foundation;

#include "NSFormatter.h"

@class CNContactFormatter, HMHome;

@interface HFUserNameFormatter : NSFormatter

@property (readonly, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) HMHome *home;

/* class methods */
+ (long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)style;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home;
- (id)stringForObjectValue:(id)value;
@end

#endif /* HFUserNameFormatter_h */