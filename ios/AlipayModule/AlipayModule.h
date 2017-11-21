//
//  AlipayModule.h
//  AlipayModule
//
//  Created by Johnny iDay on 16/5/10.
//  Copyright © 2016年 Johnny iDay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "React/RCTBridgeModule.h"

@interface AlipayModule : NSObject<RCTBridgeModule>

+(void) handleCallback:(NSURL *)url;

@end
