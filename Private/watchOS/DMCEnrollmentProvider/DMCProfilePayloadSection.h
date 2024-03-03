//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCProfilePayloadSection_h
#define DMCProfilePayloadSection_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface DMCProfilePayloadSection : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) NSString *sectionFooter;
@property (retain, nonatomic) NSMutableArray *payloadViewModels;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithSectionTitle:(id)title footer:(id)footer payloadViewModels:(id)models;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* DMCProfilePayloadSection_h */