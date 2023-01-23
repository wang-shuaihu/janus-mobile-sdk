// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>
@class JanusJanusData;


@interface JanusJanusData : NSObject

- (nonnull NSString *)getString:(nonnull NSString *)key
                       fallback:(nonnull NSString *)fallback;

- (int64_t)getInt:(nonnull NSString *)key
         fallback:(int64_t)fallback;

- (BOOL)getBool:(nonnull NSString *)key
       fallback:(BOOL)fallback;

- (nullable JanusJanusData *)getObject:(nonnull NSString *)key;

- (nonnull NSArray<JanusJanusData *> *)getList:(nonnull NSString *)key;

@end
