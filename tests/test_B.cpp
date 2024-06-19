#include <gtest/gtest.h>
#include "NOD_B.h"
#include "NOD.h"

TEST(NOD_B_test, call_func) {
	NOD_B nod_b;
	int result = nod_b.useNOD(30, 18);
	
	EXPECT_EQ(result, 6);
}

TEST(NOD_B_test, call_func2) {
	NOD_B nod_b;
	int result = nod_b.useNOD(20, 10);
	
	EXPECT_EQ(result, 10);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
