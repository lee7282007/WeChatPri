//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol KSAudioFileProtocol <NSObject>
@property(readonly, nonatomic) long long curPacketOffset;
@property(readonly, nonatomic) long long lastReadingPos;
@property(readonly, nonatomic) _Bool isEof;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) unsigned int databytesPerSecond;
@property(readonly, nonatomic) unsigned int maxPacketSize;
@property(readonly, nonatomic) struct AudioStreamBasicDescription fileFormat;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
- (long long)seekPacketPos:(double)arg1;
- (_Bool)isFileReadyToParsing;
- (_Bool)open:(id *)arg1;
- (_Bool)isOpened;
- (void)close;
- (struct AudioStreamBasicDescription *)outputDes;

@optional
@property(retain, nonatomic) NSData *magicCookie;
@end
