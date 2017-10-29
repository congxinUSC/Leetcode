//
// Created by congxin on 10/28/17.
//

// Leetcode 5

#ifndef TEST_LONGEST_PALINDROMIC_SUBSTRING_H
#define TEST_LONGEST_PALINDROMIC_SUBSTRING_H

#include <string>

class Longest_Palindromic_Substring {
public:
    std::string longestPalindrome(std::string s) {
        if(s.size()<2) return s;
        int min_start=0,max_len=1;
        for(int i=0;i<s.size();){
            // i is the starting middle point
            if(s.size()-i<=max_len/2) break;
            int j=i,k=i;
            // skip continuous duplicated elements because strings like "aaaaaaaaaaa" is palindrome
            while(k<s.size()-1&&s[k+1]==s[k])++k;
            // update the next starting middle point
            i=k+1;
            // try to extend the string from both sides at the same time
            while(k<s.size()-1&&j>0&&s[k+1]==s[j-1]){
                k++;
                j--;
            }
            int new_len=k-j+1;
            if(new_len>max_len){
                min_start=j;
                max_len=new_len;
            }
        }
        return s.substr(min_start,max_len);
    }
};


#endif //TEST_LONGEST_PALINDROMIC_SUBSTRING_H
