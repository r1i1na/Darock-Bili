//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSSet_EmailFoundationAdditions_h
#define NSSet_EmailFoundationAdditions_h
@import Foundation;

@interface NSSet (EmailFoundationAdditions) <EFSQLValueCollectionExpressable>
/* instance methods */
- (id)ef_SQLExpression;
- (void)ef_renderSQLExpressionInto:(id)into conjoiner:(id)conjoiner;
- (void)ef_renderSQLExpressionInto:(id)into;
- (id)ef_SQLIsolatedExpression;
- (id)ef_notEmpty;
- (id)ef_flatten;
- (id)ef_subsets;
- (id)ef_compactMap:(id /* block */)map;
- (id)ef_flatMap:(id /* block */)map;
- (id)ef_filter:(id /* block */)ef_filter;
- (id)ef_anyPassingTest:(id /* block */)test;
- (BOOL)ef_any:(id /* block */)ef_any;
- (BOOL)ef_all:(id /* block */)ef_all;
- (unsigned long long)ef_countObjectsPassingTest:(id /* block */)test;
- (id)ef_partition:(id /* block */)ef_partition;
- (id)ef_setByRemovingObjectsFromSet:(id)set;
@end

#endif /* NSSet_EmailFoundationAdditions_h */