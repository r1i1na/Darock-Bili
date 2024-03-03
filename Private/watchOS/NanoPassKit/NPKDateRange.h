//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKDateRange_h
#define NPKDateRange_h
@import Foundation;

#include "NPKDateRange-Protocol.h"

@class NSDate, NSString;

@interface NPKDateRange : NSObject<NPKDateRange>

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSString *startDateString;
@property (readonly, nonatomic) NSString *expiryDateString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_dateStringWithDate:(id)date style:(unsigned long long)style;

/* instance methods */
- (id)initWithStartDate:(id)date expirationDate:(id)date formatterStyle:(unsigned long long)style;
@end

#endif /* NPKDateRange_h */