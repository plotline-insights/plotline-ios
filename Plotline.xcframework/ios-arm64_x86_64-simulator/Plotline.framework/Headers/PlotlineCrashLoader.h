//
//  PlotlineCrashLoader.h
//  Plotline
//
//  Auto-initializes the crash handler via +load method
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PlotlineCrashLoader : NSObject

/// Check if crash analytics is enabled (defaults to true)
+ (BOOL)isCrashAnalyticsEnabled;

/// Set the crash analytics enabled flag (called after init)
+ (void)setCrashAnalyticsEnabled:(BOOL)enabled;

@end

NS_ASSUME_NONNULL_END
