#include "Log.h"

namespace GE
{
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_CLientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Game Engine");
		s_CoreLogger->set_level(spdlog::level::trace);
		s_CLientLogger = spdlog::stdout_color_mt("APP");
		s_CLientLogger->set_level(spdlog::level::trace);
	}
}