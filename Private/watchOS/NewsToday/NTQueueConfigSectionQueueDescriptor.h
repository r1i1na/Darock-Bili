//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTQueueConfigSectionQueueDescriptor_h
#define NTQueueConfigSectionQueueDescriptor_h
@import Foundation;

#include "NTSectionQueueDescriptor-Protocol.h"

@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject<NTSectionQueueDescriptor>

@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) unsigned long long visibleSectionConfigsLimit;

/* instance methods */
- (id)init;
- (id)initWithQueueConfig:(id)config appConfiguration:(id)configuration todayData:(id)data inFavoritesOnlyMode:(BOOL)mode respectsWidgetVisibleSectionsLimit:(BOOL)limit;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NTQueueConfigSectionQueueDescriptor_h */