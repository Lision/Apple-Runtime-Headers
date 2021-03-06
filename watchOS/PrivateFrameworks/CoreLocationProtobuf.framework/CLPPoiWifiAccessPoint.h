//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPPoiWifiAccessPoint : PBCodable <NSCopying>
{
    double _age;
    double _scanTimestamp;
    int _channel;
    NSString *_mac;
    int _rssi;
    struct {
        unsigned int age:1;
        unsigned int scanTimestamp:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) double age; // @synthesize age=_age;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasScanTimestamp;
@property(nonatomic) _Bool hasAge;

@end

