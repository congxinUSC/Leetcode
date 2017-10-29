//
// Created by congxin on 10/21/17.
//

// Leetcode 228

#ifndef TEST_SUMMARY_RANGES_H
#define TEST_SUMMARY_RANGES_H
#include <string>
#include <vector>

class Summary_Ranges {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        std::vector<std::string> ret;
        int sz=nums.size();
        if(!sz) return ret;
        int start=0;
        int i=1;
        for(;i<sz;i++){
            if(nums[i]-nums[i-1]!=1){
                std::string tmp;
                if(i-1==start) tmp+=std::to_string(nums[i-1]);
                else tmp+=std::to_string(nums[start])+"->"+std::to_string(nums[i-1]);
                ret.push_back(tmp);
                start=i;
            }
        }
        std::string tmp;
        if(sz-1==start) tmp+=std::to_string(nums[sz-1]);
        else tmp+=std::to_string(nums[start])+"->"+std::to_string(nums[sz-1]);
        ret.push_back(tmp);
        return ret;
    }
};


#endif //TEST_SUMMARY_RANGES_H
