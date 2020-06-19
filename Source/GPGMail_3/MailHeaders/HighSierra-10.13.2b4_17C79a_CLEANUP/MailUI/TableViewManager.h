//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MailTableViewDelegate-Protocol.h"
#import "MessageListContentControllerDelegate-Protocol.h"
//#import "NSPasteboardItemDataProvider-Protocol.h"
//#import "NSServicesMenuRequestor-Protocol.h"
//#import "NSTableViewDataSource-Protocol.h"
#import "SelectionOwner-Protocol.h"

@class ConversationPrefetcher, MCMessage, MFGlobalBodyFetchContext, MFMessageThread, MailTableView, MessageListContentController, MessageSelection, NSArray, NSCache, NSDictionary, NSFont, NSMapTable, NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, NSTableColumn, NSTableHeaderView, TableViewScrollState;

@interface TableViewManager : NSObject <MessageListContentControllerDelegate, NSPasteboardItemDataProvider, NSServicesMenuRequestor, MailTableViewDelegate, NSTableViewDataSource, SelectionOwner>
{
    MessageListContentController *_messageListContentController;
    NSMutableArray *_rawSelection;
    NSMutableSet *_mouseTrackers;
    NSFont *_font;
    NSMutableAttributedString *_truncatedString;
    NSMutableDictionary *_truncatedStringAttributes;
    NSMutableDictionary *_truncatedParagraphStyle;
    NSMutableSet *_selectedConversationIDs;
    id _snippetLock;
    NSMutableSet *_messagesBeingFetched;
    unsigned long long _lastRequestedRow;
    NSMapTable *_messageProxyObjects;
    BOOL _isRichMessageList;
    BOOL _isFocused;
    BOOL _sortColumnOrderAscending;
    BOOL _mailboxSortColumnOrderAscending;
    BOOL _isInThreadedMode;
    BOOL _includeDeleted;
    BOOL _awaitingInitialScrollPosition;
    BOOL _scrollFoundSelectionIntoView;
    BOOL _awaitingInitialSelection;
    BOOL _clearSelectionOnUpdate;
    BOOL _threadOpeningIsInProgress;
    BOOL _threadClosingIsInProgress;
    BOOL _dontUpdateTrackingRects;
    BOOL _useBoldFontForUnreadMessages;
    BOOL _clearingSearch;
    BOOL _animatingRowSelection;
    BOOL _needsColumnSetup;
    BOOL _keepSelectionWhenTogglingThread;
    unsigned char _suspendChangesToScrollingAndSelection;
    BOOL _animatingThreadOpening;
    BOOL _animatingThreadClosing;
    BOOL _selectingMessagesForTransfer;
    BOOL _didAwake;
    BOOL _isShowingToCc;
    BOOL _beganAnimationGrouping;
    MailTableView *_tableView;
    id /*<TableViewManagerDelegate>*/ _delegate;
    NSArray *_tableColumns;
    NSMapTable *_storeStateTable;
    NSDictionary *_messageIDsToSelectWhenOpened;
    NSArray *_threadIDsToOpenWhenOpened;
    long long _sortColumnOrder;
    long long _mailboxSortColumnOrder;
    long long _initialScrollType;
    TableViewScrollState *_savedScrollState;
    NSDictionary *_initialMailboxViewingState;
    NSFont *_boldFont;
    long long _searchTarget;
    long long _searchField;
    id /*<SortTitleSetter>*/ _sortTitleSetter;
    NSCache *_snippetsForMessage;
    ConversationPrefetcher *_conversationPrefetcher;
    NSArray *_expandedSelection;
    NSArray *_expandedSelectionForTransfer;
    long long _leftmostTextColumn;
    long long _colorHighlightLeftEdge;
    long long _colorHighlightWidth;
    MFMessageThread *_threadBeingClosed;
    MFMessageThread *_threadBeingOpened;
    long long _lastMouseDownInUnreadColumnEventNumber;
    long long _numberOfSelectedRowsBeforeTogglingThread;
    unsigned long long _numberOfSnippetLines;
    NSTableColumn *_richTableColumn;
    NSTableHeaderView *_tableHeaderView;
    long long _previouslyViewedMessageRow;
    long long _currentViewedMessageRow;
    long long _nextMessageDirection;
    MFGlobalBodyFetchContext *_bodyFetchContext;
    NSArray *_messageListItemsFromMouseDown;
    NSArray *_draggedMessageListItems;
    NSNumber *_sortViewHeight;
    NSNumber *_topHitsHeaderViewHeight;
    struct _NSRange _messageRangeFromMouseDown;
    struct CGPoint _lastMouseDownInUnreadColumnPoint;
    struct CGPoint _currentMouseLocationInWindow;
}

