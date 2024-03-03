//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVDonationManager_h
#define CKVDonationManager_h
@import Foundation;

#include "CKVDonateRequest.h"
#include "CKVDonateRequestDelegate-Protocol.h"
#include "CKVDonateRequestValidator.h"
#include "CKVIndexUpdaterFactory.h"
#include "CKVQueue.h"

@protocol OS_dispatch_queue, OS_os_transaction;

@interface CKVDonationManager : NSObject<CKVDonateRequestDelegate> {
  /* instance variables */
  unsigned int _eventIdCounter;
  unsigned int _transactionCounter;
  NSObject<OS_os_transaction> *_transaction;
  double _donationTimeout;
  NSObject<OS_dispatch_queue> *_registryQueue;
  NSObject<OS_dispatch_queue> *_executionQueue;
  CKVQueue *_requestQueue;
  CKVDonateRequest *_activeRequest;
  BOOL _suspended;
}

@property (readonly, nonatomic) CKVIndexUpdaterFactory *updaterFactory;
@property (readonly, nonatomic) CKVDonateRequestValidator *requestValidator;

/* instance methods */
- (id)init;
- (id)initWithDonationTimeout:(double)timeout indexManager:(id)manager settings:(id)settings;
- (void)submitRequest:(id)request;
- (void)completeRequest:(id)request;
- (BOOL)_isActiveRequestId:(unsigned int)id;
- (void)_completeActiveRequest:(BOOL)request;
- (void)suspend;
- (void)resume;
- (void)_handleNextRequest;
- (void)_beginTransaction;
- (void)_endTransaction;
@end

#endif /* CKVDonationManager_h */