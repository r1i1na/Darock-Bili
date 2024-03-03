//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIScene_h
#define UIScene_h
@import Foundation;

#include "UIResponder.h"
#include "BSDebugDescriptionProviding-Protocol.h"
#include "FBSSceneDelegate-Protocol.h"
#include "UIApplicationSceneClientSettings.h"
#include "UIApplicationSceneSettings.h"
#include "UIScene.h"
#include "UISceneActivationConditions.h"
#include "UISceneDelegate-Protocol.h"
#include "UISceneSession.h"
#include "_UISceneHostingSettingsProviding-Protocol.h"
#include "_UISceneLifecycleMonitor.h"

@class BKSAnimationFenceHandle, BOOL *, FBSScene, FBSSceneSettings, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSPointerArray, NSString;

@interface UIScene : UIResponder<FBSSceneDelegate, BSDebugDescriptionProviding, _UISceneHostingSettingsProviding> {
  /* instance variables */
  FBSScene *_scene;
  NSArray *_initialSettingsDiffActions;
  NSArray *_finalSettingsDiffActions;
  NSArray *_initialSceneBSActionHandlers;
  NSArray *_finalSceneBSActionHandlers;
  NSDictionary *_additionalSettingsDiffActions;
  NSArray *_flattenedDiffActions;
  NSDictionary *_additionalBSActionResponders;
  NSArray *_flattenedBSActionResponders;
  NSDictionary *_flattenedBSActionSubstitutionProvidersByActionType;
  NSDictionary *_registeredComponents;
  _UISceneLifecycleMonitor *_lifecycleMonitor;
  FBSSceneSettings *_overrideSettings;
  NSMutableDictionary *_postSettingsUpdateResponseBlocks;
  UIScene *_settingsScene;
  NSPointerArray *_inheritingScenes;
  NSString *_sceneIdentifier;
  NSString *_persistenceIdentifier;
  FBSSceneSettings *_oldSettings;
  struct { unsigned int x :1 delegateIsResponder; unsigned int x :1 delegateSupportsWillConnect; unsigned int x :1 delegateSupportsDidDisconnect; unsigned int x :1 delegateSupportsDidBecomeActive; unsigned int x :1 delegateSupportsWillResignActive; unsigned int x :1 delegateSupportsWillEnterForeground; unsigned int x :1 delegateSupportsDidEnterBackground; unsigned int x :1 isUIKitManaged; unsigned int x :1 isInternal; unsigned int x :1 affectsAppLifecycleIfInternal; unsigned int x :1 affectsScreenOrientation; unsigned int x :1 isConnecting; unsigned int x :1 hostsWindows; unsigned int x :1 supportsDidChangeFromScreenToScreen; unsigned int x :1 hasPerformedInitialWindowUpdateForConnection; unsigned int x :1 hasInvalidated; unsigned int x :1 allowOverrideSettings; unsigned int x :1 isProcessingUpdateResponseBlocks; unsigned int x :1 isProcessingDiffActionHandlers; unsigned int x :1 readyForSuspension; unsigned int x :1 isMediaParticipant; unsigned int x :1 classRoutesEvents; unsigned int x :1 isTargetOfKeyboardEventDeferringEnvironment; } _sceneFlags;
  NSMutableArray *_heldSceneEventResponseBlocks;
  BOOL _respondingToLifecycleEvent;
}

