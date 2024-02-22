//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMCoreAutomationHook_h
#define IMCoreAutomationHook_h
@import Foundation;

#include "IMAccount.h"

@interface IMCoreAutomationHook : NSObject {
  /* instance variables */
  IMAccount *_imessageAccount;
}

@property (readonly) IMAccount *bestiMessageAccount;

/* class methods */
+ (id)stringFromAutomationErrorCode:(long long)code;

/* instance methods */
- (id)chatForHandles:(id)handles error:(id *)error results:(id)results;
- (id)handlesFromStrings:(id)strings error:(id *)error results:(id)results;
- (id)existingChatForGroupID:(id)id error:(id *)error results:(id)results;
@end

#endif /* IMCoreAutomationHook_h */