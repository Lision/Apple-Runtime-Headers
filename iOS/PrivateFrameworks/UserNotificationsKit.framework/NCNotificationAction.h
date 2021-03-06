//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;
@protocol NCNotificationActionRunner;

@interface NCNotificationAction : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _activationMode;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    unsigned long long _behavior;
    NSDictionary *_behaviorParameters;
    id <NCNotificationActionRunner> _actionRunner;
    _Bool _requiresAuthentication;
    _Bool _destructiveAction;
    _Bool _shouldDismissNotification;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldDismissNotification; // @synthesize shouldDismissNotification=_shouldDismissNotification;
@property(readonly, nonatomic, getter=isDestructiveAction) _Bool destructiveAction; // @synthesize destructiveAction=_destructiveAction;
@property(readonly, nonatomic) _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(readonly, nonatomic) id <NCNotificationActionRunner> actionRunner; // @synthesize actionRunner=_actionRunner;
@property(readonly, copy, nonatomic) NSDictionary *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) NSString *launchBundleID; // @synthesize launchBundleID=_launchBundleID;
@property(readonly, copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(readonly, nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic, getter=isSystemAction) _Bool systemAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithNotificationAction:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

