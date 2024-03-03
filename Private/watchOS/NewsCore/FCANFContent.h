//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCANFContent_h
#define FCANFContent_h
@import Foundation;

#include "FCAssetHandle.h"

@class NSArray, NSString;

@interface FCANFContent : NSObject

@property (readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *fontResourceIDs;
@property (readonly, nonatomic) NSArray *anfDocumentAssetHandles;
@property (readonly, nonatomic) BOOL isANFDocumentCached;

/* instance methods */
- (id)initWithIdentifier:(id)identifier mainDocumentAssetHandle:(id)handle fontResourceIDs:(id)ids;
- (id)fetchANFDocumentDataProviderWithCompletion:(id /* block */)completion;
- (id)fetchANFDocumentDataProviderWithPriority:(long long)priority completion:(id /* block */)completion;
@end

#endif /* FCANFContent_h */