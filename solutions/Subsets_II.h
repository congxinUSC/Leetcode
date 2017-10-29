//
// Created by congxin on 10/21/17.
//

// Leetcode 90

#ifndef TEST_SUBSETS_II_H
#define TEST_SUBSETS_II_H
#include <vector>
#include <set>
#include <algorithm>

class Subsets_II {
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        auto sz=nums.size();
        auto range=1<<sz;
        sort(nums.begin(), nums.end());
        std::set<std::vector<int>> buffer;
        std::vector<std::vector<int>> ret;
        for(int i=0;i<range;i++){
            std::vector<int> tmp;
            for(int j=0;j<sz;j++){
                if(((1 << j) & i) != 0)
                    tmp.push_back(nums[j]);
            }
            buffer.insert(tmp);
        }
        for(auto v:buffer){
            ret.push_back(v);
        }
        return ret;
    }
};


#endif //TEST_SUBSETS_II_H
