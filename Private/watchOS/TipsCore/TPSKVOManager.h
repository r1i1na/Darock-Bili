//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSKVOManager_h
#define TPSKVOManager_h
@import Foundation;

@interface TPSKVOManager : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) struct __CFDictionary * KVODictionary;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;
- (void)addKVOObject:(id)kvoobject forKeyPath:(id)path options:(unsigned long long)options context:(void *)context;
- (void)removeKVOObject:(id)kvoobject forKeyPath:(id)path;
- (void)removeKVOForObject:(id)object;
- (void)removeAllKVOObjects;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* TPSKVOManager_h */