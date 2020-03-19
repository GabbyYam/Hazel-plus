#pragma once
#ifdef HZ_PLATFORM_WINDOWS
/**
 calling extern function in sandboxapp sandbox::createApplication
 and return a entryPoint 
*/
extern Hazel::Application* Hazel::CreateApplication(); 
int main(int argc , char** argv) {
	Hazel::Log::Init();
	HZ_CORE_INFO("Init successfully!");
	HZ_INFO("Fantastic! Var={0}", 100);
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
