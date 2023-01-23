// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusPeer+Private.h"
#import "JanusPeer.h"
#import "JanusBundle+Private.h"
#import "JanusConstraints+Private.h"
#import "JanusSdpType+Private.h"
#import "djinni/objc/DJICppWrapperCache+Private.h"
#import "djinni/objc/DJIError.h"
#import "djinni/objc/DJIMarshal+Private.h"
#import "djinni/objc/DJIObjcWrapperCache+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface JanusPeerCppProxy : NSObject<JanusPeer>

- (id)initWithCpp:(const std::shared_ptr<::Janus::Peer>&)cppRef;

@end

@implementation JanusPeerCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Janus::Peer>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Janus::Peer>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)createOffer:(nonnull JanusConstraints *)constraints
            context:(nullable JanusBundle *)context {
    try {
        _cppRefHandle.get()->createOffer(::djinni_generated::Constraints::toCpp(constraints),
                                         ::djinni_generated::Bundle::toCpp(context));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)createAnswer:(nonnull JanusConstraints *)constraints
             context:(nullable JanusBundle *)context {
    try {
        _cppRefHandle.get()->createAnswer(::djinni_generated::Constraints::toCpp(constraints),
                                          ::djinni_generated::Bundle::toCpp(context));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setLocalDescription:(JanusSdpType)type
                        sdp:(nonnull NSString *)sdp {
    try {
        _cppRefHandle.get()->setLocalDescription(::djinni::Enum<::Janus::SdpType, JanusSdpType>::toCpp(type),
                                                 ::djinni::String::toCpp(sdp));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setRemoteDescription:(JanusSdpType)type
                         sdp:(nonnull NSString *)sdp {
    try {
        _cppRefHandle.get()->setRemoteDescription(::djinni::Enum<::Janus::SdpType, JanusSdpType>::toCpp(type),
                                                  ::djinni::String::toCpp(sdp));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addIceCandidate:(nonnull NSString *)mid
                  index:(int32_t)index
                    sdp:(nonnull NSString *)sdp {
    try {
        _cppRefHandle.get()->addIceCandidate(::djinni::String::toCpp(mid),
                                             ::djinni::I32::toCpp(index),
                                             ::djinni::String::toCpp(sdp));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)close {
    try {
        _cppRefHandle.get()->close();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class Peer::ObjcProxy final
: public ::Janus::Peer
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::Peer;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void createOffer(const ::Janus::Constraints & c_constraints, const std::shared_ptr<::Janus::Bundle> & c_context) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() createOffer:(::djinni_generated::Constraints::fromCpp(c_constraints))
                                                          context:(::djinni_generated::Bundle::fromCpp(c_context))];
        }
    }
    void createAnswer(const ::Janus::Constraints & c_constraints, const std::shared_ptr<::Janus::Bundle> & c_context) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() createAnswer:(::djinni_generated::Constraints::fromCpp(c_constraints))
                                                           context:(::djinni_generated::Bundle::fromCpp(c_context))];
        }
    }
    void setLocalDescription(::Janus::SdpType c_type, const std::string & c_sdp) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setLocalDescription:(::djinni::Enum<::Janus::SdpType, JanusSdpType>::fromCpp(c_type))
                                                                      sdp:(::djinni::String::fromCpp(c_sdp))];
        }
    }
    void setRemoteDescription(::Janus::SdpType c_type, const std::string & c_sdp) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setRemoteDescription:(::djinni::Enum<::Janus::SdpType, JanusSdpType>::fromCpp(c_type))
                                                                       sdp:(::djinni::String::fromCpp(c_sdp))];
        }
    }
    void addIceCandidate(const std::string & c_mid, int32_t c_index, const std::string & c_sdp) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() addIceCandidate:(::djinni::String::fromCpp(c_mid))
                                                                index:(::djinni::I32::fromCpp(c_index))
                                                                  sdp:(::djinni::String::fromCpp(c_sdp))];
        }
    }
    void close() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() close];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto Peer::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[JanusPeerCppProxy class]]) {
        return ((JanusPeerCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Peer::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<::JanusPeerCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
