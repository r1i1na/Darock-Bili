//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSConfidenceModelDriver_h
#define _PSConfidenceModelDriver_h
@import Foundation;

@class NSMutableDictionary;

@interface _PSConfidenceModelDriver : NSObject

@property (retain, nonatomic) NSMutableDictionary *confidenceModelDictionary;

/* class methods */
+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

/* instance methods */
- (id)init;
- (BOOL)registerModelKey:(id)key forUseCaseKey:(id)key confidenceWindowSize:(int)size minimumInstanceCount:(int)count;
- (BOOL)addEventForModel:(id)model forUseCaseKey:(id)key event:(id)event;
- (double)getConfidenceForModel:(id)model forUseCaseKey:(id)key;
- (id)getDictionaryFromArchiveAtPath:(id)path;
- (id)getOrMakeConfidenceModelDictionary;
- (void)writeArchiveFromDict:(id)dict;
- (void)writeArchive:(id)archive toFilePath:(id)path;
@end

#endif /* _PSConfidenceModelDriver_h */