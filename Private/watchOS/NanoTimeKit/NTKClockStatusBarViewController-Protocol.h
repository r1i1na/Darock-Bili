//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKClockStatusBarViewController_Protocol_h
#define NTKClockStatusBarViewController_Protocol_h
@import Foundation;

@protocol NTKClockStatusBarViewController 

@property (nonatomic) BOOL chargingStatusShowsPercentage;
@property (nonatomic) BOOL usesFlipbookCompatibleStatusView;
@property (retain, nonatomic) UIColor *overrideColor;
@property (weak, nonatomic) NSObject<NTKClockStatusBarViewControllerStatusObserver> *statusObserver;

/* instance methods */
- (void)prepareToAnimate;
- (void)animate;
- (void)hideAnimated:(BOOL)animated;
- (void)showAnimated:(BOOL)animated;
- (void)setHorizontalPadding:(double)padding;
- (void)setVerticalPadding:(double)padding;
- (void)setWantsIconShadow:(BOOL)shadow;
- (void)setForSchoolMode:(BOOL)mode;
- (void)setForSleepMode:(BOOL)mode;
- (BOOL)isDisplayingStatus;
- (BOOL)isAnimating;
- (BOOL)isChargingStatusShowingPercentage;
@end

#endif /* NTKClockStatusBarViewController_Protocol_h */