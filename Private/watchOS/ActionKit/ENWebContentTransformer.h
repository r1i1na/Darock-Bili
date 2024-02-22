//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENWebContentTransformer_h
#define ENWebContentTransformer_h
@import Foundation;

#include "NSValueTransformer.h"
#include "ENMLWriter.h"
#include "ENNote.h"
#include "ENWebArchive.h"
#include "ENXMLDTD.h"
#include "ENXMLSaxParser.h"
#include "ENXMLSaxParserDelegate-Protocol.h"

@class NSArray, NSString, NSURL;

@interface ENWebContentTransformer : NSValueTransformer<ENXMLSaxParserDelegate>

@property (retain, nonatomic) ENXMLSaxParser *htmlParser;
@property (retain, nonatomic) ENMLWriter *enmlWriter;
@property (retain, nonatomic) ENXMLDTD *enmlDTD;
@property (retain, nonatomic) NSURL *archiveBaseURL;
@property (retain, nonatomic) ENWebArchive *webArchive;
@property (retain, nonatomic) ENNote *note;
@property (retain, nonatomic) NSArray *ignorableTags;
@property (retain, nonatomic) NSArray *ignorableAttributes;
@property (retain, nonatomic) NSArray *skipTags;
@property (retain, nonatomic) NSArray *inlineElements;
@property (nonatomic) unsigned long long ignoreElementCount;
@property (nonatomic) BOOL inTitleElement;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *mimeType;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;

/* instance methods */
- (id)init;
- (id)transformedValue:(id)value;
- (id)htmlFromWebArchive:(id)archive;
- (id)archiveBaseURLFromURL:(id)url;
- (id)sanitizeURLAttribute:(id)urlattribute;
- (id)filenameFromURL:(id)url;
- (id)mimeTypeFromFilename:(id)filename;
- (id)resourceFromWebResource:(id)resource;
- (void)parser:(id)parser didStartElement:(id)element attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser didFailWithError:(id)error;
@end

#endif /* ENWebContentTransformer_h */