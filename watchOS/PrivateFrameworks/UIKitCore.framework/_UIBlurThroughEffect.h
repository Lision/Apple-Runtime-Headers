//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class _UICoreUIEffect;

@interface _UIBlurThroughEffect : UIVisualEffect
{
    int _style;
    _UICoreUIEffect *_reducedTransparencyEffect;
}

+ (id)_blurThroughWithStyle:(int)arg1;
- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(int)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(int)arg3;
- (_Bool)isEqual:(id)arg1;

@end

