//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCAPackageView_h
#define SFCAPackageView_h
@import Foundation;

#include "UIView.h"
#include "CAStateControllerDelegate-Protocol.h"

@class CALayer, CAStateController, NSMutableArray, NSString;

@interface SFCAPackageView : UIView<CAStateControllerDelegate>

@property (retain) CAStateController *stateController;
@property (readonly) NSMutableArray *completionHandlers;
@property (readonly) BOOL initialState;
@property (readonly, copy) NSString *stateName;
@property (readonly) CALayer *packageRootLayer;
@property (readonly) float duration;

/* class methods */
+ (id)keyPathsForValuesAffectingPackageRootLayer;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_stcaPackageViewCommonInit;
- (id)_newStateControllerWithSuperlayer:(id)superlayer;
- (void)traitCollectionDidChange:(id)change;
- (void)_changeAppearance;
- (unsigned long long)statesCount;
- (BOOL)isInitialState;
- (void)setInitialState;
- (void)animateToInitialStateWithCompletionHandler:(id /* block */)handler;
- (void)animateToStateName:(id)name completionHandler:(id /* block */)handler;
- (id)_getStateWithName:(id)name;
- (void)stateController:(id)controller transitionDidStop:(id)stop completed:(BOOL)completed;
@end

#endif /* SFCAPackageView_h */