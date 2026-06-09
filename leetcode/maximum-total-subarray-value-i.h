#pragma once
#include <head.h>

class Solution {
public:
    long long maxTotalValue(vector<int> &nums, int k) {
        ranges::sort(nums);

        vector<unsigned long long> nums_new(nums.begin(), nums.end());

        return (nums_new[nums_new.size() - 1] - nums_new[0]) * k;
    }
};
