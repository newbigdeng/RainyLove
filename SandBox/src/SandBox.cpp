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
	// ʵ��CreateApplication�������������Ӧ��ʵ��
	Application* CreateApplication() {
		return new SandBox();  // ����Sandbox���㶨���Application������
	}
}

