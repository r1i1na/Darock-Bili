//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyViewControllerProtocol_Protocol_h
#define CKNanoReplyViewControllerProtocol_Protocol_h
@import Foundation;

@protocol CKNanoReplyViewControllerProtocol 

@property (weak, nonatomic) NSObject<CKNanoReplyViewControllerDismissalDelegate> *dismissalDelegate;
@property (copy, nonatomic) NSString *breadcrumbText;
@property (copy, nonatomic) id /* block */ messageForReplyBlock;
@property (copy, nonatomic) NSNumber *messageItemListNumber;

@optional
/* instance methods */
- (void)dismissAnimated:(BOOL)animated completion:(id /* block */)completion;
@end

#endif /* CKNanoReplyViewControllerProtocol_Protocol_h */