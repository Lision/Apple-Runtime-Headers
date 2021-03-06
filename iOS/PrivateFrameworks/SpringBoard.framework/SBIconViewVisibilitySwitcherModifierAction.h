//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSSet, SBAppLayout, SBFFluidBehaviorSettings;

@interface SBIconViewVisibilitySwitcherModifierAction : SBSwitcherModifierAction
{
    _Bool _visible;
    SBAppLayout *_appLayout;
    SBFFluidBehaviorSettings *_animationSettings;
    NSSet *_excludedIconLocations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) NSSet *excludedIconLocations; // @synthesize excludedIconLocations=_excludedIconLocations;
@property(readonly, nonatomic) SBFFluidBehaviorSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 visible:(_Bool)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4;
- (long long)type;

@end

