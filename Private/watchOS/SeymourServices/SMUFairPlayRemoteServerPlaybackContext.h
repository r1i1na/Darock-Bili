//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef SMUFairPlayRemoteServerPlaybackContext_h
#define SMUFairPlayRemoteServerPlaybackContext_h
@import Foundation;

@class NSData;

@interface SMUFairPlayRemoteServerPlaybackContext : NSObject

@property (readonly, nonatomic) unsigned int identifier;
@property (readonly, copy, nonatomic) NSData *blob;

/* instance methods */
- (id)initWithBlob:(id)blob identifier:(unsigned int)identifier;
@end

#endif /* SMUFairPlayRemoteServerPlaybackContext_h */