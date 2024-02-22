//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSecureElementPass_h
#define PKSecureElementPass_h
@import Foundation;

#include "PKPass.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPassAuxiliaryRegistrationRequirements.h"
#include "PKPassProvisioningMetadata.h"
#include "PKPaymentApplication.h"
#include "PKSiriIntentsConfiguration.h"
#include "PKTransitPassProperties.h"

@class NSArray, NSDate, NSSet, NSString, NSURL;

@interface PKSecureElementPass : PKPass<NSCopying, NSSecureCoding>

@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic) long long cardType;
@property (readonly, nonatomic) long long identityType;
@property (readonly, nonatomic) long long accessType;
@property (readonly, nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSSet *associatedWebDomains;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountNumber;
@property (copy, nonatomic) NSString *sanitizedPrimaryAccountName;
@property (nonatomic) BOOL supportsDPANNotifications;
@property (nonatomic) BOOL supportsFPANNotifications;
@property (nonatomic) BOOL supportsDefaultCardSelection;
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount;
@property (copy, nonatomic) NSString *associatedAccountServiceAccountIdentifier;
@property (nonatomic) unsigned long long associatedAccountFeatureIdentifier;
@property (nonatomic) BOOL supportsPeerPayment;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (copy, nonatomic) NSString *issuerAdministrativeAreaCode;
@property (nonatomic) BOOL supportsSerialNumberBasedProvisioning;
@property (nonatomic) BOOL paymentOptionSelectable;
@property (nonatomic) BOOL shellPass;
@property (retain, nonatomic) NSDate *originalProvisioningDate;
@property (retain, nonatomic) PKPassProvisioningMetadata *provisioningMetadata;
@property (copy, nonatomic) NSString *topLeftBackgroundTitle;
@property (copy, nonatomic) NSString *topRightBackgroundTitle;
@property (copy, nonatomic) NSSet *paymentApplications;
@property (copy, nonatomic) NSSet *devicePaymentApplications;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryBarcodePaymentApplication;
@property (retain, nonatomic) NSSet *deviceInAppPaymentApplications;
@property (copy, nonatomic) NSString *partnerAccountIdentifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (readonly, nonatomic) BOOL privateLabel;
@property (nonatomic) BOOL cobranded;
@property (copy, nonatomic) NSString *cobrandName;
@property (copy, nonatomic) NSURL *transactionServiceURL;
@property (copy, nonatomic) NSURL *transactionServiceRegistrationURL;
@property (copy, nonatomic) NSString *transactionPushTopic;
@property (copy, nonatomic) NSURL *messageServiceURL;
@property (copy, nonatomic) NSURL *messageServiceRegistrationURL;
@property (copy, nonatomic) NSString *messagePushTopic;
@property (copy, nonatomic) NSString *appURLScheme;
@property (copy, nonatomic) NSString *customerServiceIdentifier;
@property (copy, nonatomic) NSString *localizedSuspendedReason;
@property (copy, nonatomic) NSString *shippingAddressSeed;
@property (copy, nonatomic) NSString *speakableMake;
@property (copy, nonatomic) NSString *speakableModel;
@property (copy, nonatomic) PKSiriIntentsConfiguration *supportedSiriIntents;
@property (copy, nonatomic) PKPassAuxiliaryRegistrationRequirements *auxiliaryRegistrationRequirements;
@property (nonatomic) BOOL requiresTransferSerialNumberBasedProvisioning;
@property (copy, nonatomic) NSArray *availableActions;
@property (readonly, copy, nonatomic) PKTransitPassProperties *transitProperties;
@property (readonly, nonatomic) BOOL supportsOnlyTransit;
@property (readonly, nonatomic) NSArray *upgradeRequests;
@property (readonly, nonatomic) BOOL preventsWalletDeletion;
@property (readonly, nonatomic) BOOL isUserDeletable;
@property (readonly) NSString *deviceAccountIdentifier;
@property (readonly) NSString *deviceAccountNumberSuffix;
@property (readonly, nonatomic) long long passActivationState;
@property (readonly, copy, nonatomic) NSString *devicePassIdentifier;
@property (readonly, copy, nonatomic) NSString *pairedTerminalIdentifier;

/* class methods */
+ (id)displayableNoPaymentNetworkErrorMessageForAction:(id)action isTransit:(BOOL)transit;
+ (id)displayableErrorForTransitAction:(id)action andReason:(unsigned long long)reason;
+ (id)displayableErrorForAction:(id)action andReason:(unsigned long long)reason;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)defaultSettings;

