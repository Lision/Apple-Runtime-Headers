//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MPSHeapProvider, MTLCommandBuffer;

@interface MPSCommandBufferImageCache : NSObject
{
    // Error parsing type: ^{MPSDevice=^^?^{MPSDevice}@^{MPSDeviceFreeList}{atomic<MTLLibraryNode *>={__cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> >=A^{MTLLibraryNode}}}[2[2[2{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}]]][563{MPSPixelCapabilities=b1b1b1b1b1b2b1b8}]{atomic<void *>={__cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> >=A^v}}Ii{MPSGPUInfo=b8b8b8b16b4b20}[107{atomic<MPSLibrary *>={__cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> >=A^{MPSLibrary}}}]}, name: _device
    id <MTLCommandBuffer> _cmdBuffer;
    long long _debugMode;
    struct HeapNode *_freeList[65];
    struct CacheFrame *_frameList;
    struct ResourceNode *_retainedResources;
    struct MPSAutoCache *_userCacheFrame;
    unsigned long long _minimumBin;
    unsigned long long _batchSize;
    _Bool _needsRetain;
    unsigned long long _totalAllocationBytes;
    unsigned long long _cacheDelay;
    // Error parsing type: {atomic<long>="__a_"{__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >="__a_value"Aq}}, name: _commandBufferCount
    id <MPSHeapProvider> _heapProvider;
    _Bool _isMPSCommandBuffer;
}

@property(retain, nonatomic) id <MPSHeapProvider> heapProvider; // @synthesize heapProvider=_heapProvider;
@property(nonatomic) unsigned long long batchSizeHint; // @synthesize batchSizeHint=_batchSize;
@property(readonly, nonatomic) id <MTLCommandBuffer> commandBuffer; // @synthesize commandBuffer=_cmdBuffer;
- (id)debugDescription;
- (void)releaseHeapBlock:(id)arg1 heapProvider:(id)arg2;
- (id)newHeapBlock:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1;
- (void)addHandlerToCommandBuffer:(id)arg1;

@end

