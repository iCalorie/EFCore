//
// Created by yizhuolin on 12-9-13.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>


@interface EFKeyValuePair : NSObject

- (id)initWithKey:(id)key andValue:(id)value;

@property (nonatomic, strong) id key;

@property (nonatomic, strong) id value;

@end