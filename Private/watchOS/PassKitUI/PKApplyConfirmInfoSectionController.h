//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyConfirmInfoSectionController_h
#define PKApplyConfirmInfoSectionController_h
@import Foundation;

#include "PKApplyCollectionViewSectionController.h"
#include "PKApplyConfirmInfoSectionControllerDelegate-Protocol.h"

@class PKApplyActionContent;

@interface PKApplyConfirmInfoSectionController : PKApplyCollectionViewSectionController {
  /* instance variables */
  PKApplyActionContent *_actionContent;
  NSObject<PKApplyConfirmInfoSectionControllerDelegate> *_delegate;
}

/* instance methods */
- (id)initWithController:(id)controller applyPage:(id)page delegate:(id)delegate;
- (void)setPage:(id)page;
- (void)configureCellForRegistration:(id)registration item:(id)item;
- (id)identifiers;
- (Class)footerViewClassForSectionIdentifier:(id)identifier;
- (void)configureFooterView:(id)view forSectionIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)_configureContentSection:(id)section;
@end

#endif /* PKApplyConfirmInfoSectionController_h */