#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include "../include/TiledParser/TileSet.h"
#include <string>
#include <vector>

using namespace TiledParser;

namespace {

	class TileSetTest : public ::testing::Test {};

	TileMap map("Resources/map_with_tileset.json");

	TEST(TileSetTest, FirstGID)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetFirstGID(), 1);
	}

	TEST(TileSetTest, Source)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetSource(), "terrain.json");
	}

	TEST(TileSetTest, TiledVersion)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetTiledVersion(), "1.3.4");
	}

	TEST(TileSetTest, Version)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_FLOAT_EQ(firstTileSet.GetVersion(), 1.2f);
	}

	TEST(TileSetTest, Type)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetType(), "tileset");
	}

	TEST(TileSetTest, Name)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetName(), "Terrain");
	}

	TEST(TileSetTest, Image)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetImage(), "tileset.png");
	}

	TEST(TileSetTest, ImageWidth)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetImageWidth(), 440);
	}

	TEST(TileSetTest, ImageHeight)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetImageHeight(), 280);
	}

	TEST(TileSetTest, TileWidth)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetTileWidth(), 40);
	}

	TEST(TileSetTest, TileHeight)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetTileHeight(), 40);
	}

	TEST(TileSetTest, TileCount)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetTileCount(), 77);
	}

	TEST(TileSetTest, Columns)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetColumns(), 11);
	}

	TEST(TileSetTest, Margin)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetMargin(), 0);
	}

	TEST(TileSetTest, Spacing)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetSpacing(), 0);
	}

	TEST(TileSetTest, TransparentColor)
	{
		TileSet firstTileSet = map.GetTileSets().at(0);

		EXPECT_EQ(firstTileSet.GetTransparentColor(), "#ff00ff");
	}

}
