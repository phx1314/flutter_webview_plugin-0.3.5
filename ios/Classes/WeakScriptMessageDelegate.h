//
//  WeakScriptMessageDelegate.h
//  JQFramework
//
//  Created by JinQu on 2018/7/27.
//  Copyright © 2018年 Mars. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface WeakScriptMessageDelegate : NSObject <WKScriptMessageHandler>

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end
