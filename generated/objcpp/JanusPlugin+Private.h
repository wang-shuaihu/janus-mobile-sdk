// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#include "plugin.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol JanusPlugin;

namespace djinni_generated {

class Plugin
{
public:
    using CppType = std::shared_ptr<::Janus::Plugin>;
    using CppOptType = std::shared_ptr<::Janus::Plugin>;
    using ObjcType = id<JanusPlugin>;

    using Boxed = Plugin;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

