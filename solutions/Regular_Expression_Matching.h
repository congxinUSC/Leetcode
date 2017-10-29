//
// Created by congxin on 10/27/17.
//

// Leetcode 10

#ifndef TEST_REGULAR_EXPRESSION_MATCHING_H
#define TEST_REGULAR_EXPRESSION_MATCHING_H

#include <string>

class Regular_Expression_Matching {
public:
    bool isMatch(std::string s, std::string p) {
        if(p.empty()) return s.empty();
        if(p.size()>1&&p[1]=='*'){
            return (!s.empty() && (p[0]==s[0] || p[0]=='.') && isMatch(s.substr(1),p)) || isMatch(s,p.substr(2));
        }else{
            return !s.empty() && (p[0]==s[0] || p[0]=='.') && isMatch(s.substr(1), p.substr(1));
        }
    }
};


#endif //TEST_REGULAR_EXPRESSION_MATCHING_H
