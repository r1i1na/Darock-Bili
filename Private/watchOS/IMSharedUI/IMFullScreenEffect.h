//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMFullScreenEffect_h
#define IMFullScreenEffect_h
@import Foundation;

@class NSArray, NSString, NSURL, UIColor;

@interface IMFullScreenEffect : NSObject

@property (nonatomic) BOOL triggeredByResponseKit;
@property (weak, nonatomic) id triggeredByObject;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Class effectViewClass;
@property (readonly, nonatomic) unsigned long long layerCount;
@property (readonly, nonatomic) BOOL effectIsDark;
@property (readonly, nonatomic) BOOL foregroundEffect;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSArray *messageFilters;
@property (readonly, nonatomic) NSURL *soundEffectFileURL;
@property (readonly, nonatomic) BOOL shouldDrawOverNavigationBar;
@property (readonly, nonatomic) BOOL soundEffectHasHapticTrack;
@property (nonatomic) unsigned long long messageOrientation;
@property (weak) id delegate;

/* class methods */
+ (id)_monochromeDimmingFilterWithType:(long long)type;
+ (id)bigEmojiFilter;
+ (id)tapBackFilter;
+ (id)stickerFilter;

/* instance methods */
- (BOOL)isForegroundEffect;
- (void)prepareSoundEffect;
@end

#endif /* IMFullScreenEffect_h */