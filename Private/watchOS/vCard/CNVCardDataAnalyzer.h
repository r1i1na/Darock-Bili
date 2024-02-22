//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardDataAnalyzer_h
#define CNVCardDataAnalyzer_h
@import Foundation;

@interface CNVCardDataAnalyzer : NSObject
/* class methods */
+ (struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; })analyzeData:(id)data;
+ (BOOL)tryUTF8VCard:(id)vcard analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryUTF16LEVCard:(id)levcard analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryUTF16BEVCard:(id)bevcard analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryUTF16LEBOMVCard:(id)lebomvcard analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryUTF16BEBOMVCard:(id)bebomvcard analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryVCardEncoding:(unsigned long long)encoding data:(id)data analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)data:(id)data isVersion30WithPrefix:(id)prefix encoding:(unsigned long long)encoding;
+ (BOOL)data:(id)data containsString:(id)string encoding:(unsigned long long)encoding;
+ (BOOL)data:(id)data containsParam:(id)param value:(id)value encoding:(unsigned long long)encoding;
+ (BOOL)tryUTF16WithByteOrderMarker:(id)marker analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (BOOL)tryUTF16ByInferrence:(id)inferrence analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)analysis;
+ (unsigned char)data:(id)data byteAtIndex:(unsigned long long)index;
+ (BOOL)data:(id)data hasPrefix:(id)prefix;
+ (BOOL)data:(id)data containsSubdata:(id)subdata;
+ (id)data:(id)data byPrependingData:(id)data;
@end

#endif /* CNVCardDataAnalyzer_h */