//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKLargeTitleDisplayingListCollectionViewController_h
#define NPKLargeTitleDisplayingListCollectionViewController_h
@import Foundation;

#include "NPKListCollectionViewController.h"

@interface NPKLargeTitleDisplayingListCollectionViewController : NPKListCollectionViewController {
  /* instance variables */
  BOOL _initialPrefersLargeTitles;
}

/* instance methods */
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
@end

#endif /* NPKLargeTitleDisplayingListCollectionViewController_h */