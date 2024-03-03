//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDWebContentParserState_h
#define EDWebContentParserState_h
@import Foundation;

@class EFPromise, NSURL;

@interface EDWebContentParserState : NSObject

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) EFPromise *dataDetectionPromise;
@property (retain, nonatomic) EFPromise *remoteContentPromise;
@property (retain, nonatomic) EFPromise *richLinkPromise;

/* instance methods */
@end

#endif /* EDWebContentParserState_h */