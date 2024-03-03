//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 30062.41.8.11.4
//
#ifndef BSUIMapItem_h
#define BSUIMapItem_h
@import Foundation;

@class MKMapItem, NSString, UIColor;

@interface BSUIMapItem : NSObject

@property (readonly, retain, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *localizedResponseTime;
@property (readonly, nonatomic) BOOL isMessageIDVerified;
@property (readonly, nonatomic) UIColor *navTintBrandColor;
@property (readonly, nonatomic) UIColor *navBackgroundbrandColor;

/* instance methods */
- (id)initWithMKMapItem:(id)item;
- (id)_localizedResponseTime;
- (BOOL)_isMessageIDVerified;
- (id)_navTintBrandColor;
- (id)_navBackgroundbrandColor;
- (id)_bestBrandIconURLForSize:(struct CGSize { double x0; double x1; })size allowSmaller:(BOOL)smaller;
- (id)_bestNavbarBrandIconURLForSize:(struct CGSize { double x0; double x1; })size allowSmaller:(BOOL)smaller;
- (id)makePlacecardViewController;
@end

#endif /* BSUIMapItem_h */