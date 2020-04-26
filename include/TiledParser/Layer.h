#pragma once

#include <string>

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

	public:
		Layer(
			int id,
			std::string name,
			std::string compression,
			std::string encoding,
			std::string type,
			int width,
			int height
		);

		const int& GetId() const;
		const std::string& GetName() const;
		const std::string& GetCompression() const;
		const std::string& GetEncoding() const;
		const std::string& GetType() const;
		const int& GetWidth() const;
		const int& GetHeight() const;
	};

}
