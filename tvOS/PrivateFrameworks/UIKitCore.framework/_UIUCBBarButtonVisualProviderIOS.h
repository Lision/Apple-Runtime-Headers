//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIButtonBarButtonVisualProvider.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider
{
    UIButton *_contentButton;
}

+ (id)_defaultTitleAttributes;
- (void).cxx_destruct;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (id)_defaultTitleAttributes;
- (id)_newButton;
- (id)contentView;
- (void)updateButton:(id)arg1 forEnabledState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;

@end

