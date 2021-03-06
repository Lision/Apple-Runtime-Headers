//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject
{
    BOOL _valid;
    unsigned long long _ticks;
    id <ABVCardTimeProvider> _timeProvider;
    NSDate *_startTime;
}

+ (_Bool)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)arg1;
@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) id <ABVCardTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property(nonatomic) unsigned long long ticks; // @synthesize ticks=_ticks;
- (BOOL)isValid;
- (void)checkValidity;
- (BOOL)isStarted;
- (void)start;
- (void)dealloc;
- (id)initWithTimeProvider:(id)arg1;

@end

