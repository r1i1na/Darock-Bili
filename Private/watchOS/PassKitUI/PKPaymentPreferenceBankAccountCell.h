//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentPreferenceBankAccountCell_h
#define PKPaymentPreferenceBankAccountCell_h
@import Foundation;

#include "PKPaymentPreferenceCardCell.h"

@class PKBankAccountInformation, UIImage;

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
  /* instance variables */
  UIImage *_bankIcon;
}

@property (retain, nonatomic) PKBankAccountInformation *bankAccount;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)_updateCellContent;
- (void)_updateSubtitleLabel;
@end

#endif /* PKPaymentPreferenceBankAccountCell_h */