//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupCredentialsSectionControllerDelegate_Protocol_h
#define PKPaymentSetupCredentialsSectionControllerDelegate_Protocol_h
@import Foundation;

@protocol PKPaymentSetupCredentialsSectionControllerDelegate <NSObject>
/* instance methods */
- (void)presentRefundFlowForCredential:(id)credential;
- (void)presentUnavailableDetailsForCredential:(id)credential;
- (void)credentialSelectionDidChange;
- (void)showMaxSelectionAlertForCredential:(id)credential;
- (void)showDeleteConfirmationWithCompletion:(id /* block */)completion;
- (void)showUnableToDeleteCredentialError;
- (void)showUnableToDeleteSafariCredentialError;
- (void)showCredentialDeletionError;
- (void)setShowNoResultsView:(BOOL)view;
@end

#endif /* PKPaymentSetupCredentialsSectionControllerDelegate_Protocol_h */