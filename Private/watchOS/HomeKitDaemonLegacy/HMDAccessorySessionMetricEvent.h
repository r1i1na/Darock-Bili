//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessorySessionMetricEvent_h
#define HMDAccessorySessionMetricEvent_h
@import Foundation;

#include "HMDHAPMetrics.h"
#include "HMDAccessory.h"
#include "HMMCoreAnalyticsLogging-Protocol.h"

@class NSDictionary, NSString, NSUUID;

@interface HMDAccessorySessionMetricEvent : HMDHAPMetrics<HMMCoreAnalyticsLogging>

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (readonly, nonatomic) BOOL isPrimaryThreadCapable;
@property (readonly, nonatomic) BOOL isThreadNetworkUp;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) unsigned long long percentageDurationActiveSession;
@property (readonly, nonatomic) unsigned long long percentDurationReachable;
@property (readonly, nonatomic) double sessionCheckIntervalSec;
@property (readonly, nonatomic) unsigned long long sessionFailures;
@property (readonly, nonatomic) double submissionIntervalSec;
@property (readonly, nonatomic) unsigned long long successfulSessionRetries;
@property (readonly, nonatomic) long long topErrorCode;
@property (readonly, nonatomic) NSString *topErrorDomain;
@property (readonly, nonatomic) unsigned long long numActiveSessionClients;
@property (readonly, nonatomic) unsigned long long lastSeenSecondsAgo;
@property (readonly, nonatomic) BOOL lastSeenWithLowBattery;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *accessoryTransport;
@property (readonly, nonatomic) NSString *expectedTransport;
@property (readonly, nonatomic) BOOL isThreadAccessory;
@property (readonly, nonatomic) unsigned long long numIPAddresses;
@property (readonly, nonatomic) unsigned long long numIPAddressesTried;
@property (readonly, nonatomic) unsigned long long numBonjourNames;
@property (readonly, nonatomic) BOOL bonjourUpdateForced;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccessory:(id)accessory sessionMetric:(id)metric;
- (id)initWithAccessory:(id)accessory expectedTransport:(id)transport homeUUID:(id)uuid topErrorDomain:(id)domain topErrorCode:(long long)code sessionFailureCount:(unsigned long long)count;
@end

#endif /* HMDAccessorySessionMetricEvent_h */