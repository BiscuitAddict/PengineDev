#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern Pengine::Application* Pengine::CreateApplication();

int main(int argc, char** argv) {
	
	Pengine::Log::Init();

	PE_CORE_WARN("Initialized Log!");

	PE_INFO("Initialized Log!");

	auto app = Pengine::CreateApplication();
	app->Run();
	delete app;
}

#endif