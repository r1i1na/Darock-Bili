//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFAttachmentSecurityScope_h
#define MFAttachmentSecurityScope_h
@import Foundation;

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject {
  /* instance variables */
  NSFileCoordinator *_fileCoordinator;
  NSURL *_securityScopedURL;
  NSData *_securityScopeToken;
  NSURL *_secureReadURL;
  BOOL _securedRead;
  NSURL *_secureWriteURL;
  BOOL _securedWrite;
}

/* class methods */
+ (id)securityScopedURL:(id)url;
+ (id)securityScopedURL:(id)url withToken:(id)token;

/* instance methods */
- (id)initWithSecurityScopedURL:(id)url withToken:(id)token;
- (void)dealloc;
- (id)startWriteAccess;
- (id)startReadAccess;
- (id)_temporaryReadURL:(id)url error:(id *)error;
- (void)_removeTemporaryReadURL;
- (void)stopAccess;
- (id)securityScopeToken;
- (void)_attachSecurityScope;
- (id)data;
- (BOOL)isReadable;
- (BOOL)isBundle;
@end

#endif /* MFAttachmentSecurityScope_h */