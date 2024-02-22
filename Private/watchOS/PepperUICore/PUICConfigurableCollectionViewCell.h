//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICConfigurableCollectionViewCell_h
#define PUICConfigurableCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "PUICContentConfiguration-Protocol.h"

@interface PUICConfigurableCollectionViewCell : UICollectionViewCell

@property (nonatomic) double darkeningFactor;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } layoutTransform;
@property (retain, nonatomic) id representedIdentifier;
@property (nonatomic) BOOL animatesChangesToHighlighted;
@property (nonatomic) BOOL softDisabled;
@property (copy, @dynamic, nonatomic) NSObject<PUICContentConfiguration> *contentConfiguration;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted;
- (id)configurationState;
- (void)applyLayoutAttributes:(id)attributes;
- (void)_applyEllipticScrollingValuesToConfiguration:(id)configuration;
- (void)updateConfigurationUsingState:(id)state;
- (BOOL)isSoftDisabled;
@end

#endif /* PUICConfigurableCollectionViewCell_h */