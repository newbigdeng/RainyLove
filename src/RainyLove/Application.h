#pragma once
#include "Core.h"


namespace RainyLove {
	class RAINYLOVE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//这个函数在客户端中定义
	Application* CreateApplication();
}

