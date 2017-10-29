//
// Created by congxin on 10/27/17.
//

// Leetcode 6

#ifndef TEST_ZIGZAG_CONVERSION_H
#define TEST_ZIGZAG_CONVERSION_H

#include<string>

class Zigzag_Conversion {
public:
    std::string convert(std::string s, int numRows) {
        if(s.empty()||numRows==1||numRows>=s.size()) return s;
        std::string ret;
        int T=2*numRows-2;
        int cycle=s.size()/T;
        int left=s.size()%T;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<cycle;j++){
                ret+=s[i+T*j];
                if(i!=0&&i!=numRows-1){
                    ret+=s[(T-i)+T*j];
                }
            }
            if(left>0){
                ret+=s[i+T*cycle];
                left--;
                if(left>0&&(T-i)+T*cycle<s.size()&&i!=0&&i!=numRows-1){
                    ret+=s[(T-i)+T*cycle];
                    left--;
                }
            }
        }
        return ret;
    }
};


#endif //TEST_ZIGZAG_CONVERSION_H
