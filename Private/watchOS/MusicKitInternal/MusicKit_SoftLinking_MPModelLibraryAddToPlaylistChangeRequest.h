//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest_h
#define MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest_h
@import Foundation;

@class MPModelLibraryAddToPlaylistChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject {
  /* instance variables */
  MPModelLibraryAddToPlaylistChangeRequest *_underlyingAddToPlaylistChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (copy, nonatomic) id /* block */ storeImportAllowedHandler;

/* instance methods */
- (id)initWithPlaylist:(id)playlist songIdentifiers:(id)identifiers representativeObject:(id)object referralObject:(id)object;
@end

#endif /* MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest_h */