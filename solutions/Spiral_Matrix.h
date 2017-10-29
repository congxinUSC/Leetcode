//
// Created by congxin on 10/21/17.
//

// Leetcode 54

#ifndef TEST_SPIRAL_MATRIX_H
#define TEST_SPIRAL_MATRIX_H
#include<vector>

class Spiral_Matrix {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ret;
        auto h=matrix.size();
        if(h==0) return ret;
        auto w=matrix[0].size();
        auto top=0, left=0, bottom=h-1, right=w-1;
        int direction=0;//0>,1v,2<,3^
        int x=0, y=0;
        while(top<=bottom&&left<=right){
            ret.push_back(matrix[x][y]);
            switch(direction) {
                case 0:
                    if (y < right) y++;
                    else {
                        direction = (direction + 1) % 4;
                        top++;
                        x++;
                    }
                    break;
                case 1:
                    if (x < bottom) x++;
                    else {
                        direction = (direction + 1) % 4;
                        right--;
                        y--;
                    }
                    break;
                case 2:
                    if (y > left) y--;
                    else {
                        direction = (direction + 1) % 4;
                        bottom--;
                        x--;
                    }
                    break;
                case 3:
                    if (x > top) x--;
                    else {
                        direction = (direction + 1) % 4;
                        left++;
                        y++;
                    }
                    break;
                default:
                    break;
            }
        }
        return ret;
    }
};


#endif //TEST_SPIRAL_MATRIX_H
