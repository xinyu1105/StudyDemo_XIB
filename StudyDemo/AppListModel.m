//
//  appListModel.m
//  StudyDemo
//
//  Created by pengjiaxin on 2017/7/5.
//  Copyright © 2017年 pengjiaxin. All rights reserved.
//

#import "AppListModel.h"

@interface AppListModel ()
{
    //由于readonly没有生成带下划线的成员变量,所以要自己加一个
    UIImage *_tapImage;
}
@end

@implementation AppListModel

-(id)initWithDict:(NSDictionary *)dict
{
    self = [super init];
    if (self) {
        self.name = dict[@"name"];
        self.icon = dict[@"icon"];
    }
    return self;
}

//getter方法
-(UIImage *)tapImage{
    if (!_tapImage) {
        _tapImage = [UIImage imageNamed:self.icon];
    }
    return _tapImage;
}

+(id)appListWithDict:(NSDictionary *)dict{
    
    return [[self alloc]initWithDict:dict];
}
@end
