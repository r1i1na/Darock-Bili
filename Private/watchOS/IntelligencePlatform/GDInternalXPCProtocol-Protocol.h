//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDInternalXPCProtocol_Protocol_h
#define GDInternalXPCProtocol_Protocol_h
@import Foundation;

@protocol GDInternalXPCProtocol 
/* instance methods */
- (void)statusWithCompletion:(id /* block */)completion;
- (void)clearStatusWithCompletion:(id /* block */)completion;
- (void)statsWithCompletion:(id /* block */)completion;
- (void)triplesQueryWithQuery:(id)query completion:(id /* block */)completion;
- (void)viewInfoWithViewQuery:(id)query rows:(id)rows completion:(id /* block */)completion;
- (void)viewSqlWithName:(id)name statement:(id)statement completion:(id /* block */)completion;
- (void)featureKeys:(id /* block */)keys;
@end

#endif /* GDInternalXPCProtocol_Protocol_h */