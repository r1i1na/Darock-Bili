//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKCardArtItem_h
#define NPKCardArtItem_h
@import Foundation;

#include "NPKListItem.h"

@class PKPass;

@interface NPKCardArtItem : NPKListItem

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, nonatomic) unsigned long long style;

/* instance methods */
- (id)initWithIdentifier:(id)identifier pass:(id)pass style:(unsigned long long)style;
- (id)description;
@end

#endif /* NPKCardArtItem_h */