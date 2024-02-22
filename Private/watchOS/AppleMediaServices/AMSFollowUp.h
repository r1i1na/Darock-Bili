//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSFollowUp_h
#define AMSFollowUp_h
@import Foundation;

@class FLFollowUpController;
@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue;

/* instance methods */
- (id)init;
- (id)clearFollowUpItem:(id)item;
- (id)clearFollowUpWithBackingIdentifier:(id)identifier;
- (id)clearFollowUpWithIdentifier:(id)identifier account:(id)account;
- (id)pendingFollowUps;
- (id)pendingFollowUpsForAccount:(id)account;
- (id)pendingFollowUpWithIdentifier:(id)identifier account:(id)account;
- (id)postFollowUpItem:(id)item;
- (id)_pendingFollowUpWithBackingIdentifier:(id)identifier error:(id *)error;
@end

#endif /* AMSFollowUp_h */