//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEONavigationServerListenerXPCInterface_Protocol_h
#define GEONavigationServerListenerXPCInterface_Protocol_h
@import Foundation;

@protocol GEONavigationServerListenerXPCInterface <NSObject>
/* instance methods */
- (void)navigationStateChanged:(unsigned long long)changed transportType:(int)type isResumingMultipointRoute:(BOOL)route;
- (void)didUpdateLocation:(id)location routeMatchedCoordinate:(struct { unsigned int x0; float x1; })coordinate;
- (void)didUpdateRoute:(id)route;
- (void)didUpdateTrafficForCurrentRoute:(id)route;
- (void)didArriveAtWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (void)didResumeNavigatingFromWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (void)didUpdateETA:(id)eta;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)data;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)data;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)data;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)data;
- (void)routeSummaryUpdatedWithStepIndexData:(id)data;
- (void)routeSummaryUpdatedWithStepNameInfoData:(id)data;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)data;
- (void)routeSummaryUpdatedWithPositionFromSignData:(id)data;
- (void)routeSummaryUpdatedWithPositionFromManeuverData:(id)data;
- (void)routeSummaryUpdatedWithPositionFromDestinationData:(id)data;
- (void)navigationUpdatedWithVoiceVolumeData:(id)data;
- (void)currentRoadNameUpdated:(id)updated;
@end

#endif /* GEONavigationServerListenerXPCInterface_Protocol_h */