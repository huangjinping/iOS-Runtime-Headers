/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTopVideoControlsManager : NSObject <SXVideoTransitionObserver> {
    <SXVideoAdActionAvailabilityObserver> * _actionAvailabilityObserver;
    <SXVideoAdActionAvailabilityObserverFactory> * _actionAvailabilityObserverFactory;
    <SXTopVideoControlsProviding> * _controlsProvider;
    SXTopVideoControlsViewController * _controlsViewController;
    <SXVideoLoadingStateObserving> * _loadingStateObserver;
    <SXVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SXMediaSelectionOptionsAvailabilityObserver> * _mediaSelectionOptionsAvailabilityObserver;
    <SXMediaSelectionOptionsAvailabilityObserverFactory> * _mediaSelectionOptionsAvailabilityObserverFactory;
    <SXVideoShareabilityProviding> * _shareabilityProvider;
}

@property (nonatomic, retain) <SXVideoAdActionAvailabilityObserver> *actionAvailabilityObserver;
@property (nonatomic, readonly) <SXVideoAdActionAvailabilityObserverFactory> *actionAvailabilityObserverFactory;
@property (nonatomic, readonly) <SXTopVideoControlsProviding> *controlsProvider;
@property (nonatomic, readonly) SXTopVideoControlsViewController *controlsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SXVideoLoadingStateObserving> *loadingStateObserver;
@property (nonatomic, readonly) <SXVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, retain) <SXMediaSelectionOptionsAvailabilityObserver> *mediaSelectionOptionsAvailabilityObserver;
@property (nonatomic, readonly) <SXMediaSelectionOptionsAvailabilityObserverFactory> *mediaSelectionOptionsAvailabilityObserverFactory;
@property (nonatomic, readonly) <SXVideoShareabilityProviding> *shareabilityProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionAvailabilityObserver;
- (id)actionAvailabilityObserverFactory;
- (id)controlsProvider;
- (id)controlsViewController;
- (id)initWithTopControlsViewController:(id)arg1 topControlsProvider:(id)arg2 shareabilityProvider:(id)arg3 mediaSelectionOptionsAvailabilityObserverFactory:(id)arg4 actionAvailabilityObserverFactory:(id)arg5 loadingStateObserverFactory:(id)arg6;
- (id)loadingStateObserver;
- (id)loadingStateObserverFactory;
- (id)mediaSelectionOptionsAvailabilityObserver;
- (id)mediaSelectionOptionsAvailabilityObserverFactory;
- (void)setActionAvailabilityObserver:(id)arg1;
- (void)setLoadingStateObserver:(id)arg1;
- (void)setMediaSelectionOptionsAvailabilityObserver:(id)arg1;
- (id)shareabilityProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
