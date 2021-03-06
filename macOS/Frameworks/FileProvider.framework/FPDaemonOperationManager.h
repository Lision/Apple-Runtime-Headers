//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDaemonOperationManager : NSObject
{
    BOOL _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_enumerateNewDaemonOperationsWithHandler:(CDUnknownBlockType)arg1;
- (void)_updateDaemonOperations;
- (void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2;
- (id)generateLocalOperationID;
- (void)wakeUp;
- (void)dealloc;
- (id)init;

@end

