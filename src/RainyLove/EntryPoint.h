#pragma once
//#include "Application.h"

//#ifdef RL_PLATFORM_WINDOWS

extern RainyLove::Application* RainyLove::CreateApplication();

int main(int argc, char** argv)
{
	//std::cout << "RainyLove Engine" << std::endl;
	auto app = RainyLove::CreateApplication();
	app->Run();
	delete app;
}

//#endif