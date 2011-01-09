/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MediaDetailScrubberControl;



@interface MPProgressIndicator : UIView 
{
    MediaDetailScrubberControl *_scrubberControl;
    NSUInteger _duration;
    NSUInteger _elapsed;
    NSUInteger _offset;
    id _delegate;
    BOOL _tracking;
    BOOL _scheduledDelayedCommit;
    double _nextValidUpdateDate;
    double _scheduledDelayedCommitDurationRemaining;
    double _scheduledDelayedCommitSetupTime;
}

+ (float)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_itemChangedNotification:(id)arg1;
- (void)_ignoreElapsedTimeUpdatesForALittleBit:(float)arg1;
- (void)_commitNow;
- (void)_commitValueForEndOfScrubbing;
- (void)_delayedDoCommitNow;
- (void)_commitValue;
- (void)scrubberControl:(id)arg1 didEnterScrubbingState:(BOOL)arg2;
- (void)scrubberControl:(id)arg1 didChangeToScrubValue:(float)arg2;
- (void)cancelTracking;
- (void)setDuration:(NSUInteger)arg1;
- (NSUInteger)duration;
- (void)setDelegate:(id)arg1;
- (void)setElapsedTime:(NSUInteger)arg1 offset:(NSUInteger)arg2 force:(BOOL)arg3;

@end