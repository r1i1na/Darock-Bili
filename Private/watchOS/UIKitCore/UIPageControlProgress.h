//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPageControlProgress_h
#define UIPageControlProgress_h
@import Foundation;

#include "UIPageControl.h"

@protocol UIPageControlProgressDelegate;

@interface UIPageControlProgress : NSObject {
  /* instance variables */
  struct { unsigned int x :1 initialProgressForPage; unsigned int x :1 visibilityDidChange; } _delegateImplements;
}

@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) NSObject<UIPageControlProgressDelegate> *delegate;
@property (nonatomic) float currentProgress;
@property (readonly, nonatomic) BOOL progressVisible;

/* instance methods */
- (id)init;
- (void)_progressVisibilityChanged:(BOOL)changed;
- (void)_didChangeCurrentPage;
- (float)_initialProgressForPage:(long long)page;
- (void)_pageControlDidMoveToWindow;
- (BOOL)isProgressVisible;
@end

#endif /* UIPageControlProgress_h */