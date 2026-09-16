#import "YTIPivotBarItemRenderer.h"
#import "YTIPivotBarIconOnlyItemRenderer.h"

@interface YTIPivotBarSupportedRenderers : GPBMessage
@property (nonatomic, assign, readonly) int itemsOneOfCase;
@property (nonatomic, strong, readwrite) YTIPivotBarItemRenderer *pivotBarItemRenderer;
@property (nonatomic, strong, readwrite) YTIPivotBarIconOnlyItemRenderer *pivotBarIconOnlyItemRenderer;
@end
