//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAppStoreAppContentItem_h
#define WFAppStoreAppContentItem_h
@import Foundation;

#include "WFiTunesObjectContentItem.h"

@interface WFAppStoreAppContentItem : WFiTunesObjectContentItem
/* class methods */
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (BOOL)canLowercaseTypeDescription;

/* instance methods */
- (id)softwareObject;
- (BOOL)getListSubtitle:(id /* block */)subtitle;
- (BOOL)getListAltText:(id /* block */)text;
- (BOOL)getListThumbnail:(id /* block */)thumbnail forSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* WFAppStoreAppContentItem_h */