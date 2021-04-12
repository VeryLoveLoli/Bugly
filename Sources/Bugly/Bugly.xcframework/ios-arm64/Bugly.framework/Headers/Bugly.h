//
//  Bugly.h
//  Bugly
//
//  Created by 韦烽传 on 2021/4/12.
//

#import <Foundation/Foundation.h>

//! Project version number for Bugly.
FOUNDATION_EXPORT double BuglyVersionNumber;

//! Project version string for Bugly.
FOUNDATION_EXPORT const unsigned char BuglyVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Bugly/PublicHeader.h>

/**
 在 `Link Binary With Libraries` 添加 `libc++.tbd`、`libz.tbd`
 */

/// 系统库
#import <Security/Security.h>
#import <SystemConfiguration/SystemConfiguration.h>

/// Bugly头文件
#import <Bugly/BuglyOC.h>
#import <Bugly/BuglyConfig.h>
#import <Bugly/BuglyLog.h>
