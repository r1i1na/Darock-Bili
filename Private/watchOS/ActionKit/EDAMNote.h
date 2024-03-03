//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNote_h
#define EDAMNote_h
@import Foundation;

#include "FATObject.h"
#include "EDAMNoteAttributes.h"
#include "EDAMNoteLimits.h"
#include "EDAMNoteRestrictions.h"

@class NSArray, NSData, NSNumber, NSString;

@interface EDAMNote : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSData *contentHash;
@property (retain, nonatomic) NSNumber *contentLength;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSArray *tagGuids;
@property (retain, nonatomic) NSArray *resources;
@property (retain, nonatomic) EDAMNoteAttributes *attributes;
@property (retain, nonatomic) NSArray *tagNames;
@property (retain, nonatomic) NSArray *sharedNotes;
@property (retain, nonatomic) EDAMNoteRestrictions *restrictions;
@property (retain, nonatomic) EDAMNoteLimits *limits;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNote_h */