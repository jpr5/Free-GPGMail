//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAPPersistenceTask.h>

#import <IMAPGetServerMessagesOperationDelegate-Protocol.h>
#import <IMAPPersistFlagChangesOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMAPPersistFlagChangesTask : IMAPPersistenceTask <IMAPGetServerMessagesOperationDelegate, IMAPPersistFlagChangesOperationDelegate>
{
    NSMutableDictionary *_flagsByUIDs;
    NSMutableDictionary *_flagChangesByServerMessage;
}

//- (void).cxx_destruct;
- (void)persistFlagChangesOperation:(id)arg1 persistedFlagChangesForRemoteIDs:(id)arg2;
- (void)getServerMessagesOperation:(id)arg1 gotServerMessages:(id)arg2 uidsNotFound:(id)arg3;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)initWithDataSource:(id)arg1;
- (id)initWithFlagsByUIDs:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

