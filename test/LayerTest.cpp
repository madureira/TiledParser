#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include "../include/TiledParser/Layer.h"
#include <string>
#include <vector>

using namespace TiledParser;

namespace {

	class LayerTest : public ::testing::Test {};

	TileMap map("Resources/empty_map.json");

	TEST(LayerTest, Id)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetId(), 1);
	}

	TEST(LayerTest, Name)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetName(), "Tile Layer 1");
	}

	TEST(LayerTest, Compression)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetCompression(), "");
	}

	TEST(LayerTest, Encoding)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetEncoding(), "base64");
	}

	TEST(LayerTest, Type)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetType(), "tilelayer");
	}

	TEST(LayerTest, Width)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetWidth(), 4);
	}

	TEST(LayerTest, Height)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetHeight(), 4);
	}

	TEST(LayerTest, Opacity)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_FLOAT_EQ(firstLayer.GetOpacity(), 1);
	}

	TEST(LayerTest, Visible)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_TRUE(firstLayer.IsVisible());
	}

	TEST(LayerTest, X)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetX(), 0);
	}

	TEST(LayerTest, Y)
	{
		Layer firstLayer = map.GetLayers().at(0);

		EXPECT_EQ(firstLayer.GetY(), 0);
	}

	TEST(LayerTest, Data)
	{
		Layer firstLayer = map.GetLayers().at(0);

		std::vector<int32_t> tileIds = firstLayer.GetTileIds();

		EXPECT_EQ(tileIds.size(), 0);
	}

}
