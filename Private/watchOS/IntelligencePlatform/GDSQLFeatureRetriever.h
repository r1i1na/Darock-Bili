//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDSQLFeatureRetriever_h
#define GDSQLFeatureRetriever_h
@import Foundation;

@class _PASSqliteDatabase;

@interface GDSQLFeatureRetriever : NSObject {
  /* instance variables */
  _PASSqliteDatabase *_db;
}

/* instance methods */
- (id)initWithDatabase:(id)database;
- (id)featureForKey:(id)key error:(id *)error;
- (id)featureKeysWithError:(id *)error;
@end

#endif /* GDSQLFeatureRetriever_h */