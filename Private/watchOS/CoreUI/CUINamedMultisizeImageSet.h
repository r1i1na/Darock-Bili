//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUINamedMultisizeImageSet_h
#define CUINamedMultisizeImageSet_h
@import Foundation;

#include "CUINamedLookup.h"

@interface CUINamedMultisizeImageSet : CUINamedLookup
/* instance methods */
- (id)initWithName:(id)name usingRenditionKey:(id)key fromTheme:(unsigned long long)theme;
- (id)sizeIndexes;
- (id)debugDescription;
@end

#endif /* CUINamedMultisizeImageSet_h */