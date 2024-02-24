//
//  WeChatBase.h
//  
//
//  Created by hengyu on 2024/2/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Not for production use, we have this empty class only for compiler to generate `WeChatSDK.o` object file
/// and the compiler will not throw error during link time.
@interface WeChatBase : NSObject

@end

NS_ASSUME_NONNULL_END
