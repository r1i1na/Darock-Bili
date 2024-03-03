//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDictationController_h
#define UIDictationController_h
@import Foundation;

#include "UIAdaptivePresentationControllerDelegate-Protocol.h"
#include "UIDictationConnection.h"
#include "UIDictationConnectionDelegate-Protocol.h"
#include "UIDictationConnectionPreferences.h"
#include "UIDictationConnectionTokenFilterProtocol-Protocol.h"
#include "UIDictationInputModeOptions.h"
#include "UIDictationSerializableResults.h"
#include "UIDictationStreamingOperations.h"
#include "UIKeyboardInputMode.h"
#include "UIWindow.h"
#include "_UIDictationPrivacySheetController.h"
#include "_UIDictationPrivacySheetControllerDelegate-Protocol.h"
#include "_UIDictationTelephonyMonitor.h"
#include "_UITapTapHoldGestureRecognizer.h"
#include "_UITextInputUserInteractionDelegate-Protocol.h"
#include "_UITouchPhaseChangeDelegate-Protocol.h"
#include "_UIVoiceCommandButtonTapGestureRecognizer.h"

@class AFAnalyticsTurnBasedInstrumentationContext, CADisplayLink, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer, RTIDocumentState;

@interface UIDictationController : NSObject<UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, _UITextInputUserInteractionDelegate, _UITouchPhaseChangeDelegate> {
  /* instance variables */
  UIDictationConnection *_dictationConnection;
  UIDictationConnectionPreferences *_preferences;
  NSTimer *_recordingLimitTimer;
  BOOL _connectionWasAlreadyAliveForStatisticsLogging;
  UIDictationStreamingOperations *_streamingOperations;
  NSString *_language;
  BOOL _recievingResults;
  BOOL _streamingAnimationActive;
  double _lastAnimationUpdateTimeStamp;
  id /* block */ _finalResultsOperation;
  CADisplayLink *_streamingAnimationDisplayLink;
  BOOL cancelledByWaitingForLocalResults;
  long long _updatingDocument;
  long long _ignoreRTIChanges;
  BOOL _deferredCancellationRequested;
  BOOL _isOfflineMetricsSessionActive;
  BOOL _didUseOfflineDictation;
  long long _lastOfflineDictationMetricEvent;
  _UIDictationTelephonyMonitor *_monitor;
  NSString *_prefixTextForStart;
  NSString *_selectionTextForStart;
  NSString *_postfixTextForStart;
  BOOL _hasDictated;
  NSDictionary *_selectedAttributesForDictation;
  id /* block */ _privacySheetDismissalHandler;
  int _dictationInputModeNotifierToken;
  long long _currentShortcutType;
  _UITapTapHoldGestureRecognizer *_hardwareShortcutRecognizer;
  _UIVoiceCommandButtonTapGestureRecognizer *_hardwareVoiceCommandKeyRecognizer;
  BOOL _prevForceDisplayOverridePlaceholder;
  struct _NSRange { unsigned long long location; unsigned long long length; } _relativeRangeBefore;
  NSString *_selectedTextAtStart;
  BOOL _dictationInputModeSwitchStarted;
}

