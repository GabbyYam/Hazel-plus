#include "Log.h"

namespace Hazel {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init() {
		spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
		s_CoreLogger = spdlog::default_logger();       //default color logger
		s_CoreLogger->set_level(spdlog::level::trace); //trave level with logger
		s_ClientLogger = spdlog::default_logger();
		s_CoreLogger->set_level(spdlog::level::trace);

	}
}	