#include <Pengine.h>

class SandBox : public Pengine::Application
{
public:
	SandBox() 
	{
	}
	~SandBox()
	{
	}
};

Pengine::Application* Pengine::CreateApplication()
{
	return new SandBox();
}