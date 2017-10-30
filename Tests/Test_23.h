//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_TEST_23_H
#define LEETCODE_TEST_23_H

#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../solutions/Merge_k_Sorted_Lists.h"

TEST(Merge_k_Sorted_Lists, _1list1){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({1,3,4,6,9}),
    };
    std::vector<int> res={1,3,4,6,9};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _1list2){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({}),
    };
    std::vector<int> res={};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _2list1){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({1,3,4,6,9}),
            Vector_to_List({2,5,7,8,10})
    };
    std::vector<int> res={1,2,3,4,5,6,7,8,9,10};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _2list2){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({1,3,4,6,9}),
            Vector_to_List({})
    };
    std::vector<int> res={1,3,4,6,9};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _2list3){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({1,2,3,4,5}),
            Vector_to_List({1,2,3,4,5})
    };
    std::vector<int> res={1,1,2,2,3,3,4,4,5,5};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _3list1){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({1,4,7,10,13}),
            Vector_to_List({2,5,8}),
            Vector_to_List({3,6,9,11,100})
    };
    std::vector<int> res={1,2,3,4,5,6,7,8,9,10,11,13,100};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
TEST(Merge_k_Sorted_Lists, _3list2){ // groupId, Id
    Merge_k_Sorted_Lists sol;
    std::vector<ListNode<>*> input={
            Vector_to_List({}),
            Vector_to_List({1,2,3,4,5}),
            Vector_to_List({1,2,3,4,5,6,7})
    };
    std::vector<int> res={1,1,2,2,3,3,4,4,5,5,6,7};
    auto output=List_to_Vector(sol.mergeKLists(input));
    EXPECT_THAT(output, ::testing::ContainerEq(res));
}
#endif //LEETCODE_TEST_23_H
