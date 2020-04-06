#pragma once

#include <string>

namespace TiledParser {

	class TileMap final
	{
	private:
		std::string m_FilePath;
		std::string m_BackgroundColor;
		int m_CompressionLevel;

	public:
		TileMap(std::string filePath);

		const std::string& getBackgroundColor() const;
		const int& getCompressionLevel() const;
	};

}
