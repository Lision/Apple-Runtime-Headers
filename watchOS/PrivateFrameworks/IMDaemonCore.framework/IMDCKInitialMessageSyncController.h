//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/IMDCKMessageSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialMessageSyncController : IMDCKMessageSyncController
{
    CKServerChangeToken *_syncToken;
}

@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (_Bool)_kickOffWriteIfNeededForSyncType:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned int)arg2 currentBatchCount:(int)arg3 maxBatchCount:(int)arg4;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(int)arg1 maxBatchCount:(int)arg2;
- (id)latestSyncToken;
- (void)setLatestSyncToken:(id)arg1;
- (void)syncMessagesWithSyncType:(int)arg1 deviceConditionsToCheck:(unsigned int)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

