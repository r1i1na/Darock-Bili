//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNWeakProxy_h
#define LNWeakProxy_h
@import Foundation;

@interface LNWeakProxy : NSObject {
  /* instance variables */
  id /* block */ _wrapper;
}

@property (readonly, weak, nonatomic) id value;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithValue:(id)value wrapper:(id /* block */)wrapper;
- (id)forwardingTargetForSelector:(SEL)selector;
@end

#endif /* LNWeakProxy_h */