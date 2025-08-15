#include "lve_pipline.hpp"

#include <fstream>
#include <iostream>

namespace snow
{
	std::vector<char> snowPipline::readF(const std::string &filepath)
	{
		std::ifstream file(filepath, std::ios::ate | std::ios::binary);
		if (!file.is_open())
		{
			throw std::runtime_error("failed to open file" + filepath);
		}
		size_t	filesize = static_cast<size_t>(file.tellg());
		std::vector<char> buffer(filesize);
		file.seekg(0);
		file.read(buffer.data(), filesize);
		file.close();
		return buffer;
	}
	void snowPipline::createGraphic(
		const std::string& verFile, const std::string& frag)
	{
		auto vercode = readF(verFile);
		auto fragcode = readF(frag);
		std::cout<< "vertex shaders code size : "<<vercode.size() <<"\n";
		std::cout<< "frag shaders code size : "<<fragcode.size() <<std::endl;


	}
	snowPipline::snowPipline(const std::string& verFile, const std:: string& frag)
	{
		createGraphic(verFile, frag);
	}
}