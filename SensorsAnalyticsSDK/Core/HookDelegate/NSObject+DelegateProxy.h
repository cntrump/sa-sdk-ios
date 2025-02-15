//
// NSObject+DelegateProxy.h
// SensorsAnalyticsSDK
//
// Created by yuqiang on 2020/11/5.
// Copyright © 2020 Sensors Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "SADelegateProxyObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (DelegateProxy)

@property (nonatomic, copy, nullable) NSSet<NSString *> *sensorsdata_optionalSelectors;
@property (nonatomic, strong, nullable) SADelegateProxyObject *sensorsdata_delegateObject;

/// hook respondsToSelector to resolve optional selectors
/// @param aSelector selector
- (BOOL)sensorsdata_respondsToSelector:(SEL)aSelector;

@end

@interface NSProxy (DelegateProxy)

@property (nonatomic, copy, nullable) NSSet<NSString *> *sensorsdata_optionalSelectors;
@property (nonatomic, strong, nullable) SADelegateProxyObject *sensorsdata_delegateObject;

/// hook respondsToSelector to resolve optional selectors
/// @param aSelector selector
- (BOOL)sensorsdata_respondsToSelector:(SEL)aSelector;

@end

NS_ASSUME_NONNULL_END
