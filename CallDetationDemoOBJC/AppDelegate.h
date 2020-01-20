//
//  AppDelegate.h
//  CallDetationDemoOBJC
//
//  Created by Shivam Pandya on 20/01/20.
//  Copyright © 2020 Pratik Pandya. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreTelephony/CTCallCenter.h>
#import <CoreTelephony/CTCall.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) CTCallCenter* callCenter;

@end

