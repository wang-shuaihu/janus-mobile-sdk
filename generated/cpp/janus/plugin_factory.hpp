// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace Janus {

class Plugin;
class Protocol;

class PluginFactory {
public:
    virtual ~PluginFactory() {}

    virtual std::shared_ptr<Plugin> create(int64_t handleId, const std::shared_ptr<Protocol> & owner) = 0;
};

}  // namespace Janus
