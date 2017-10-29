//
// Created by congxin on 10/21/17.
//

// Leetcode 59

#ifndef TEST_SPIRAL_MATRIX_II_H
#define TEST_SPIRAL_MATRIX_II_H
#include <vector>

class Spiral_Matrix_II {
public:
    std::vector<std::vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> ret(n,std::vector<int>(n,0));
        int top=0, left=0, bottom=n-1, right=n-1;
        int direction=0; // 0>, 1v, 2<, 3^
        int x=0, y=0;
        int current=1;
        while(top<=bottom&&left<=right){
            ret[x][y]=current++;
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


#endif //TEST_SPIRAL_MATRIX_II_H
