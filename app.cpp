#include "app.hpp"

namespace snow
{
	void First::run()
	{
		while (!swindow.shoudlClose())
		{
			glfwPollEvents();
		}
	}
}