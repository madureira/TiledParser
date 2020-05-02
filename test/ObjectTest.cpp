#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include "../include/TiledParser/ObjectGroup.h"
#include "../include/TiledParser/Object.h"
#include <string>
#include <vector>

using namespace TiledParser;

namespace {

	class ObjectTest : public ::testing::Test {};

	TileMap map("Resources/map_with_tileset.json");

	TEST(ObjectTest, Id)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_EQ(object.GetId(), 1);
	}

	TEST(ObjectTest, Name)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_EQ(object.GetName(), "");
	}

	TEST(ObjectTest, Type)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_EQ(object.GetType(), "");
	}

	TEST(ObjectTest, Visible)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_TRUE(object.IsVisible());
	}

	TEST(ObjectTest, Width)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_FLOAT_EQ(object.GetWidth(), 125.f);
	}

	TEST(ObjectTest, Height)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_FLOAT_EQ(object.GetHeight(), 129.5f);
	}

	TEST(ObjectTest, X)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_FLOAT_EQ(object.GetX(), 61.5f);
	}

	TEST(ObjectTest, Y)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(0);

		EXPECT_FLOAT_EQ(object.GetY(), 53.5f);
	}
}
