// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusSdpConstraints+Private.h"
#import "djinni/objc/DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto SdpConstraints::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::Bool::toCpp(obj.sendAudio),
            ::djinni::Bool::toCpp(obj.sendVideo),
            ::djinni::Bool::toCpp(obj.receiveAudio),
            ::djinni::Bool::toCpp(obj.receiveVideo),
            ::djinni::Bool::toCpp(obj.datachannel)};
}

auto SdpConstraints::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[::JanusSdpConstraints alloc] initWithSendAudio:(::djinni::Bool::fromCpp(cpp.send_audio))
                                                  sendVideo:(::djinni::Bool::fromCpp(cpp.send_video))
                                               receiveAudio:(::djinni::Bool::fromCpp(cpp.receive_audio))
                                               receiveVideo:(::djinni::Bool::fromCpp(cpp.receive_video))
                                                datachannel:(::djinni::Bool::fromCpp(cpp.datachannel))];
}

}  // namespace djinni_generated
