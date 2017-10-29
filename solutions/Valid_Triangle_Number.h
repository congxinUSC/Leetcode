//
// Created by congxin on 10/19/17.
//

// Leetcode 611

#ifndef TEST_VALID_TRIANGLE_NUMBER_H
#define TEST_VALID_TRIANGLE_NUMBER_H
#include <vector>
#include <algorithm>
class Valid_Triangle_Number {
public:
    int helper(std::vector<int> nums, int hi) {
        int left=0;
        int right=hi-1;
        int target=nums[hi];
        int ret=0;
        while(left<right){
            if(nums[left]+nums[right]>target){
                ret+=right-left;
                right--;
            }else
                left++;
        }
        return ret;
    }

    int triangleNumber(std::vector<int> nums) {
        int ret=0;
        int hi=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(;hi>=2;hi--){
            ret+=helper(nums,hi);
        }
        return ret;
    }
};


#endif //TEST_VALID_TRIANGLE_NUMBER_H
