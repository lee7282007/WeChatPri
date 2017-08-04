//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCSafetyReportBaseData.h"

@class NSString;

@interface WCCommitImageWrap : WCSafetyReportBaseData
{
    unsigned int _position;
    NSString *_qrUrl;
    NSString *_md5;
    NSString *_imgurl;
    NSString *_localPath;
}

@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *qrUrl; // @synthesize qrUrl=_qrUrl;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
- (void).cxx_destruct;
- (_Bool)hasQRUrl;
- (id)reportStr;

@end
