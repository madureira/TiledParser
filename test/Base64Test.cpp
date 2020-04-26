#include "pch.h"
#include "../include/TiledParser/Base64.h"

using namespace TiledParser;

namespace {

	class Base64Test : public ::testing::Test {};

	TEST(Base64Test, Encode)
	{
		EXPECT_EQ(Base64::Encode("Hello, World!"), "SGVsbG8sIFdvcmxkIQ==");
	}

	TEST(Base64Test, Decode)
	{
		std::string decoded;

		Base64::Decode("SGVsbG8sIFdvcmxkIQ==", decoded);

		EXPECT_EQ(decoded, "Hello, World!");
	}

	TEST(Base64Test, DecodeError)
	{
		std::string decoded;

		std::string errorMessage = Base64::Decode("SGVsbGFdvcmxkIQ==", decoded);

		EXPECT_FALSE(decoded == "Hello, World!");
		EXPECT_EQ(errorMessage, "Input data size is not a multiple of 4");
	}

}
