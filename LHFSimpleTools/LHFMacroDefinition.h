
/*======================== 常用宏定义文件 ==========================*/
#ifndef LHFMacroDefinition_h
#define LHFMacroDefinition_h


#pragma mark - 常量参数 -
/* * * * * * * * * * * * * * *  常量参数  * * * * * * * * * * * * * * * */
// 宏定义屏幕的bounds
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
// 适配屏幕的比例
#define SCREEN_SCALE [UIScreen mainScreen].bounds.size.width/375
//导航以下起始y
#define Height_NavBar 64
//系统UIableBar高度
#define Height_Tabbar 49


#pragma mark - 常用对象 -
/* * * * * * * * * * * * * * *  常用对象  * * * * * * * * * * * * * * * */
// 上一级控制器
#define PUSH_CONTROLLER(navigationController) navigationController.viewControllers[navigationController.viewControllers.count - 2]


#pragma mark - 调试自定义打印 -
/* * * * * * * * * * * * * * *  调试自定义打印  * * * * * * * * * * * * * * * */
#ifdef DEBUG // 调试状态, 打开LOG功能
#define LHFLog(FORMAT, ...) fprintf(stderr,"%s 第[%d]行\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else // 发布状态, 关闭LOG功能
#define LHFLog(...)
#endif


#pragma mark - 沙盒目录宏定义 -
/* * * * * * * * * * * * * * *  沙盒目录宏定义  * * * * * * * * * * * * * * * */
// 宏定义, 直接根据文件名称, 拼接文件夹Documents的绝对路径,
#define DOCUMENT_PATH(fileName) ([NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0] stringByAppendingPathComponent:fileName])
// 宏定义, 直接根据文件名称, 拼接文件夹Caches的绝对路径,
#define CACHES_PATH(fileName) ([NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).lastObject stringByAppendingPathComponent:fileName])
// 宏定义, 直接根据文件名称, 拼接文件夹Temp的绝对路径,
#define TEMP_PATH(fileName) ([NSTemporaryDirectory() stringByAppendingPathComponent:fileName])


#pragma mark - Color定义 -
/* * * * * * * * * * * * * * *  Color定义  * * * * * * * * * * * * * * * */
// 随机色
#define RANDOM_COLOR [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
// 根据数值设置颜色
#define RGB_COLOR(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
// 有透明度的颜色
#define RGB_ALPHA_COLOR(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]


#pragma mark - 偏好设置 -
/* * * * * * * * * * * * * * *  偏好设置  * * * * * * * * * * * * * * * */
// 保存数据到偏好设置
#define SaveUserDefault(key,Obj) \
({  if (key != nil  && Obj != nil) { \
[[NSUserDefaults standardUserDefaults] setObject:Obj forKey:key]; \
[[NSUserDefaults standardUserDefaults] synchronize]; } \
})
// 获取偏好设置数据
#define GetUserDefault(key)  key!=nil ? [[NSUserDefaults standardUserDefaults] objectForKey:key] : nil


#endif /* LHFMacroDefinition_h */
