//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MROSTransaction_h
#define MROSTransaction_h
@import Foundation;

@class NSString;
@protocol OS_os_transaction;

@interface MROSTransaction : NSObject {
  /* instance variables */
  NSObject<OS_os_transaction> *_containedTransaction;
}

@property (readonly, nonatomic) NSString *transactionName;

/* instance methods */
- (id)initWithName:(id)name;
- (id)description;
- (void)invalidateTransaction;
@end

#endif /* MROSTransaction_h */