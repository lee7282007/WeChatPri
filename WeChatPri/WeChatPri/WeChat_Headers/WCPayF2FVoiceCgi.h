//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol WCPayF2FVoiceCgiDelegate;

@interface WCPayF2FVoiceCgi : NSObject <PBMessageObserverDelegate>
{
    id <WCPayF2FVoiceCgiDelegate> _m_delegate;
    NSMutableDictionary *_m_dictPayload;
    NSMutableDictionary *_m_dictCGIRequestBeginTime;
}

@property(retain, nonatomic) NSMutableDictionary *m_dictCGIRequestBeginTime; // @synthesize m_dictCGIRequestBeginTime=_m_dictCGIRequestBeginTime;
@property(retain, nonatomic) NSMutableDictionary *m_dictPayload; // @synthesize m_dictPayload=_m_dictPayload;
@property(nonatomic) __weak id <WCPayF2FVoiceCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)reportCgiCostTime:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequsetWithArgument:(id)arg1 payload:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