/* instance methods */
- (BOOL)canPerformAction:(id)action unableReason:(unsigned long long *)reason displayableError:(id *)error;
- (id)initWithDictionary:(id)dictionary bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToPassIncludingMetadata:(id)metadata;
- (id)primaryPaymentApplicationForSecureElementIdentifiers:(id)identifiers;
- (id)paymentApplicationsForSecureElementIdentifiers:(id)identifiers;
- (id)paymentApplicationForAID:(id)aid;
- (id)devicePaymentApplicationForAID:(id)aid;
- (BOOL)isDevicePrimaryPaymentApplicationPersonalized;
- (BOOL)isPrivateLabel;
- (BOOL)isAccessPass;
- (BOOL)isTransitPass;
- (BOOL)isSuicaPass;
- (BOOL)hasLegacyBalanceModel;
- (BOOL)isPrepaidPass;
- (BOOL)isEMoneyPass;
- (BOOL)isStoredValuePass;
- (BOOL)isChinaTransitCredential;
- (BOOL)needsHardcodedReminderOptions;
- (BOOL)isOctopusPass;
- (BOOL)isIdentityPass;
- (BOOL)isAppleCardPass;
- (BOOL)isPeerPaymentPass;
- (BOOL)isPayLaterPass;
- (BOOL)isAppleBalancePass;
- (BOOL)hasImmediateAutomaticSelectionCriterion;
- (BOOL)hasCredentials;
- (BOOL)isAutoTopEnabled;
- (BOOL)hasMerchantTokens;
- (BOOL)hadMerchantTokens;
- (BOOL)isCarKeyPass;
- (BOOL)isHomeKeyPass;
- (BOOL)areCredentialsStoredInKML;
- (BOOL)requiresFelicaSecureElement;
- (BOOL)shouldIgnoreTransactionUpdatesSwitch;
- (BOOL)availableForAutomaticPresentationUsingVASContext;
- (BOOL)availableForAutomaticPresentationUsingBeaconContext;
- (BOOL)availableForAutomaticPresentationUsingInAppOrWebContext;
- (id)sanitizedDeviceAccountNumber;
- (long long)effectiveContactlessPaymentApplicationState;
- (id)deviceContactlessPaymentApplications;
- (BOOL)hasContactlessDevicePaymentApplicationsAvailable;
- (unsigned long long)_activationStateForApplicationState:(long long)state;
- (unsigned long long)contactlessActivationState;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifiers:(id)identifiers;
- (void)sanitizePaymentApplications;
- (BOOL)supportsWebPaymentMode:(long long)mode withExclusionList:(id)list;
- (BOOL)supportsWebPaymentMode:(long long)mode withExclusionList:(id)list clientOSVersion:(id)osversion;
- (id)_localizedSuspendedReasonForAID:(id)aid;
- (unsigned long long)transitCommutePlanType;
- (id)transitCommutePlans;
- (id)notificationCenterTitle;
- (id)actionGroups;
- (id)eligibleExpressUpgradeRequestsForDeviceClass:(id)class deviceSEIDs:(id)seids deviceVersion:(id)version technologyTest:(id /* block */)test;
- (long long)paymentType;
- (BOOL)supportsBarcodePayment;
- (id)longTermPrivacyKeyGroupIdentifier;
- (id)dynamicLayerConfiguration;
- (id)addValueURL;
- (id)_launchURLForPassAction:(id)action;
- (id)sortedPaymentApplications:(id)applications ascending:(BOOL)ascending;
- (BOOL)shouldSuppressNoChargeAmount;
- (BOOL)isContactlessPaymentSupportedForTransitNetworks:(id)networks;
- (id)deviceTransactionSourceIdentifiers;
- (BOOL)hasDeviceTransactionSourceIdentifier:(id)identifier;
- (id)_transactionServiceURLOverride;
- (id)_passSubcredentialFilesWithPrefix:(id)prefix extension:(id)extension forSecureElementIdentifiers:(id)identifiers;
- (id)iso18013BlobsForSecureElementIdentifiers:(id)identifiers;
- (id)iso18013BlobsMetdataForSecureElementIdentifiers:(id)identifiers;
- (id)seBlobsForSecureElementIdentifiers:(id)identifiers;
- (BOOL)supportsVirtualCardNumber;
- (BOOL)supportsVirtualCardNumberAccordingToWebService:(id)service;
- (BOOL)hasActiveVirtualCard;
- (BOOL)hasActiveVirtualCardAccordingToWebService:(id)service;
- (id)virtualCardSuffix;
- (BOOL)supportsDeviceAssessmentAccordingToService:(id)service;
- (BOOL)shouldDisplayDeviceAssessmentEducationAccordingToService:(id)service;
- (BOOL)supportsFeatureForCurrentDevice:(unsigned long long)device;
- (BOOL)isAutoTopUpBalance:(id)balance;
- (id)autoTopUpBalanceIdentifiers;
- (id)autoTopUpMerchantTokenIdentifier;
- (BOOL)isPaymentOptionSelectable;
- (BOOL)isShellPass;
- (BOOL)isCobranded;
@end

#endif /* PKSecureElementPass_h */