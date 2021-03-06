/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextFaceElementController : NSObject <NTKUpNextElementCoordinatorObserver> {
    bool  _allowsLocationUse;
    NSMutableDictionary * _becameVisibleDates;
    NTKUpNextElementCoordinator * _coordinator;
    <NTKUpNextFaceElementControllerDelegate> * _delegate;
    struct { 
        unsigned int implementsPerformBatchUpdate : 1; 
        unsigned int implementsReloadElement : 1; 
        unsigned int implementsRemoveElement : 1; 
        unsigned int implementsInsertElement : 1; 
        unsigned int implementsMoveElement : 1; 
        unsigned int implementsIndexPathVisibility : 1; 
    }  _delegateCallbacks;
    NSMutableSet * _hiddenBundleIdentifiers;
    NSArray * _hiddenIndices;
    bool  _isBacklightOn;
    bool  _isDeviceLocked;
    bool  _isMonitoringElements;
    bool  _isShowingContentElements;
    NSMutableArray * _pendingOperations;
    bool  _performingBatch;
    bool  _postedScrollEvent;
    bool  _showsCanonicalContent;
    bool  _showsIdealizedContent;
    unsigned long long  _state;
}

@property (nonatomic) bool allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKUpNextFaceElementControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showsCanonicalContent;
@property (nonatomic) bool showsIdealizedContent;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (id)applicationPrewarmIdentifiers;

- (void).cxx_destruct;
- (void)_beginMonitoringVisibilityForElement:(id)arg1;
- (id)_contentForElement:(id)arg1;
- (id)_coordinatorIndexPathForFaceIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (void)_endMonitoringVisibilityForElement:(id)arg1;
- (void)_enumerateCoordinatorElementWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)_faceIndexPathForCoordinatorIndexPath:(id)arg1;
- (id)_indexPathForElement:(id)arg1;
- (bool)_isElementHidden:(id)arg1;
- (void)_loadNewElementCoordinator;
- (void)_loadNewElementCoordinatorWithCompletion:(id /* block */)arg1;
- (void)_lockStateChanged;
- (void)_performBatchUpdateUpdatingNoContent:(bool)arg1 usingBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performOrEnqueueOperation:(id)arg1;
- (void)_setDataSource:(id)arg1 enabled:(bool)arg2;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(bool)arg3;
- (void)_updateMetrics;
- (void)_updateMonitoringVisibilityForAllElement;
- (void)_updateNoContentState;
- (bool)allowsLocationUse;
- (id)complicationDescriptors;
- (void)dealloc;
- (id)delegate;
- (id)disabledDataSources;
- (id)elementActionAtIndexPath:(id)arg1;
- (id)elementBundleIdentifierAtIndexPath:(id)arg1;
- (id)elementContentAtIndexPath:(id)arg1;
- (void)elementContentAtIndexPathDidBecomeHidden:(id)arg1;
- (void)elementContentAtIndexPathReceivedFeedback:(id)arg1 isPositive:(bool)arg2;
- (void)elementContentAtIndexPathWasTapped:(id)arg1;
- (void)elementContentAtIndexPathWillBecomeVisible:(id)arg1;
- (void)elementCoordinator:(id)arg1 didInsertElement:(id)arg2 atIndexPath:(id)arg3;
- (void)elementCoordinator:(id)arg1 didMoveElement:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)elementCoordinator:(id)arg1 didReloadElement:(id)arg2 atIndexPath:(id)arg3;
- (void)elementCoordinator:(id)arg1 didRemoveElement:(id)arg2 atIndexPath:(id)arg3;
- (bool)elementCoordinator:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
- (void)elementCoordinator:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (id)indexPathForElementIdentifier:(id)arg1;
- (id)init;
- (bool)isDataSourceWithBundleIdentifierEnabled:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataSourceWithBundleIdentifier:(id)arg2;
- (void)setShowsCanonicalContent:(bool)arg1;
- (void)setShowsCanonicalContent:(bool)arg1 completion:(id /* block */)arg2;
- (void)setShowsIdealizedContent:(bool)arg1;
- (void)setShowsIdealizedContent:(bool)arg1 completion:(id /* block */)arg2;
- (void)setState:(unsigned long long)arg1;
- (bool)showsCanonicalContent;
- (bool)showsIdealizedContent;
- (unsigned long long)state;

@end
