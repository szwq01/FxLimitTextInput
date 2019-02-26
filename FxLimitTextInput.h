//
//  FxLimitTextInput.h
//  FxCommon.UI
//
//  Created by john on 2019/2/26.
//  Copyright © 2019年 Foxconn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>

#define PROPERTY_NAME @"limit"

#define DECLARE_PROPERTY(className) \
@interface className (Limit) @end

DECLARE_PROPERTY(UITextField)
DECLARE_PROPERTY(UITextView)

@interface FxLimitTextInput : NSObject

@property(nonatomic, assign) BOOL enableLimitCount;

+(FxLimitTextInput *) sharedInstance;


@end
