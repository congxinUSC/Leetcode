//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_TEST_4_H
#define LEETCODE_TEST_4_H

#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../solutions/Median_of_Two_Sorted_Arrays.h"

TEST(Median, odd1){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9};
    std::vector<int> B={2,4,6,8};
    double res=5.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, odd2){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9,11,13,15,17,19,21};
    std::vector<int> B={2,4,6,8};
    double res=8.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, odd3){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9};
    std::vector<int> B={2,4,6,8,10,12,14,16,18,20,22,24};
    double res=9.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, odd4){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9,11,13,15,17,19};
    std::vector<int> B={2};
    double res=9.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, odd5){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3};
    std::vector<int> B={2};
    double res=2.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, odd6){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1};
    std::vector<int> B={};
    double res=1.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even1){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9};
    std::vector<int> B={2,4,6,8,10};
    double res=5.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even2){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9,11,13,15,17,19,21};
    std::vector<int> B={2,4,6,8,10};
    double res=8.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even3){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9,11};
    std::vector<int> B={2,4,6,8,10,12,14,16,18,20,22,24};
    double res=9.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even4){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,3,5,7,9,11,13,15,17,19,21};
    std::vector<int> B={2};
    double res=10.0;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even5){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={};
    std::vector<int> B={2,3};
    double res=2.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even6){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={2};
    std::vector<int> B={3};
    double res=2.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}
TEST(Median, even7){ // groupId, Id
    Median_of_Two_Sorted_Arrays sol;
    std::vector<int> A={1,2};
    std::vector<int> B={3,4};
    double res=2.5;
    EXPECT_EQ(res, sol.findMedianSortedArrays(A,B));
}



#endif //LEETCODE_TEST_4_H
