//
// pch.cpp
//


#include "pch.h"
int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currSum = nums[0];
    for (int i = 1; i < n; i++) {
        if (currSum < 0) {
            currSum = nums[i];
        }
        else {
            currSum += nums[i];
        }

        if (maxSum < currSum) {
            maxSum = currSum;
        }
        
    }

    return maxSum;
}