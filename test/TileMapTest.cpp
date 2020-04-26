#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include <string>

using namespace TiledParser;

namespace {

	class TileMapTest : public ::testing::Test {};

	TileMap map("Resources/empty_map.json");

	TEST(TileMapTest, Version)
	{
		EXPECT_FLOAT_EQ(map.GetVersion(), 1.2f);
	}

	TEST(TileMapTest, CompressionLevel)
	{
		EXPECT_EQ(map.GetCompressionLevel(), -1);
	}

	TEST(TileMapTest, Type)
	{
		EXPECT_EQ(map.GetType(), "map");
	}

	TEST(TileMapTest, Orientation)
	{
		EXPECT_EQ(map.GetOrientation(), "orthogonal");
	}

	TEST(TileMapTest, Renderorder)
	{
		EXPECT_EQ(map.GetRenderOrder(), "right-down");
	}

	TEST(TileMapTest, Width)
	{
		EXPECT_EQ(map.GetWidth(), 4);
	}

	TEST(TileMapTest, Height)
	{
		EXPECT_EQ(map.GetHeight(), 4);
	}

	TEST(TileMapTest, NextLayerId)
	{
		EXPECT_EQ(map.GetNextLayerId(), 2);
	}

	TEST(TileMapTest, NextObjectId)
	{
		EXPECT_EQ(map.GetNextObjectId(), 1);
	}

	TEST(TileMapTest, TiledVersion)
	{
		EXPECT_EQ(map.GetTiledVersion(), "1.3.3");
	}

	TEST(TileMapTest, TileWidth)
	{
		EXPECT_EQ(map.GetTileWidth(), 40);
	}

	TEST(TileMapTest, TileHeight)
	{
		EXPECT_EQ(map.GetTileHeight(), 40);
	}

	TEST(TileMapTest, Layers)
	{
		EXPECT_EQ(map.GetLayers().size(), 1);
	}

}
