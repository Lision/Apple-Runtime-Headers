//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3StatementCacheList, NSMutableDictionary;

@interface ML3DatabaseStatementCache : NSObject
{
    NSMutableDictionary *_statementsDictionary;
    ML3StatementCacheList *_nodeList;
    unsigned int _cacheSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int cacheSize; // @synthesize cacheSize=_cacheSize;
- (void)clearCache;
- (void)cacheStatement:(id)arg1;
- (id)allStatements;
- (id)cachedStatementForSQL:(id)arg1;
- (void)dealloc;
- (id)initWithCacheSize:(unsigned int)arg1;

@end