@property (readonly, nonatomic) _UIExternalGestureCollector *_externalGestureCollector;
@property (readonly, nonatomic) _UIEventDeferringManager *_eventDeferringManager;
@property (readonly, nonatomic) _UISceneHostingControllerRegistry *_sceneHostingControllerRegistry;
@property (readonly, nonatomic) _UIFocusSystemSceneComponent *_focusSystemSceneComponent;
@property (readonly, nonatomic) _UIApplicationSceneDisplayClientComponent *_displayClientComponent;
@property (readonly, nonatomic) _UIKeyWindowSceneObserver *_keyWindowSceneObserver;
@property (readonly, nonatomic) _UIApplicationSceneKeyboardClientComponent *_keyboardClientComponent;
@property (readonly, nonatomic) NSArray *_settingsDiffActions;
@property (weak, nonatomic) UIScene *_settingsScene;
@property (readonly, nonatomic) NSArray *_interitingScenes;
@property (readonly, nonatomic) BOOL _hasSettingsScene;
@property (readonly, nonatomic) FBSSceneSettings *_oldSettings;
@property (readonly, nonatomic) FBSSceneSettings *_effectiveSettings;
@property (readonly, nonatomic) FBSSceneSettings *_synthesizedSettings;
@property (readonly, nonatomic) UIApplicationSceneSettings *_effectiveUISettings;
@property (readonly, nonatomic) NSArray *_sceneComponents;
@property (readonly, nonatomic) _UISceneLifecycleMonitor *_lifecycleMonitor;
@property (readonly, nonatomic) BOOL _hasLifecycle;
@property (nonatomic) BOOL _respondingToLifecycleEvent;
@property (readonly, nonatomic) BOOL _active;
@property (readonly, nonatomic) BOOL _suspendedEventsOnly;
@property (readonly, nonatomic) BOOL _runningInTaskSwitcher;
@property (readonly, nonatomic) BOOL _connecting;
@property (readonly, nonatomic) BOOL _suspendedUnderLock;
@property (retain, nonatomic) NSNumber *_cachedInterfaceOrientation;
@property (readonly, nonatomic) BOOL _internal;
@property (readonly, nonatomic) BOOL _isUIKitManaged;
@property (readonly, nonatomic) BOOL _processingDiffActionHandlers;
@property (readonly, nonatomic) BOOL _affectsAppLifecycleIfInternal;
@property (readonly, nonatomic) BOOL _affectsScreenOrientation;
@property (readonly, nonatomic) BOOL _hostsWindows;
@property (readonly, nonatomic) BOOL _readyForSuspension;
@property (readonly, nonatomic) BOOL _eligibleForSuspension;
@property (readonly, nonatomic) NSArray *_sceneBSActionResponders;
@property (readonly, nonatomic) BOOL _sceneSessionRoleIsCarPlayOrNonInteractiveExternal;
@property (readonly, nonatomic) BOOL _canDynamicallySpecifySupportedInterfaceOrientations;
@property (readonly, nonatomic) BOOL _allowsEventUIWindowRouting;
@property (readonly, nonatomic) BOOL _isTargetOfKeyboardEventDeferringEnvironment;
@property (readonly, nonatomic) NSArray *_windows;
@property (readonly, nonatomic) NSArray *_visibleWindows;
@property (readonly, nonatomic) NSArray *_allWindows;
@property (readonly, nonatomic) double _systemMinimumMargin;
@property (readonly, nonatomic) UIApplicationSceneClientSettings *_effectiveUIClientSettings;
@property (readonly, nonatomic) BOOL _hasInvalidated;
@property (readonly, nonatomic) FBSScene *_FBSScene;
@property (retain, nonatomic) UISceneActivationConditions *_activationConditions;
@property (readonly, nonatomic) NSString *_identifier;
@property (readonly, nonatomic) NSString *_sceneIdentifier;
@property (readonly, nonatomic) NSString *_persistenceIdentifier;
@property (nonatomic) BOOL _involvedInMediaPlayback;
@property (nonatomic) BOOL _discardSessionOnUserDisconnect;
@property (readonly, nonatomic) BKSAnimationFenceHandle *_synchronizedDrawingFence;
@property (readonly, nonatomic) UISceneSession *session;
@property (retain, nonatomic) NSObject<UISceneDelegate> *delegate;
@property (readonly, nonatomic) long long activationState;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UISceneActivationConditions *activationConditions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_sceneForFBSScene:(id)fbsscene;
+ (id)_sceneForFBSScene:(id)fbsscene usingPredicate:(id)predicate;
+ (void)_registerSceneComponentClass:(Class)class withKey:(id)key predicate:(id)predicate;
+ (void)_synchronizeDrawing;
+ (id)_synchronizeDrawingAndReturnFence;
+ (void)_synchronizeDrawingUsingFence:(id)fence;
+ (id)_synchronizedDrawingFence;
+ (void)_synchronizeDrawingWithFence:(id)fence;
+ (BOOL)_hostsWindows;
+ (void)_enumerateAllWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows asCopy:(BOOL)copy withBlock:(id /* block */)block;
+ (BOOL)_supportsEventUIWindowRouting;
+ (id)_sceneForFBSScene:(id)fbsscene create:(BOOL)create withSession:(id)session connectionOptions:(id)options;
+ (id)_scenesIncludingInternal:(BOOL)internal;
+ (id)_scenesIncludingInternalForPK:(BOOL)pk;
+ (void *)_unsafeScenesIncludingInternal;
+ (id)_mostActiveScene;
+ (id)_connectionOptionsForScene:(id)scene withSpecification:(id)specification transitionContext:(id)context actions:(id)actions sceneSession:(id)session;
+ (id)_persistenceIdentifierForScene:(id)scene;
+ (long long)_activationStateFromSceneSettings:(id)settings;
+ (Class)_implicitSceneFilterClass;

