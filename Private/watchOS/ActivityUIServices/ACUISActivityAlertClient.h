//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef ACUISActivityAlertClient_h
#define ACUISActivityAlertClient_h
@import Foundation;

#include "_TtP18ActivityUIServices27ActivityAlertClientDelegate_-Protocol.h"

@class NSString, _TtC18ActivityUIServices19ActivityAlertClient;
@protocol ACUISActivityAlertClientDelegate;

@interface ACUISActivityAlertClient : NSObject<ActivityUIServices.ActivityAlertClientDelegate>

@property (retain, nonatomic) ActivityUIServices.ActivityAlertClient *alertClient;
@property (weak, nonatomic) NSObject<ACUISActivityAlertClientDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)activityWithAlertClient:(id)client presentAlertProvider:(id)provider completion:(id /* block */)completion;
- (void)activityWithAlertClient:(id)client dismissAlertProvider:(id)provider;
@end

#endif /* ACUISActivityAlertClient_h */