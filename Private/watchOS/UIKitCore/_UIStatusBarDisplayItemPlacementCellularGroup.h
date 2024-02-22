//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarDisplayItemPlacementCellularGroup_h
#define _UIStatusBarDisplayItemPlacementCellularGroup_h
@import Foundation;

#include "_UIStatusBarDisplayItemPlacementGroup.h"
#include "_UIStatusBarDisplayItemPlacement.h"

@class NSArray;

@interface _UIStatusBarDisplayItemPlacementCellularGroup : _UIStatusBarDisplayItemPlacementGroup

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *warningPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *typePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *namePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *badgePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *rawPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNamePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualNameAndTypePlacement;
@property (retain, nonatomic) NSArray *placementsAffectedByAirplaneMode;

/* instance methods */
@end

#endif /* _UIStatusBarDisplayItemPlacementCellularGroup_h */