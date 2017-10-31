//
// Created by congxin on 10/29/17.
//

// Leetcode 24

#ifndef LEETCODE_SWAP_NODES_IN_PAIRS_H
#define LEETCODE_SWAP_NODES_IN_PAIRS_H

#include "../Basics/ListNode.h"

class Swap_Nodes_in_Pairs {
public:
    ListNode<>* swapPairs(ListNode<>* head) {
        ListNode<>* rethead=nullptr;
        if(head&&head->next) rethead=head->next;
        else rethead=head;
        while(head&&head->next) {
            ListNode<> *left=head, *right=left->next;
            head=head->next->next;
            if(right->next&&right->next->next)
                left->next=right->next->next;
            else
                left->next=right->next;
            right->next=left;
        }
        return rethead;
    }
};


#endif //LEETCODE_SWAP_NODES_IN_PAIRS_H
