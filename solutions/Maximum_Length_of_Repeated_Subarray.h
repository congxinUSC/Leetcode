//
// Created by congxin on 10/28/17.
//

// Leetcode 718

#ifndef TEST_MAXIMUM_LENGTH_OF_REPEATED_SUBARRAY_H
#define TEST_MAXIMUM_LENGTH_OF_REPEATED_SUBARRAY_H

#include <vector>

class Maximum_Length_of_Repeated_Subarray {
public:
    int findLength(std::vector<int>& A, std::vector<int>& B) {
        int As=A.size(), Bs=B.size();
        if(!(As&&Bs)) return 0;
        int gmax=0;
        for(int bias=-As;bias<Bs;bias++){
            int start=std::max(0,bias);
            int end=std::min(As+bias,Bs);
            int count=0;
            for(int i=start;i<end;i++){
                if(A[i-bias]==B[i]){
                    count++;
                    gmax=gmax>count?gmax:count;
                } else {
                    count=0;
                }
            }
        }
        return gmax;
    }
};


#endif //TEST_MAXIMUM_LENGTH_OF_REPEATED_SUBARRAY_H
