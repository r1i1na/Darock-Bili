//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPWatchOSPassphraseEntryViewController_h
#define CDPWatchOSPassphraseEntryViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "CDPInputEntryControllerDelegate-Protocol.h"
#include "CDPRemoteValidationEscapeOffer.h"
#include "CoreCDPUIProtocol-Protocol.h"
#include "PUICQuickboardControllerDelegate-Protocol.h"

@class NSString, PUICQuickboardController, UIStackView;

@interface CDPWatchOSPassphraseEntryViewController : PUICListCollectionViewController<CDPInputEntryControllerDelegate, PUICQuickboardControllerDelegate, CoreCDPUIProtocol> {
  /* instance variables */
  UIStackView *_sectionHeaderView;
  UIStackView *_sectionFooterView;
  unsigned long long enteredTextLength;
  NSString *enteredText;
  id /* block */ _cancellationBlock;
  PUICQuickboardController *_quickboardController;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *subLabelText;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL requireLocalPasscode;
@property (nonatomic) BOOL requireNumericEntry;
@property (retain, nonatomic) NSString *suggestedEntryText;
@property (copy, nonatomic) NSString *entryTitle;
@property (nonatomic) unsigned long long numberOfFields;
@property (nonatomic) BOOL secureEntry;
@property (nonatomic) BOOL hidesCancelButton;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)viewDidLoad;
- (void)cancelTapped:(id)tapped;
- (void)setCancellationBlock:(id /* block */)block;
- (void)resetInput;
- (void)passphraseEntered:(id)entered;
- (void)updateTableView;
- (void)_setupCollectionView;
- (void)_setupTitleLabel;
- (void)_setupMessageLabel;
- (void)_setupSubLabel;
- (void)_setupFooterLabel;
- (void)presentTextInputEntryController;
- (id)quickboardController;
- (id)passcodeDescription;
- (void)processUserInput:(id)input;
- (void)receivedInputEntry:(id)entry;
- (void)canceledInputEntry;
- (void)quickboardController:(id)controller textInputDictionaryDidChange:(id)change;
- (void)quickboardController:(id)controller textInputValueDidChange:(id)change;
- (void)quickboardControllerTextInputValueCancelled:(id)cancelled;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (id)_newStackView;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredNavigationBarHiddenBehavior;
@end

#endif /* CDPWatchOSPassphraseEntryViewController_h */