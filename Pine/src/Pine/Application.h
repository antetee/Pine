#pragma once

#include "Core.h"
namespace Pine
{
	class PINE_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

/*
#include "Pine/Core.h"

//#include "Window.h"
//#include "Pine/LayerStack.h"
//#include "Events/Event.h"
//#include "Events/ApplicationEvent.h"

namespace Pine
{
	class PINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

		inline Window& GetWindow() { return *m_Window; }
		inline static Application& Get() { return *s_Instance; }
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	private:
		static Application* s_Instance;
	};

	//To be defined in client
	Application* CreateApplication();
}
*/
