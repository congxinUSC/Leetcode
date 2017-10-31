//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_TEST_25_H
#define LEETCODE_TEST_25_H

#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../solutions/Reverse_Nodes_in_k_Group.h"

TEST(Reverse_Nodes_in_k_Group, l5k1){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5});
    int k=1;
    std::vector<int> res={1,2,3,4,5};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l5k2){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5});
    int k=2;
    std::vector<int> res={2,1,4,3,5};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l5k3){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5});
    int k=3;
    std::vector<int> res={3,2,1,4,5};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l5k4){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5});
    int k=4;
    std::vector<int> res={4,3,2,1,5};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l10k1){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5,6,7,8,9,10});
    int k=1;
    std::vector<int> res={1,2,3,4,5,6,7,8,9,10};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l10k2){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5,6,7,8,9,10});
    int k=2;
    std::vector<int> res={2,1,4,3,6,5,8,7,10,9};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l10k3){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5,6,7,8,9,10});
    int k=3;
    std::vector<int> res={3,2,1,6,5,4,9,8,7,10};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Reverse_Nodes_in_k_Group, l10k4){ // groupId, Id
    Reverse_Nodes_in_k_Group sol;
    ListNode<>* input=Vector_to_List({1,2,3,4,5,6,7,8,9,10});
    int k=4;
    std::vector<int> res={4,3,2,1,8,7,6,5,9,10};
    auto output=List_to_Vector(sol.reverseKGroup(input,k));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
#endif //LEETCODE_TEST_25_H
