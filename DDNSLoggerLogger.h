//
//  DDNSLoggerLogger.h
//  Created by Peter Steinberger on 26.10.10.
//

#import <Foundation/Foundation.h>

#ifndef DDNSL_FRAMEWORK_LINKING_DISABLED
    #define DDNSL_FRAMEWORK_LINKING_DISABLED 0
#endif

#if DDNSL_FRAMEWORK_LINKING_DISABLED
    #import "DDLogMacros.h"
#else
    #import <CocoaLumberjack/DDLogMacros.h>
#endif

@interface DDNSLoggerLogger : DDAbstractLogger <DDLogger>

@property (nonatomic, readonly) BOOL running;

+ (DDNSLoggerLogger *)sharedInstance;

/// should setup before `- (void)start`
- (void)setupWithBonjourServiceName:(NSString *)serviceName;

- (void)start;
- (void)stop;

@end
