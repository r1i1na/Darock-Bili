//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 406.1.12.0.0
//
#ifndef RTTUIUtilities_h
#define RTTUIUtilities_h
@import Foundation;

@class NSNumber;
@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject

@property (nonatomic) BOOL headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) BOOL inUnitTestMode;
@property (retain, nonatomic) NSNumber *overrideLTR;

/* class methods */
+ (id)sharedUtilityProvider;
+ (id)rttDisplayName:(long long)name forSubscriptionContextUUID:(id)uuid;
+ (BOOL)contactIsTTYContact:(id)ttycontact;
+ (void)contactIsTTYContact:(id)ttycontact resultBlock:(id /* block */)block;
+ (BOOL)hardwareTTYIsSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)relayIsSupported;
+ (id)relayPhoneNumber;
+ (id)ASCIINumericStringFromString:(struct __CFString *)string;
+ (id)phoneNumberStringFromString:(id)string;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)call;
+ (void)displayCallPromptForContact:(id)contact withCompletion:(id /* block */)completion;
+ (void)cancelCallPromptDisplay;

/* instance methods */
- (unsigned long long)currentPreferredTransportMethod;
- (id)init;
- (id)myPhoneNumber;
- (id)ttyMeContact;
- (long long)textAlignmentForMe:(BOOL)me;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsetForMe:(BOOL)me;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleInsetForMe:(BOOL)me;
- (id)bubbleColorForMe:(BOOL)me;
- (id)largeTTYIconWithTint:(id)tint;
- (id)ttyIconWithTint:(id)tint;
- (id)tintedTTYIcon;
- (id)bubbleFillForMe:(BOOL)me;
- (id)conversationForCallUID:(id)uid;
- (BOOL)deleteConversationWithCallUID:(id)uid;
- (BOOL)contactIsTTYContact:(id)ttycontact;
- (id)transcriptStringForConversation:(id)conversation;
@end

#endif /* RTTUIUtilities_h */