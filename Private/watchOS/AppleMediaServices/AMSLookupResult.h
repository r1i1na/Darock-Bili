//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSLookupResult_h
#define AMSLookupResult_h
@import Foundation;

#include "AMSURLResult.h"

@class NSArray, NSDate, NSDictionary;

@interface AMSLookupResult : AMSURLResult {
  /* instance variables */
  NSDictionary *_response;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *allItems;

/* instance methods */
- (id)initWithResult:(id)result dictionary:(id)dictionary;
- (id)appStoreURLWithReason:(long long)reason initialIndex:(long long)index;
- (id)itemForKey:(id)key;
- (id)valueForProperty:(id)property;
- (void)_enumerateItemsWithBlock:(id /* block */)block;
@end

#endif /* AMSLookupResult_h */