//
// Created by congxin on 10/29/17.
//

// Leetcode 25

#ifndef LEETCODE_REVERSE_NODES_IN_K_GROUP_H
#define LEETCODE_REVERSE_NODES_IN_K_GROUP_H

#include "../Basics/ListNode.h"

class Reverse_Nodes_in_k_Group {
public:
    ListNode<>* reverseKGroup(ListNode<>* head, int k) {
        auto node=head;
        for(int i=0;i<k;i++){
            if(!node)
                return head;
            node=node->next;
        }
        auto rethead=reverseList(head,node);
        head->next=reverseKGroup(node, k);
        return rethead;
    }

    ListNode<>* reverseList(ListNode<>* head, ListNode<>* tail) {
        ListNode<>* prev = tail;
        // if tail is not nullptr, this will return a circle
        // but it doesn't matter because we will change the tail's next in reverseKGroup
        while(head != tail){
            auto tmp = head->next;
            head->next=prev;
            prev=head;
            head=tmp;
        }
        return prev;
    }
};


#endif //LEETCODE_REVERSE_NODES_IN_K_GROUP_H
