//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/UITextFieldDelegate-Protocol.h>
#import <VideoSubscriberAccountUI/VSTwoFactorEntryViewController-Protocol.h>

@class NSArray, NSString, TVSUIDigitGroupView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UISystemInputViewController, UITextField, UIView, VSFontCenter, VSTwoFactorEntryViewModel, VSViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewController_tvOS : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate, VSTwoFactorEntryViewController>
{
    _Bool _cancellationAllowed;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSTwoFactorEntryViewModel *_viewModel;
    UIImageView *_logoView;
    UILabel *_titlelabel;
    UILabel *_descriptionLabel;
    UITextField *_twoFactorTextField;
    TVSUIDigitGroupView *_digitGroupView;
    UISystemInputViewController *_inputViewController;
    UIView *_inputView;
    NSArray *_buttons;
    UIButton *_doneButton;
    UIActivityIndicatorView *_activityIndicator;
    VSFontCenter *_fontCenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UISystemInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) TVSUIDigitGroupView *digitGroupView; // @synthesize digitGroupView=_digitGroupView;
@property(retain, nonatomic) UITextField *twoFactorTextField; // @synthesize twoFactorTextField=_twoFactorTextField;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(readonly, nonatomic) VSViewModel *viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setValidating:(_Bool)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)addSystemInputViewController;
- (id)_buttonBackgroundColor;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_enableAutomaticKeyboardPressDone;
- (_Bool)_disableAutomaticKeyboardUI;
- (void)templateButtonPressed:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)twoFactorCodeDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
@property(readonly) Class superclass;

@end

