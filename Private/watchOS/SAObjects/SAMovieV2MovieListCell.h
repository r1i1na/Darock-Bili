//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMovieV2MovieListCell_h
#define SAMovieV2MovieListCell_h
@import Foundation;

#include "SADomainObject.h"
#include "SAMovieV2MovieDetailSnippet.h"

@class NSArray, NSDate, NSNumber, NSString;

@interface SAMovieV2MovieListCell : SADomainObject

@property (copy, nonatomic) NSArray *displayableShowtimes;
@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;

/* class methods */
+ (id)movieListCell;
+ (id)movieListCellWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAMovieV2MovieListCell_h */