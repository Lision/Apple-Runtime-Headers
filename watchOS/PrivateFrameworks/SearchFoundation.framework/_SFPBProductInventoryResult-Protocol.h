//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBProductInventory;

@protocol _SFPBProductInventoryResult <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *availabilitys;
@property(copy, nonatomic) NSString *productIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBProductInventory *)availabilityAtIndex:(unsigned int)arg1;
- (unsigned int)availabilityCount;
- (void)addAvailability:(_SFPBProductInventory *)arg1;
- (void)clearAvailability;
@end

