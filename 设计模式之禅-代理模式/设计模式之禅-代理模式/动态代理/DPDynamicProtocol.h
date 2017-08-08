//
//  DPDynamicProtocol.h
//  设计模式之禅-代理模式
//
//  Created by 王帅宇 on 2017/8/8.
//  Copyright © 2017年 王帅宇. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DPDynamicProtocol <NSObject>
@required
- (void)doSomething;
- (void)doOtherThing;
@end
