//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavigationStateGuidance_h
#define MNNavigationStateGuidance_h
@import Foundation;

#include "MNNavigationState.h"
#include "MNNavigationSessionManager.h"
#include "MNStartNavigationDetails.h"

@interface MNNavigationStateGuidance : MNNavigationState {
  /* instance variables */
  MNNavigationSessionManager *_navigationSessionManager;
  MNStartNavigationDetails *_startDetails;
}

/* class methods */
+ (id)guidanceStateForStartDetails:(id)details stateManager:(id)manager navigationSessionManager:(id)manager;

/* instance methods */
- (id)currentDestination;
- (BOOL)requiresHighMemoryThreshold;
- (unsigned long long)desiredLocationProviderType;
- (id)clParameters;
- (BOOL)shouldClearStoredRoutes;
- (id)traceManager;
- (id)simulationLocationProvider;
- (id)initWithStateManager:(id)manager navigationSessionManager:(id)manager startDetails:(id)details;
- (void)enterState;
- (void)leaveState;
- (void)preEnterState;
- (void)postEnterState;
- (void)stopNavigationWithReason:(unsigned long long)reason;
- (void)rerouteWithWaypoints:(id)waypoints;
- (void)insertWaypoint:(id)waypoint;
- (void)removeWaypointAtIndex:(unsigned long long)index;
- (void)advanceToNextLeg;
- (void)updateDestination:(id)destination;
- (void)resumeOriginalDestination;
- (void)forceReroute;
- (void)switchToRoute:(id)route;
- (void)changeTransportType:(int)type route:(id)route;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)reply;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)reply;
- (void)vibrateForPrompt:(unsigned long long)prompt withReply:(id /* block */)reply;
- (void)stopCurrentGuidancePrompt;
- (void)setIsConnectedToCarplay:(BOOL)carplay;
- (void)setDisplayedStepIndex:(unsigned long long)index;
- (void)setRideIndex:(unsigned long long)index forSegmentIndex:(unsigned long long)index;
- (void)setJunctionViewImageWidth:(double)width height:(double)height;
- (void)disableNavigationCapability:(unsigned long long)capability;
- (void)enableNavigationCapability:(unsigned long long)capability;
- (void)acceptReroute:(BOOL)reroute forTrafficIncidentAlert:(id)alert;
- (void)setTraceIsPlaying:(BOOL)playing;
- (void)setTracePlaybackSpeed:(double)speed;
- (void)setTracePosition:(double)position;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)data;
- (void)recordPedestrianTracePath:(id)path;
- (void)setSimulationSpeedOverride:(double)override;
- (void)setSimulationSpeedMultiplier:(double)multiplier;
- (void)setSimulationPosition:(double)position;
- (void)pauseRealtimeUpdatesForSubscriber:(id)subscriber;
- (void)resumeRealtimeUpdatesForSubscriber:(id)subscriber;
@end

#endif /* MNNavigationStateGuidance_h */