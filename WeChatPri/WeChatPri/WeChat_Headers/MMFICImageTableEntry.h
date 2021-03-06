//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMFICImageTableChunk, NSString;

@interface MMFICImageTableEntry : NSObject
{
    MMFICImageTableChunk *_imageTableChunk;
    void *_bytes;
    unsigned long long _entryLength;
    unsigned long long _imageLength;
    NSString *_entityUUID;
}

+ (unsigned long long)entryLengthWithImageLength:(unsigned long long)arg1;
@property(readonly, nonatomic) MMFICImageTableChunk *imageTableChunk; // @synthesize imageTableChunk=_imageTableChunk;
@property(retain, nonatomic) NSString *entityUUID; // @synthesize entityUUID=_entityUUID;
@property(readonly, nonatomic) unsigned long long imageLength; // @synthesize imageLength=_imageLength;
@property(readonly, nonatomic) unsigned long long entryLength; // @synthesize entryLength=_entryLength;
- (void).cxx_destruct;
- (_Bool)flush;
- (_Bool)checkValid;
- (id)initWithImageTableChunk:(id)arg1 bytes:(void *)arg2 entryLength:(unsigned long long)arg3 imageLength:(unsigned long long)arg4;
- (CDStruct_2c0d991e *)_tailMetadata;
- (CDStruct_2c0d991e *)_headMetadata;
@property(nonatomic) CDStruct_bd2f613f sourceImageUUIDBytes;
@property(nonatomic) CDStruct_bd2f613f entityUUIDBytes;
@property(readonly, nonatomic) void *imageAddress;
@property(readonly, nonatomic) void *entryAddress;

@end

