//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDCloudZoneInformationModel : HMDBackingStoreModelObject
{
    _Bool _requiresHomeManagerUpdate;
}

+ (id)properties;
@property(nonatomic) _Bool requiresHomeManagerUpdate; // @synthesize requiresHomeManagerUpdate=_requiresHomeManagerUpdate;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSString *ownerName; // @dynamic ownerName;

@end

