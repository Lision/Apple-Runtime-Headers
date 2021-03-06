//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSRGBColorValueTransformer;

__attribute__((visibility("hidden")))
@interface NSRGBColorValueFormatter : NSFormatter
{
    long long _entryMode;
    NSNumberFormatter *_currentFormatter;
    NSRGBColorValueTransformer *_currentTransformer;
}

+ (id)formatterForEntryMode:(long long)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (id)_currentTransformer;
- (id)_currentFormatter;
@property(readonly) long long entryMode;
- (id)initWithEntryMode:(long long)arg1;
- (void)dealloc;

@end

