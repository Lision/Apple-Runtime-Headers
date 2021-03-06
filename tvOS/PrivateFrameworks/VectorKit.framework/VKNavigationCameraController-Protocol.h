//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKCameraController-Protocol.h>
#import <VectorKit/VKPuckAnimatorDelegate-Protocol.h>

@class VKSceneConfiguration, VKScreenCanvas;
@protocol VKInteractiveMap;

@protocol VKNavigationCameraController <VKCameraController, VKPuckAnimatorDelegate>
@property(nonatomic) double zoomScale;
@property(nonatomic) VKSceneConfiguration *sceneConfiguration;
@property(nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas;
- (void)stop;
- (void)startWithPounce:(_Bool)arg1 startLocation:(CDStruct_c3b9c2ee)arg2 startCourse:(double)arg3 pounceCompletionHandler:(void (^)(_Bool))arg4;
@end

