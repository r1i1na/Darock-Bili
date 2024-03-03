//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPModelLibraryRemoveCollaboratorsChangeRequest_h
#define MusicKit_SoftLinking_MPModelLibraryRemoveCollaboratorsChangeRequest_h
@import Foundation;

@class MPModelLibraryRemoveCollaboratorsChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryRemoveCollaboratorsChangeRequest : NSObject {
  /* instance variables */
  MPModelLibraryRemoveCollaboratorsChangeRequest *_underlyingRemoveCollaboratorsChangeRequest;
}

/* instance methods */
- (id)initWithPlaylist:(id)playlist socialProfileIDs:(id)ids;
- (void)performWithCompletionHandler:(id /* block */)handler;
@end

#endif /* MusicKit_SoftLinking_MPModelLibraryRemoveCollaboratorsChangeRequest_h */