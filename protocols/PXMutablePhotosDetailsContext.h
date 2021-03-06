/* Generated by RuntimeBrowser.
 */

@protocol PXMutablePhotosDetailsContext <NSObject>

@required

- (PHFetchResult *)assetCollections;
- (NSDictionary *)assetsByCollection;
- (PHFetchResult *)keyAssetsFetchResult;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (PHFetchResult *)people;
- (void)setAssetCollections:(PHFetchResult *)arg1;
- (void)setAssetsByCollection:(NSDictionary *)arg1;
- (void)setKeyAssetsFetchResult:(PHFetchResult *)arg1;
- (void)setLocalizedSubtitle:(NSString *)arg1;
- (void)setLocalizedTitle:(NSString *)arg1;
- (void)setPeople:(PHFetchResult *)arg1;
- (void)setShouldShowMovieHeader:(bool)arg1;
- (void)setTitleFontName:(NSString *)arg1;
- (void)setViewSourceOrigin:(unsigned long long)arg1;
- (bool)shouldShowMovieHeader;
- (NSString *)titleFontName;
- (unsigned long long)viewSourceOrigin;

@end
