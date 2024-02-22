//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKLegacyButtonInterfaceButton_h
#define PKLegacyButtonInterfaceButton_h
@import Foundation;

#include "UIButton.h"
#include "PKLegacyButtonInterface-Protocol.h"

@class NSString, UIColor, UIImage;

@interface PKLegacyButtonInterfaceButton : UIButton<PKLegacyButtonInterface> {
  /* instance variables */
  UIColor *_overrideBackgroundColor;
  UIColor *_overrideForegroundColor;
  UIImage *_image;
}

@property (nonatomic) BOOL showSpinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateActivityIndicatorColorWithColor:(id)color;
- (void)updateBackgroundColorWithColor:(id)color;
- (void)updateTitleColorWithColor:(id)color;
- (void)updateWithImage:(id)image;
- (void)setConfigurationUpdateHandler:(id /* block */)handler;
@end

#endif /* PKLegacyButtonInterfaceButton_h */