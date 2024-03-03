//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoAnalysisPresentationServiceProtocol_Protocol_h
#define PLPhotoAnalysisPresentationServiceProtocol_Protocol_h
@import Foundation;

@protocol PLPhotoAnalysisPresentationServiceProtocol 
/* instance methods */
- (void)reloadForYouWidgetTimelineWithContext:(id)context reply:(id /* block */)reply;
- (void)reloadAlbumWidgetTimelineWithContext:(id)context reply:(id /* block */)reply;
- (void)recordFeatureUsageFromCounts:(id)counts context:(id)context reply:(id /* block */)reply;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)context reply:(id /* block */)reply;
@end

#endif /* PLPhotoAnalysisPresentationServiceProtocol_Protocol_h */