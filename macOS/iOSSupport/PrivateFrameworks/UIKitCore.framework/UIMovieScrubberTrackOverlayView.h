//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView
{
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIImageView *_leftFillView;
    UIImageView *_rightFillView;
    unsigned int _editingHandle;
    unsigned int _editing:1;
    unsigned int _zoomed:1;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setEditingHandle:(int)arg1;
- (void)setIsZoomed:(BOOL)arg1;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setEndValue:(double)arg1;
- (void)setStartValue:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)_clampValueAndLayout;
- (void)animateFillFramesAway;
- (void)_updateRightFill;
- (void)_updateLeftFill;
- (id)initWithFrame:(struct CGRect)arg1;

@end

