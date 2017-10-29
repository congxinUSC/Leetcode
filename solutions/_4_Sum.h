//
// Created by congxin on 10/27/17.
//

// Leetcode 18

#ifndef TEST_4_SUM_H
#define TEST_4_SUM_H

#include <vector>
#include <set>
#include <algorithm>

class _4_Sum {
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::vector<std::vector<int>> ret;
        std::set<std::vector<int>> temp;
        if(nums.size()<4) return ret;
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int left=j+1, right=nums.size()-1;
                int t=target-nums[i]-nums[j];
                while(left<right){
                    if(nums[left]+nums[right]<t) left++;
                    else if(nums[left]+nums[right]>t) right--;
                    else{
                        temp.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                }
            }
        }
        for(auto v:temp){
            ret.push_back(v);
        }
        return ret;
    }
};


#endif //TEST_4_SUM_H
