#pragma once

#include <string>

namespace TiledParser {

	class Object final
	{
	private:
		int m_Id;
		std::string m_Name;
		std::string m_Type;
		bool m_Visible;
		int m_Rotation;
		float m_Width;
		float m_Height;
		float m_X;
		float m_Y;

	public:
		Object(
			int id,
			std::string name,
			std::string type,
			bool visible,
			int rotation,
			float width,
			float height,
			float x,
			float y
		);

		const int& GetId() const;
		const std::string& GetName() const;
		const std::string& GetType() const;
		const bool& IsVisible() const;
		const int& GetRotation() const;
		const float& GetWidth() const;
		const float& GetHeight() const;
		const float& GetX() const;
		const float& GetY() const;
	};

}