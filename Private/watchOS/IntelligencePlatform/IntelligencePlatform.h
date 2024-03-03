//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef IntelligencePlatform_h
#define IntelligencePlatform_h

#import "GDConfiguration.h"
#import "GDConnectedToPower.h"
#import "GDDonationView.h"
#import "GDEntityIdentifier.h"
#import "GDEntityTaggingService.h"
#import "GDFeatureKey.h"
#import "GDFeatureView.h"
#import "GDGraphQuery.h"
#import "GDInternalViewUpdateNotificationSubscription.h"
#import "GDLazyGraphTripleRow.h"
#import "GDLazyGraphTripleRowCursor.h"
#import "GDLocation.h"
#import "GDLocationAddress.h"
#import "GDLocationLink.h"
#import "GDOSVariant.h"
#import "GDPageRankView.h"
#import "GDPerson.h"
#import "GDPersonEntityTagDirectFeedbackSet.h"
#import "GDPersonEntityTagEventIDSet.h"
#import "GDPersonEntityTagFeedbackInference.h"
#import "GDPersonEntityTaggingStatefulFeedback.h"
#import "GDPersonIdentifier.h"
#import "GDPersonLink.h"
#import "GDPersonNameComponents.h"
#import "GDPersonNameComponentsBuilder.h"
#import "GDPersonTaggingOptions.h"
#import "GDPersonView.h"
#import "GDPersonViewPerson.h"
#import "GDRankedEntityTagPersons.h"
#import "GDRankedPersonEntityTags.h"
#import "GDRelationshipIdentifier.h"
#import "GDRemoteViewAccessRequester.h"
#import "GDSQLEntityIterator.h"
#import "GDSQLFeatureRetriever.h"
#import "GDSQLGraphObjectRetriever.h"
#import "GDSQLRelationshipIdTripleRowIterator.h"
#import "GDSQLTripleRowIterator.h"
#import "GDScoredPersonEntity.h"
#import "GDScoredPersonEntityTagType.h"
#import "GDSoftware.h"
#import "GDSoftwareLink.h"
#import "GDSourceListenerConfigIdentifier.h"
#import "GDSystemPreferences.h"
#import "GDViewAccessToken.h"
#import "GDViewQuery.h"
#import "GDViewService.h"
#import "GDViewServiceHelper.h"
#import "GDViewUpdateNameAndRequests.h"
#import "GDViewUpdateNameAndResponses.h"
#import "GDViewUpdateSourceInfo.h"
#import "GDViewUpdateSourceRequest.h"
#import "GDViewUpdateSourceResponse.h"
#import "GDVisualIdentifier.h"
#import "GDVisualIdentifierView.h"
#import "GDVisualIdentifierViewLocation.h"
#import "GDVisualIdentifierViewPerson.h"
#import "GDXPCAssetRegistryService.h"
#import "GDXPCCoordinationService.h"
#import "GDXPCInternalBiomeService.h"
#import "GDXPCInternalService.h"
#import "GDXPCSysdiagnoseService.h"
#import "GDXPCViewService.h"
#import "_$s20IntelligencePlatform10FileLoaderCN.h"
#import "_$s20IntelligencePlatform11ViewServiceC013SiriRemembersC0V20ProcessingStateCacheCN.h"
#import "_$s20IntelligencePlatform11ViewServiceCN.h"
#import "_$s20IntelligencePlatform12SubgraphViewCN.h"
#import "_$s20IntelligencePlatform13AssetRegistryCN.h"
#import "_$s20IntelligencePlatform17TrialAssetManagerC13RefreshPolicyO04AutoF29ForAllRequestedNamespacesInfoC0hF7ContentCN.h"
#import "_$s20IntelligencePlatform17TrialAssetManagerC13RefreshPolicyO04AutoF29ForAllRequestedNamespacesInfoCN.h"
#import "_$s20IntelligencePlatform17TrialAssetManagerC32NamespaceUpdateNotificationTokenCN.h"
#import "_$s20IntelligencePlatform17TrialAssetManagerCN.h"
#import "_$s20IntelligencePlatform19GDEntityClassHelperCN.h"
#import "_$s20IntelligencePlatform20EntityTaggingServiceCN.h"
#import "_$s20IntelligencePlatform20SubgraphFilteredViewCN.h"
#import "_$s20IntelligencePlatform21EventLogFilterManagerCN.h"
#import "_$s20IntelligencePlatform21GDIdentifierConstantsCN.h"
#import "_$s20IntelligencePlatform21SystemPreferencesImplCN.h"
#import "_$s20IntelligencePlatform21WritableAssetRegistryCN.h"
#import "_$s20IntelligencePlatform23GDEntityPredicateHelperCN.h"
#import "_$s20IntelligencePlatform23UnicodeWrapperTokenizerCN.h"
#import "_$s20IntelligencePlatform24AssetRegistryBasicServerCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC011ScoreRankedD10TagPersonsC06ScoredC0CN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC011ScoreRankedD10TagPersonsCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC011ScoreRankedcD4TagsC06ScoredcD3TagCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC011ScoreRankedcD4TagsCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0C17ETOperatingPointsCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0C25ETOperatingCharacteristicCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0C30ETTotalOperatingCharacteristicCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0C33ETReceiverOperatingCharacteristicCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0D16TagConfigurationCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceC0cdE7OptionsCN.h"
#import "_$s20IntelligencePlatform26PersonEntityTaggingServiceCN.h"
#import "_$s20IntelligencePlatform27EntityTaggingDirectFeedbackCN.h"
#import "_$s20IntelligencePlatform29EntityTaggingStatefulFeedbackCN.h"
#import "_$s20IntelligencePlatform30EntityResolutionRankingServiceC11ExplanationC7FeatureCN.h"
#import "_$s20IntelligencePlatform30EntityResolutionRankingServiceC11ExplanationCN.h"
#import "_$s20IntelligencePlatform30EntityResolutionRankingServiceC14RankedEntitiesV06ScoredC0CN.h"
#import "_$s20IntelligencePlatform30EntityResolutionRankingServiceCN.h"
#import "_$s20IntelligencePlatform37EntityResolutionRankingDirectFeedbackCN.h"
#import "_$s20IntelligencePlatform39EntityResolutionRankingStatefulFeedbackCN.h"
#import "_$s20IntelligencePlatform9AnalyticsCN.h"
#import "_GDViewAccessAssertion.h"
#import "_TtC20IntelligencePlatform21ViewDatabaseInstances.h"
#import "_TtC20IntelligencePlatform23ViewDatabasePasProvider.h"
#import "_TtC20IntelligencePlatform24ViewDatabaseGRDBProvider.h"
#import "_TtC20IntelligencePlatform30AssetRegistryLocalBackendBasic.h"
#import "_TtC20IntelligencePlatform31AssetRegistryServerConfigLoader.h"
#import "_TtCC20IntelligencePlatform13AssetRegistryP33_C78411A324CCC2B4C97E1300C41AB1C120_CreateCreateBackend.h"
#import "_TtCC20IntelligencePlatform17TrialAssetManagerP33_BAB62DB2CC044FB9CE021799AA9FFB5118InfoToMakeSendable.h"
#import "_TtCO20IntelligencePlatform11EventLoggerP33_4304FBA2F8039E2161D160F1EF1C870F21BackendSelectorHolder.h"
#import "_TtCVOC20IntelligencePlatform13AssetRegistry23TrialAssetManagerPolicy14PersistentInfoP33_005A1996F722D164EB12BA7B3A12238C17PersistentContent.h"
#import "BMBookmark-Protocol.h"
#import "BMBookmarkablePublisher-Protocol.h"
#import "BMBookmarkableSubscription-Protocol.h"
#import "BPSPublisher-Protocol.h"
#import "BPSSubscriber-Protocol.h"
#import "GDAssetRegistryXPCBaseProtocol-Protocol.h"
#import "GDAssetRegistryXPCProtocol-Protocol.h"
#import "GDCoordinationXPCProtocol-Protocol.h"
#import "GDDonationView-Protocol.h"
#import "GDEntity-Protocol.h"
#import "GDFeatureView-Protocol.h"
#import "GDFeedbackProtocol-Protocol.h"
#import "GDFusedTriple-Protocol.h"
#import "GDInternalBiomeXPCProtocol-Protocol.h"
#import "GDInternalXPCProtocol-Protocol.h"
#import "GDObjectRetriever-Protocol.h"
#import "GDPageRankView-Protocol.h"
#import "GDPersonView-Protocol.h"
#import "GDSubentity-Protocol.h"
#import "GDSysdiagnoseXPCProtocol-Protocol.h"
#import "GDTripleIteratorEntityRenderer-Protocol.h"
#import "GDTripleIteratorSubentityRenderer-Protocol.h"
#import "GDViewAccessAssertion-Protocol.h"
#import "GDViewAccessRequester-Protocol.h"
#import "GDViewXPCProtocol-Protocol.h"
#import "GDVisualIdentifierView-Protocol.h"
#import "GDXPCAssetRegistryServiceBaseProtocol-Protocol.h"
#import "GDXPCAssetRegistryServiceProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TRINotificationToken-Protocol.h"
#import "GDSwiftViewService+IntelligencePlatform.h"

#endif /* IntelligencePlatform_h */