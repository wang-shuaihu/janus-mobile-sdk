// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#include "native_janus_conf.hpp"  // my header
#include "djinni/jni/Marshal.hpp"

namespace djinni_generated {

NativeJanusConf::NativeJanusConf() : ::djinni::JniInterface<::Janus::JanusConf, NativeJanusConf>("com/github/helloiampau/janus/generated/JanusConf$CppProxy") {}

NativeJanusConf::~NativeJanusConf() = default;

NativeJanusConf::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeJanusConf::JavaProxy::~JavaProxy() = default;

std::string NativeJanusConf::JavaProxy::url() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJanusConf>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_url);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::string NativeJanusConf::JavaProxy::plugin() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeJanusConf>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_plugin);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_JanusConf_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Janus::JanusConf>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_github_helloiampau_janus_generated_JanusConf_00024CppProxy_native_1url(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::JanusConf>(nativeRef);
        auto r = ref->url();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_com_github_helloiampau_janus_generated_JanusConf_00024CppProxy_native_1plugin(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::JanusConf>(nativeRef);
        auto r = ref->plugin();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
