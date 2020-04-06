#include "TileMap.h"
#include <fstream>
#include <filesystem>
#include <nlohmann/json.hpp>
#include <iostream>

namespace fs = std::filesystem;

namespace TiledParser {

	using JSON = nlohmann::json;

	TileMap::TileMap(std::string filePath)
		: m_FilePath(filePath)
	{
		std::ifstream file(filePath);

		if (file.is_open()) {
			std::string jsonStr((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
			file.close();

			auto json = JSON::parse(jsonStr);
			this->m_CompressionLevel = json["compressionlevel"].get<int>();
			//this->m_BackgroundColor = json["backgroundcolor"].get<std::string>();
		}
		else {
			std::cout << "ERROR: Failed to read file " << filePath << std::endl;
			perror(filePath.c_str());
		}
	}

	const std::string& TileMap::getBackgroundColor() const
	{
		return this->m_BackgroundColor;
	}

	const int& TileMap::getCompressionLevel() const
	{
		return this->m_CompressionLevel;
	}
	
}
