//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceGalleryItem_h
#define NTKFaceGalleryItem_h
@import Foundation;

@class NSHashTable, NSString;

@interface NTKFaceGalleryItem : NSObject {
  /* instance variables */
  NSString *_galleryIdentifier;
  NSHashTable *_observers;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } cellSize;
@property (readonly, nonatomic) NSString *localizedSectionName;

/* instance methods */
- (id)_initWithGalleryIdentifier:(id)identifier;
- (unsigned long long)hash;
- (void)addCellContentObserver:(id)observer;
- (void)removeCellContentObserver:(id)observer;
- (void)_notifyObserversCellContentUpdated;
- (void)invalidateLayout;
- (BOOL)containsFaceDescriptor:(id)descriptor;
@end

#endif /* NTKFaceGalleryItem_h */