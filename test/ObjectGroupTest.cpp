#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include "../include/TiledParser/ObjectGroup.h"
#include <string>
#include <vector>

using namespace TiledParser;

namespace {

	class ObjectGroupTest : public ::testing::Test {};

	TileMap map("Resources/map_with_tileset.json");

	TEST(ObjectGroupTest, Id)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetId(), 2);
	}

	TEST(ObjectGroupTest, Name)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetName(), "SomeObjects");
	}

	TEST(ObjectGroupTest, Type)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetType(), "objectgroup");
	}

	TEST(ObjectGroupTest, Opacity)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetOpacity(), 1);
	}

	TEST(ObjectGroupTest, Visible)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_TRUE(objectGroup.IsVisible());
	}

	TEST(ObjectGroupTest, X)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetX(), 0);
	}

	TEST(ObjectGroupTest, Y)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetY(), 0);
	}

	TEST(ObjectGroupTest, DrawOrder)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetDrawOrder(), "topdown");
	}

	TEST(ObjectGroupTest, Objects)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);

		EXPECT_EQ(objectGroup.GetObjects().size(), 4);
	}

}
