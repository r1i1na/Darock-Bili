//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSpotlightDeletionOperation_h
#define PLSpotlightDeletionOperation_h
@import Foundation;

#include "PLSpotlightAsyncOperation.h"
#include "PLPhotoLibrary.h"

@class CSSearchableIndex, NSArray;

@interface PLSpotlightDeletionOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, copy, nonatomic) NSArray *searchableItemIdentifiers;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

/* instance methods */
- (id)initWithPhotoLibrary:(id)library spotlightSearchableIndex:(id)index searchableItemIdentifiers:(id)identifiers;
- (void)main;
@end

#endif /* PLSpotlightDeletionOperation_h */