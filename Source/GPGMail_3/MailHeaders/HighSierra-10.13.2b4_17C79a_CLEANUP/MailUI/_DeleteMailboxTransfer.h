//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MessageDeletionTransfer-Protocol.h"

@class MCMonitoredInvocation, NSString;

@interface _DeleteMailboxTransfer : NSObject <MessageDeletionTransfer>
{
    MCMonitoredInvocation *_invocation;
}

@property(retain, nonatomic) MCMonitoredInvocation *invocation; // @synthesize invocation=_invocation;
//- (void).cxx_destruct;
- (void)beginTransfer;
@property(readonly, nonatomic) BOOL canBeginTransfer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
