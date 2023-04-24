
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNChatUiSpec.h"

@interface ChatUi : NSObject <NativeChatUiSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ChatUi : NSObject <RCTBridgeModule>
#endif

@end
