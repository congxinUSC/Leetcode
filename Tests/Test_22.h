//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_TEST_22_H
#define LEETCODE_TEST_22_H

#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../solutions/Generate_Parentheses.h"

TEST(Generate_Parentheses, c0){ // groupId, Id
    Generate_Parentheses sol;
    int input=0;
    std::vector<std::string> res={""};
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Generate_Parentheses, c1){ // groupId, Id
    Generate_Parentheses sol;
    int input=1;
    std::vector<std::string> res={"()"};
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Generate_Parentheses, c2){ // groupId, Id
    Generate_Parentheses sol;
    int input=2;
    std::vector<std::string> res={
            "()()",
            "(())"
    };
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Generate_Parentheses, c3){ // groupId, Id
    Generate_Parentheses sol;
    int input=3;
    std::vector<std::string> res={
            "()()()",
            "(())()",
            "()(())",
            "(()())",
            "((()))"
    };
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Generate_Parentheses, c4){ // groupId, Id
    Generate_Parentheses sol;
    int input=4;
    std::vector<std::string> res={
            "(((())))",
            "((()()))",
            "((())())",
            "((()))()",
            "(()(()))",
            "(()()())",
            "(()())()",
            "(())(())",
            "(())()()",
            "()((()))",
            "()(()())",
            "()(())()",
            "()()(())",
            "()()()()"
    };
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Generate_Parentheses, c5){ // groupId, Id
    Generate_Parentheses sol;
    int input=5;
    std::vector<std::string> res={
            "((((()))))",
            "(((()())))",
            "(((())()))",
            "(((()))())",
            "(((())))()",
            "((()(())))",
            "((()()()))",
            "((()())())",
            "((()()))()",
            "((())(()))",
            "((())()())",
            "((())())()",
            "((()))(())",
            "((()))()()",
            "(()((())))",
            "(()(()()))",
            "(()(())())",
            "(()(()))()",
            "(()()(()))",
            "(()()()())",
            "(()()())()",
            "(()())(())",
            "(()())()()",
            "(())((()))",
            "(())(()())",
            "(())(())()",
            "(())()(())",
            "(())()()()",
            "()(((())))",
            "()((()()))",
            "()((())())",
            "()((()))()",
            "()(()(()))",
            "()(()()())",
            "()(()())()",
            "()(())(())",
            "()(())()()",
            "()()((()))",
            "()()(()())",
            "()()(())()",
            "()()()(())",
            "()()()()()"
    };
    auto output=sol.generateParenthesis(input);
    std::sort(res.begin(), res.end());
    std::sort(output.begin(), output.end());
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
#endif //LEETCODE_TEST_22_H
