//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSBagURLParser_h
#define AMSBagURLParser_h
@import Foundation;

@interface AMSBagURLParser : NSObject
/* class methods */
+ (id)URLBySubstitutingVariablesInURLString:(id)urlstring usingPromiseBlock:(id /* block */)block;
+ (id)_URLBySubstitutingVariablesInURLString:(id)urlstring range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range usingPromiseBlock:(id /* block */)block;
+ (id)URLBySubstitutingVariablesInURLString:(id)urlstring usingBlock:(id /* block */)block;
+ (id)_firstVariableInTemplate:(id)template includeTags:(BOOL)tags;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeofSubstringWithOpeningTag:(id)tag closingTag:(id)tag inString:(id)string;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfTemplateInURLString:(id)urlstring;
@end

#endif /* AMSBagURLParser_h */