@property (nonatomic) BOOL sendButtonPressedDuringDictation;
@property (nonatomic) BOOL hasInsertedAtLeastOneSerializedDictationResult;
@property (nonatomic) BOOL restoreStagedDictationOnIdle;
@property (retain, nonatomic) NSTimer *idleTimerResetTimer;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } preCommandExecutionPositionRange;
@property (retain, nonatomic) UIDictationSerializableResults *candidateDictationSerializableResults;
@property (retain, nonatomic) NSMutableDictionary *cachedDisplayLowStorageNotification;
@property (retain, nonatomic) RTIDocumentState *visibleRTIDocumentStateAtStart;
@property (retain, nonatomic) RTIDocumentState *visibleRTIDocumentStateAtResultCandidate;
@property (retain, nonatomic) NSString *visibleContextBeforeInputAtCommandExecution;
@property (nonatomic) BOOL isPerformingDictationUndoCommand;
@property (nonatomic) long long numberOfUndoCheckpoints;
@property (nonatomic) BOOL hasSelectedTextRange;
@property (retain, nonatomic) NSNumber *currentLanguageVerbFirstCommandLanguageStatusCached;
@property (retain, nonatomic) NSArray *lastSuppressedCommandPartialTokens;
@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *enablementInstrumentationContext;
@property (nonatomic) BOOL enablementLoggingIsDictationEnabled;
@property (nonatomic) BOOL enablementLoggingIsLearnMoreButtonClicked;
@property (retain, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController;
@property (nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation;
@property (retain, nonatomic) UIDictationInputModeOptions *inputModeOptions;
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive;
@property (copy) NSString *smartLanguageSelectionOverrideLanguage;
@property (copy, nonatomic) NSString *detectedLanguage;
@property (retain, nonatomic) NSArray *dictationLanguages;
@property (copy, nonatomic) NSString *initialDictationLanguage;
@property (copy, nonatomic) NSString *fallbackDictationLanguage;
@property (nonatomic) unsigned long long dictationSourceType;
@property (copy, nonatomic) NSString *currentKeyboardPrimaryLanguage;
@property (nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate;
@property (nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate;
@property (nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate;
@property (nonatomic) unsigned long long stateHandler;
@property (nonatomic) BOOL localSpeechRecognitionForced;
@property (nonatomic) BOOL secureOfflineOnlySpeechRecognition;
@property (copy, nonatomic) NSString *modelInfo;
@property (nonatomic) BOOL ignoreFinalizePhrases;
@property (nonatomic) BOOL shouldResumeDictation;
@property (nonatomic) BOOL skipAutomaticResumeDictation;
@property (nonatomic) BOOL ignoreIdleDetectionCallback;
@property (nonatomic) BOOL canUndoOrRedo;
@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationContext;
@property (nonatomic) BOOL suppressDelegateTextInputDidChangeNotifications;
@property (nonatomic) BOOL shouldDeleteWordOnBackspaceTap;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } startRangeOfCurrentHypothesis;
@property (nonatomic) BOOL shouldBreakUndoCoaleasingOnce;
@property (nonatomic) BOOL pauseUpdatingHelperMessage;
@property (copy, nonatomic) NSString *activationIdentifier;
@property (retain, nonatomic) NSMutableArray *pendingEdits;
@property (nonatomic) BOOL performingStreamingEditingOperation;
@property (copy, nonatomic) NSString *previousHypothesis;
@property (copy, nonatomic) NSString *lastHypothesis;
@property (copy, nonatomic) NSString *targetHypothesis;
@property (nonatomic) BOOL discardNextHypothesis;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } insertionRange;
@property (nonatomic) BOOL hasPreheated;
@property (retain, nonatomic) UIWindow *dictationPresenterWindow;
@property (nonatomic) unsigned long long reasonType;
@property (copy, nonatomic) NSString *lastRecognitionText;
@property (copy, nonatomic) id lastCorrectionIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSString *lastMessageKeyboardLanguage;
@property (readonly, retain, nonatomic) NSNumber *dictationRequestOrigin;
@property (nonatomic) BOOL logAppEnterBackground;
@property (nonatomic) BOOL modelessUsedAtLeastOnce;
@property (copy, nonatomic) NSString *_inputDelegateClassName;
@property (nonatomic) BOOL _shouldUseDictationSearchFieldBehavior;
@property (nonatomic) BOOL shouldSuppressSoftwareKeyboard;
@property (nonatomic) BOOL resigningFirstResponder;
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation;
@property (retain, nonatomic) UIKeyboardInputMode *keyboardInputModeToReturn;
@property (nonatomic) BOOL shouldStayInDictationInputMode;
@property (nonatomic) BOOL ignoreKeyboardDidHideNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_dictationLog;
+ (BOOL)usingServerManualEndpointingThreshold;
+ (double)serverManualEndpointingThreshold;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (BOOL)supportsUndoCommandForCurrentDictationRequest;
+ (BOOL)canUndoOrRedo;
+ (BOOL)isListening;
+ (BOOL)isRunning;
+ (BOOL)isRunningInTypeAndTalkMode;
+ (BOOL)supportsSiriDictationVoiceCommands;
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(struct __CFString *)transform capitalization:(unsigned long long)capitalization;
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(struct __CFString *)transform autocapitalization:(long long)autocapitalization capitalization:(unsigned long long)capitalization;
+ (BOOL)_checkTraitsSupportDictation:(id)dictation;
+ (BOOL)checkTraitsSupportDictation:(id)dictation;
+ (BOOL)fetchCurrentInputModeSupportsDictation;
+ (BOOL)dictationIsFunctional;
+ (BOOL)_isDictationAllowedWithUserDefaults:(id)defaults;
+ (BOOL)canPerformDictation;
+ (id)logAutoPunctuationEdit:(id)edit deletionValues:(id)values substitutionValues:(id)values withContext:(id)context;
+ (id)stripNonPunctuationEditValues:(id)values;
+ (id)mergePunctuationInsertAndDeleteIntoSubstituteTypeForSameStartEnd:(id)end deleteEditValues:(id)values;
+ (id)convertEditValuesToHashByPosition:(id)position dictationResultEditType:(id)type;
+ (void)logCorrectionStatisticsForDelegate:(id)delegate reason:(unsigned long long)reason;
+ (unsigned long long)reasonType:(id)type;
+ (id)UIDictationStartStopReasonTypeDescription:(unsigned long long)description;
+ (id)UIDictationLanguageSourceType:(unsigned long long)type;
+ (void)keyboardWillChangeFromDelegate:(id)delegate toDelegate:(id)delegate shouldPause:(BOOL)pause;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (BOOL)isTextViewOnStarkScreen:(id)screen;
+ (BOOL)shouldHideSelectionUIForTextView:(id)view;
+ (BOOL)shouldHideCursorForTextView:(id)view;
+ (BOOL)takesPressesBegan:(id)began forTextView:(id)view;
+ (BOOL)takesPressesChanged:(id)changed forTextView:(id)view;
+ (BOOL)takesPressesEnded:(id)ended forTextView:(id)view;
+ (BOOL)shouldDeleteBackwardInInputDelegate:(id)delegate;
+ (BOOL)shouldInsertText:(id)text inInputDelegate:(id)delegate;
+ (id)serializedDictationPhrases:(id)phrases;
+ (id)bestInterpretationForDictationResult:(id)result;
+ (void)onDidBecomeActive;
+ (void)viewServiceDidBecomeActive;
+ (void)applicationDidBecomeActive;
+ (void)keyboardDidShow;
+ (void)onWillResignActive;
+ (void)applicationWillResignActive;
+ (void)viewServiceWillResignActive;
+ (void)inputSystemSessionWillEndForReason:(long long)reason;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)siriPreferencesChanged;
+ (void)remoteMicrophoneCapabilityChanged;
+ (id)serializedInterpretationFromTokens:(id)tokens transform:(struct __CFString *)transform;
+ (id)interpretation:(id)interpretation forPhraseIndex:(unsigned long long)index isShiftLocked:(BOOL)locked autocapitalizationType:(long long)type useServerCapitalization:(BOOL)capitalization;
+ (void)performOperations:(id /* block */)operations keyboardShifted:(BOOL)shifted;
+ (void)updateLandingView;
+ (BOOL)remoteCanDictateCurrentInputMode;
+ (BOOL)starkSceneExists;
+ (int)viewMode;
+ (BOOL)shouldForwardInInputSystemUI;
+ (id)activeConnection;
+ (BOOL)_applicationIsActive;
+ (id)slsDictationLanguages;
+ (BOOL)_isLowStorageForOnDeviceDictationAsset;
+ (BOOL)shouldForwardEventsToInputSystemUI;
+ (BOOL)dictationInfoIsOnScreen;
+ (id)streamingHypothesisForPhrases:(id)phrases;
+ (void)didBeginEditingInTextView:(id)view;
+ (void)logDictationString:(id)string;
+ (id)stringForState:(int)state;
+ (id)stringForViewMode:(int)mode;
+ (void)poppedLastStreamingOperation;
+ (BOOL)isDictationSearchBarButtonVisible;
+ (id)textRelatedMetadataKeys;
+ (id)arrayWithTextEntriesRemoved:(id)removed;
+ (id)dictionaryWithTextEntriesRemoved:(id)removed;
+ (id)whitelistedDictationMetadataKeys;
+ (id)whitelistedDictationDictionaryFromMetadata:(id)metadata;
+ (BOOL)shouldRemoveTextEntries:(id)entries;
+ (BOOL)canShareDictationData;
+ (BOOL)shouldRemoveTextEntries;
+ (id)removeTextIfNeeded:(id)needed;
+ (id)removeTextIfNeeded:(id)needed metadata:(id)metadata;
+ (id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)dictionaries;
+ (id)activeSLSDictationLanguages;
+ (id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)string;
+ (int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(unsigned long long)type;
+ (int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(unsigned long long)type;
+ (void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)context alternatives:(id)alternatives dictationLanguage:(id)language;
+ (void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)context originalText:(id)text replacementText:(id)text replacementIndex:(unsigned long long)index alternativesAvailableCount:(unsigned long long)count dictationLanguage:(id)language;
+ (BOOL)isEventFromMessagesSendButton:(id)button inspectResponderChain:(BOOL)chain;
+ (unsigned long long)specificReasonTypeMicButtonOnKeyboard;
+ (unsigned long long)specificReasonTypeMicButtonOnKeyboardWithInputSwitcher;
+ (BOOL)_shouldPerformPhrasesFinalizationIgnoringRTIChangesWithUserInteraction:(long long)interaction;

/* instance methods */
- (float)maxRecordingLength;
- (id)init;
- (id)streamingOperations;
- (BOOL)dictationDisabledDueToTelephonyActivity;
- (BOOL)_resolvedIsDictationPossible;
- (void)setDictationInputMode:(id)mode;
- (void)handleDictationShouldPause:(BOOL)pause withNewDelagate:(BOOL)delagate;
- (void)_restartDictation;
- (BOOL)_shouldDeleteBackwardInInputDelegate:(id)delegate;
- (BOOL)_shouldInsertText:(id)text inInputDelegate:(id)delegate;
- (BOOL)remoteHasMicrophone;
- (id)languageCodeForAssistantLanguageCode:(id)code;
- (BOOL)supportsDictationLanguage:(id)language error:(id *)error;
- (BOOL)supportsInputMode:(id)mode error:(id *)error;
- (float)audioLevel;
- (float)normalizedAudioLevel;
- (BOOL)shouldUseDictationSearchFieldBehavior;
- (BOOL)shouldOverrideManualEndpointing;
- (id)fieldIdentifierInputDelegate:(id)delegate;
- (id)prefixTextForInputDelegate:(id)delegate wordCount:(unsigned long long)count;
- (id)postfixTextForInputDelegate:(id)delegate wordCount:(unsigned long long)count;
- (id)selectedTextForInputDelegate:(id)delegate;
- (BOOL)useAutomaticEndpointing;
- (id)_finalDictationStartLanguageCodeWithKeyboardInputMode:(id)mode;
- (void)dictationConnection:(id)connection updateOptions:(id)options;
- (void)completeStartConnection;
- (void)startConnectionWithContinuation:(id /* block */)continuation;
- (void)startDictationForFileAtURL:(id)url forInputModeIdentifier:(id)identifier;
- (void)completeStartConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)identifier;
- (void)_completeStartDictationWithContinuation:(id /* block */)continuation;
- (void)_setFinalResultHandler:(id /* block */)handler;
- (void)_setupHypothesisAsFinalResults;
- (void)_runFinalizeOperation;
- (void)_runFinalizeOperation:(BOOL)operation;
- (void)endSessionIfNecessaryForTransitionFromState:(int)state toState:(int)state;
- (void)switchToKeyboardInputModeIfNeeded;
- (void)resignFirstResponderWhenIdleIfNeeded;
- (void)setShadowState:(int)state;
- (void)setAppState:(int)state;
- (void)setState:(int)state;
- (void)errorAnimationDidFinish;
- (int)state;
- (void)dealloc;
- (void)cancelRecordingLimitTimer;
- (void)stopDictationByTimer;
- (void)startRecordingLimitTimer;
- (void)updateRecordingLimitTimerIfNeeded;
- (void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
- (void)resetIdleTimer;
- (void)stopIdleTimerResetTimer;
- (id)dictationConnection;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (id)connectionForStatisticsLogging;
- (BOOL)dictationEnabled;
- (BOOL)dataSharingDecided;
- (BOOL)currentViewModeSupportsDictationMics;
- (BOOL)dictationSearchFieldUIEnabled;
- (BOOL)_allowsMicsInSearchField;
- (BOOL)dictationSearchFieldUISupportsTraitCollection:(id)collection;
- (void)dismissDictationView:(id)view;
- (void)setupForStreamingDictationStart;
- (void)setupForAsyncDelegate;
- (void)setupForDictationStart;
- (void)_startDictationWithContinuation:(id /* block */)continuation;
- (BOOL)isFallingBackToMonolingualDictation;
- (void)showLowStorageUserAlertWithLanguage:(id)language;
- (void)resetAdaptiveDeleteActivationLogic;
- (void)startDictation;
- (void)startDictationWithContinuation:(id /* block */)continuation;
- (void)switchToDictationLanguage:(id)language;
- (void)presentEnablementAndDataSharingPromptIfNeeded:(id /* block */)needed;
- (void)switchToDictationInputModeWithTouch:(id)touch withKeyboardInputMode:(id)mode options:(id)options;
- (void)switchToDictationInputModeWithTouch:(id)touch;
- (void)switchToDictationInputModeWithTouch:(id)touch options:(id)options;
- (void)postNotificationName:(id)name userInfo:(id)info;
- (id)currentDictationLanguageForDisplay;
- (void)showSoftwareKeyboardIfNeeded;
- (void)dismissSoftwareKeyboardIfNeeded;
- (void)_displaySecureContentsAsPlainText:(BOOL)text afterDelay:(double)delay;
- (void)clearTextFieldPlaceholder;
- (void)restoreTextFieldPlaceholder;
- (void)updateHelperMessageDisplayIfNeeded;
- (void)startHelperMessageDisplayIfNeeded;
- (void)stopHelperMessageDisplayIfNeeded;
- (BOOL)_shouldUpdateHelperMessageDisplay;
- (void)setDictationInfoOnScreenNotifyKey:(BOOL)key;
- (void)_createDictationPresenterWindowIfNecessary;
- (void)_logEnablementPromtMetricsWithStartDate:(id)date;
- (void)_presentEnablementAndDataSharingPromptIfNeeded:(id /* block */)needed;
- (void)_endEnableDictationPromptAnimated:(BOOL)animated;
- (void)presentAlertOfType:(long long)type withCompletion:(id /* block */)completion;
- (BOOL)shouldPresentOptInAlert;
- (void)_presentOptInAlertWithCompletion:(id /* block */)completion;
- (void)_presentDataSharingOptInAlertWithCompletion:(id /* block */)completion;
- (void)_presentAlertForDictationInputModeOfType:(long long)type completionHandler:(id /* block */)handler;
- (id)presentingViewControllerForPrivacySheet;
- (id)presentingWindowForPrivacySheet;
- (void)_presentPrivacySheetForType:(long long)type completion:(id /* block */)completion;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)dictationPrivacySheetControllerDidFinish:(id)finish;
- (void)_handlePrivacySheetDismissal;
- (void)_handleDataSharingSheetDecision;
- (void)_touchPhaseChangedForTouch:(id)touch;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithOptions:(id)options;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_getRangeOfString:(id)string inDocumentText:(id)text;
- (void)cancelDictation;
- (void)cancelDictationForTextStoreChangesInResponder:(id)responder;
- (void)stopDictation:(BOOL)dictation;
- (void)stopDictationIgnoreFinalizePhrases:(BOOL)phrases;
- (void)stopDictationIgnoreFinalizePhrases;
- (void)stopAndCancelDictationWithReasonType:(unsigned long long)type;
- (void)cancelDictationForResponderIfNeeded:(id)needed wantsKeyboard:(BOOL)keyboard isPencil:(BOOL)pencil;
- (void)stopDictation;
- (void)stopDictationAndResignFirstResponder;
- (void)forceDictationReturnToKeyboardInputMode;
- (BOOL)isIgnoringDocumentChanges;
- (void)performIgnoringDocumentChanges:(id /* block */)changes;
- (BOOL)isIgnoringRTIChanges;
- (void)performIgnoringRTIChanges:(id /* block */)rtichanges;
- (BOOL)dictationIsModifyingText;
- (struct __CFString *)resultTransformForLanguageModel:(id)model;
- (void)logDidAcceptDictationResult:(id)result reasonType:(unsigned long long)type;
- (void)logDidAcceptReplacement:(id)replacement replacementLanguageCode:(id)code originalText:(id)text correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier;
- (void)didShowAlternatives:(id)alternatives correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier instrumentationContext:(id)context dictationLanguage:(id)language;
- (void)logAlternativeSelected:(id)selected correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier;
- (id)resultWithTrailingSpace:(id)space;
- (void)insertSerializedDictationResult:(id)result withCorrectionIdentifier:(id)identifier;
- (void)_insertSerializedDictationResult:(id)result withCorrectionIdentifier:(id)identifier;
- (void)_deleteBackwardIntoText;
- (void)_clearExistingText;
- (void)finalizeDictationRecognitionWithPhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier secureInput:(BOOL)input finalResult:(BOOL)result;
- (void)finishDictationRecognitionWithPhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier secureInput:(BOOL)input;
- (id)_voiceCommandGrammarParseResultWithParsePackage:(id)package completeCommands:(BOOL)commands;
- (BOOL)_shouldSuppressPartialForVoiceCommandGrammarParsePackage:(id)package commandPartialString:(id)string;
- (void)dictationConnection:(id)connection finalizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier secureInput:(BOOL)input finalResult:(BOOL)result;
- (void)_stopStreamingAnimation;
- (void)_startStreamingAnimations;
- (void)_displayLinkFired:(id)fired;
- (id)_rangeByExtendingRange:(id)range backward:(long long)backward forward:(long long)forward inputDelegate:(id)delegate;
- (id)_hypothesisRangeFromSelectionRange:(id)range inputDelegate:(id)delegate forHypothesis:(id)hypothesis;
- (id)_getBestHypothesisRangeGivenHintRange:(id)range inputDelegate:(id)delegate hypothesisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range documentTextInRange:(id *)range forHypothesis:(id)hypothesis;
- (void)resetLastHypothesis;
- (void)updateLastHypothesis:(id)hypothesis WithNewHypothesis:(id)hypothesis;
- (void)forceOOPDocumentStateSync;
- (void)_updateLastHypothesis:(id)hypothesis WithNewHypothesis:(id)hypothesis;
- (void)setupToInsertResultForNewHypothesis:(id)hypothesis;
- (BOOL)languageSupportsAdaptiveDelete;
- (BOOL)dictationWordwiseBackspaceEnabled;
- (void)dictationConnection:(id)connection receivedInterpretation:(id)interpretation languageModel:(id)model secureInput:(BOOL)input;
- (id)dictationConnection:(id)connection willFilterTokensWithLanguageModel:(id)model forFinalize:(BOOL)finalize;
- (id /* block */)dictationBlockForToken:(id)token;
- (BOOL)dictationConnection:(id)connection filterState:(id)state shouldCheckpointAtToken:(id)token;
- (void)dictationConnection:(id)connection filterState:(id)state processFilteredToken:(id)token forFinalize:(BOOL)finalize;
- (void)dictationConnection:(id)connection didFilterTokensWithFilterState:(id)state forFinalize:(BOOL)finalize;
- (void)dictationConnectionWillStartRecording:(id)recording;
- (void)dictationConnectionDidStartRecording:(id)recording;
- (void)dictationConnection:(id)connection didStartRecordingWithOptions:(id)options;
- (void)dictationConnectionDidEndRecording:(id)recording;
- (void)dictationConnectionDidCancelRecording:(id)recording;
- (void)dictationConnection:(id)connection didFailRecordingWithError:(id)error;
- (void)dictationConnection:(id)connection didFailRecognitionWithError:(id)error;
- (void)dictationConnection:(id)connection didBeginLocalRecognitionWithModelInfo:(id)info;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)recognizer;
- (id)_containingSearchBarForView:(id)view;
- (void)dictationConnection:(id)connection didReceiveSearchResults:(id)results recognizedText:(id)text stable:(BOOL)stable final:(BOOL)final;
- (void)dictationConnnectionDidChangeAvailability:(id)availability;
- (void)dictationConnection:(id)connection didDetectLanguage:(id)language;
- (void)dictationConnectionDidCancel:(id)cancel;
- (void)dictationConnectionDidFinish:(id)finish;
- (void)dictationConnection:(id)connection didReceiveCandidateDictationSerializableResults:(id)results;
- (void)dictationConnection:(id)connection didReceivePartialPackage:(id)package nluResult:(id)result languageModel:(id)model;
- (void)dictationConnection:(id)connection didReceiveVoiceCommandCandidatePackage:(id)package nluResult:(id)result;
- (BOOL)isRecievingResults;
- (void)preheatIfNecessary;
- (id)language;
- (void)setLanguage:(id)language;
- (void)prepareStartDictationKeyboardGestures;
- (void)prepareDoubleTapShortcutGesture:(id)gesture;
- (void)prepareVoiceCommandSingleTapGesture:(id)gesture;
- (void)prepareStartDictationKeyboardGesturesForDelegate:(id)delegate;
- (void)removeStartDictationKeyboardGestures;
- (void)updateDoubleTapShortcutWithPreference:(long long)preference;
- (void)handleHardwareKeyboardGesture;
- (void)dictationShortCutKey:(id)key;
- (void)voiceCommandSingleTapKey:(id)key;
- (void)preferencesChanged:(id)changed;
- (void)_beginOfflineMetricsSession;
- (void)_endOfflineMetricsSession;
- (id)_assistantCompatibleLanguageCodeForInputMode:(id)mode;
- (id)_currentLanguageForOfflineDictationMetrics;
- (void)_markOfflineDictationInputMetricEvent;
- (void)markKeyboardInputMetricEvent;
- (void)markKeyboardDeleteMetricEvent;
- (void)markKeyboardDidReset;
- (void)overrideSmartLanguageSelection:(id)selection;
- (void)endSmartLanguageSelectionOverride;
- (BOOL)smartLanguageSelectionOverridden;
- (void)rtiInputSessionWillChangeToNewProcess:(id)process;
- (void)keyboardWillHide:(id)hide;
- (void)keyboardDidHide:(id)hide;
- (id)dictationUIState;
- (void)instrumentationDictationContextEmitInstrumentation;
- (void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)result;
- (void)sendButtonPressedInMessages:(id)messages;
- (unsigned long long)specificReasonTypeFromApplicationDuringDictation;
- (void)insertLastHypothesisAsFinalResultLocally;
- (BOOL)isDictationPaused;
- (void)_finalizePhrasesOnDictationPause;
- (void)pauseDictation;
- (void)pauseDictationOnUserInteraction:(long long)interaction;
- (void)resumeDictation;
- (void)resetSpeechRecognition;
- (void)resetDictation;
- (BOOL)userInteractionShouldResetAdaptiveDeleteActivationLogic:(long long)logic;
- (BOOL)userInteractionShouldDismissDictationTip:(long long)tip;
- (void)beginUserInteraction:(long long)interaction;
- (void)endUserInteraction;
- (void)resumeSpeechRecognitionWithPrefixText:(id)text postfixText:(id)text selectedText:(id)text;
- (void)pauseSpeechRecognition;
- (void)clearKeyboardTrackpadModeIfNeeded;
- (void)removeSelectedText;
- (BOOL)shouldSuppressPartialResults;
- (BOOL)isSelectionBasedCommand:(unsigned long long)command;
- (BOOL)isSelectionRequiredForCommand:(unsigned long long)command;
- (void)requestVisibleTextWithCompletionBlock:(id /* block */)block;
- (void)handleWKActionMoveAfter;
- (void)handleWKActionMoveBefore;
- (void)launchDictationFeedbackApp;
- (BOOL)isSendButtonPressedDuringDictation;
@end

#endif /* UIDictationController_h */