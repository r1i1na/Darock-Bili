//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICCollectionViewDataSource_Protocol_h
#define PUICCollectionViewDataSource_Protocol_h
@import Foundation;

@protocol PUICCollectionViewDataSource <UICollectionViewDataSource>
@optional
/* instance methods */
- (id)sectionIndexImagesForCollectionView:(id)view;
- (long long)collectionView:(id)view sectionForSectionImageIndex:(long long)index;
- (id)sectionIndexTitlesForCollectionView:(id)view;
- (long long)collectionView:(id)view sectionForSectionTitleIndex:(long long)index;
- (id)indexLabelsForCollectionView:(id)view;
- (id)collectionView:(id)view indexPathForIndexLabel:(id)label atIndex:(long long)index;
@end

#endif /* PUICCollectionViewDataSource_Protocol_h */