//
// Created by congxin on 10/27/17.
//

// Leetcode 7

#ifndef TEST_REVERSE_INTEGER_H
#define TEST_REVERSE_INTEGER_H


class Reverse_Integer {
public:
    int reverse(int x) {
        int i;
        int sum=0;
        for(i=0;x!=0;i++)
        {
            if(sum>214748364)
                return 0;
            if(sum<-214748364)
                return 0;
            sum*=10;
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
};


#endif //TEST_REVERSE_INTEGER_H
