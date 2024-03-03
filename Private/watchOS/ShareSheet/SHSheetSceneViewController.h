//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetSceneViewController_h
#define SHSheetSceneViewController_h
@import Foundation;

#include "UIViewController.h"
#include "SHSheetContentPresenter-Protocol.h"
#include "SHSheetContentView-Protocol.h"
#include "SHSheetScene.h"
#include "SHSheetSceneDelegate-Protocol.h"
#include "SHSheetSceneSettingsDiffActionDelegate-Protocol.h"
#include "SHSheetScrollingTest.h"
#include "SHSheetSession-Protocol.h"

@class LPLinkMetadata, NSString, UIView;

@interface SHSheetSceneViewController : UIViewController<SHSheetSceneDelegate, SHSheetSceneSettingsDiffActionDelegate, SHSheetContentView>

@property (readonly, nonatomic) SHSheetScene *scene;
@property (readonly, nonatomic) UIView *sceneView;
@property (retain, nonatomic) LPLinkMetadata *remoteHeaderMetadata;
@property (retain, nonatomic) SHSheetScrollingTest *currentTest;
@property (readonly, nonatomic) NSObject<SHSheetSession> *session;
@property (weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) LPLinkMetadata *headerMetadata;

/* class methods */
+ (BOOL)_wantsContentOverlayInsetsUpdatesWhileDismissing;

/* instance methods */
- (id)initWithSession:(id)session;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)viewIsAppearing:(BOOL)appearing;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)viewSafeAreaInsetsDidChange;
- (void)_installSceneView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_framePortrait;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsPortrait;
- (void)sceneSettingsDidChange:(id)change;
- (void)_willEnterForeground:(id)foreground;
- (void)_sceneWillEnterForeground:(id)foreground;
- (void)_sceneDidEnterBackground:(id)background;
- (long long)_hostProcessType;
- (void)scene:(id)scene didReceiveAction:(id)action;
- (id)_hostSheetPresentationController;
- (void)scene:(id)scene didReceiveMetadataUpdateAction:(id)action;
- (void)scene:(id)scene didReceiveSuggestionAction:(id)action;
- (void)scene:(id)scene didReceiveDraggingAction:(id)action;
- (void)sceneDidBecomeActive:(id)active;
- (void)updateWithViewModel:(id)model;
- (void)didUpdateAirDropTransferWithChange:(id)change;
- (void)reloadMetadata:(id)metadata;
- (void)reloadContent;
- (void)reloadActivity:(id)activity;
- (void)startPulsingActivity:(id)activity localizedTitle:(id)title;
- (void)stopPulsingActivity:(id)activity;
- (void)runScrollingTestWithName:(id)name type:(long long)type completionHandler:(id /* block */)handler;
@end

#endif /* SHSheetSceneViewController_h */