//
// Created by congxin on 10/27/17.
//

// Leetcode 12

#ifndef TEST_INTEGER_TO_ROMAN_H
#define TEST_INTEGER_TO_ROMAN_H

#include <string>

class Integer_to_Roman {
public:
    std::string intToRoman(int num) {
        std::string M[]={"", "M", "MM", "MMM"};
        std::string C[]={"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        std::string X[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        std::string I[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return M[num/1000]+C[(num%1000)/100]+X[(num%100)/10]+I[num%10];
    }
};


#endif //TEST_INTEGER_TO_ROMAN_H