+ (id)keyPathsForValuesAffectingFilterPredicate;
+ (id)_getThreadBackgroundColorForThread:(id)arg1;
+ (id)_getDarkerThreadBackgroundColorForThread:(id)arg1;
+ (id)specialImageForMessageCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2;
+ (BOOL)isColumnValid:(long long)arg1;
+ (void)initialize;
+ (id)log;
@property(retain, nonatomic) NSNumber *topHitsHeaderViewHeight; // @synthesize topHitsHeaderViewHeight=_topHitsHeaderViewHeight;
@property(retain, nonatomic) NSNumber *sortViewHeight; // @synthesize sortViewHeight=_sortViewHeight;
@property(copy, nonatomic) NSArray *draggedMessageListItems; // @synthesize draggedMessageListItems=_draggedMessageListItems;
@property(copy, nonatomic) NSArray *messageListItemsFromMouseDown; // @synthesize messageListItemsFromMouseDown=_messageListItemsFromMouseDown;
@property(nonatomic) BOOL beganAnimationGrouping; // @synthesize beganAnimationGrouping=_beganAnimationGrouping;
@property(readonly, nonatomic) MFGlobalBodyFetchContext *bodyFetchContext; // @synthesize bodyFetchContext=_bodyFetchContext;
@property(nonatomic) long long nextMessageDirection; // @synthesize nextMessageDirection=_nextMessageDirection;
@property(nonatomic) long long currentViewedMessageRow; // @synthesize currentViewedMessageRow=_currentViewedMessageRow;
@property(nonatomic) long long previouslyViewedMessageRow; // @synthesize previouslyViewedMessageRow=_previouslyViewedMessageRow;
@property(retain, nonatomic) NSTableHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) NSTableColumn *richTableColumn; // @synthesize richTableColumn=_richTableColumn;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL isShowingToCc; // @synthesize isShowingToCc=_isShowingToCc;
@property(nonatomic) BOOL didAwake; // @synthesize didAwake=_didAwake;
@property(nonatomic) long long numberOfSelectedRowsBeforeTogglingThread; // @synthesize numberOfSelectedRowsBeforeTogglingThread=_numberOfSelectedRowsBeforeTogglingThread;
@property(nonatomic) struct CGPoint currentMouseLocationInWindow; // @synthesize currentMouseLocationInWindow=_currentMouseLocationInWindow;
@property(nonatomic) long long lastMouseDownInUnreadColumnEventNumber; // @synthesize lastMouseDownInUnreadColumnEventNumber=_lastMouseDownInUnreadColumnEventNumber;
@property(nonatomic) struct CGPoint lastMouseDownInUnreadColumnPoint; // @synthesize lastMouseDownInUnreadColumnPoint=_lastMouseDownInUnreadColumnPoint;
@property(nonatomic) __weak MFMessageThread *threadBeingOpened; // @synthesize threadBeingOpened=_threadBeingOpened;
@property(nonatomic) __weak MFMessageThread *threadBeingClosed; // @synthesize threadBeingClosed=_threadBeingClosed;
@property(nonatomic) long long colorHighlightWidth; // @synthesize colorHighlightWidth=_colorHighlightWidth;
@property(nonatomic) long long colorHighlightLeftEdge; // @synthesize colorHighlightLeftEdge=_colorHighlightLeftEdge;
@property(nonatomic) long long leftmostTextColumn; // @synthesize leftmostTextColumn=_leftmostTextColumn;
@property(nonatomic) struct _NSRange messageRangeFromMouseDown; // @synthesize messageRangeFromMouseDown=_messageRangeFromMouseDown;
@property(copy, nonatomic) NSArray *expandedSelectionForTransfer; // @synthesize expandedSelectionForTransfer=_expandedSelectionForTransfer;
@property(copy, nonatomic) NSArray *expandedSelection; // @synthesize expandedSelection=_expandedSelection;
@property(retain, nonatomic) ConversationPrefetcher *conversationPrefetcher; // @synthesize conversationPrefetcher=_conversationPrefetcher;
@property(readonly, nonatomic) NSCache *snippetsForMessage; // @synthesize snippetsForMessage=_snippetsForMessage;
@property(nonatomic) BOOL selectingMessagesForTransfer; // @synthesize selectingMessagesForTransfer=_selectingMessagesForTransfer;
@property(readonly, nonatomic) BOOL animatingThreadClosing; // @synthesize animatingThreadClosing=_animatingThreadClosing;
@property(readonly, nonatomic) BOOL animatingThreadOpening; // @synthesize animatingThreadOpening=_animatingThreadOpening;
@property(nonatomic) __weak id /*<SortTitleSetter>*/ sortTitleSetter; // @synthesize sortTitleSetter=_sortTitleSetter;
@property(nonatomic) long long searchField; // @synthesize searchField=_searchField;
@property(nonatomic) long long searchTarget; // @synthesize searchTarget=_searchTarget;
@property(retain, nonatomic) NSFont *boldFont; // @synthesize boldFont=_boldFont;
@property(nonatomic) unsigned char suspendChangesToScrollingAndSelection; // @synthesize suspendChangesToScrollingAndSelection=_suspendChangesToScrollingAndSelection;
@property(nonatomic) BOOL keepSelectionWhenTogglingThread; // @synthesize keepSelectionWhenTogglingThread=_keepSelectionWhenTogglingThread;
@property(nonatomic) BOOL needsColumnSetup; // @synthesize needsColumnSetup=_needsColumnSetup;
@property(nonatomic) BOOL animatingRowSelection; // @synthesize animatingRowSelection=_animatingRowSelection;
@property(nonatomic) BOOL clearingSearch; // @synthesize clearingSearch=_clearingSearch;
@property(nonatomic) BOOL useBoldFontForUnreadMessages; // @synthesize useBoldFontForUnreadMessages=_useBoldFontForUnreadMessages;
@property(nonatomic) BOOL dontUpdateTrackingRects; // @synthesize dontUpdateTrackingRects=_dontUpdateTrackingRects;
@property(nonatomic) BOOL threadClosingIsInProgress; // @synthesize threadClosingIsInProgress=_threadClosingIsInProgress;
@property(nonatomic) BOOL threadOpeningIsInProgress; // @synthesize threadOpeningIsInProgress=_threadOpeningIsInProgress;
@property(nonatomic) BOOL clearSelectionOnUpdate; // @synthesize clearSelectionOnUpdate=_clearSelectionOnUpdate;
@property(nonatomic) BOOL awaitingInitialSelection; // @synthesize awaitingInitialSelection=_awaitingInitialSelection;
@property(copy, nonatomic) NSDictionary *initialMailboxViewingState; // @synthesize initialMailboxViewingState=_initialMailboxViewingState;
@property(retain, nonatomic) TableViewScrollState *savedScrollState; // @synthesize savedScrollState=_savedScrollState;
@property(nonatomic) BOOL scrollFoundSelectionIntoView; // @synthesize scrollFoundSelectionIntoView=_scrollFoundSelectionIntoView;
@property(nonatomic) long long initialScrollType; // @synthesize initialScrollType=_initialScrollType;
@property(nonatomic) BOOL awaitingInitialScrollPosition; // @synthesize awaitingInitialScrollPosition=_awaitingInitialScrollPosition;
@property(nonatomic) long long mailboxSortColumnOrder; // @synthesize mailboxSortColumnOrder=_mailboxSortColumnOrder;
@property(nonatomic) long long sortColumnOrder; // @synthesize sortColumnOrder=_sortColumnOrder;
@property(nonatomic) BOOL includeDeleted; // @synthesize includeDeleted=_includeDeleted;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(nonatomic) BOOL mailboxSortColumnOrderAscending; // @synthesize mailboxSortColumnOrderAscending=_mailboxSortColumnOrderAscending;
@property(nonatomic) BOOL sortColumnOrderAscending; // @synthesize sortColumnOrderAscending=_sortColumnOrderAscending;
@property(nonatomic) BOOL isFocused; // @synthesize isFocused=_isFocused;
@property(copy, nonatomic) NSArray *threadIDsToOpenWhenOpened; // @synthesize threadIDsToOpenWhenOpened=_threadIDsToOpenWhenOpened;
@property(copy, nonatomic) NSDictionary *messageIDsToSelectWhenOpened; // @synthesize messageIDsToSelectWhenOpened=_messageIDsToSelectWhenOpened;
@property(retain, nonatomic) NSMapTable *storeStateTable; // @synthesize storeStateTable=_storeStateTable;
@property(copy, nonatomic) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(nonatomic) __weak id /*<TableViewManagerDelegate>*/ delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MailTableView *tableView; // @synthesize tableView=_tableView;
//- (void).cxx_destruct;
- (id)_messageThreadForRow:(long long)arg1;
- (id)_messageForRow:(long long)arg1;
- (id)_messageListItemForRow:(long long)arg1;
- (void)recordMessageSelectionDuringSearch;
- (void)mailTableViewDidMoveToWindow:(id)arg1;
- (void)mailTableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)_updateTrackingRects;
- (void)clearTrackingRects;
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (void)setIsSortedAscending:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isSortedAscending;
- (void)setSortColumn:(long long)arg1 ascending:(BOOL)arg2;
- (id)sortByStringForColumn:(long long)arg1;
@property(readonly, nonatomic) long long sortColumn;
- (BOOL)isSortedByDateReceived;
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 filterPredicate:(id)arg5;
- (void)_updateInitialViewingState;
- (void)clearSearch;
- (void)_updateSearchDelegate;
- (void)_setupColumns;
- (void)_animateRowSelection:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (long long)countOfTableViewRowsForMessageListContentController:(id)arg1;
- (BOOL)messageListContentController:(id)arg1 canIncludeItemsOfType:(long long)arg2;
- (void)messageListContentControllerDidChangeSort:(id)arg1;
- (void)messageListContentControllerDidUpdateConversations:(id)arg1;
- (void)messageListContentControllerDidFinishLoading:(id)arg1;
- (void)messageListContentControllerDidProcessUpdates:(id)arg1;
- (void)messageListContentController:(id)arg1 refreshedObjects:(id)arg2;
- (void)messageListContentController:(id)arg1 foundPinnedIndex:(long long)arg2 withOffset:(double)arg3;
- (void)messageListContentController:(id)arg1 foundSelectionIndexes:(id)arg2 shouldAnimate:(BOOL)arg3;
- (void)messageListContentControllerNeedsReload:(id)arg1;
- (void)messageListContentController:(id)arg1 didApplyChanges:(id)arg2;
- (void)messageListContentController:(id)arg1 willApplyChanges:(id)arg2;
- (void)messageListContentControllerWillProcessUpdates:(id)arg1;
- (void)reloadMailboxes:(id)arg1 messageFilterPredicate:(id)arg2;
- (void)setMailboxes:(id)arg1 messageFilterPredicate:(id)arg2 isSettingUpUI:(BOOL)arg3;
- (void)_restoreScrollState:(id)arg1;
- (id)_currentScrollStatePreferringSelection:(BOOL)arg1;
- (BOOL)_debugThreadAnimation;
- (void)hideDeletions;
- (void)showDeletions;
- (id)messageToSelectIfEntireSelectionRemoved:(id)arg1;
- (void)_recordSelectionHistoryForRow:(long long)arg1;
- (void)_resetNextMessageTracking;
- (BOOL)_goUpInsteadOfDown;
- (long long)_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3;
@property(retain, nonatomic) MessageListContentController *messageListContentController;
- (id)accesibilityUILinkedViewsForMailTableView:(id)arg1;
- (id)mailTableView:(id)arg1 rangesForBackgroundShadingInRange:(struct _NSRange)arg2 shadingColors:(id *)arg3 leftColumnColors:(id *)arg4;
- (BOOL)shouldTrackMouse:(id)arg1;
- (void)mailTableView:(id)arg1 gotEvent:(id)arg2;
- (void)_setButtonCellNeedsDisplay;
- (void)_callWillDisplayCellForClickedCell;
- (struct CGPoint)_mouseLocationInWindow;
- (struct CGRect)frameOfClickedCell;
- (void)mailTableView:(id)arg1 willDrawRowsInRange:(struct _NSRange)arg2;
- (id)mailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)mailTableView:(id)arg1 didMouseDown:(id)arg2;
- (void)mailTableView:(id)arg1 willMouseDown:(id)arg2;
- (void)mailTableViewDragWillEnd:(id)arg1 operation:(unsigned long long)arg2;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (id)messagesToTransferIsMove:(BOOL)arg1;
- (id)_filterAndExpandMessagesForTransfer:(id)arg1;
- (void)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3;
- (BOOL)shouldDeleteMessagesGivenCurrentState:(id)arg1;
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3 selectingNextMessage:(BOOL)arg4 withAnimationOptions:(unsigned long long)arg5;
- (void)_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2;
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;
@property(readonly, nonatomic) id /*<MCMessageDataSource>*/ messageStore;
@property(readonly, nonatomic) MCMessage *currentDisplayedMessage;
- (id)parentThreadForChildMessage:(id)arg1;
@property(readonly, nonatomic) MCMessage *messageThatUserIsProbablyReading;
//- (void)selectMessage:(id)arg1 options:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)selectMessages:(id)arg1;
- (struct CGRect)_tableViewVisibleRectWithoutUnderscroll;
//- (void)_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2 options:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)actionMessagesForOperation:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;
- (void)deleteKeyPressed;
- (long long)_photoSizeForNumberOfSnippetLines:(unsigned long long)arg1;
- (void)_snippetsUpdated:(id)arg1;
- (void)_updateRowsWithNewSnippets:(id)arg1;
- (void)_updateSnippetsForMessage:(id)arg1 ignoreExpected:(BOOL)arg2;
- (void)resetSnippetCache;
- (id)_messagesNeedingSnippetsAroundRow:(unsigned long long)arg1 refreshProxies:(BOOL)arg2;
- (void)_performSnippetFetching;
- (void)_cacheSnippetsAroundRow:(unsigned long long)arg1 refreshProxies:(BOOL)arg2;
- (id)_snippetFetchQueue;
- (id)_snippetForMessage:(id)arg1;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)mailTableView:(id)arg1 validRequestorForSendType:(id)arg2 returnType:(id)arg3;
- (void)_doubleClickedMessage:(id)arg1;
- (id)mailTableViewTopLineColor:(id)arg1;
- (long long)mailTableView:(id)arg1 highlightStyleForRow:(long long)arg2 inRect:(struct CGRect *)arg3 color:(id *)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_resetObjectValueForCellView:(id)arg1;
- (BOOL)_shouldShowMailboxNames;
- (void)_prepareCell:(id)arg1 withMessage:(id)arg2;
- (id)_prepareProxyForMessage:(id)arg1 selected:(BOOL)arg2 createIfNeeded:(BOOL)arg3 cacheSnippet:(char *)arg4;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)_archiveActionColor;
- (id)_deleteActionForMessageCount:(unsigned long long)arg1;
- (id)_unreadActionIsRead:(BOOL)arg1 isChild:(BOOL)arg2;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)_setupRowView:(id)arg1 atIndex:(long long)arg2;
- (void)_setupRowView:(id)arg1 messageListItem:(id)arg2 atIndex:(long long)arg3;
- (void)_setupRowViewAtRow:(long long)arg1 fetchingSnippet:(BOOL)arg2;
- (void)tableViewColumnDidResize:(id)arg1;
- (void)tableViewColumnDidMove:(id)arg1;
- (void)mailTableViewDidEndLiveResize:(id)arg1;
- (void)mailTableViewWillStartLiveResize:(id)arg1;
- (void)tableViewFrameChangedDuringLiveResize:(id)arg1;
- (void)tableView:(id)arg1 didDragTableColumn:(id)arg2;
- (void)updateColorHighlightEdges;
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_truncatedAttributedStringForString:(id)arg1 message:(id)arg2 row:(long long)arg3 shouldIndent:(BOOL)arg4;
- (id)_colorForMessage:(id)arg1 inRow:(long long)arg2 withCell:(id)arg3;
- (id)_messageSelectionColor;
- (id)_attributesForTruncatedParagraphStyle;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(readonly, copy, nonatomic) NSString *selectionStateLog;
- (void)_datesNeedRedisplay:(id)arg1;
- (void)mailTableViewDidResignFirstResponder:(id)arg1;
- (void)mailTableViewDidBecomeFirstResponder:(id)arg1;
- (void)_redisplayRowsAboveSelected;
- (void)_handleSelectionChangeFromNotification:(BOOL)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)_normalizedSelection:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3;
- (void)_updateViewingPaneToSelection;
- (id)_messageSelectionWithDataForPrinting:(BOOL)arg1;
@property(readonly, nonatomic) MessageSelection *messageSelectionForPrinting;
@property(readonly, nonatomic) MessageSelection *messageSelection;
- (void)removeAllMouseTrackers;
- (void)addMouseTrackersObject:(id)arg1;
@property(copy, nonatomic) NSSet *mouseTrackers;
- (id)_openThreadIdentifiers;
- (void)_rawSelectionIdentifiersForThreads:(id *)arg1 identifiersForMessages:(id *)arg2;
- (id)_mailboxViewingStatePreferringSelection:(BOOL)arg1;
- (void)removeAllRawSelection;
- (void)addRawSelectionObject:(id)arg1;
- (void)replaceObjectInRawSelectionAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromRawSelectionAtIndex:(unsigned long long)arg1;
- (id)objectInRawSelectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long countOfRawSelection;
@property(retain, nonatomic) NSArray *rawSelection;
- (void)_updateSelectedThreadList;
- (void)_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2;
- (BOOL)_isMessageInSelectedThread:(id)arg1;
- (long long)mailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2;
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;
@property(readonly, nonatomic) BOOL isSelectionVisible;
- (void)showSelectionAndCenter:(BOOL)arg1;
- (void)selectFirstReplyToMessage;
- (void)selectParentOfMessage;
- (void)selectPreviousMessage:(BOOL)arg1;
- (void)selectNextMessage:(BOOL)arg1;
@property(readonly, nonatomic) BOOL nextMessageIsBelow;
- (BOOL)openSelectedThread;
- (void)stepOutOfSelectedThread;
- (void)stepIntoSelectedThread;
- (void)selectNextMessageMovingUpward:(BOOL)arg1;
- (void)selectNextMessageMovingDownward:(BOOL)arg1;
- (unsigned long long)_modifierFlagsForKeyboardNavigation;
- (BOOL)selectionIsExactlyOneOpenThread;
@property(readonly, nonatomic) BOOL canSelectNextReplyToParent;
@property(readonly, nonatomic) BOOL canSelectFirstReplyToMessage;
@property(readonly, nonatomic) BOOL canSelectParentOfMessage;
- (long long)_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 downward:(BOOL)arg3;
- (void)toggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2;
- (void)toggleThread:(id)arg1;
- (void)unhideMessages:(id)arg1;
//- (BOOL)hideMessages:(id)arg1 selectingNextMessage:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)closeAllThreads;
- (void)openAllThreads;
- (void)closeThread:(id)arg1 row:(long long)arg2 selectThread:(BOOL)arg3;
- (void)openThread:(id)arg1 row:(long long)arg2;
- (void)invalidateSelectionCache:(id)arg1;
- (void)toggleThreadedMode;
@property(retain, nonatomic) NSFont *font;
- (void)_updateTableViewRowHeight;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (double)tableViewRowHeightForRichMessageList:(BOOL)arg1;
- (void)makeMessageListFirstResponder;
- (void)selectAllMessagesAndMakeFirstResponder;
- (long long)tableViewNumberOfColumnsToPinToLefthandSide:(id)arg1;
- (BOOL)mailTableView:(id)arg1 shouldAddTableColumn:(id)arg2;
- (BOOL)mailTableView:(id)arg1 shouldRemoveTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldReorderColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)_setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)setColumn:(long long)arg1 toVisible:(BOOL)arg2;
- (void)_updateAttributesForMailboxes;
- (BOOL)isColumnVisible:(long long)arg1;
- (BOOL)_isAutomaticInsertionWhileSearchingOkayForColumn:(long long)arg1;
- (BOOL)_isColumnVisibleInSettings:(long long)arg1;
- (id)_unreadColumn;
- (id)_columnWithIdentifierTag:(long long)arg1;
- (BOOL)shouldSortAscendingByDefaultForColumn:(long long)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (void)_updateTableHeaderToMatchCurrentSort;
- (void)_threadColorPreferenceChanged:(id)arg1;
- (void)_snippetLinePreferenceChanged:(id)arg1;
- (void)_toCcPreferenceChanged:(id)arg1;
- (void)_updateLayout;
- (void)_viewerPreferencesChanged:(id)arg1;
@property(readonly, nonatomic) BOOL canSelectPreviousMessage;
@property(readonly, nonatomic) BOOL canSelectNextMessage;
- (void)readAttributesFromViewingOptions:(id)arg1;
- (void)writeAttributesToViewingOptions:(id)arg1;
- (void)saveDefaultColumns;
- (void)setupColumnManager;
- (void)_conversationsUpdated:(id)arg1;
- (void)_messageMarkedForOverwrite:(id)arg1;
- (void)prepareForWindowClose;
- (void)dealloc;
- (void)_configureTableViewLayoutWithTableColumnResizingMasks:(id)arg1;
- (void)_setupColumnsForTableView;
- (id)defaultMenuForTableHeaderView:(id)arg1;
- (void)showFollowupsToMessageAtRow:(long long)arg1;
- (void)showFollowups:(id)arg1;
- (void)richUnreadButtonClicked:(id)arg1;
- (void)_createTintedImages;
- (void)_configureRichMessageListColumn;
- (void)_configureColumnForRolloverCell:(id)arg1 alignment:(unsigned long long)arg2 action:(SEL)arg3;
- (void)_configureColumnForImageCell:(id)arg1 alignment:(unsigned long long)arg2;
- (void)_configureColumnForEndTruncation:(id)arg1;
- (void)_setupTableColumnWidths;
- (void)_setupColumnHeaderIcon:(id)arg1 inColumnWithIdentifier:(id)arg2 accessibilityLabel:(id)arg3 alignment:(unsigned long long)arg4;
- (void)prepareContentInRange:(struct _NSRange)arg1;
- (void)userDidScrollInTableView:(id)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)tableViewGetDefaultMenu:(id)arg1;
- (void)_unregisterTableViewNibs;
- (void)_registerTableViewNibs;
- (void)awakeFromNib;
@property(nonatomic) BOOL isRichMessageList;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;
- (long long)_columnForAppleScriptColumn:(unsigned int)arg1;
@property(copy, nonatomic) NSArray *appleScriptVisibleColumns;
@property(nonatomic) unsigned int appleScriptSortColumn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
