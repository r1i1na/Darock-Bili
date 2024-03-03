//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEODirectionsRequest_h
#define GEODirectionsRequest_h
@import Foundation;

#include "PBRequest.h"
#include "GEOAdditionalEnabledMarkets.h"
#include "GEOClientCapabilities.h"
#include "GEOClientFeedbackInfo.h"
#include "GEOCommonOptions.h"
#include "GEODirectionsRequestFeedback.h"
#include "GEOLocation.h"
#include "GEOMapRegion.h"
#include "GEOOriginalRoute.h"
#include "GEOOriginalWaypointRoute.h"
#include "GEOPDABClientDatasetMetadata.h"
#include "GEOPrivacyMetadata.h"
#include "GEORecentLocationHistory.h"
#include "GEORouteAttributes.h"
#include "GEOTripInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEODirectionsRequest : PBRequest<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_sessionID; unsigned int x :1 has_requestTime; unsigned int x :1 has_sessionRelativeTimestamp; unsigned int x :1 has_departureTime; unsigned int x :1 has_lastEtaDisplayed; unsigned int x :1 has_mainTransportTypeMaxRouteCount; unsigned int x :1 has_nonRecommendedRoutesOption; unsigned int x :1 has_originalRoutePurpose; unsigned int x :1 has_sequenceNumber; unsigned int x :1 has_timeSinceLastRerouteRequest; unsigned int x :1 has_getRouteForZilchPoints; unsigned int x :1 has_isFromAPI; unsigned int x :1 read_unknownFields; unsigned int x :1 read_abClientMetadata; unsigned int x :1 read_additionalEnabledMarkets; unsigned int x :1 read_clientCapabilities; unsigned int x :1 read_clientFeedbackInfo; unsigned int x :1 read_commonOptions; unsigned int x :1 read_currentMapRegion; unsigned int x :1 read_currentUserLocation; unsigned int x :1 read_deviceHistoricalLocations; unsigned int x :1 read_displayedBannerIds; unsigned int x :1 read_feedback; unsigned int x :1 read_lastKnownRoadLocation; unsigned int x :1 read_loggedAbExperiment; unsigned int x :1 read_nonRecommendedRoutesCache; unsigned int x :1 read_originalDirectionsResponseID; unsigned int x :1 read_originalRouteID; unsigned int x :1 read_originalRouteZilchPoints; unsigned int x :1 read_originalRoute; unsigned int x :1 read_originalRouteEvInfos; unsigned int x :1 read_originalWaypointRoute; unsigned int x :1 read_privacyMetadata; unsigned int x :1 read_recentLocationHistory; unsigned int x :1 read_routeAttributes; unsigned int x :1 read_serviceTags; unsigned int x :1 read_sessionState; unsigned int x :1 read_trafficApiResponses; unsigned int x :1 read_trafficSnapshotIds; unsigned int x :1 read_tripInfo; unsigned int x :1 read_waypointTypeds; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasRequestTime;
@property (nonatomic) double requestTime;
@property (readonly, nonatomic) BOOL hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSMutableArray *waypointTypeds;
@property (retain, nonatomic) NSMutableArray *displayedBannerIds;
@property (readonly, nonatomic) BOOL hasClientFeedbackInfo;
@property (retain, nonatomic) GEOClientFeedbackInfo *clientFeedbackInfo;
@property (nonatomic) BOOL hasMainTransportTypeMaxRouteCount;
@property (nonatomic) unsigned int mainTransportTypeMaxRouteCount;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (readonly, nonatomic) BOOL hasCurrentMapRegion;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (readonly, nonatomic) BOOL hasOriginalRouteID;
@property (retain, nonatomic) NSData *originalRouteID;
@property (retain, nonatomic) NSMutableArray *originalRouteZilchPoints;
@property (readonly, nonatomic) BOOL hasOriginalDirectionsResponseID;
@property (retain, nonatomic) NSData *originalDirectionsResponseID;
@property (retain, nonatomic) NSMutableArray *originalRouteEvInfos;
@property (readonly, nonatomic) BOOL hasOriginalRoute;
@property (retain, nonatomic) GEOOriginalRoute *originalRoute;
@property (readonly, nonatomic) BOOL hasOriginalWaypointRoute;
@property (retain, nonatomic) GEOOriginalWaypointRoute *originalWaypointRoute;
@property (nonatomic) BOOL hasTimeSinceLastRerouteRequest;
@property (nonatomic) unsigned int timeSinceLastRerouteRequest;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *clientCapabilities;
@property (nonatomic) BOOL hasDepartureTime;
@property (nonatomic) int departureTime;
@property (nonatomic) BOOL hasGetRouteForZilchPoints;
@property (nonatomic) BOOL getRouteForZilchPoints;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } sessionID;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) double sessionRelativeTimestamp;
@property (readonly, nonatomic) BOOL hasFeedback;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) BOOL hasSessionState;
@property (retain, nonatomic) NSData *sessionState;
@property (nonatomic) BOOL hasIsFromAPI;
@property (nonatomic) BOOL isFromAPI;
@property (readonly, nonatomic) BOOL hasCommonOptions;
@property (retain, nonatomic) GEOCommonOptions *commonOptions;
@property (readonly, nonatomic) BOOL hasLoggedAbExperiment;
@property (retain, nonatomic) NSString *loggedAbExperiment;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;
@property (nonatomic) BOOL hasOriginalRoutePurpose;
@property (nonatomic) int originalRoutePurpose;
@property (readonly, nonatomic) BOOL hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (nonatomic) BOOL hasNonRecommendedRoutesOption;
@property (nonatomic) int nonRecommendedRoutesOption;
@property (readonly, nonatomic) BOOL hasNonRecommendedRoutesCache;
@property (retain, nonatomic) NSData *nonRecommendedRoutesCache;
@property (nonatomic) BOOL hasLastEtaDisplayed;
@property (nonatomic) unsigned int lastEtaDisplayed;
@property (readonly, nonatomic) BOOL hasRecentLocationHistory;
@property (retain, nonatomic) GEORecentLocationHistory *recentLocationHistory;
@property (readonly, nonatomic) BOOL hasPrivacyMetadata;
@property (retain, nonatomic) GEOPrivacyMetadata *privacyMetadata;
@property (readonly, nonatomic) BOOL hasTripInfo;
@property (retain, nonatomic) GEOTripInfo *tripInfo;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (retain, nonatomic) NSMutableArray *trafficApiResponses;
@property (retain, nonatomic) NSMutableArray *trafficSnapshotIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)waypointTypedType;
+ (Class)displayedBannerIdType;
+ (Class)originalRouteZilchPointsType;
+ (Class)originalRouteEvInfoType;
+ (Class)deviceHistoricalLocationType;
+ (Class)serviceTagType;
+ (Class)trafficApiResponsesType;
+ (Class)trafficSnapshotIdsType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)clearSessionId;
- (void)clearLocations;
- (id)initWithQuickETARequest:(id)etarequest withFeedback:(id)feedback;
- (id)initWithFeedback:(id)feedback;
- (id)initWithFeedback:(id)feedback sessionID:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })id;
- (void)initDefaultFeedbackInfo;
- (id)init;
- (id)initWithData:(id)data;
- (void)clearWaypointTypeds;
- (void)addWaypointTyped:(id)typed;
- (unsigned long long)waypointTypedsCount;
- (id)waypointTypedAtIndex:(unsigned long long)index;
- (void)clearDisplayedBannerIds;
- (void)addDisplayedBannerId:(id)id;
- (unsigned long long)displayedBannerIdsCount;
- (id)displayedBannerIdAtIndex:(unsigned long long)index;
- (void)clearOriginalRouteZilchPoints;
- (void)addOriginalRouteZilchPoints:(id)points;
- (unsigned long long)originalRouteZilchPointsCount;
- (id)originalRouteZilchPointsAtIndex:(unsigned long long)index;
- (void)clearOriginalRouteEvInfos;
- (void)addOriginalRouteEvInfo:(id)info;
- (unsigned long long)originalRouteEvInfosCount;
- (id)originalRouteEvInfoAtIndex:(unsigned long long)index;
- (id)originalRoutePurposeAsString:(int)string;
- (int)StringAsOriginalRoutePurpose:(id)purpose;
- (void)clearDeviceHistoricalLocations;
- (void)addDeviceHistoricalLocation:(id)location;
- (unsigned long long)deviceHistoricalLocationsCount;
- (id)deviceHistoricalLocationAtIndex:(unsigned long long)index;
- (id)nonRecommendedRoutesOptionAsString:(int)string;
- (int)StringAsNonRecommendedRoutesOption:(id)option;
- (void)clearServiceTags;
- (void)addServiceTag:(id)tag;
- (unsigned long long)serviceTagsCount;
- (id)serviceTagAtIndex:(unsigned long long)index;
- (void)clearTrafficApiResponses;
- (void)addTrafficApiResponses:(id)responses;
- (unsigned long long)trafficApiResponsesCount;
- (id)trafficApiResponsesAtIndex:(unsigned long long)index;
- (void)clearTrafficSnapshotIds;
- (void)addTrafficSnapshotIds:(id)ids;
- (unsigned long long)trafficSnapshotIdsCount;
- (id)trafficSnapshotIdsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEODirectionsRequest_h */