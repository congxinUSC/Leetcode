//
// Created by congxin on 10/21/17.
//

// Leetcode 75

#ifndef TEST_SORT_COLORS_H
#define TEST_SORT_COLORS_H
#include <vector>

class Sort_Colors {
    void swap(int& a, int& b){
        int t=a;
        a=b;
        b=t;
    }
    void sortColors(std::vector<int>& nums) {
        //this will only work for 3 collors but it's fast
        int redpos=-1, bluepos=nums.size();
        for(int i=0;i<bluepos;i++){
            while(i<bluepos&&nums[i]!=1){
                if(nums[i]==2){
                    swap(nums[--bluepos], nums[i]);
                }
                if(nums[i]==0){
                    swap(nums[++redpos], nums[i]);
                    if(redpos>=i) i=redpos+1;
                }
            }
        }
    }
};


#endif //TEST_SORT_COLORS_H
