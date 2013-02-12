/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    NSDateComponents *_eventFilterEndDate;
    NSDateComponents *_eventFilterStartDate;
    int _fetchingEtagState;
    BOOL _getScheduleChanges;
    BOOL _getScheduleTags;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _syncEvents;
    BOOL _syncTodos;
    NSDateComponents *_todoFilterEndDate;
    NSDateComponents *_todoFilterStartDate;
}

@property(retain) NSDateComponents * eventFilterEndDate;
@property(retain) NSDateComponents * eventFilterStartDate;
@property BOOL getScheduleChanges;
@property BOOL getScheduleTags;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL syncEvents;
@property BOOL syncTodos;
@property(retain) NSDateComponents * todoFilterEndDate;
@property(retain) NSDateComponents * todoFilterStartDate;

- (BOOL)_shouldFetchEventsForState:(int)arg1;
- (BOOL)_shouldFetchTodosForState:(int)arg1;
- (void)applyAdditionalPropertiesFromPostTask:(id)arg1;
- (void)applyAdditionalPropertiesFromPutTask:(id)arg1;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)arg1;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)copyPutTaskWithPayloadItem:(id)arg1 forAction:(id)arg2;
- (id)dataContentType;
- (void)dealloc;
- (id)eventFilterEndDate;
- (id)eventFilterStartDate;
- (BOOL)getScheduleChanges;
- (BOOL)getScheduleTags;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 getScheduleTags:(BOOL)arg5 getScheduleChanges:(BOOL)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificCalendarItemClass:(Class)arg9;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 getScheduleTags:(BOOL)arg4 getScheduleChanges:(BOOL)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (void)setEventFilterEndDate:(id)arg1;
- (void)setEventFilterStartDate:(id)arg1;
- (void)setGetScheduleChanges:(BOOL)arg1;
- (void)setGetScheduleTags:(BOOL)arg1;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (void)setSyncEvents:(BOOL)arg1;
- (void)setSyncTodos:(BOOL)arg1;
- (void)setTodoFilterEndDate:(id)arg1;
- (void)setTodoFilterStartDate:(id)arg1;
- (BOOL)shouldFetchMoreETags;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)syncEvents;
- (BOOL)syncTodos;
- (id)todoFilterEndDate;
- (id)todoFilterStartDate;

@end