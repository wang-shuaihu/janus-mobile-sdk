// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>
@protocol JanusPlugin;
@protocol JanusProtocol;


@protocol JanusPluginFactory <NSObject>

- (nullable id<JanusPlugin>)create:(int64_t)handleId
                             owner:(nullable id<JanusProtocol>)owner;

@end
