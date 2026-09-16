#import "YTIPivotBarSupportedRenderers.h"

@interface YTIPivotBarRenderer : GPBMessage
+ (YTIPivotBarSupportedRenderers *)pivotSupportedRenderersWithBrowseId:(NSString *)browseId title:(NSString *)title iconType:(int)iconType;
- (NSMutableArray <YTIPivotBarSupportedRenderers *> *)itemsArray;
@end