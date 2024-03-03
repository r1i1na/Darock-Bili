//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOPlaceRequestTicket_h
#define _GEOPlaceRequestTicket_h
@import Foundation;

#include "GEOAbstractMapServiceTicket.h"
#include "GEOMapItem-Protocol.h"
#include "GEOPDPlaceRequest.h"
#include "GEOPDPlaceResponse.h"

@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket {
  /* instance variables */
  GEOPDPlaceRequest *_request;
  id _requestToken;
  GEOPDPlaceResponse *_response;
  NSObject<GEOMapItem> *_mapItemToRefine;
  id /* block */ _preSubmitUpdateRequestBlock;
  id /* block */ _retryRequestForErrorBlock;
}

/* instance methods */
- (id)initWithTraits:(id)traits;
- (id)initWithRequest:(id)request traits:(id)traits;
- (id)initWithRequest:(id)request traits:(id)traits preSubmitUpdateRequestBlock:(id /* block */)block retryForErrorBlock:(id /* block */)block;
- (id)initWithRequest:(id)request traits:(id)traits mapItemToRefine:(id)refine;
- (id)initWithRequest:(id)request traits:(id)traits mapItemToRefine:(id)refine preSubmitUpdateRequestBlock:(id /* block */)block retryForErrorBlock:(id /* block */)block;
- (id)description;
- (void)_processRequest:(id)request auditToken:(id)token timeout:(double)timeout withHandler:(id /* block */)handler refinedHandler:(id /* block */)handler networkActivity:(id /* block */)activity;
- (void)submitWithHandler:(id /* block */)handler auditToken:(id)token timeout:(long long)timeout networkActivity:(id /* block */)activity;
- (void)submitWithRefinedHandler:(id /* block */)handler auditToken:(id)token timeout:(long long)timeout networkActivity:(id /* block */)activity;
- (void)cancel;
- (void)applyToCorrectedSearch:(id)search;
- (void)applyToPlaceInfo:(id)info;
- (id)resultSectionHeader;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKind;
- (id)geoMapItemIdentifier:(id)identifier;
@end

#endif /* _GEOPlaceRequestTicket_h */