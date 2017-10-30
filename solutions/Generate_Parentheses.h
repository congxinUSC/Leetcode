//
// Created by congxin on 10/29/17.
//

// Leetcode 22

#ifndef LEETCODE_GENERATE_PARENTHESES_H
#define LEETCODE_GENERATE_PARENTHESES_H

#include <vector>
#include <queue>
#include <unordered_set>
#include <string>

class Generate_Parentheses {
public:
    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ret;
        addpair(ret, "", n, 0);
        return ret;
    }

    void addpair(std::vector<std::string>&ret, std::string str, int l, int r) {
        // l is the count of remaining left parentheses
        // r is the count of available right parentheses
        if(l==0 && r==0) {
            ret.push_back(str);
            return;
        }
        if(l>0) {
            // whenever use a left parentheses, there will be one more right parentheses available
            addpair(ret, str+'(', l-1, r+1);
        }
        if(r>0) {
            addpair(ret, str+')', l, r-1);
        }
    }
};


#endif //LEETCODE_GENERATE_PARENTHESES_H
