//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPiTunesMediaSoftwareUnresolvedMetadata_h
#define LPiTunesMediaSoftwareUnresolvedMetadata_h
@import Foundation;

#include "LPiTunesMediaAsset.h"
#include "LPiTunesMediaUnresolvedMetadata-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject<LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSNumber *isHiddenFromSpringboard;
@property (copy, nonatomic) NSNumber *hasMessagesExtension;
@property (retain, nonatomic) LPiTunesMediaAsset *icon;
@property (retain, nonatomic) LPiTunesMediaAsset *messagesAppIcon;
@property (retain, nonatomic) NSArray *screenshots;
@property (retain, nonatomic) LPiTunesMediaAsset *previewVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)resolve;
- (id)assetsToFetch;
@end

#endif /* LPiTunesMediaSoftwareUnresolvedMetadata_h */