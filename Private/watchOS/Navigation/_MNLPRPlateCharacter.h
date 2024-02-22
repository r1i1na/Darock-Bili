//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef _MNLPRPlateCharacter_h
#define _MNLPRPlateCharacter_h
@import Foundation;

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface _MNLPRPlateCharacter : NSObject {
  /* instance variables */
  NSMutableOrderedSet *_valueMappings;
  NSArray *_validReplacementChars;
  BOOL _isPickupChar;
  NSString *_glyph;
  NSMutableDictionary *_fillTypes;
}

/* instance methods */
- (id)description;
@end

#endif /* _MNLPRPlateCharacter_h */