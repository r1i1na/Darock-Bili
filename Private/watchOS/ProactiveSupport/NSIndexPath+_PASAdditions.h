//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef NSIndexPath__PASAdditions_h
#define NSIndexPath__PASAdditions_h
@import Foundation;

@interface NSIndexPath (_PASAdditions) <_PASDistilledString>
/* class methods */
+ (id)_pas_fromVersionString:(id)string;
+ (id)_pas_fromVersionStringIfPossible:(id)possible;
+ (id)_pas_fromVersionString:(id)string withExceptions:(BOOL)exceptions;

/* instance methods */
- (id)_pas_revivedString;
- (id)_pas_asVersionString;
- (BOOL)_pas_isLessThanVersionString:(id)string;
- (BOOL)_pas_isLessThanOrEqualToVersionString:(id)string;
- (BOOL)_pas_isEqualToVersionString:(id)string;
- (BOOL)_pas_isGreaterThanOrEqualToVersionString:(id)string;
- (BOOL)_pas_isGreaterThanVersionString:(id)string;
@end

#endif /* NSIndexPath__PASAdditions_h */