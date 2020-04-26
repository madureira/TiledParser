#pragma once

#include <string>
#include <vector>

namespace TiledParser {

	class Layer final
	{
	private:
		int m_Id;
		std::string m_Name;
		std::string m_Compression;
		std::string m_Encoding;
		std::string m_Type;
		int m_Width;
		int m_Height;
		float m_Opacity;
		bool m_Visible;
		int m_X;
		int m_Y;
		std::vector<int> m_TileIds;

	public:
		Layer(
			int id,
			std::string name,
			std::string compression,
			std::string encoding,
			std::string type,
			int width,
			int height,
			float opacity,
			bool visible,
			int x,
			int y,
			std::vector<int> tileIds
		);

		const int& GetId() const;
		const std::string& GetName() const;
		const std::string& GetCompression() const;
		const std::string& GetEncoding() const;
		const std::string& GetType() const;
		const int& GetWidth() const;
		const int& GetHeight() const;
		const float& GetOpacity() const;
		const bool& IsVisible() const;
		const int& GetX() const;
		const int& GetY() const;
		const std::vector<int> GetTileIds() const;
	};

}
