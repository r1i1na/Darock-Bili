//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUITemplateImageView_h
#define SAUITemplateImageView_h
@import Foundation;

#include "SAUITemplateBaseItem.h"
#include "SAUIImageResource.h"
#include "SAUITemplateMonogrammable-Protocol.h"

@class NSArray, NSString;

@interface SAUITemplateImageView : SAUITemplateBaseItem<SAUITemplateMonogrammable>

@property (nonatomic) float alpha;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *monogramName;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSArray *themeImages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)imageView;
+ (id)imageViewWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUITemplateImageView_h */