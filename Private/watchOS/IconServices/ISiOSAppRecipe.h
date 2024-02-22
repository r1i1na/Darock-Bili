//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISiOSAppRecipe_h
#define ISiOSAppRecipe_h
@import Foundation;

#include "ISCompositorRecipe-Protocol.h"
#include "ISRecipeOptionalBorder-Protocol.h"
#include "ISRecipeOptionalMask-Protocol.h"
#include "ISSuppliesIconSpecification-Protocol.h"

@class IFIconSpecification, NSString;

@interface ISiOSAppRecipe : NSObject<ISCompositorRecipe, ISRecipeOptionalMask, ISRecipeOptionalBorder, ISSuppliesIconSpecification>

@property (nonatomic) BOOL templateVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL shouldApplyMask;
@property BOOL shouldDrawBorder;
@property (readonly) IFIconSpecification *iconSpecification;

/* instance methods */
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
@end

#endif /* ISiOSAppRecipe_h */