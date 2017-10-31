//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_TEST_24_H
#define LEETCODE_TEST_24_H

#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../solutions/Swap_Nodes_in_Pairs.h"

TEST(Swap_Nodes_in_Pairs, odd1){ // groupId, Id
    Swap_Nodes_in_Pairs sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5});
    std::vector<int> res={2,1,4,3,5};
    auto output=List_to_Vector(sol.swapPairs(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Swap_Nodes_in_Pairs, oneele){ // groupId, Id
    Swap_Nodes_in_Pairs sol;
    ListNode<>* input=Vector_to_List({1});
    std::vector<int> res={1};
    auto output=List_to_Vector(sol.swapPairs(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Swap_Nodes_in_Pairs, even1){ // groupId, Id
    Swap_Nodes_in_Pairs sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5,6});
    std::vector<int> res={2,1,4,3,6,5};
    auto output=List_to_Vector(sol.swapPairs(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Swap_Nodes_in_Pairs, empty){ // groupId, Id
    Swap_Nodes_in_Pairs sol;
    ListNode<>* input=Vector_to_List({});
    std::vector<int> res={};
    auto output=List_to_Vector(sol.swapPairs(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
#endif //LEETCODE_TEST_24_H
