//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdCloudService_h
#define PLAssetsdCloudService_h
@import Foundation;

#include "PLAbstractLibraryServicesManagerService.h"
#include "PLAssetsdCloudServiceProtocol-Protocol.h"

@class NSString, PLLazyObject;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService<PLAssetsdCloudServiceProtocol> {
  /* instance variables */
  PLLazyObject *_lazyResourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager lazyResourceDownloader:(id)downloader;
- (id)resourceDownloader;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)asset mediaAssetType:(unsigned long long)type reply:(id /* block */)reply;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)identifier reply:(id /* block */)reply;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)uri taskIdentifier:(id)identifier resourceType:(unsigned long long)type HighPriority:(BOOL)priority trackCPLDownload:(BOOL)cpldownload downloadIsTransient:(BOOL)transient reply:(id /* block */)reply;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)assets doneTokens:(id)tokens format:(unsigned long long)format reply:(id /* block */)reply;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)identifiers reply:(id /* block */)reply;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)uri synchronously:(BOOL)synchronously reply:(id /* block */)reply;
@end

#endif /* PLAssetsdCloudService_h */