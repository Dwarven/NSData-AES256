//
//  NSData+AES256.h
//  AES
//
//  Created by Dwarven on 15/8/17.
//  Copyright (c) 2015 Dwarven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData(AES256)
-(NSData *) aes256_encrypt:(NSString *)key;
-(NSData *) aes256_decrypt:(NSString *)key;
@end