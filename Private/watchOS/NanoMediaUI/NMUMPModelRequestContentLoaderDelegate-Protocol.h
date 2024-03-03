//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUMPModelRequestContentLoaderDelegate_Protocol_h
#define NMUMPModelRequestContentLoaderDelegate_Protocol_h
@import Foundation;

@protocol NMUMPModelRequestContentLoaderDelegate <NSObject>
/* instance methods */
- (void)contentLoader:(id)loader didUpdateModelResponseWithChangeDetails:(id)details;
@optional
/* instance methods */
- (void)contentLoaderWillBeginLoadingContent:(id)content;
- (void)contentLoaderDidFinishLoadingContent:(id)content;
@end

#endif /* NMUMPModelRequestContentLoaderDelegate_Protocol_h */