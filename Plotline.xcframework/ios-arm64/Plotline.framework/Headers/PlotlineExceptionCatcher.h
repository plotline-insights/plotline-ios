//
//  PlotlineExceptionCatcher.h
//  Plotline
//
//  Created by Adarsh Tadimari on 28/07/23.
//

#ifndef PlotlineExceptionCatcher_h
#define PlotlineExceptionCatcher_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CatchExceptionBlock)(void);

@interface PlotlineExceptionCatcher : NSObject

+ (BOOL)catchException:(CatchExceptionBlock)tryBlock;

@end

NS_ASSUME_NONNULL_END

#endif /* PlotlineExceptionCatcher_h */
