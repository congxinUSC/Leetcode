//
// Created by congxin on 10/27/17.
//

#ifndef TEST_LETER_COMBINATIONS_OF_A_PHONE_NUMBER_H
#define TEST_LETER_COMBINATIONS_OF_A_PHONE_NUMBER_H

#include <vector>
#include <string>
#include <queue>

class Leter_Combinations_of_a_Phone_Number {
    std::vector<std::vector<char>> map={{'a','b','c'},
                              {'d','e','f'},
                              {'g','h','i'},
                              {'j','k','l'},
                              {'m','n','o'},
                              {'p','q','r','s'},
                              {'t','u','v'},
                              {'w','x','y','z'}};
    std::vector<std::string> letterCombinations(std::string digits) {
        std::queue<std::string> temp;
        std::vector<std::string> ret;
        temp.push("");
        for(auto d:digits){
            int sz=temp.size();
            for(int j=0;j<sz;j++){
                auto base=temp.front();
                for(auto c:map[d-'2'])
                    temp.push(base+c);
                temp.pop();
            }
        }
        while (!temp.empty()){
            ret.push_back(temp.front());
            temp.pop();
        }
        return ret;
    }
};


#endif //TEST_LETER_COMBINATIONS_OF_A_PHONE_NUMBER_H
