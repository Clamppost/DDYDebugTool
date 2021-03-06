// https://github.com/starainDou/DDYDeviceInfo
#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger,DeviceType) {
    
    Unknown = 0,
    Simulator,
    IPhone_1G,          //基本不用
    IPhone_3G,          //基本不用
    IPhone_3GS,         //基本不用
    IPhone_4,           //基本不用
    IPhone_4s,          //基本不用
    IPhone_5,
    IPhone_5C,
    IPhone_5S,
    IPhone_SE,
    IPhone_6,
    IPhone_6P,
    IPhone_6s,
    IPhone_6s_P,
    IPhone_7,
    IPhone_7P,
    IPhone_8,
    IPhone_8P,
    IPhone_X,
};


@interface DDYSystemInfo : NSObject

/** bundleName (show in SpringBoard) */
+ (NSString *)ddy_AppBundleName;
/** bundleID com.**.app */
+ (NSString *)ddy_AppBundleID;
/** 版本号 1.1.1 */
+ (NSString *)ddy_AppVersion;
/** build 号 111 */
+ (NSString *)ddy_AppBuildNumber;

/** 获取IDFA */
+ (NSString *)ddy_IDFA;
/** 获取IDFV */
+ (NSString *)ddy_IDFV;
/** 获取UUID */
+ (NSString *)ddy_UUID;
/** 系统版本 */
+ (NSString *)ddy_SystemVersion;
/** 获取系统型号 用于判断 */
+ (DeviceType)deviceType;
/** 获取设备型号 用于显示 */
+ (NSString *)ddy_DeviceModel;
/** 获取设备名字 */
+ (NSString *)ddy_DeviceName;
/** 获取磁盘大小 */
+ (long)ddy_DiskTotalSize;
/** 获取磁盘剩余空间 */
+ (long)ddy_DiskFreeSize;
/** 获取电量 */
+ (float)ddy_BatteryLevel;
/** 获取电池的状态 */
+ (NSString *)ddy_BatteryState;
/** 屏幕亮度 */
+ (float)ddy_ScreenBrightness;
/** 音量大小 */
+ (float)ddy_DeviceVolume;
/** wifi名称 */
+ (NSString *)ddy_WifiSSID;
/** 网络制式 */
+ (NSString *)ddy_NetCarrier;
/** 获取内网ip地址 */
+ (NSString *)ddy_WANIPAddress;
/** 获取外网ip地址 */
+ (NSString *)ddy_InternetIPAddress;
/** 是否被破解 */
+ (BOOL)ddy_Cracked;
/** 判断是否越狱 */
+ (BOOL)ddy_JailBreak;
/** 判断是否插入sim卡 */
+ (BOOL)ddy_SimInserted;
/** 获取系统开机时间到1970时间差值(毫秒) */
+ (long)ddy_BootTime;
/** 用户是否使用代理 */
+ (BOOL)ddy_IsViaProxy;

/** CPU频率 */
+ (NSUInteger)ddy_CPUFrequency;
/** 总线频率 */
+ (NSUInteger)ddy_BusFrequency;
/** ram大小 */
+ (NSUInteger)ddy_RamSize;
/** CPU型号 */
+ (NSUInteger)ddy_CPUNumber;
/** 总内存 */
+ (NSUInteger)ddy_TotalMemory;
/** 用户内存 */
+ (NSUInteger)ddy_UserMemory;
/** 内存使用状况 */
+ (float)ddy_MemoryUsage;
/** CPU使用情况(包含监控线程) 和xCode不一致 */
+ (float)ddy_CPUUsage;
/** CPU使用情况(排除监控线程) 和xCode不一致 */
+ (float)ddy_CPUUsage2;

@end
