//
// Created by congxin on 10/21/17.
//

// Leetcode 560

#ifndef TEST_SUBARRAY_SUM_EQUALS_K_H
#define TEST_SUBARRAY_SUM_EQUALS_K_H
#include <vector>

class Subarray_Sum_Equals_K {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int sz=nums.size();
        for(int i=1;i<sz;i++){
            nums[i]+=nums[i-1];
        }
        int ret=0;
        for(int i=0;i<sz;i++)
        {
            if(nums[i]==k) ret++;
            for(int j=0;j<i;j++){
                if(nums[i]-nums[j]==k) ret++;
            }
        }
        return ret;
    }
};


#endif //TEST_SUBARRAY_SUM_EQUALS_K_H
