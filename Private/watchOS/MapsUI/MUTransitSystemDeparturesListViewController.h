//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUTransitSystemDeparturesListViewController_h
#define MUTransitSystemDeparturesListViewController_h
@import Foundation;

#include "UIViewController.h"
#include "MUTransitSystemDeparturesListViewControllerActionDelegate-Protocol.h"
#include "MUTransitSystemDeparturesListViewControllerConfiguration.h"

@class MUTransitSystemDeparturesListViewControllerInternal, NSString;
@protocol MUTransitSystemDeparturesListViewControllerDelegate;

@interface MUTransitSystemDeparturesListViewController : UIViewController<MUTransitSystemDeparturesListViewControllerActionDelegate> {
  /* instance variables */
  MUTransitSystemDeparturesListViewControllerInternal *_internalVC;
}

@property (readonly, nonatomic) MUTransitSystemDeparturesListViewControllerConfiguration *configuration;
@property (weak, nonatomic) NSObject<MUTransitSystemDeparturesListViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didSelectTransitIncidents:(id)incidents;
@end

#endif /* MUTransitSystemDeparturesListViewController_h */