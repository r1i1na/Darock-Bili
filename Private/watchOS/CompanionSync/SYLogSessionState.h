//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef SYLogSessionState_h
#define SYLogSessionState_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SYLogErrorInfo.h"

@class NSDictionary, NSMutableArray, NSString;

@interface SYLogSessionState : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 fullSessionTimeout; unsigned int x :1 perMessageTimeout; unsigned int x :1 canRestart; unsigned int x :1 canRollback; unsigned int x :1 canceled; unsigned int x :1 isReset; } _has;
}

@property (retain, nonatomic) NSDictionary *cocoaTransportOptions;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int state;
@property (nonatomic) BOOL isSending;
@property (nonatomic) BOOL hasIsReset;
@property (nonatomic) BOOL isReset;
@property (nonatomic) BOOL hasPerMessageTimeout;
@property (nonatomic) double perMessageTimeout;
@property (nonatomic) BOOL hasFullSessionTimeout;
@property (nonatomic) double fullSessionTimeout;
@property (nonatomic) unsigned long long maxConcurrentMessages;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) SYLogErrorInfo *error;
@property (nonatomic) BOOL hasCanRestart;
@property (nonatomic) BOOL canRestart;
@property (nonatomic) BOOL hasCanRollback;
@property (nonatomic) BOOL canRollback;
@property (nonatomic) BOOL hasCanceled;
@property (nonatomic) BOOL canceled;
@property (retain, nonatomic) NSMutableArray *transportOptions;
@property (retain, nonatomic) NSMutableArray *peers;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;

/* class methods */
+ (Class)transportOptionsType;
+ (Class)peerType;

/* instance methods */
- (id)stateAsString:(int)string;
- (int)StringAsState:(id)state;
- (void)clearTransportOptions;
- (void)addTransportOptions:(id)options;
- (unsigned long long)transportOptionsCount;
- (id)transportOptionsAtIndex:(unsigned long long)index;
- (void)clearPeers;
- (void)addPeer:(id)peer;
- (unsigned long long)peersCount;
- (id)peerAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* SYLogSessionState_h */