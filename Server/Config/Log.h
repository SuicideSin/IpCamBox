#pragma once

#include <memory>

#undef CHAR_WIDTH
#define SPDLOG_ENABLE_SYSLOG 1
#include <spdlog/spdlog.h>


const std::shared_ptr<spdlog::logger>& ConfigLog();
