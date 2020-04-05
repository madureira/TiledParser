#include "pch.h"
#include "../include/TiledParser/TiledMap.h"

namespace {

	class TileMapTest : public ::testing::Test {};

	TEST(TestCaseName, TestName) {
		EXPECT_EQ(TiledParser::TiledMap::Sum(1, 2), 3);
		EXPECT_TRUE(true);
	}

}
