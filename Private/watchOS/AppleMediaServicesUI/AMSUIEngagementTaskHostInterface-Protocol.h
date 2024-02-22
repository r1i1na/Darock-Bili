//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIEngagementTaskHostInterface_Protocol_h
#define AMSUIEngagementTaskHostInterface_Protocol_h
@import Foundation;

@protocol AMSUIEngagementTaskHostInterface <NSObject>
/* instance methods */
- (void)engagementTaskDidFinishWithResult:(id)result error:(id)error completion:(id /* block */)completion;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })change;
@end

#endif /* AMSUIEngagementTaskHostInterface_Protocol_h */