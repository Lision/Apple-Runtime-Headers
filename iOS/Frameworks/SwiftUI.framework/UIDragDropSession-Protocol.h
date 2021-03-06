//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SwiftUI/NSObject-Protocol.h>

@class NSArray, UIView;

@protocol UIDragDropSession <NSObject>
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (_Bool)isRestrictedToDraggingApplication;
@property(nonatomic, readonly) _Bool allowsMoveOperation;
- (struct CGPoint)locationInView:(UIView *)arg1;
@property(nonatomic, readonly) NSArray *items;

// Remaining properties
@property(nonatomic, readonly) _Bool restrictedToDraggingApplication;
@end

