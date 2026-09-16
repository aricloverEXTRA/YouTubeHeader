#import <Foundation/Foundation.h>
#import "GPBDescriptor.h"

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_subclassing_restricted))
@interface GPBExtensionDescriptor : NSObject<NSCopying>

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@property(nonatomic, readonly) uint32_t fieldNumber;
@property(nonatomic, readonly) Class containingMessageClass;
@property(nonatomic, readonly) GPBDataType dataType;
@property(nonatomic, readonly, getter=isRepeated) BOOL repeated;
@property(nonatomic, readonly, getter=isPackable) BOOL packable;
@property(nonatomic, readonly) Class msgClass;
@property(nonatomic, readonly) NSString *singletonName;
@property(nonatomic, readonly, strong, nullable) GPBEnumDescriptor *enumDescriptor;
@property(nonatomic, readonly, nullable) id defaultValue;

@end

NS_ASSUME_NONNULL_END
