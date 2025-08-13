#include "show_window.hpp"

namespace snow
{
	SnowWindow::SnowWindow(size_t w, size_t h, std::string name) 
							: width{w}, height{h}, nwindow{name}
	{
		initW();
	}
	void SnowWindow::initW()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API); //So we disable opengl since we use vulkan
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); //so we dont want to resize the window
		window = glfwCreateWindow(width, height, nwindow.c_str(), 0, 0);
	}
	SnowWindow::~SnowWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

}