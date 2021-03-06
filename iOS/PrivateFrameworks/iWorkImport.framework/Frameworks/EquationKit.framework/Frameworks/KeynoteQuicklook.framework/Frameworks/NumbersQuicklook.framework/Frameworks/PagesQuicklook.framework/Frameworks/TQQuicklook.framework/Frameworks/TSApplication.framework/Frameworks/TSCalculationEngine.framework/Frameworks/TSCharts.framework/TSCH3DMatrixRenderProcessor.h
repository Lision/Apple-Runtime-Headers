//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCharts/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor
{
    struct StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
    tmat4x4_3074befe mProjection;
    _Bool mTransformChanged;
    _Bool mProjectionChanged;
}

- (id).cxx_construct;
@property(readonly, nonatomic) _Bool projectionChanged; // @synthesize projectionChanged=mProjectionChanged;
@property(readonly, nonatomic) _Bool transformChanged; // @synthesize transformChanged=mTransformChanged;
- (void)projection:(tmat4x4_3074befe *)arg1;
- (void)popMatrix;
- (void)pushMatrix;
- (void)translate:(tvec3_17f03ce0 *)arg1;
- (void)scale:(tvec3_17f03ce0 *)arg1;
- (void)multiply:(tmat4x4_3074befe *)arg1;
- (void)replace:(tmat4x4_3074befe *)arg1;
- (void)copyTransformInto:(tmat4x4_3074befe *)arg1;
- (void)copyProjectionInto:(tmat4x4_3074befe *)arg1;
@property(readonly, nonatomic) const tmat4x4_3074befe *projection;
@property(readonly, nonatomic) const tmat4x4_3074befe *current;
- (id)normalizedViewAll;
- (void)resetChangeFlags;

@end

