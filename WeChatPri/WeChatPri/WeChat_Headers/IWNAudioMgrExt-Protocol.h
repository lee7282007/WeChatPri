//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWNAudioMgrExt <NSObject>

@optional
- (void)OnEndPlayWNAudio:(NSString *)arg1;
- (void)OnBeginPlayWNAudio:(NSString *)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1 PeakPower:(float)arg2 Length:(int)arg3;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(NSString *)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
@end
