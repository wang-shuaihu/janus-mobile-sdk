// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#import "JanusConstraints.h"
#include "constraints.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class JanusConstraints;

namespace djinni_generated {

struct Constraints
{
    using CppType = ::Janus::Constraints;
    using ObjcType = ::JanusConstraints*;

    using Boxed = Constraints;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated
