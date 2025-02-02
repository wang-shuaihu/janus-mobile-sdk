// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusConstraints+Private.h"
#import "JanusSdpConstraints+Private.h"
#import "JanusVideoConstraints+Private.h"
#include <cassert>

namespace djinni_generated {

auto Constraints::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni_generated::SdpConstraints::toCpp(obj.sdp),
            ::djinni_generated::VideoConstraints::toCpp(obj.video)};
}

auto Constraints::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[::JanusConstraints alloc] initWithSdp:(::djinni_generated::SdpConstraints::fromCpp(cpp.sdp))
                                             video:(::djinni_generated::VideoConstraints::fromCpp(cpp.video))];
}

}  // namespace djinni_generated
