#pragma once

#include "show_window.hpp"
#include "lve_pipline.hpp"

namespace snow
{
	class First
	{
		public:
			static constexpr size_t WIDTH = 800;
			static constexpr size_t HEIGHT = 600;
			void run();
		private:
			SnowWindow swindow{WIDTH, HEIGHT, "HeLLo Vulkan"};
			snowPipline spip{"shaders/snow_shaders.vert.spv", "shaders/snow_shaders.frag.spv"};
	};
}