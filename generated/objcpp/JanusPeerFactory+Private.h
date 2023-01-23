// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#include "peer_factory.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol JanusPeerFactory;

namespace djinni_generated {

class PeerFactory
{
public:
    using CppType = std::shared_ptr<::Janus::PeerFactory>;
    using CppOptType = std::shared_ptr<::Janus::PeerFactory>;
    using ObjcType = id<JanusPeerFactory>;

    using Boxed = PeerFactory;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

