//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef UIMenu_MobileSafariExtras_h
#define UIMenu_MobileSafariExtras_h
@import Foundation;

@interface UIMenu (MobileSafariExtras)
/* class methods */
+ (id)safari_menuWithCachedChildrenProvider:(id /* block */)provider;
+ (id)safari_menuWithUncachedChildrenProvider:(id /* block */)provider;
+ (id)safari_menuWithTitle:(id)title cachedChildrenProvider:(id /* block */)provider;
+ (id)safari_menuWithTitle:(id)title uncachedChildrenProvider:(id /* block */)provider;
+ (id)safari_menuWithTitle:(id)title image:(id)image identifier:(id)identifier options:(unsigned long long)options uncachedChildrenProvider:(id /* block */)provider;
+ (id)safari_menuWithTitle:(id)title image:(id)image identifier:(id)identifier options:(unsigned long long)options cachedChildrenProvider:(id /* block */)provider;
+ (id)sf_bookmarkMenu;
+ (id)sf_tabMenu;
+ (id)sf_tabMenuWithAdditionalChildrenProvider:(id /* block */)provider;
@end

#endif /* UIMenu_MobileSafariExtras_h */