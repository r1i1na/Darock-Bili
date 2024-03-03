//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDDataDeletionJournalEntry_h
#define _HDDataDeletionJournalEntry_h
@import Foundation;

#include "HDJournalEntry.h"

@class HKObject;

@interface _HDDataDeletionJournalEntry : HDJournalEntry {
  /* instance variables */
  BOOL _restrictSource;
  HKObject *_dataObject;
}

/* class methods */
+ (void)applyEntries:(id)entries withProfile:(id)profile;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HDDataDeletionJournalEntry_h */