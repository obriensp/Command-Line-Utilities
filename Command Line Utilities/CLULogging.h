//
//  CLULogging.h
//  Command Line Utilities
//
//  Created by Sean Patrick O'Brien on 8/2/12.
//  Copyright (c) 2012 Sean Patrick O'Brien. All rights reserved.
//

#import <Foundation/Foundation.h>

extern void CLULog(NSString *format, ...);
extern void CLULogv(NSString *format, va_list args);

extern void CLULogf(FILE *file, NSString *format, ...);
extern void CLULogfv(FILE *file, NSString *format, va_list args);