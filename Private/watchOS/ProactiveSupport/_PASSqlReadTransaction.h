//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqlReadTransaction_h
#define _PASSqlReadTransaction_h
@import Foundation;

#include "_PASSqliteDatabase.h"

@interface _PASSqlReadTransaction : NSObject

@property (readonly, nonatomic) _PASSqliteDatabase *db;

/* instance methods */
- (id)initWithHandle:(id)handle;
- (id)init;
@end

#endif /* _PASSqlReadTransaction_h */