#pragma once
#include "Core.h"
namespace Hazel {
	
	class HZ_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	//TO be defined in CLIENT
	Application* CreateApplication();
}
