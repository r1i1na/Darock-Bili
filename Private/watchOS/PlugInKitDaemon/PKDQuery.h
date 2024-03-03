//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKDQuery_h
#define PKDQuery_h
@import Foundation;

#include "PKDatabase.h"

@class NSDictionary, NSString, NSUUID;

@interface PKDQuery : NSObject

@property unsigned long long interval;
@property (copy) NSString *signpostIdentifier;
@property (readonly, weak) PKDatabase *database;
@property (retain, nonatomic) NSDictionary *criteria;
@property (retain, nonatomic) NSUUID *discoveryUUID;

/* class methods */
+ (id)queryWithCriteria:(id)criteria discoveryUUID:(id)uuid database:(id)database;

/* instance methods */
- (BOOL)allowPlugInWithBundleIdentifier:(id)identifier entitlements:(id)entitlements;
- (id)findPlugIns;
- (void)signpostBegin;
- (void)signpostEnd;
- (BOOL)criteriaIsSimple;
- (id)_findPlugIns;
- (BOOL)_needsFilter;
- (void)_safelyAddPlugIn:(id)in toSet:(id)set;
- (id)_lsPattern:(id)pattern;
- (id)_electionPatternAsArray;
- (id)_filterDictForRecord:(id)record;
- (BOOL)_allowPlugInForRecord:(id)record;
- (id)_findPlugInsFromEnumerator:(id)enumerator;
- (id)_allPlugIns;
- (id)_findPlugInsWithExtensionPoint:(id)point platforms:(id)platforms;
- (id)_findPlugInsWithExtensionPoints:(id)points platforms:(id)platforms;
- (id)_findPlugInsWithIdentifier:(id)identifier;
@end

#endif /* PKDQuery_h */