// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusCamera.h"
#import <Foundation/Foundation.h>

@interface JanusVideoConstraints : NSObject
- (nonnull instancetype)initWithWidth:(int32_t)width
                               height:(int32_t)height
                                  fps:(int32_t)fps
                               camera:(JanusCamera)camera;
+ (nonnull instancetype)videoConstraintsWithWidth:(int32_t)width
                                           height:(int32_t)height
                                              fps:(int32_t)fps
                                           camera:(JanusCamera)camera;

@property (nonatomic, readonly) int32_t width;

@property (nonatomic, readonly) int32_t height;

@property (nonatomic, readonly) int32_t fps;

@property (nonatomic, readonly) JanusCamera camera;

@end
