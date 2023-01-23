// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "peer_factory.hpp"

namespace djinni_generated {

class NativePeerFactory final : ::djinni::JniInterface<::Janus::PeerFactory, NativePeerFactory> {
public:
    using CppType = std::shared_ptr<::Janus::PeerFactory>;
    using CppOptType = std::shared_ptr<::Janus::PeerFactory>;
    using JniType = jobject;

    using Boxed = NativePeerFactory;

    ~NativePeerFactory();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePeerFactory>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePeerFactory>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePeerFactory();
    friend ::djinni::JniClass<NativePeerFactory>;
    friend ::djinni::JniInterface<::Janus::PeerFactory, NativePeerFactory>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Janus::PeerFactory
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::shared_ptr<::Janus::Peer> create(int64_t id, const std::shared_ptr<::Janus::Protocol> & owner) override;

    private:
        friend ::djinni::JniInterface<::Janus::PeerFactory, ::djinni_generated::NativePeerFactory>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/github/helloiampau/janus/generated/PeerFactory") };
    const jmethodID method_create { ::djinni::jniGetMethodID(clazz.get(), "create", "(JLcom/github/helloiampau/janus/generated/Protocol;)Lcom/github/helloiampau/janus/generated/Peer;") };
};

}  // namespace djinni_generated
