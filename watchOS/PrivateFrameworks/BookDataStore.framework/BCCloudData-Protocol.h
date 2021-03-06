//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BookDataStore/NSObject-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@protocol BCCloudData <NSObject>
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy, nonatomic) CKRecord *systemFields;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) _Bool deletedFlag;
- (NSString *)zoneName;
- (NSString *)identifier;
- (NSString *)recordType;
- (void)incrementEditGeneration;
@end

