//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLSharedRecordMerger_Protocol_h
#define CPLSharedRecordMerger_Protocol_h
@import Foundation;

#include "CPLSharedRecordMerger-Protocol.h"
#include "CPLSharedRecordPropertyMapping-Protocol.h"

@class NSString;

@protocol CPLSharedRecordMerger <NSObject>
/* instance methods */
- (void)mergeRecord:(id)record isSharedRecord:(BOOL)record inPrivateRecord:(id)record;
@end

#endif /* CPLSharedRecordMerger_Protocol_h */