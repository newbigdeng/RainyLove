#include "RainyLove.h"


//extern RainyLove::Application* RainyLove::CreateApplication();
//
//int main(int argc, char** argv)
//{
//	//std::cout << "RainyLove Engine" << std::endl;
//	auto app = RainyLove::CreateApplication();
//	app->Run();
//	delete app;
//}

class SandBox :public RainyLove::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

//RainyLove::Application* RainyLove::CreateApplication()
//{
//	return new SandBox();
//}

namespace RainyLove {
	// 实现CreateApplication函数，返回你的应用实例
	Application* CreateApplication() {
		return new SandBox();  // 假设Sandbox是你定义的Application派生类
	}
}

