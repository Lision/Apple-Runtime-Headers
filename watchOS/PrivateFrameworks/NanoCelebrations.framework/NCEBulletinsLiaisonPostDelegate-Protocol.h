//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoCelebrations/NSObject-Protocol.h>

@class NCEBulletinsLiaison, NSString;

@protocol NCEBulletinsLiaisonPostDelegate <NSObject>
- (_Bool)bulletinsLiaison:(NCEBulletinsLiaison *)arg1 isCelebrationPosted:(NSString *)arg2;
- (void)bulletinsLiaisonDidRequestDismissalForAllBulletins:(NCEBulletinsLiaison *)arg1;
- (void)bulletinsLiaison:(NCEBulletinsLiaison *)arg1 didRequestBulletinToBePostedForCelebrationName:(NSString *)arg2;
@end

