//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXEditorialLayoutMetrics, PXMagazineLayoutTileMaker;

@interface PXEditorialLayoutGenerator : PXLayoutGenerator
{
    BOOL _isPrepared;
    PXMagazineLayoutTileMaker *_tileMaker;
    struct CGSize _actualSize;
    struct _PXLayoutGeometry *_geometries;
    struct CGRect *_rects;
    unsigned long long _geometriesCount;
    NSIndexSet *_geometrySet;
}

- (void).cxx_destruct;
- (struct _PXLayoutGeometry)_geometryFromFrame:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (void)_prepareIfNeeded;
- (void)_prepareBuffersForCount:(unsigned long long)arg1;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (void)_getHeaderGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)_getContentGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)invalidate;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (id)geometryKinds;
- (void)dealloc;
- (id)initWithMetrics:(id)arg1;

// Remaining properties
@property(copy, nonatomic) PXEditorialLayoutMetrics *metrics; // @dynamic metrics;

@end

