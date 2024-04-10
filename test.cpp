#include "pch.h"

TEST(TestCaseName, TestName1) {
	int arr[20] = { -4,1,2,-2 };
	EXPECT_EQ(3, maxSubarraySum(arr, 4));
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
	int arr[20] = { 5,-2,3,-1 };
	EXPECT_EQ(6, maxSubarraySum(arr, 4));
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName3) {
	int arr[20] = { 4,1,6,-5 };
	EXPECT_EQ(11, maxSubarraySum(arr, 4));
	EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName4) {
	int arr[20] = { -2,11,-4,13,-5 };
	EXPECT_EQ(20, maxSubarraySum(arr, 5));
	EXPECT_TRUE(true);
}