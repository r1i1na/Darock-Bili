//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOConfigDBInsertOperation_h
#define _GEOConfigDBInsertOperation_h
@import Foundation;

#include "_GEOConfigDBOperationBase.h"
#include "_GEOConfigDB.h"
#include "_GEOConfigDBOperation-Protocol.h"

@class NSString;

@interface _GEOConfigDBInsertOperation : _GEOConfigDBOperationBase<_GEOConfigDBOperation> {
  /* instance variables */
  _GEOConfigDB *_configDB;
  long long _rowId;
  NSString *_type;
  NSString *_key;
  NSString *_value;
  long long _parentId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init:(id)init rowId:(long long)id type:(id)type key:(id)key value:(id)value parentId:(long long)id;
- (BOOL)performOperation;
@end

#endif /* _GEOConfigDBInsertOperation_h */