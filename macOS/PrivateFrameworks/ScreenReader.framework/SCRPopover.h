//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

#import <ScreenReader/SCRApplicationDirectChildProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCRPopover : SCRMapElement <SCRApplicationDirectChildProtocol>
{
}

- (BOOL)isPopover;
- (id)roleDescription;
- (void)setKeyboardChild:(id)arg1 force:(BOOL)arg2;
- (id)nameForGuide;
- (BOOL)showInGuide;
- (id)originatedFromElement;
- (id)_shortDescriptionForElement:(id)arg1;
- (void)_layoutDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

