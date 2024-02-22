//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef EKTravelEngineOriginalEvent_h
#define EKTravelEngineOriginalEvent_h
@import Foundation;

@class CLLocation, NSData, NSDate, NSString;

@interface EKTravelEngineOriginalEvent : NSObject

@property (retain, nonatomic) NSString *eventExternalURL;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) int transportTypeOverride;
@property (retain, nonatomic) NSString *locationString;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *locationMapKitHandle;
@property (nonatomic) BOOL locationIsAConferenceRoom;
@property (nonatomic) BOOL automaticGeocodingAllowed;

/* instance methods */
- (id)description;
- (BOOL)isEqualToOriginalEvent:(id)event;
@end

#endif /* EKTravelEngineOriginalEvent_h */