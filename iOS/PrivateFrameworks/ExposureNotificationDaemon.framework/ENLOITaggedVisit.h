//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, RTLocationOfInterestVisit;

__attribute__((visibility("hidden")))
@interface ENLOITaggedVisit : NSObject
{
    NSUUID *_loiIdentifier;
    RTLocationOfInterestVisit *_visit;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RTLocationOfInterestVisit *visit; // @synthesize visit=_visit;
@property(readonly, copy, nonatomic) NSUUID *loiIdentifier; // @synthesize loiIdentifier=_loiIdentifier;
- (id)initWithIdentifier:(id)arg1 visit:(id)arg2;

@end

