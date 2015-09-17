/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerModel : NSObject {
    int _sortOrder;
    NSOperationQueue *_thumbnailQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSMutableArray *_updateHandlers;
}

@property (nonatomic, readonly) BOOL afterInitialUpdate;
@property (nonatomic, readonly) NSArray *modelObjects;
@property (nonatomic, readonly, copy) NSArray *pickableTypes;
@property (nonatomic, readonly) unsigned int pickerMode;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSOperationQueue *thumbnailQueue;
@property (nonatomic, retain) NSMutableArray *updateHandlers;

- (void).cxx_destruct;
- (BOOL)afterInitialUpdate;
- (void)dealloc;
- (id)displayTitle;
- (id)init;
- (id)modelObjects;
- (id)pickableTypes;
- (unsigned int)pickerMode;
- (void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2;
- (void)setSortOrder:(int)arg1;
- (void)setThumbnailQueue:(id)arg1;
- (void)setUpdateHandlers:(id)arg1;
- (int)sortOrder;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (id)thumbnailQueue;
- (id)updateHandlers;
- (void)updateSortDescriptors;

@end