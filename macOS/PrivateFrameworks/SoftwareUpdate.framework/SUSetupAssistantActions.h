//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SUSetupAssistantActions : NSObject
{
    NSXPCConnection *_connection;
}

+ (double)estimatedRunningTime;
- (void)runActionsWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_disconnectFromService;
- (BOOL)_connectToService;
- (void)dealloc;
- (id)init;

@end

