//
//  appListModel.h
//  StudyDemo
//
//  Created by pengjiaxin on 2017/7/5.
//  Copyright © 2017年 pengjiaxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//字典转模型
@interface AppListModel : NSObject
//应用程序名称
@property (nonatomic, copy) NSString *name;
//应用程序图标名称
@property (nonatomic, copy) NSString *icon;

//图片
//定义属性时,会生成getter&setter方法,还会生成一个带下划线的成员变量,
//如果是readonly属性,只会生成getter方法,同时没有带下划线的成员变量
@property (nonatomic, strong,readonly) UIImage *tapImage;

//instancetype:会让编译器检查实例化对象的准确类型
//instancetype:只能用于返回类型,不能当做参数使用
//init方法
-(instancetype)initWithDict:(NSDictionary *)dict;
//类方法/工厂方法
+(instancetype)appListWithDict:(NSDictionary *)dict;
@end
