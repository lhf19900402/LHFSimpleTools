/*======================== 一套自己的小工具 ( 最后更新 : 2017-01-12 ) ==========================*/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "UIView+Frame.h"

@interface LHFSimpleTools : NSObject

                     #pragma mark - 初始化
/*================================= 初始化 ================================*/
/**
 单例此工具
 */
+(instancetype)sharedLHFSimpleTools;


                   #pragma mark - 🎈UIImage 相关的工具🎈  -
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


                   #pragma mark - 🎈NSString 相关的工具🎈 -
/*================================= NSString 相关的工具 ================================*/

#pragma mark 字符串截取
/**
 字符串截取
 @param string 要截取的字符串
 @param start 从哪个字符串开始截取
 @param end 到哪个字符串结束
 @return 返回截取好的字符串
 */
+(NSString *)rangeOfString:(NSString *)string start:(NSString *)start end:(NSString *)end;




















@end
