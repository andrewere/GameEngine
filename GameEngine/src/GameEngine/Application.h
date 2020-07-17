#pragma once

#include "Core.h"

namespace GE {
	class GAME_ENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in CLIENT
	Application* CreateApplication();
}
