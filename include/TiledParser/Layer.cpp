#include "Layer.h"
#include <string>

namespace TiledParser {

	Layer::Layer(
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
		int y
	)
		: m_Id(id)
		, m_Name(name)
		, m_Compression(compression)
		, m_Encoding(encoding)
		, m_Type(type)
		, m_Width(width)
		, m_Height(height)
		, m_Opacity(opacity)
		, m_Visible(visible)
		, m_X(x)
		, m_Y(y)
	{
	}

	const int& Layer::GetId() const
	{
		return this->m_Id;
	}

	const std::string& Layer::GetName() const
	{
		return this->m_Name;
	}

	const std::string& Layer::GetCompression() const
	{
		return this->m_Compression;
	}

	const std::string& Layer::GetEncoding() const
	{
		return this->m_Encoding;
	}

	const std::string& Layer::GetType() const
	{
		return this->m_Type;
	}

	const int& Layer::GetWidth() const
	{
		return this->m_Width;
	}

	const int& Layer::GetHeight() const
	{
		return this->m_Height;
	}

	const float& Layer::GetOpacity() const
	{
		return this->m_Opacity;
	}

	const bool Layer::IsVisible() const
	{
		return this->m_Visible;
	}

	const int& Layer::GetX() const
	{
		return this->m_X;
	}

	const int& Layer::GetY() const
	{
		return this->m_Y;
	}

}
