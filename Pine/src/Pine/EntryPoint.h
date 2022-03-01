#pragma once

#ifdef PN_PLATFORM_WINDOWS

extern Pine::Application* Pine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Pine::CreateApplication();
	app->Run();
	delete app;
}

#endif

/*
#ifdef PN_PLATFORM_WINDOWS

extern Pine::Application* Pine::CreateApplication();

int main(int argc, char** argv)
{
	Pine::Log::Init();
	PN_CORE_WARN("Init Log!");
	int a = 5;
	PN_INFO("THE PINE ENGINE");

	auto app = Pine::CreateApplication();
	app->Run();
	delete app;
}

#endif
*/
