//
// Created by congxin on 10/27/17.
//

// Leetcode 8

#ifndef TEST_STRING_TO_INTEGER_H
#define TEST_STRING_TO_INTEGER_H

#include <string>

class String_to_integer {
public:
    int myAtoi(std::string str) {
        int ret=0;
        if(str.empty()) return 0;
        int sz=str.size();
        bool pos=true;
        int i=0;
        while(i<sz&&str[i]==' ') i++;
        if(str[i]=='-'){
            pos=false;
            i++;
        }else if(str[i]=='+'){
            i++;
        }
        for(;i<sz;i++){
            if(str[i]<'0'||str[i]>'9') break;
            int cur=str[i]-'0';
            if(ret>0x7FFFFFFF/10) return pos?0x7FFFFFFF:0x80000000;
            ret=ret*10;
            if(ret+cur>=ret) ret=ret+cur;
            else return pos?0x7FFFFFFF:0x80000000;
        }
        return pos?ret:-ret;
    }
};


#endif //TEST_STRING_TO_INTEGER_H
