// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#include "protocol_delegate.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol JanusProtocolDelegate;

namespace djinni_generated {

class ProtocolDelegate
{
public:
    using CppType = std::shared_ptr<::Janus::ProtocolDelegate>;
    using CppOptType = std::shared_ptr<::Janus::ProtocolDelegate>;
    using ObjcType = id<JanusProtocolDelegate>;

    using Boxed = ProtocolDelegate;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
