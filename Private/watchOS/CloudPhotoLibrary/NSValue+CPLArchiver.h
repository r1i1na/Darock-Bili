//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef NSValue_CPLArchiver_h
#define NSValue_CPLArchiver_h
@import Foundation;

#include "NSCoder.h"

@interface NSValue (CPLArchiver)
/* instance methods */
- (id)cplFullDescription;
- (id)plistArchiveWithCPLArchiver:(id)cplarchiver;
- (id)initWithCPLArchiver:(id)cplarchiver;
@end

#endif /* NSValue_CPLArchiver_h */