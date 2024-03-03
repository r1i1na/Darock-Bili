//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDSmartSortSuggestionsInterface_h
#define EDSmartSortSuggestionsInterface_h
@import Foundation;

#include "EFLoggable-Protocol.h"

@class NSString;

@interface EDSmartSortSuggestionsInterface : NSObject<EFLoggable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)topSalienciesForMailboxIDs:(id)ids limit:(long long)limit error:(id *)error;
@end

#endif /* EDSmartSortSuggestionsInterface_h */