// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from janus-client.djinni

#pragma once

#include <cstdint>
#include <string>
#include <utility>

namespace Janus {

struct JanusError final {
    int64_t code;
    std::string message;

    JanusError(int64_t code_,
               std::string message_)
    : code(std::move(code_))
    , message(std::move(message_))
    {}

    JanusError()
    : code()
    , message()
    {}
};

}  // namespace Janus
