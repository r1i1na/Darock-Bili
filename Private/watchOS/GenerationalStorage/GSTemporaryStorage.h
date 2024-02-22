//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 362.0.0.0.0
//
#ifndef GSTemporaryStorage_h
#define GSTemporaryStorage_h
@import Foundation;

#include "GSAdditionStoring-Protocol.h"
#include "GSAdditionStoringPrivate-Protocol.h"

@class NSURL;
@protocol NSCopying><NSSecureCoding, OS_dispatch_queue;

@interface GSTemporaryStorage : NSObject<GSAdditionStoringPrivate, GSAdditionStoring> {
  /* instance variables */
  NSURL *_stagingURL;
  int _lockFd;
  NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) NSURL *libraryURL;
@property (retain) NSURL *documentURL;
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;

/* instance methods */
- (id)init;
- (id)initWithLibraryURL:(id)url forItemAtURL:(id)url error:(id *)error;
- (void)finalize;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)__lockWithFlags:(int)flags error:(id *)error;
- (BOOL)_writeLock:(id *)lock;
- (BOOL)_readLock:(id *)lock;
- (void)_unlock;
- (void)_protectPath:(id)path;
- (void)_unprotectPath:(id)path;
- (id)_URLForNameSpace:(id)space createIfNeeded:(BOOL)needed allowMissing:(BOOL)missing error:(id *)error;
- (id)getAdditionDictionary:(id)dictionary error:(id *)error;
- (BOOL)setAdditionOptions:(id)options value:(unsigned long long)value error:(id *)error;
- (BOOL)setAdditionDisplayName:(id)name value:(id)value error:(id *)error;
- (id)setAdditionNameSpace:(id)space value:(id)value error:(id *)error;
- (BOOL)mergeAdditionUserInfo:(id)info value:(id)value error:(id *)error;
- (id)stagingURLforCreatingAdditionWithError:(id *)error;
- (id)URLforReplacingItemWithError:(id *)error;
- (void)cleanupStagingURL:(id)url;
- (id)prepareAdditionCreationWithItemAtURL:(id)url byMoving:(BOOL)moving creationInfo:(id)info error:(id *)error;
- (void)createAdditionStagedAtURL:(id)url creationInfo:(id)info completionHandler:(id /* block */)handler;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)addition preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)url preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (id)additionWithName:(id)name inNameSpace:(id)space error:(id *)error;
- (id)additionsWithNames:(id)names inNameSpace:(id)space error:(id *)error;
- (id)enumeratorForAdditionsInNameSpace:(id)space withOptions:(unsigned long long)options withoutOptions:(unsigned long long)options ordering:(int)ordering;
- (id)_enumerateItemsAtURL:(id)url;
- (void)removeAdditions:(id)additions completionHandler:(id /* block */)handler;
- (void)removeAllAdditionsForNamespaces:(id)namespaces completionHandler:(id /* block */)handler;
@end

#endif /* GSTemporaryStorage_h */