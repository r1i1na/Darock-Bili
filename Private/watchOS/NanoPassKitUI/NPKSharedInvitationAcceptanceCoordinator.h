//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKSharedInvitationAcceptanceCoordinator_h
#define NPKSharedInvitationAcceptanceCoordinator_h
@import Foundation;

#include "NPKContactResolverCreator.h"
#include "NPKProvisionableCredentialNavigationControllerSetupDelegate-Protocol.h"

@class NSString;
@protocol NPKSharedInvitationAcceptanceCoordinatorDelegate;

@interface NPKSharedInvitationAcceptanceCoordinator : NSObject<NPKProvisionableCredentialNavigationControllerSetupDelegate>

@property (retain, nonatomic) NPKContactResolverCreator *contactResolverCreator;
@property (weak, nonatomic) NSObject<NPKSharedInvitationAcceptanceCoordinatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)startShareableCredentialProvisioningWithShareableCredentials:(id)credentials thumbnailImage:(id)image fromNavigationController:(id)controller;
- (void)startSubcredentialInvitationAcceptanceWithLocalInvitationIdentifier:(id)identifier remoteInvitationIdentifier:(id)identifier contactName:(id)name thumbnailImage:(id)image fromNavigationController:(id)controller;
- (void)startSharedInvitationAcceptanceFlowWithMailboxAddress:(id)address referralSource:(id)source fromNavigationController:(id)controller;
- (void)provisionableCredentialNavigationController:(id)controller didFinishWithProvisionedPass:(id)pass;
- (id)_shareableCredentialNavigationControllerWithShareableCredentials:(id)credentials thumbnailImage:(id)image;
- (id)_shareableCredentialNavigationControllerWithConfiguration:(id)configuration;
- (void)_startShareableCredentialProvisioningWithShareableCredentialController:(id)controller fromNavigationController:(id)controller;
- (id)_subcredentialInvitationControllerWithLocalInvitation:(id)invitation remoteInvitation:(id)invitation contactName:(id)name thumbnailImage:(id)image fromNavigationController:(id)controller;
- (id)_subcredentialInvitationControllerWithLocalInvitation:(id)invitation remoteInvitationMailboxAddress:(id)address contactName:(id)name thumbnailImageURL:(id)url fromNavigationController:(id)controller;
- (void)_startSubcredentialInvitationAcceptanceWithInvitationController:(id)controller fromNavigationController:(id)controller;
- (void)_prepareInvitationsForLocalInvitationIdentifier:(id)identifier remoteInvitationIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* NPKSharedInvitationAcceptanceCoordinator_h */