//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardTesting_h
#define CNVCardTesting_h
@import Foundation;

@interface CNVCardTesting : NSObject
/* class methods */
+ (id)parseCardWithBodyLine:(id)line;
+ (id)parseCardWithBodyLines:(id)lines;
+ (id)parseCardWithBodyLines:(id)lines version:(id)version encoding:(unsigned long long)encoding;
+ (id)parseCardWithData:(id)data;
+ (id)parseCardWithData:(id)data options:(id)options;
+ (id)cardDataWithBodyLines:(id)lines version:(id)version encoding:(unsigned long long)encoding;
+ (id)resultWithProperty:(id)property value:(id)value label:(id)label isPrimary:(BOOL)primary;
+ (id)complexValueWithValue:(id)value label:(id)label isPrimary:(BOOL)primary;
+ (id)unknownPropertyWithName:(id)name line:(id)line;
+ (id)linesUsingAdapter:(id)adapter;
+ (id)linesUsingAdapter:(id)adapter options:(id)options;
+ (id)version30DataUsingAdapter:(id)adapter;
+ (id)version21DataUsingAdapter:(id)adapter;
+ (BOOL)version30CardForPerson:(id)person containsLine:(id)line;
+ (BOOL)version30CardForPerson:(id)person containsString:(id)string;
+ (BOOL)version30DataUsingAdapter:(id)adapter containsData:(id)data;
+ (BOOL)version21DataUsingAdapter:(id)adapter containsData:(id)data;
+ (id)itemWithValue:(id)value label:(id)label;
+ (id)emailItemWithAddress:(id)address label:(id)label;
+ (id)instantMessagingItemWithUsername:(id)username service:(id)service label:(id)label;
+ (id)gregorianDateWithYear:(long long)year month:(long long)month day:(long long)day;
+ (id)chineseDateWithEra:(long long)era year:(long long)year month:(long long)month day:(long long)day;
+ (id)activityAlertResultWithTypes:(id)types sounds:(id)sounds vibrations:(id)vibrations;
@end

#endif /* CNVCardTesting_h */