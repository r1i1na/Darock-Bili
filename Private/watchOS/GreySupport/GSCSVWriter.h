//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSCSVWriter_h
#define GSCSVWriter_h
@import Foundation;

#include "GSWriter.h"
#include "GSWriting-Protocol.h"

@class NSArray, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

@interface GSCSVWriter : GSWriter<GSWriting>

@property (retain, nonatomic) NSArray *header;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSMutableArray *invalidElements;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPath:(id)path fileName:(id)name;
- (void)dealloc;
- (void)writeData:(id)data;
- (void)_loadHeaderIfNeeded:(id)needed;
- (void)_storeElement:(id)element;
- (void)_writeArray:(id)array;
@end

#endif /* GSCSVWriter_h */