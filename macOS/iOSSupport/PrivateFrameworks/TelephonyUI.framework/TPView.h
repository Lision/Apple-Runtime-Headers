//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TPView : UIView
{
    BOOL _accessiblityConstraintsEnabled;
    BOOL _constraintsLoaded;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded; // @synthesize constraintsLoaded=_constraintsLoaded;
@property(nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled; // @synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFonts;
- (void)updateConstraintsConstants;
- (void)updateConstraints;
- (void)unloadConstraints;
- (void)loadConstraints;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

