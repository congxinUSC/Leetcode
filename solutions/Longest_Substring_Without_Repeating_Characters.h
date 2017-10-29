//
// Created by congxin on 10/27/17.
//

// Leetcode 3

#ifndef TEST_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
#define TEST_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H

#include <queue>
#include <string>
#include <unordered_set>

class Longest_Substring_Without_Repeating_Characters {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::queue<char> window;
        std::unordered_set<char> hashtab;
        int ret=0;
        int curr=0;
        for(char c:s){
            if(hashtab.find(c)==hashtab.end()){
                hashtab.insert(c);
                window.push(c);
                curr++;
                if(curr>ret) ret=curr;
            }else{
                while(window.front()!=c){
                    curr--;
                    hashtab.erase(hashtab.find(window.front()));
                    window.pop();
                }
                window.pop();
                window.push(c);
            }
        }
        return ret;
    }
};


#endif //TEST_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
