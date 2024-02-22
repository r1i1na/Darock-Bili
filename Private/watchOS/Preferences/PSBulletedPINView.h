//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSBulletedPINView_h
#define PSBulletedPINView_h
@import Foundation;

#include "PINView.h"
#include "PSPasscodeField.h"
#include "PSPasscodeFieldDelegate-Protocol.h"

@class NSString;

@interface PSBulletedPINView : PINView<PSPasscodeFieldDelegate> {
  /* instance variables */
  PSPasscodeField *_passcodeField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame numberOfFields:(int)fields;
- (void)dealloc;
- (void)layoutSubviews;
- (void)hidePasscodeField:(BOOL)field;
- (id)stringValue;
- (void)setStringValue:(id)value;
- (void)deleteLastCharacter;
- (void)appendString:(id)string;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setBlocked:(BOOL)blocked;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)passcodeField:(id)field enteredPasscode:(id)passcode;
@end

#endif /* PSBulletedPINView_h */