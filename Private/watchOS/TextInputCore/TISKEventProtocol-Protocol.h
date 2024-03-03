//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISKEventProtocol_Protocol_h
#define TISKEventProtocol_Protocol_h
@import Foundation;

@protocol TISKEventProtocol 
/* instance methods */
- (id)upTouchEvent;
- (id)downTouchEvent;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (id)description;
- (id)privateDescription;
- (void)reportToSession:(id)session;
- (void)reportInterKeyTiming:(id)timing previousEvent:(id)event;
@end

#endif /* TISKEventProtocol_Protocol_h */