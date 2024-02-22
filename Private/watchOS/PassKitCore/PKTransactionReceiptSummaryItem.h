//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransactionReceiptSummaryItem_h
#define PKTransactionReceiptSummaryItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"

@class NSDecimalNumber, NSString;

@interface PKTransactionReceiptSummaryItem : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary bundle:(id)bundle;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToTransactionReceiptSummaryItem:(id)item;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKTransactionReceiptSummaryItem_h */