//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMApplicationData_Protocol_h
#define HMApplicationData_Protocol_h
@import Foundation;

@protocol HMApplicationData <NSObject>

@property (readonly, nonatomic) HMApplicationData *applicationData;

/* instance methods */
- (void)updateApplicationData:(id)data completionHandler:(id /* block */)handler;
@end

#endif /* HMApplicationData_Protocol_h */