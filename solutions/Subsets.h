//
// Created by congxin on 10/21/17.
//

// Leetcode 78

#ifndef TEST_SUBSETS_H
#define TEST_SUBSETS_H
#include <vector>

class Subsets {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        auto sz=nums.size();
        auto range=1<<sz;
        std::vector<std::vector<int>> ret;
        for(int i=0;i<range;i++){
            std::vector<int> tmp;
            for(int j=0;j<sz;j++){
                if(((1 << j) & i) != 0)
                    tmp.push_back(nums[j]);
            }
            ret.push_back(tmp);
        }
        return ret;
    }
};


#endif //TEST_SUBSETS_H
