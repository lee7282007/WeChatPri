//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface DBMessageNewBizExt : NSObject <WCDBCoding>
{
    unsigned int msgLocalId;
    unsigned int msgType;
    unsigned int msgInnerType;
    unsigned int status;
    unsigned int invalidTime;
    unsigned int msgExtColInt1;
    unsigned int msgExtColInt2;
    NSString *chatUsername;
    NSString *bizId;
    NSString *msgExtColString1;
    NSString *msgExtColString2;
    long long m___rowID;
}

+ (const basic_string_a490aa4c *)getWCDBPrimaryColumnName;
+ (const struct WCDBIndexHelper *)getWCDBIndexArray;
+ (unsigned long long)getWCDBIndexArrayCount;
+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *msgExtColString2; // @synthesize msgExtColString2;
@property(retain, nonatomic) NSString *msgExtColString1; // @synthesize msgExtColString1;
@property(nonatomic) unsigned int msgExtColInt2; // @synthesize msgExtColInt2;
@property(nonatomic) unsigned int msgExtColInt1; // @synthesize msgExtColInt1;
@property(nonatomic) unsigned int invalidTime; // @synthesize invalidTime;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId;
@property(nonatomic) unsigned int msgInnerType; // @synthesize msgInnerType;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId;
@property(retain, nonatomic) NSString *chatUsername; // @synthesize chatUsername;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_msgExtColString2;
- (const WCDBCondition_22fabacd *)db_msgExtColString1;
- (const WCDBCondition_c6db074e *)db_msgExtColInt2;
- (const WCDBCondition_c6db074e *)db_msgExtColInt1;
- (const WCDBCondition_c6db074e *)db_invalidTime;
- (const WCDBCondition_c6db074e *)db_status;
- (const WCDBCondition_22fabacd *)db_bizId;
- (const WCDBCondition_c6db074e *)db_msgInnerType;
- (const WCDBCondition_c6db074e *)db_msgType;
- (const WCDBCondition_c6db074e *)db_msgLocalId;
- (const WCDBCondition_22fabacd *)db_chatUsername;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
