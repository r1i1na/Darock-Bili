//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBBookmarkProvider_Protocol_h
#define WBBookmarkProvider_Protocol_h
@import Foundation;

@protocol WBBookmarkProvider <NSObject>
/* instance methods */
- (void)enumerateBookmarks:(BOOL)bookmarks andReadingListItems:(BOOL)items matchingString:(id)string usingBlock:(id /* block */)block;
- (id)bookmarksMatchingString:(id)string;
- (id)readingListWithUnreadOnly:(BOOL)only filteredUsingString:(id)string;
- (id)readingListBookmarksMatchingString:(id)string maxResults:(unsigned int)results onlyArchivedBookmarks:(BOOL)bookmarks;
- (id)bookmarkWithID:(int)id;
- (id)databaseHealthInformation;
- (unsigned long long)leafChildCountForBookmarksInFolderWithID:(int)id;
- (id)leafChildCountForFoldersInFolderWithID:(int)id;
@end

#endif /* WBBookmarkProvider_Protocol_h */