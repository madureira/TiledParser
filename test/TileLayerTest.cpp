#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include "../include/TiledParser/TileLayer.h"
#include <string>
#include <vector>

using namespace TiledParser;

namespace {

	class TileLayerTest : public ::testing::Test {};

	TileMap map("Resources/empty_map.json");

	TEST(TileLayerTest, Id)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetId(), 1);
	}

	TEST(TileLayerTest, Name)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetName(), "Tile Layer 1");
	}

	TEST(TileLayerTest, Compression)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetCompression(), "");
	}

	TEST(TileLayerTest, Encoding)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetEncoding(), "base64");
	}

	TEST(TileLayerTest, Type)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetType(), "tilelayer");
	}

	TEST(TileLayerTest, Width)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetWidth(), 4);
	}

	TEST(TileLayerTest, Height)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetHeight(), 4);
	}

	TEST(TileLayerTest, Opacity)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_FLOAT_EQ(firstLayer.GetOpacity(), 1);
	}

	TEST(TileLayerTest, Visible)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_TRUE(firstLayer.IsVisible());
	}

	TEST(TileLayerTest, X)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetX(), 0);
	}

	TEST(TileLayerTest, Y)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		EXPECT_EQ(firstLayer.GetY(), 0);
	}

	TEST(TileLayerTest, Data)
	{
		TileLayer firstLayer = map.GetTileLayers().at(0);

		std::vector<int32_t> tileIds = firstLayer.GetTileIds();

		EXPECT_EQ(tileIds.size(), 16);
	}

	TEST(TileLayerTest, FilledData)
	{
		TileMap map6x6("Resources/map_with_tileset.json");

		TileLayer firstLayer = map6x6.GetTileLayers().at(0);

		std::vector<int32_t> tileIds = firstLayer.GetTileIds();

		EXPECT_EQ(tileIds.size(), 36);
		EXPECT_EQ(tileIds.at(0), 1);
		EXPECT_EQ(tileIds.at(1), 1);
		EXPECT_EQ(tileIds.at(2), 1);
		EXPECT_EQ(tileIds.at(3), 1);
		EXPECT_EQ(tileIds.at(4), 1);
		EXPECT_EQ(tileIds.at(5), 1);
		EXPECT_EQ(tileIds.at(6), 2);
		EXPECT_EQ(tileIds.at(7), 2);
		EXPECT_EQ(tileIds.at(8), 2);
		EXPECT_EQ(tileIds.at(9), 2);
		EXPECT_EQ(tileIds.at(10), 2);
		EXPECT_EQ(tileIds.at(11), 2);
		EXPECT_EQ(tileIds.at(12), 3);
		EXPECT_EQ(tileIds.at(13), 3);
		EXPECT_EQ(tileIds.at(14), 3);
		EXPECT_EQ(tileIds.at(15), 3);
		EXPECT_EQ(tileIds.at(16), 3);
		EXPECT_EQ(tileIds.at(17), 3);
		EXPECT_EQ(tileIds.at(18), 5);
		EXPECT_EQ(tileIds.at(19), 5);
		EXPECT_EQ(tileIds.at(20), 5);
		EXPECT_EQ(tileIds.at(21), 5);
		EXPECT_EQ(tileIds.at(22), 5);
		EXPECT_EQ(tileIds.at(23), 5);
		EXPECT_EQ(tileIds.at(24), 47);
		EXPECT_EQ(tileIds.at(25), 47);
		EXPECT_EQ(tileIds.at(26), 47);
		EXPECT_EQ(tileIds.at(27), 47);
		EXPECT_EQ(tileIds.at(28), 47);
		EXPECT_EQ(tileIds.at(29), 47);
		EXPECT_EQ(tileIds.at(30), 66);
		EXPECT_EQ(tileIds.at(31), 66);
		EXPECT_EQ(tileIds.at(32), 66);
		EXPECT_EQ(tileIds.at(33), 66);
		EXPECT_EQ(tileIds.at(34), 66);
		EXPECT_EQ(tileIds.at(35), 66);
	}

}
