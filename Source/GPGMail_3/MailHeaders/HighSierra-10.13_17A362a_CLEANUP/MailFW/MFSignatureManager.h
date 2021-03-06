//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MFSyncedSignaturesFile, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MFSignatureManager : NSObject
{
    NSMutableDictionary *_signatures;
    NSMutableArray *_accounts;
    NSMutableDictionary *_lastDefaultSignatures;
    BOOL _isDirty;
    MFSyncedSignaturesFile *_syncedFile;
}

+ (id)signatureContentsFileRelativePathWithUniqueID:(id)arg1;
+ (id)signaturesFileRelativePath;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)_signaturesFolderPath;
+ (id)allSignaturesAccount;
@property(readonly, nonatomic) MFSyncedSignaturesFile *syncedFile; // @synthesize syncedFile=_syncedFile;
@property(nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
//- (void).cxx_destruct;
- (void)configurePopUpButton:(id)arg1 forAccount:(id)arg2 defaultSignature:(id)arg3 selectionMethod:(long long)arg4 showAccount:(BOOL)arg5;
@property(nonatomic) BOOL placeSignatureAboveQuotedText;
- (void)unsetShowsComposeAccessoryView;
- (void)setShowsComposeAccessoryView:(BOOL)arg1;
- (BOOL)showComposeAccessoryView;
- (BOOL)showComposeAccessoryView:(char *)arg1;
- (id)activeSignatureWithId:(id)arg1;
- (id)activeSignatureWithName:(id)arg1;
- (void)setSignatureSelectionMethod:(long long)arg1 forAccount:(id)arg2;
- (long long)signatureSelectionMethodForAccount:(id)arg1;
- (id)defaultSignatureForAccount:(id)arg1;
- (void)setDefaultSignature:(id)arg1 forAccount:(id)arg2;
- (void)_setDefaultSignatureId:(id)arg1 forAccountId:(id)arg2;
- (void)_signatureManagerChanged:(id)arg1;
- (void)_signatureChanged:(id)arg1;
- (id)_accountsMap;
- (id)_serializedSignatures;
- (void)saveChangesToDisk;
- (void)_signatureNameChanged:(id)arg1;
- (void)addSignature:(id)arg1;
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertSignature:(id)arg1 atIndex:(unsigned long long)arg2 forAccount:(id)arg3;
- (void)removeSignatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;
- (void)_removeSignature:(id)arg1;
- (void)removeSignatureAtIndex:(unsigned long long)arg1;
- (id)signatureAtIndex:(unsigned long long)arg1;
- (id)signatureAtIndex:(unsigned long long)arg1 forAccount:(id)arg2;
- (id)signaturesForAccount:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSignatures;
- (id)_fixAccountIdsInPlist:(id)arg1;
- (void)loadSignaturesFromDisk;
- (void)_loadSignaturesFromDiskIfNeeded;
@property(readonly, copy, nonatomic) NSDictionary *signatures;
- (void)_loadAllSignatures:(id)arg1 forAccounts:(id)arg2;
- (BOOL)updateAccountList;
- (void)_loadAccountsIfNeeded;
@property(readonly, copy, nonatomic) NSArray *signatureAccounts;
- (void)_loadLastDefaultSignatures;
- (void)dealloc;
- (id)init;

@end

