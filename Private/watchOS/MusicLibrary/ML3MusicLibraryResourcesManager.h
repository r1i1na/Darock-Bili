//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3MusicLibraryResourcesManager_h
#define ML3MusicLibraryResourcesManager_h
@import Foundation;

#include "ML3MusicLibraryResourcesManagerContext.h"
#include "ML3MusicLibraryResourcesProviding-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_ML3BaseMusicLibraryResourcesManager.h"

@class NSString;

@interface ML3MusicLibraryResourcesManager : NSObject<NSSecureCoding, ML3MusicLibraryResourcesProviding> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) _ML3BaseMusicLibraryResourcesManager *implementation;
@property (retain, nonatomic) ML3MusicLibraryResourcesManagerContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedManager;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)libraryContainerPath;
- (id)libraryContainerPathByAppendingPathComponent:(id)component;
- (id)libraryContainerRelativePath:(id)path;
- (id)pathForResourceFileOrFolder:(int)folder;
- (id)musicAssetsContainerPath;
- (id)pathForResourceFileOrFolder:(int)folder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;
- (id)pathForBaseLocationPath:(long long)path;
- (id)mediaFolderRelativePath:(id)path;
- (id)initWithContext:(id)context;
- (id)initWithBaseResourcesManager:(id)manager;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ML3MusicLibraryResourcesManager_h */