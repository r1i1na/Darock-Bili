//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 373.8.0.0.0
//
#ifndef _TtC8FMIPCore22FMAPSConnectionHandler_FMIPCore_h
#define _TtC8FMIPCore22FMAPSConnectionHandler_FMIPCore_h
@import Foundation;

@interface FMIPCore.FMAPSConnectionHandler (FMIPCore) <APSConnectionDelegate>
/* instance methods */
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
@end

#endif /* _TtC8FMIPCore22FMAPSConnectionHandler_FMIPCore_h */