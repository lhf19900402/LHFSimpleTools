#import <UIKit/UIKit.h>

@interface UIView (LHFFrame)

@property (nonatomic,assign) CGFloat x; // 修改x值
@property (nonatomic,assign) CGFloat y; // 修改y值

@property (nonatomic,assign) CGFloat height; // 修改高度值
@property (nonatomic,assign) CGFloat width; // 修改宽度值

@property (nonatomic,assign) CGFloat centerX; // 修改中心点x值
@property (nonatomic,assign) CGFloat centerY; // 修改中心点y值

@property (nonatomic,assign) CGSize size; // 修改尺寸值

@end
