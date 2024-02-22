//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NNCLastNewsStoryResult_h
#define NNCLastNewsStoryResult_h
@import Foundation;

#include "NNHHeadlineLaunchMetadataProviding-Protocol.h"

@class NSData, NSString;

@interface NNCLastNewsStoryResult : NSObject<NNHHeadlineLaunchMetadataProviding>

@property (readonly, copy, nonatomic) NSString *sectionName;
@property (readonly, copy, nonatomic) NSString *sectionColorString;
@property (readonly, copy, nonatomic) NSString *counterString;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *sourceName;
@property (readonly, copy, nonatomic) NSString *shortExcerpt;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSString *sourceNameImagePath;
@property (retain, nonatomic) NSData *sourceNameData;
@property (readonly, nonatomic) NSString *thumbnailPath;
@property (retain, nonatomic) NSData *thumbnailData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *headlineIdentifier;
@property (copy, nonatomic) NSString *headlineTitle;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *sourceName;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *excerpt;
@property (nonatomic) unsigned long long headlineIndex;
@property (nonatomic) unsigned long long totalHeadlineCount;
@property (nonatomic) long long family;

/* instance methods */
- (void)populateWithNotificationUserInfo:(id)info;
- (id)init;
- (BOOL)isEqual:(id)equal;
@end

#endif /* NNCLastNewsStoryResult_h */