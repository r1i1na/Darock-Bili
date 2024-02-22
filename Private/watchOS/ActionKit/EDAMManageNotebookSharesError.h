//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMManageNotebookSharesError_h
#define EDAMManageNotebookSharesError_h
@import Foundation;

#include "FATObject.h"
#include "EDAMNotFoundException.h"
#include "EDAMUserException.h"
#include "EDAMUserIdentity.h"

@interface EDAMManageNotebookSharesError : FATObject

@property (retain, nonatomic) EDAMUserIdentity *userIdentity;
@property (retain, nonatomic) EDAMUserException *userException;
@property (retain, nonatomic) EDAMNotFoundException *notFoundException;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMManageNotebookSharesError_h */