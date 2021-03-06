//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/MDLMeshBuffer-Protocol.h>

@class NSMutableData, NSString;
@protocol MDLMeshBufferAllocator, MDLMeshBufferZone;

__attribute__((visibility("hidden")))
@interface CUIMeshBuffer : NSObject <MDLMeshBuffer>
{
    NSMutableData *_data;
    unsigned int _type;
}

- (id)map;
- (void)fillData:(id)arg1 offset:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, retain, nonatomic) id <MDLMeshBufferZone> zone;
@property(readonly, retain, nonatomic) id <MDLMeshBufferAllocator> allocator;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned int length;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 andLength:(unsigned int)arg2 ofType:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

