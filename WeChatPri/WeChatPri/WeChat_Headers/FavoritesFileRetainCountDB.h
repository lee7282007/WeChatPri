//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MyFavoritesDB;

@interface FavoritesFileRetainCountDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (_Bool)isMd5RetainCountZero:(id)arg1;
- (_Bool)deleteItemByMd5:(id)arg1 andItemLocalId:(unsigned int)arg2;
- (_Bool)insertToFileRetainCountTable:(id)arg1 ItemLocalId:(unsigned int)arg2;
- (_Bool)isItemExist:(id)arg1 ItemLocalId:(unsigned int)arg2;
- (void)initDB:(id)arg1;
- (id)init;

@end
