//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStaccatoConfigurationRemoteViewController_h
#define WFStaccatoConfigurationRemoteViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"
#include "WFStaccatoConfigurationRemoteViewControllerDelegate-Protocol.h"
#include "WFStaccatoConfigurationServiceHostProtocol-Protocol.h"

@class WFConfiguredStaccatoAction;

@interface WFStaccatoConfigurationRemoteViewController : _UIRemoteViewController<WFStaccatoConfigurationServiceHostProtocol>

@property (weak, nonatomic) NSObject<WFStaccatoConfigurationRemoteViewControllerDelegate> *delegate;
@property (retain, nonatomic) WFConfiguredStaccatoAction *selectedAction;

/* class methods */
+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

/* instance methods */
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)error;
- (void)didCancelStaccatoConfiguration:(id)configuration;
- (void)didSelectStaccatoAction:(id)action;
@end

#endif /* WFStaccatoConfigurationRemoteViewController_h */