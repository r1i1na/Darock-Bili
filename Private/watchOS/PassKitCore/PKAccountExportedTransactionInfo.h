//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountExportedTransactionInfo_h
#define PKAccountExportedTransactionInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKAccountStatementMetadata.h"

@class NSData, NSString;

@interface PKAccountExportedTransactionInfo : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSString *transactionDataFilename;
@property (copy, nonatomic) NSString *transactionDataHash;
@property (retain, nonatomic) PKAccountStatementMetadata *statementMetadata;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKAccountExportedTransactionInfo_h */