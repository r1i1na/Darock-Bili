//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NFArchiver_Protocol_h
#define NFArchiver_Protocol_h
@import Foundation;

#include "NFArchiver-Protocol.h"

@class NSString;

@protocol NFArchiver <NSObject>
/* instance methods */
- (BOOL)archiveDirectory:(id)directory toLocation:(id)location;
- (BOOL)unarchive:(id)unarchive toLocation:(id)location;
@end

#endif /* NFArchiver_Protocol_h */