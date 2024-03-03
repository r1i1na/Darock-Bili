//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PSIIntArray_h
#define PSIIntArray_h
@import Foundation;

@interface PSIIntArray : NSObject {
  /* instance variables */
  struct sqlite3_intarray * _elementArray;
  long long _staticElementBuffer[256];
  unsigned long long _elementBufferSize;
  BOOL _freeOnUnprepare;
}

@property (readonly, nonatomic) long long * elementBuffer;

/* instance methods */
- (id)initWithLabel:(id)label database:(struct sqlite3 *)database;
- (void)dealloc;
- (void)prepareForNumberOfElements:(unsigned long long)elements;
- (void)_prepareForNumberOfElements:(unsigned long long)elements;
- (void)unprepare;
- (void)_unprepare;
- (void)bindElements:(struct __CFSet *)elements;
- (void)bindElements:(struct __CFArray *)elements range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)bindElements:(const long long *)elements numberOfElements:(unsigned long long)elements;
- (void)unbind;
@end

#endif /* PSIIntArray_h */