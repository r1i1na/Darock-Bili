//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCollectionServer_Protocol_h
#define NTKCollectionServer_Protocol_h
@import Foundation;

@protocol NTKCollectionServer <NSObject>
/* instance methods */
- (void)registerForCollectionIdentifier:(id)identifier deviceUUID:(id)uuid withSeqId:(id)id;
- (void)setSelectedFaceUUID:(id)uuid suppressingCallback:(BOOL)callback;
- (void)setOrderedFaceUUIDs:(id)uuids;
- (void)updateFaceForUUID:(id)uuid withConfigurationJSONRepresentation:(id)jsonrepresentation;
- (void)updateFaceForUUID:(id)uuid withResourceDirectory:(id)directory;
- (void)removeFaceForUUID:(id)uuid;
- (void)addFaceInstanceDescriptor:(id)descriptor forUUID:(id)uuid;
- (void)upgradeFaceInstanceDescriptor:(id)descriptor forUUID:(id)uuid;
- (void)resetCollection;
- (void)flushUpdatesWithIdentifier:(id)identifier;
@end

#endif /* NTKCollectionServer_Protocol_h */