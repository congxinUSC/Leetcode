//
// Created by congxin on 10/27/17.
//

// Leetcode 273

#ifndef TEST_INTEGER_TO_ENGLISH_WORDS_H
#define TEST_INTEGER_TO_ENGLISH_WORDS_H

#include <string>

class Integer_to_English_Words {
public:
    std::string numberToWords(int num) {
        if(!num) return "Zero";
        std::string ret;
        std::string D2[]={"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine",
                     " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen"};
        std::string TY[]={" Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety"};
        std::string LV[]={" Billion", " Million", " Thousand", ""};
        int k=(int)(1e9);
        int i=0;
        while(num!=0){
            int tmp=num/k;
            if(tmp!=0){
                if(tmp/100) ret+=D2[(num/k)/100]+" Hundred";
                if(tmp%100>=20){
                    ret+=TY[(tmp%100)/10-2];
                    ret+=D2[tmp%10];
                }else {
                    ret+=D2[tmp%20];
                }
                num%=k;
                ret+=LV[i];
            }
            i++;
            k/=1000;
        }
        return ret.substr(1);
    }
};


#endif //TEST_INTEGER_TO_ENGLISH_WORDS_H
