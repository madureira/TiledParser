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

		EXPECT_EQ(object.GetType(), "rectangle");
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

	TEST(ObjectTest, Polygon)
	{
		ObjectGroup objectGroup = map.GetObjectGroups().at(0);
		Object object = objectGroup.GetObjects().at(1);
		std::vector<Point> points = object.GetPolygon();

		EXPECT_EQ(object.GetType(), "polygon");
		EXPECT_EQ(points.size(), 5);
		EXPECT_FLOAT_EQ(points.at(0).x, 0.f);
		EXPECT_FLOAT_EQ(points.at(0).y, 0.f);
		EXPECT_FLOAT_EQ(points.at(1).x, 13.f);
		EXPECT_FLOAT_EQ(points.at(1).y, 14.3333333333333f);
		EXPECT_FLOAT_EQ(points.at(2).x, 48.6666666666667f);
		EXPECT_FLOAT_EQ(points.at(2).y, -6.f);
		EXPECT_FLOAT_EQ(points.at(3).x, 45.6666666666667f);
		EXPECT_FLOAT_EQ(points.at(3).y, 29.f);
		EXPECT_FLOAT_EQ(points.at(4).x, -2.66666666666667f);
		EXPECT_FLOAT_EQ(points.at(4).y, 30.f);
	}
}
