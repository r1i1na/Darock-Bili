//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKRecord_PCSPrivate_h
#define CKRecord_PCSPrivate_h
@import Foundation;

@interface CKRecord (PCSPrivate)
/* instance methods */
- (struct _OpaquePCSShareProtection *)recordPCS;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection *)pcs;
- (void)fillOutPCSMetadataInfo;
@end

#endif /* CKRecord_PCSPrivate_h */