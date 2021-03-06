//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenSharing/SSFrameBufferView.h>

@interface SSFrameBufferAVConferenceView : SSFrameBufferView
{
    unsigned int _layerRotation;
    struct CGPoint _scrollPoint;
    struct CGRect _conferenceDimensions;
}

@property struct CGPoint scrollPoint; // @synthesize scrollPoint=_scrollPoint;
@property unsigned int layerRotation; // @synthesize layerRotation=_layerRotation;
@property struct CGRect conferenceDimensions; // @synthesize conferenceDimensions=_conferenceDimensions;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)setAVConferenceLayerRotation:(unsigned int)arg1;
- (struct SSPoint)frameBufferCoordinatesFromWindowCoordinates:(struct CGPoint)arg1;
- (struct SSPoint)frameBufferCoordinatesFromNSEvent:(id)arg1;
- (void)sendMouseButtonEventWithWindowCoordinates:(struct CGPoint)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 withClickCount:(long long)arg4;
- (void)sendMouseButtonEvent:(id)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (struct CGRect)conferenceFrame;
- (void)setUseCachedImage:(BOOL)arg1;
- (BOOL)useCachedImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

