//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIDataclassMergeActionPicker_h
#define AAUIDataclassMergeActionPicker_h
@import Foundation;

#include "ACUIDataclassActionPicker.h"

@class NSString;

@interface AAUIDataclassMergeActionPicker : ACUIDataclassActionPicker

@property (nonatomic) BOOL isPerformingBatchMerge;
@property (nonatomic) BOOL isTetheredSyncingEnabled;
@property (nonatomic) BOOL isAnotherAccountSyncingDataclass;
@property (nonatomic) BOOL isDataclassSyncingUsingExchangeOnly;
@property (nonatomic) BOOL localStoreHasReadOnlyCalendars;
@property (nonatomic) NSString *tetheredSyncingSource;

/* instance methods */
- (id)title;
- (id)message;
- (id)descriptionForDataclassAction:(id)action;
- (void)setPerformingBatchMerge:(BOOL)merge;
- (void)setTetheredSyncingEnabled:(BOOL)enabled;
- (void)setAnotherAccountIsSyncingDataclass:(BOOL)dataclass;
- (void)setDataclassIsSyncingUsingExchangeOnly:(BOOL)only;
@end

#endif /* AAUIDataclassMergeActionPicker_h */