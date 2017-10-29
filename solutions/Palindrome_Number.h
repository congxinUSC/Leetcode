//
// Created by congxin on 10/27/17.
//

// Leetcode 9

#ifndef TEST_PALINDROME_NUMBER_H
#define TEST_PALINDROME_NUMBER_H


class Palindrome_Number {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int len=0;
        int temp1,temp2;
        for(int i=x;i!=0;)
        {
            i/=10;
            len++;
        }
        for(int i=0;i<len/2;i++)
        {
            temp1=x;
            temp2=x;
            for(int j=0;j<i;j++)
                temp1/=10;
            temp1%=10;
            for(int j=0;j<len-i-1;j++)
                temp2/=10;
            temp2%=10;
            if(temp1!=temp2)
                return false;
        }
        return true;
    }
};


#endif //TEST_PALINDROME_NUMBER_H
