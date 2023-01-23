// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import <Foundation/Foundation.h>
@class JanusPlatform;
@protocol JanusPeerFactory;
@protocol JanusPluginFactory;
@protocol JanusProtocol;


@interface JanusPlatform : NSObject

- (void)protocol:(nullable id<JanusProtocol>)protocol;

- (void)pluginFactory:(nonnull NSString *)id
              factory:(nullable id<JanusPluginFactory>)factory;

- (nullable id<JanusPeerFactory>)peerFactory;

+ (nullable JanusPlatform *)create:(nullable id<JanusPeerFactory>)factory;

@end
