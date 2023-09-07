#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Pengine {

	class PENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}
//CORE LOG MACROS
#define PE_CORE_TRACE(...)    ::Pengine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PE_CORE_INFO(...)     ::Pengine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PE_CORE_WARN(...)     ::Pengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PE_CORE_ERROR(...)    ::Pengine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PE_CORE_FATAL(...)    ::Pengine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client LOG MACROS
#define PE_TRACE(...)    ::Pengine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PE_INFO(...)     ::Pengine::Log::GetClientLogger()->info(__VA_ARGS__)
#define PE_WARN(...)     ::Pengine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PE_ERROR(...)    ::Pengine::Log::GetClientLogger()->error(__VA_ARGS__)
#define PE_FATAL(...)    ::Pengine::Log::GetClientLogger()->fatal(__VA_ARGS__)
