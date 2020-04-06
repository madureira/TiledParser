#include "pch.h"
#include "../include/TiledParser/TileMap.h"
#include <string>

using namespace TiledParser;

namespace {

	class TileMapTest : public ::testing::Test {};

	TEST(TileMapTest, CompressionLevel) {
		TileMap map("Resources/empty_map.json");

		EXPECT_EQ(map.getCompressionLevel(), -1);
	}

}
