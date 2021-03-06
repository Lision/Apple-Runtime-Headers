//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface RBProcessIndex : NSObject <NSFastEnumeration>
{
    struct os_unfair_lock_s _lock;
    unsigned int _capacity;
    NSMutableOrderedSet *_processes;
    NSMutableDictionary *_processByIdentity;
    NSMutableDictionary *_processByInstance;
    NSMutableDictionary *_processByIdentifier;
}

+ (id)indexWithCapacity:(unsigned int)arg1;
+ (id)index;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)_lock_removeProcess:(id)arg1;
- (void)removeAllObjects;
- (id)processForIdentity:(id)arg1;
- (id)processForInstance:(id)arg1;
- (id)processForIdentifier:(id)arg1;
- (_Bool)containsIdentity:(id)arg1;
- (_Bool)containsIdentifier:(id)arg1;
- (_Bool)containsInstance:(id)arg1;
- (_Bool)containsProcess:(id)arg1;
- (_Bool)removeProcess:(id)arg1;
- (_Bool)addProcess:(id)arg1;
- (id)allProcesses;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end

