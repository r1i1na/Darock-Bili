//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNLocationTrackerDelegate_Protocol_h
#define MNLocationTrackerDelegate_Protocol_h
@import Foundation;

@protocol MNLocationTrackerDelegate <NSObject>
@optional
/* instance methods */
- (void)locationTracker:(id)tracker didChangeState:(int)state;
- (void)locationTracker:(id)tracker didUpdateArrivalInfo:(id)info;
- (void)locationTracker:(id)tracker didEnterPreArrivalStateForWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (void)locationTracker:(id)tracker didArriveAtWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index;
- (void)locationTracker:(id)tracker didResumeNavigatingFromWaypoint:(id)waypoint endOfLegIndex:(unsigned long long)index reason:(unsigned long long)reason;
- (void)locationTracker:(id)tracker didUpdateTargetLegIndex:(unsigned long long)index;
- (void)locationTracker:(id)tracker didEndNavigatingWithReason:(unsigned long long)reason;
- (void)locationTracker:(id)tracker isApproachingEndOfLeg:(unsigned long long)leg;
- (void)locationTrackerDidEnterPreArrivalState:(id)state;
- (void)locationTrackerDidArrive:(id)arrive;
- (void)locationTracker:(id)tracker didUpdateMatchedLocation:(id)location;
- (void)locationTracker:(id)tracker didReachETAUpdatePosition:(id)position;
- (void)locationTracker:(id)tracker didUpdateETAForRoute:(id)route;
- (void)locationTrackerWillReroute:(id)reroute;
- (void)locationTracker:(id)tracker didSuppressReroute:(id)reroute;
- (void)locationTrackerDidCancelReroute:(id)reroute;
- (void)locationTracker:(id)tracker didReroute:(id)reroute newAlternateRoutes:(id)routes rerouteReason:(unsigned long long)reason request:(id)request response:(id)response;
- (void)locationTracker:(id)tracker didFailRerouteWithError:(id)error;
- (void)locationTracker:(id)tracker didUpdateAlternateRoutes:(id)routes;
- (void)locationTracker:(id)tracker didSwitchToNewTransportType:(int)type newRoute:(id)route request:(id)request response:(id)response;
- (void)locationTracker:(id)tracker didUpdateBackgroundWalkingRoute:(id)route;
- (void)locationTracker:(id)tracker didUpdateVehicleParkingInfo:(id)info;
- (void)locationTracker:(id)tracker receivedTrafficIncidentAlert:(id)alert responseCallback:(id /* block */)callback;
- (void)locationTracker:(id)tracker invalidatedTrafficIncidentAlert:(id)alert;
- (void)locationTracker:(id)tracker updatedTrafficIncidentAlert:(id)alert;
- (void)locationTracker:(id)tracker dismissedTrafficIncidentAlert:(id)alert;
- (void)locationTracker:(id)tracker shouldShowChargingInfoForWaypoint:(id)waypoint;
- (void)locationTracker:(id)tracker didReceiveTransitAlert:(id)alert;
- (void)locationTracker:(id)tracker didReceiveRouteSignalStrength:(unsigned long long)strength;
@end

#endif /* MNLocationTrackerDelegate_Protocol_h */