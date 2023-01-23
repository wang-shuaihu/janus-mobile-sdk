// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include "djinni/jni/djinni_support.hpp"
#include "protocol.hpp"

namespace djinni_generated {

class NativeProtocol final : ::djinni::JniInterface<::Janus::Protocol, NativeProtocol> {
public:
    using CppType = std::shared_ptr<::Janus::Protocol>;
    using CppOptType = std::shared_ptr<::Janus::Protocol>;
    using JniType = jobject;

    using Boxed = NativeProtocol;

    ~NativeProtocol();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeProtocol>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeProtocol>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeProtocol();
    friend ::djinni::JniClass<NativeProtocol>;
    friend ::djinni::JniInterface<::Janus::Protocol, NativeProtocol>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Janus::Protocol
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::string name() override;
        void init(const std::shared_ptr<::Janus::JanusConf> & conf, const std::shared_ptr<::Janus::Platform> & platform, const std::shared_ptr<::Janus::ProtocolDelegate> & delegate) override;
        void dispatch(const std::string & command, const std::shared_ptr<::Janus::Bundle> & payload) override;
        void hangup() override;
        void close() override;
        void onOffer(const std::string & sdp, const std::shared_ptr<::Janus::Bundle> & context) override;
        void onAnswer(const std::string & sdp, const std::shared_ptr<::Janus::Bundle> & context) override;
        void onIceCandidate(const std::string & mid, int32_t index, const std::string & sdp, int64_t id) override;
        void onIceCompleted(int64_t id) override;

    private:
        friend ::djinni::JniInterface<::Janus::Protocol, ::djinni_generated::NativeProtocol>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/github/helloiampau/janus/generated/Protocol") };
    const jmethodID method_name { ::djinni::jniGetMethodID(clazz.get(), "name", "()Ljava/lang/String;") };
    const jmethodID method_init { ::djinni::jniGetMethodID(clazz.get(), "init", "(Lcom/github/helloiampau/janus/generated/JanusConf;Lcom/github/helloiampau/janus/generated/Platform;Lcom/github/helloiampau/janus/generated/ProtocolDelegate;)V") };
    const jmethodID method_dispatch { ::djinni::jniGetMethodID(clazz.get(), "dispatch", "(Ljava/lang/String;Lcom/github/helloiampau/janus/generated/Bundle;)V") };
    const jmethodID method_hangup { ::djinni::jniGetMethodID(clazz.get(), "hangup", "()V") };
    const jmethodID method_close { ::djinni::jniGetMethodID(clazz.get(), "close", "()V") };
    const jmethodID method_onOffer { ::djinni::jniGetMethodID(clazz.get(), "onOffer", "(Ljava/lang/String;Lcom/github/helloiampau/janus/generated/Bundle;)V") };
    const jmethodID method_onAnswer { ::djinni::jniGetMethodID(clazz.get(), "onAnswer", "(Ljava/lang/String;Lcom/github/helloiampau/janus/generated/Bundle;)V") };
    const jmethodID method_onIceCandidate { ::djinni::jniGetMethodID(clazz.get(), "onIceCandidate", "(Ljava/lang/String;ILjava/lang/String;J)V") };
    const jmethodID method_onIceCompleted { ::djinni::jniGetMethodID(clazz.get(), "onIceCompleted", "(J)V") };
};

}  // namespace djinni_generated
