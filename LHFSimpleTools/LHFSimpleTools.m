#import "LHFSimpleTools.h"

@implementation LHFSimpleTools


+(instancetype)sharedLHFSimpleTools{
    
    static LHFSimpleTools *instance;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[self alloc] init];
    });
    
    return instance;
}


+(UIImage *)getImageFromCurrentImageContext:(UIImage *)originalImage withWidth:(CGFloat)width {
    CGFloat height = (width*originalImage.size.height)/originalImage.size.width;
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(width, height), NO, 0.0);
    [originalImage drawInRect:CGRectMake(0, 0, width, height)];
    UIImage *newImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return newImage;
}


+(UIImage *)clipImage:(UIImage *)originalImage cornerRadius:(CGFloat)cornerRadius {
    // 01 开启图片上下文 第二个参数 NO 代表透明
    UIGraphicsBeginImageContextWithOptions(originalImage.size, NO, 0.0);
    // 02 添加一个圆角
    CGRect rect = CGRectMake(0, 0, originalImage.size.width, originalImage.size.height);
    [[UIBezierPath bezierPathWithRoundedRect:rect cornerRadius:cornerRadius] addClip];
    // 03 将图片画上去
    [originalImage drawInRect:rect];
    // 04 获取图片
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    // 05 关闭上下文
    UIGraphicsEndImageContext();
    // 06 返回图片
    return image;
}


+(UIImage *)clipRoundImage:(UIImage *)originalImage {
    // 01 开启图片上下文 第二个参数 NO 代表透明
    UIGraphicsBeginImageContextWithOptions(originalImage.size, NO, 0.0);
    // 02 获得上下文
    CGContextRef context = UIGraphicsGetCurrentContext();
    // 03 添加一个圆
    CGRect rect = CGRectMake(0, 0, originalImage.size.width, originalImage.size.height);
    CGContextAddEllipseInRect(context, rect);
    // 04 剪切
    CGContextClip(context);
    // 05 将图片画上去
    [originalImage drawInRect:rect];
    // 06 获取图片
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    // 07 关闭上下文
    UIGraphicsEndImageContext();
    // 08 返回图片
    return image;
}


+(NSString *)rangeOfString:(NSString *)string start:(NSString *)start end:(NSString *)end {
    NSRange startRange = [string rangeOfString:start];
    NSRange endRange = [string rangeOfString:end];
    
    NSUInteger startIndex = startRange.location + startRange.length;
    NSUInteger length = endRange.location - (startRange.length + startRange.location);
    
    return [string substringWithRange:NSMakeRange(startIndex, length)];
}

@end
