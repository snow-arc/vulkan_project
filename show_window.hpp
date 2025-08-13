#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace snow
{
	class SnowWindow
	{
		public:
			SnowWindow(size_t w, size_t h, std::string name);
			~SnowWindow();
			bool shoudlClose() {return glfwWindowShouldClose(window);};
		private:
			GLFWwindow *window;
			void initW();
			size_t width;
			size_t height;
			std::string nwindow; 		
	};
}