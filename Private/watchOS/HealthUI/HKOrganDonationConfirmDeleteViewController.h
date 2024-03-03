//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOrganDonationConfirmDeleteViewController_h
#define HKOrganDonationConfirmDeleteViewController_h
@import Foundation;

#include "HKOrganDonationBaseViewController.h"
#include "HKOrganDonationConnectionManager.h"

@interface HKOrganDonationConfirmDeleteViewController : HKOrganDonationBaseViewController {
  /* instance variables */
  HKOrganDonationConnectionManager *_connectionManager;
}

/* instance methods */
- (id)initWithConnectionManager:(id)manager medicalIDData:(id)iddata;
- (id)titleImage;
- (id)titleString;
- (id)bodyString;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)tapped;
- (void)deleteButtonTapped:(id)tapped;
@end

#endif /* HKOrganDonationConfirmDeleteViewController_h */