/* instance methods */
- (void)extendStateRestoration;
- (void)completeStateRestoration;
- (void)_extendStateRestoration;
- (void)_completeStateRestoration;
- (void)_willRestoreInteractionStateForUserActivityManager:(id)manager;
- (id)_backlightSceneEnvironment;
- (id)_carPlaySceneComponent;
- (void)_getDefaultAudioSessionFromMainThreadWithCompletionHandler:(id /* block */)handler;
- (void)getDefaultAudioSessionWithCompletionHandler:(id /* block */)handler;
- (id)initWithSession:(id)session connectionOptions:(id)options;
- (id)_currentOpenApplicationEndpoint;
- (void)openURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
- (void)_openURL:(id)url options:(id)options completionHandler:(id /* block */)handler;
- (id)nextResponder;
- (void)_setActivationConditions:(id)conditions;
- (void)_setDiscardSessionOnUserDisconnect:(BOOL)disconnect;
- (void)_registerSettingsDiffActionArray:(id)array forKey:(id)key;
- (void)_unregisterSettingsDiffActionArrayForKey:(id)key;
- (void)_registerSceneActionsHandlerArray:(id)array forKey:(id)key;
- (void)_registerBSActionResponderArray:(id)array forKey:(id)key;
- (void)_unregisterSceneActionsHandlerArray:(id)array;
- (void)_unregisterBSActionResponderArray:(id)array;
- (void)_registerSceneComponent:(id)component forKey:(id)key;
- (void)_unregisterSceneComponentForKey:(id)key;
- (id)_sceneComponentForKey:(id)key;
- (void)_updateUIClientSettingsWithBlock:(id /* block */)block;
- (void)_updateUIClientSettingsWithUITransitionBlock:(id /* block */)block;
- (void)_updateUIClientSettingsWithTransitionBlock:(id /* block */)block;
- (void)_compatibilityModeZoomDidChange;
- (BOOL)_shouldAllowFencing;
- (void)_synchronizeDrawing;
- (id)_synchronizeDrawingAndReturnFence;
- (void)_synchronizeDrawingUsingFence:(id)fence;
- (void)_synchronizeDrawingWithFence:(id)fence;
- (void)_noteDisplayIdentityDidChangeWithConfiguration:(id)configuration;
- (void)_invalidate;
- (void)_enumerateWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows asCopy:(BOOL)copy stopped:(BOOL *)stopped withBlock:(id /* block */)block;
- (BOOL)_windowIsFront:(id)front;
- (id)_topVisibleWindowPassingTest:(id /* block */)test;
- (id)_topVisibleWindowEnumeratingAsCopy:(BOOL)copy passingTest:(id /* block */)test;
- (id)_fbsSceneLayerForWindow:(id)window;
- (BOOL)_shouldDeferInitialWindowUpdateBeforeConnection:(id)connection;
- (BOOL)_shouldDeferInitialWindowUpdateBeforeConnectionAndTrackIfNeeded:(id)needed;
- (BOOL)_tracksWindowsNeedingDeferredInitialUpdates;
- (BOOL)_subclassTracksWindowsNeedingDeferredInitialUpdates;
- (void)_performDeferredInitialWindowUpdateForConnection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForInterfaceOrientation:(long long)orientation;
- (void)_computeMetrics:(BOOL)metrics;
- (void)_computeMetricsForWindows:(id)windows animated:(BOOL)animated;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsForInterfaceOrientation:(long long)orientation;
- (BOOL)_shouldRotateSafeAreaInsetsToInterfaceOrientation;
- (void)__captureWindow:(id)window;
- (void)__releaseWindow:(id)window;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)screen;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(BOOL)screen callParentWillTransitionToTraitCollection:(BOOL)collection;
- (BOOL)_pushesTraitCollectionToScreen;
- (void)_readySceneForConnection;
- (void)_finishSceneConnection;
- (void)_initializeSceneComponents;
- (void)_setInvolvedInMediaPlayback:(BOOL)playback;
- (void)_prepareForResume;
- (void)_prepareForSuspend;
- (BOOL)_isReadyForSuspension;
- (BOOL)_isEligibleForSuspension;
- (void)_setSettingsScene:(id)scene;
- (void)_enqueuePostSettingsUpdateResponseBlock:(id /* block */)block inPhase:(id)phase;
- (void)_emitSceneSettingsUpdateResponseForCompletion:(id /* block */)completion afterSceneUpdateWork:(id /* block */)work;
- (id)_fixupInheritedSettings:(id)settings;
- (id)_fixupInheritedClientSettings:(id)settings;
- (void)_guardedSetOverrideSettings:(id)settings;
- (void)_enableOverrideSettingsForActions:(id /* block */)actions;
- (void)_applyOverrideSettings:(id)settings forActions:(id /* block */)actions;
- (void)_performSystemSnapshotWithActions:(id /* block */)actions;
- (BOOL)_isActive;
- (BOOL)_isSuspendedEventsOnly;
- (BOOL)_isRunningInTaskSwitcher;
- (BOOL)_isSuspendedUnderLock;
- (BOOL)_isConnected;
- (BOOL)_isConnecting;
- (BOOL)_isInternal;
- (BOOL)_isProcessingDiffActionHandlers;
- (void)_refreshActivationConditions;
- (void)scene:(id)scene didUpdateWithDiff:(id)diff transitionContext:(id)context completion:(id /* block */)completion;
- (void)_setShouldHoldSceneEventResponses:(BOOL)responses;
- (void)_scheduleSceneEventResponseWithResponseBlock:(id /* block */)block;
- (void)_prepareCommonStateForActionRespondingFromTransitionContext:(id)context;
- (void)scene:(id)scene didReceiveActions:(id)actions;
- (void)scene:(id)scene didReceiveActions:(id)actions fromTransitionContext:(id)context;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)builder;
- (void)_addSubclassDebugDescriptionWithBuilder:(id)builder;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)_calculateFlattenedDiffActions;
- (void)_calculateFlattenedBSActionSubstitutionProviders;
- (void)_calculateFlattenedBSActionResponders;
- (id)_actionsWithSubstitutionsForTransitionActions:(id)actions forFBSScene:(id)fbsscene fromTransitionContext:(id)context;
- (void)_applyOverridesToHostedSceneSettings:(id)settings;
- (void)_addInheritingScene:(id)scene;
- (void)_removeInheritingScene:(id)scene;
- (BOOL)_isRespondingToLifecycleEvent;
- (void)_setIsRespondingToLifecycleEvent:(BOOL)event;
- (void)_setCachedInterfaceOrientation:(id)orientation;
@end

#endif /* UIScene_h */