#pragma once

#include <string>
#include <vector>

namespace snow
{
	class snowPipline
	{
		public:
			snowPipline(const std::string& verFile, const std:: string& frag);
		private:
			static std::vector<char> readF(const std::string & filepath);
			void createGraphic(const std::string& verFile, const std::string& frag);
	};
}