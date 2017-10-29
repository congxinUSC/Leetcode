//
// Created by congxin on 10/27/17.
//

// Leetcode 1

#ifndef TEST_2_SUM_H
#define TEST_2_SUM_H
#include <vector>
#include <set>
#include <algorithm>

class _2_Sum {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        int dif;
        int size=nums.size();
        std::vector<int> ret(2);
        for(int i=0;i<size;i++)
        {
            dif=target-nums[i];
            for(int j=i+1;j<size;j++)
            {
                if(dif==nums[j])
                {
                    ret[0]=i;
                    ret[1]=j;
                    return ret;
                }
            }
        }
        return ret;
    }
};


#endif //TEST_2_SUM_H
