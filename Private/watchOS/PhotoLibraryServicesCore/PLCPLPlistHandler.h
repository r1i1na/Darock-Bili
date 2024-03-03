//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCPLPlistHandler_h
#define PLCPLPlistHandler_h
@import Foundation;

@interface PLCPLPlistHandler : NSObject
/* class methods */
+ (void)initialize;
+ (id)_cplPlistURLWithPathManager:(id)manager verb:(id)verb;
+ (BOOL)CPLPlistFileExistsWithPathManager:(id)manager;
+ (id)_readCPLPlistWithPathManager:(id)manager;
+ (id)readCPLPlistObjectWithKey:(id)key pathManager:(id)manager;
+ (void)saveCPLPlistObject:(id)object forKey:(id)key pathManager:(id)manager;
+ (void)deleteCPLPlistWithPathManager:(id)manager;
@end

#endif /* PLCPLPlistHandler_h */