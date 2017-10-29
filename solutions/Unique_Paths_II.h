//
// Created by congxin on 10/19/17.
//

// Leetcode 63

#ifndef TEST_UNIQUE_PATHS_II_H
#define TEST_UNIQUE_PATHS_II_H
#include <vector>

class Unique_Paths_II {
public:
    int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        if(m==0) return 0;
        int n=obstacleGrid[0].size();
        if(n==0) return 0;
        std::vector<std::vector<int>> ans(m, std::vector<int>(n, 1));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(obstacleGrid[i][j]==1){
                    if(i==0)
                        for(int k=j;k<n;k++)
                            ans[0][k]=0;
                    if(j==0)
                        for(int k=i;k<m;k++)
                            ans[k][0]=0;
                    ans[i][j]=0;
                }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                if(ans[i][j]!=0)
                    ans[i][j]=ans[i-1][j]+ans[i][j-1];
        return ans[m-1][n-1];
    }
};


#endif //TEST_UNIQUE_PATHS_II_H
