//
// Created by congxin on 10/27/17.
//

// Leetcode 15

#ifndef TEST_3_SUM_H
#define TEST_3_SUM_H

#include <vector>
#include <set>
#include <algorithm>

class _3_Sum {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::set<std::vector<int>> temp;
        std::vector<std::vector<int>> ret;
        if(nums.size()<3) return ret;
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int left=i+1, right=nums.size()-1;
            int target=-nums[i];
            while(left<right){
                if(nums[left]+nums[right]<target) left++;
                else if(nums[left]+nums[right]>target) right--;
                else{
                    temp.insert({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                }
            }
        }
        for(auto v:temp){
            ret.push_back(v);
        }
        return ret;
    }
};


#endif //TEST_3_SUM_H
