#pragma once

#include <string>

namespace TiledParser {

	class TiledMap final
	{
	private:
		std::string m_FilePath;
		std::string m_BackgroundColor;
		int m_CompressionLevel;

	public:
		TiledMap(std::string filePath);

		const std::string& getBackgroundColor() const;
		const int& getCompressionLevel() const;

		static int Sum(int a, int b)
		{
			return a + b;
		}
	};

}
