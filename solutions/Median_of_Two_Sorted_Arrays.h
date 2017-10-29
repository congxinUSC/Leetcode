//
// Created by congxin on 10/29/17.
//

// Leetcode 4

#ifndef LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H
#define LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H

#include <vector>

class Median_of_Two_Sorted_Arrays {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int k=(m+n)/2; // work directly for odd numbers, need to deal with even numbers
        double ret;
        if((m+n)%2==0){
            ret=findKthSmallestNumberSortedArray(nums1, nums2, k)+findKthSmallestNumberSortedArray(nums1, nums2, k-1);
            ret/=2;
        } else {
            ret=findKthSmallestNumberSortedArray(nums1, nums2, k);
        }

        return ret;
    }

    int findKthSmallestNumberSortedArray(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
        int m=nums1.size();
        int n=nums2.size();
        if(m==0) return nums2[k];
        if(n==0) return nums1[k];
        int mb=0, nb=0;
        int ret=0;
        while(k>0 && mb<m && nb<n){
            int tmp=(k+1)/2;
            int mpos=tmp+mb-1<m?tmp+mb-1:m-1;
            int npos=tmp+nb-1<n?tmp+nb-1:n-1;
            if(nums1[mpos]<nums2[npos]){
                k-=mpos+1-mb;
                mb=mpos+1;
            } else {
                k-=npos+1-nb;
                nb=npos+1;
            }
        }
        if(mb==m){
            ret=nums2[nb+k];
        } else if (nb==n) {
            ret=nums1[mb+k];
        } else if(k==0) {
            ret=std::min(nums1[mb],nums2[nb]);
        }
        return ret;
    }
};


#endif //LEETCODE_MEDIAN_OF_TWO_SORTED_ARRAYS_H
