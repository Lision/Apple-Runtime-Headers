//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIModernSwitchVisualElementCacheKey : NSObject <NSCopying>
{
    unsigned long long _mask;
    struct CGColor *_color;
}

- (void)dealloc;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMask:(unsigned long long)arg1 color:(struct CGColor *)arg2;

@end

