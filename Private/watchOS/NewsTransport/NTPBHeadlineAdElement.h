//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBHeadlineAdElement_h
#define NTPBHeadlineAdElement_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NTPBHeadlineAdElement : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 channelContentProviderID; unsigned int x :1 draftArticle; unsigned int x :1 paidArticle; unsigned int x :1 sponsoredArticle; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasArticleRating;
@property (retain, nonatomic) NSString *articleRating;
@property (retain, nonatomic) NSMutableArray *articleIAdCategories;
@property (nonatomic) BOOL hasPaidArticle;
@property (nonatomic) BOOL paidArticle;
@property (nonatomic) BOOL hasSponsoredArticle;
@property (nonatomic) BOOL sponsoredArticle;
@property (nonatomic) BOOL hasDraftArticle;
@property (nonatomic) BOOL draftArticle;
@property (retain, nonatomic) NSMutableArray *articleIAdSectionIDs;
@property (retain, nonatomic) NSMutableArray *channelIAdKeywords;
@property (readonly, nonatomic) BOOL hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL hasChannelRating;
@property (retain, nonatomic) NSString *channelRating;
@property (retain, nonatomic) NSMutableArray *channelIAdCategories;
@property (nonatomic) BOOL hasChannelContentProviderID;
@property (nonatomic) long long channelContentProviderID;
@property (retain, nonatomic) NSMutableArray *articleIAdKeywords;

/* class methods */
+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdKeywordsType;
+ (Class)channelIAdCategoriesType;
+ (Class)articleIAdKeywordsType;

/* instance methods */
- (void)clearArticleIAdCategories;
- (void)addArticleIAdCategories:(id)categories;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)index;
- (void)clearArticleIAdSectionIDs;
- (void)addArticleIAdSectionIDs:(id)ids;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)index;
- (void)clearChannelIAdKeywords;
- (void)addChannelIAdKeywords:(id)keywords;
- (unsigned long long)channelIAdKeywordsCount;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)index;
- (void)clearChannelIAdCategories;
- (void)addChannelIAdCategories:(id)categories;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)index;
- (void)clearArticleIAdKeywords;
- (void)addArticleIAdKeywords:(id)keywords;
- (unsigned long long)articleIAdKeywordsCount;
- (id)articleIAdKeywordsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBHeadlineAdElement_h */