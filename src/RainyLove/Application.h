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

	//��������ڿͻ����ж���
	Application* CreateApplication();
}

