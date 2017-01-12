/*================================= 一套自己的小工具 ================================*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LHFSimpleTools : NSObject

                     #pragma mark - 初始化
/*================================= 初始化 ================================*/
/**
 单例此工具
 */
+(instancetype)sharedLHFSimpleTools;


                     #pragma mark - UIImage 相关的工具 -
/*================================= UIImage 相关的工具 ================================*/

#pragma mark 通过图片上下文来压缩图片
/**
 通过图片上下文来压缩图片
 @param originalImage 原始图片
 @param width 指定宽度
 @return 返回压缩后的图片
 */
+(UIImage *)getImageFromCurrentImageContext:(UIImage *)originalImage withWidth:(CGFloat)width;

#pragma mark 图片倒任意大小圆角
/**
 图片倒任意大小圆角
 @param originalImage 原始图片
 @param cornerRadius 圆角大小
 @return 返回倒好角的图片
 */
+(UIImage *)clipImage:(UIImage *)originalImage cornerRadius:(CGFloat)cornerRadius;

#pragma mark 裁剪圆/椭圆图片
/**
 裁剪圆/椭圆图片
 @param originalImage 原始图片
 @return 返回圆/椭圆图片
 */
+(UIImage *)clipRoundImage:(UIImage *)originalImage;




















@end
