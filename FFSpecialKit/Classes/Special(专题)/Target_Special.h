//
//  Target_Special.h
//  Pods
//
//  Created by James on 2017/11/23.
//
//

#import <Foundation/Foundation.h>
@class APIRequest;
@interface Target_Special : NSObject
- (UIViewController*)Action_specialDetailViewController:(NSDictionary*)params;

- (NSDictionary*)Action_specialReformerWithOriginData:(NSDictionary*)params;

- (NSDictionary *)Action_specialReformer:(NSDictionary*)params;

- (APIRequest *)Action_specialAPIRequest:(NSDictionary*)params;

@end
