//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDCloudKitAttachmentModel_h
#define DEDCloudKitAttachmentModel_h
@import Foundation;

#include "DEDCloudKitBaseModel.h"

@class NSNumber, NSString, NSURL;

@interface DEDCloudKitAttachmentModel : DEDCloudKitBaseModel

@property (retain) NSURL *url;
@property (retain) NSNumber *fileSize;
@property (retain) NSString *queueItem;

/* instance methods */
- (id)initWithURL:(id)url withQueueItem:(id)item parameters:(id)parameters;
- (id)modelName;
@end

#endif /* DEDCloudKitAttachmentModel_h */