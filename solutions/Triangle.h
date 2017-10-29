//
// Created by congxin on 10/20/17.
//

// Leetcode 120

#ifndef TEST_TRIANGLE_H
#define TEST_TRIANGLE_H
#include <vector>

class Triangle {
public:
    int minimumTotal(std::vector<std::vector<int>>& triangle) {
        int n=triangle.size();
        if(n==0) return 0;
        std::vector<int> ans1(n,0x7FFFFFFF);
        std::vector<int> ans2(n,0x7FFFFFFF);
        std::vector<int> *ans=&ans1, *bak=&ans2;
        bool flag=true;
        (*bak)[0]=triangle[0][0];
        for(int i=1;i<n;i++){
            (*ans)[0]=(*bak)[0]+triangle[i][0];
            for(int j=1;j<i;j++){
                (*ans)[j]=(*bak)[j]<(*bak)[j-1]?(*bak)[j]+triangle[i][j]:(*bak)[j-1]+triangle[i][j];
            }
            (*ans)[i]=(*bak)[i-1]+triangle[i][i];
            if(flag){
                ans=&ans2;
                bak=&ans1;
            }else{
                ans=&ans1;
                bak=&ans2;
            }
            flag=!flag;
        }
        int min=0x7FFFFFFF;
        for(auto a:(*bak)){
            if(a<min) min=a;
        }
        return min;
    }
};


#endif //TEST_TRIANGLE_H
