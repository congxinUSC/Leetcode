//
// Created by congxin on 10/19/17.
//

// Leetcode 62

#ifndef TEST_UNIQUE_PATHS_H
#define TEST_UNIQUE_PATHS_H
#include <vector>

class Unique_Paths {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> ans(m,std::vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
        return ans[m-1][n-1];
    }
};


#endif //TEST_UNIQUE_PATHS_H
