#pragma once

#include "Core.h"

namespace Pengine {
	
	 class PENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	 // To be defined in client
	 Application* CreateApplication();
}

