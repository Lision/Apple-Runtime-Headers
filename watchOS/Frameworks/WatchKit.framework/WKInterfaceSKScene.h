//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

#import <WatchKit/WKInterfaceObjectDynamicCreatable-Protocol.h>

@class NSString, SKScene, SKView;

@interface WKInterfaceSKScene : WKInterfaceObject <WKInterfaceObjectDynamicCreatable>
{
    SKView *_skView;
    _Bool wasPlayingWhenEnteringBackground;
    _Bool wasPlayingWhenHiddenByModalPresentation;
    _Bool _unpauseRequestedFromBackground;
    _Bool _isInForeground;
}

- (void).cxx_destruct;
- (void)renderCurrentFrame;
- (void)didAppearAfterModalDismissal;
- (void)didDisappearAfterModalPresentation;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (id)interfaceDescriptionForDynamicCreation;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect)arg2;
- (id)textureFromNode:(id)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (float)preferredFrameRate;
- (void)setPreferredFrameRate:(float)arg1;
@property(nonatomic) int preferredFramesPerSecond;
@property(readonly, nonatomic) SKScene *scene;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)_setPaused:(_Bool)arg1;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (void)didRegisterWithRemoteInterface;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(int)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

