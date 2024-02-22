//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldUtilities_h
#define NTKGreenfieldUtilities_h
@import Foundation;

@interface NTKGreenfieldUtilities : NSObject
/* class methods */
+ (id)temporaryGreenfieldDirectory;
+ (id)temporaryGreenfieldNoBordersSnapshotPath;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)recipe completionBlock:(id /* block */)block;
+ (void)generateFacePreviewImageFromDraftRecipe:(id)recipe borderType:(unsigned long long)type completionBlock:(id /* block */)block;
+ (void)encodeRecipeFromDraftRecipe:(id)recipe completionBlock:(id /* block */)block;
+ (id)_queue_encodeDraftRecipe:(id)recipe;
+ (id)_queue_snapshotFace:(id)face borderType:(unsigned long long)type;
+ (id)_greenfieldWatchFaceJsonForFace:(id)face;
+ (id)_metadataDictForWatchFace:(id)face slotToSampleTemplateMapping:(id)mapping slotToItemIdMapping:(id)mapping slotToBundleIdMapping:(id)mapping watchFaceDataPath:(id)path;
+ (id)createXPCServiceConnection;
+ (BOOL)validateFaceType:(id)type faceBundleId:(id)id;
+ (void)migrateComplicationsOnFace:(id)face;
+ (void)decodeWatchFaceFromUrl:(id)url completionBlock:(id /* block */)block;
+ (id)unzipWatchFaceFileAtUrl:(id)url;
+ (id)_decodeFaceFromDataPath:(id)path;
+ (void)generateFacePreviewImageFromUrl:(id)url completionBlock:(id /* block */)block;
+ (id)_queue_greenfieldPreviewFromUrl:(id)url;
+ (id)addBorder:(unsigned long long)border toWatchFaceImage:(id)image;
+ (id)_addGreyBorderToWatchFaceImage:(id)image;
+ (id)_addGenericDeviceBorderToWatchFaceImage:(id)image includesTransparentPadding:(BOOL)padding;
+ (id)encodeQueue;
+ (void)_updateSystemDeletableAppItemIdForSlotToItemIdMapping:(id)mapping face:(id)face;
+ (BOOL)shouldPresentUnreleasedFeaturesInternalWarningForFace:(id)face;
@end

#endif /* NTKGreenfieldUtilities_h */