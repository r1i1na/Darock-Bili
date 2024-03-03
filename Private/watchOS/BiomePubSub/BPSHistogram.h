//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSHistogram_h
#define BPSHistogram_h
@import Foundation;

@class NSArray, NSMutableDictionary;

@interface BPSHistogram : NSObject {
  /* instance variables */
  NSMutableDictionary *_backingDictionary;
  NSArray *_keyType;
}

/* instance methods */
- (id)init;
- (void)_setKeyTypeFromKey:(id)key;
- (BOOL)_correctKeyType:(id)type;
- (id)scoreForKey:(id)key;
- (void)addScore:(id)score forKey:(id)key;
- (void)removeScoreForKey:(id)key;
- (id)allKeysAtLevel:(unsigned long long)level;
- (void)removeAllScores;
- (void)enumerateKeysAndScoresUsingBlock:(id /* block */)block;
- (void)_enumerateWithBlock:(id /* block */)block node:(id)node currentKey:(id)key stop:(BOOL *)stop;
@end

#endif /* BPSHistogram_h */