//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef DOMEventTarget_Protocol_h
#define DOMEventTarget_Protocol_h
@import Foundation;

@protocol DOMEventTarget <NSObject, NSCopying>
/* instance methods */
- (void)addEventListener:(id)listener listener:(id)listener useCapture:(BOOL)capture;
- (void)removeEventListener:(id)listener listener:(id)listener useCapture:(BOOL)capture;
- (BOOL)dispatchEvent:(id)event;
- (void)addEventListener:(id)listener;
- (void)removeEventListener:(id)listener;
@end

#endif /* DOMEventTarget_Protocol_h */