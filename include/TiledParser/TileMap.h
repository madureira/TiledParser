#pragma once

#include <string>
#include <vector>
#include "Layer.h"

namespace TiledParser {

	class TileMap final
	{
	private:
		std::string m_FilePath;
		float m_Version;
		int m_CompressionLevel;
		std::string m_Type;
		std::string m_Orientation;
		std::string m_RenderOrder;
		int m_Width;
		int m_Height;
		int m_NextLayerId;
		int m_NextObjectId;
		std::string m_TiledVersion;
		int m_TileWidth;
		int m_TileHeight;
		std::string m_BackgroundColor;
		std::vector<Layer> m_Layers;

	public:
		TileMap(std::string filePath);

		const float& GetVersion() const;
		const std::string& GetType() const;
		const int& GetCompressionLevel() const;
		const std::string& GetOrientation() const;
		const std::string& GetRenderOrder() const;
		const int& GetWidth() const;
		const int& GetHeight() const;
		const int& GetNextLayerId() const;
		const int& GetNextObjectId() const;
		const std::string& GetTiledVersion() const;
		const int& GetTileWidth() const;
		const int& GetTileHeight() const;
		const std::string& GetBackgroundColor() const;
		const std::vector<Layer> GetLayers() const;

	private:
		const bool Parse(std::string& jsonStr);
	};

}
