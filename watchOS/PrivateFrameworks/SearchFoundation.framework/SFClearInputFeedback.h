//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@interface SFClearInputFeedback : SFFeedback
{
    unsigned int _triggerEvent;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned int)arg1;

@end

