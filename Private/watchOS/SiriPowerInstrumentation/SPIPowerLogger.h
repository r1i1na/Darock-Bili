//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.3.1.0.0
//
#ifndef SPIPowerLogger_h
#define SPIPowerLogger_h
@import Foundation;

@interface SPIPowerLogger : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned char process;

/* instance methods */
- (id)init;
- (id)initWithProcessIdentifier:(int)identifier;
- (id)initWithCurrentProcess;
- (id)captureSnapshot;
@end

#endif /* SPIPowerLogger_h */