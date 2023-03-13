#include "gtest/gtest.h"
#include "src/helloWorld.h"

TEST(HelloTest, World)
{
	EXPECT_EQ(greeting, "Hello World!");
}