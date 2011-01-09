/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */



@interface ALAssetsFilter : NSObject 
{
    id _internal;
}

@property(retain) ALAssetsFilterInternal *internal;

+ (id)allPhotos;
+ (id)allVideos;
+ (id)allAssets;

- (NSInteger)_filter;
- (void)_setFilter:(NSInteger)arg1;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)init;
- (void)dealloc;

@end