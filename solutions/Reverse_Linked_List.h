//
// Created by congxin on 10/29/17.
//

// Leetcode 206

#ifndef LEETCODE_REVERSE_LINKED_LIST_H
#define LEETCODE_REVERSE_LINKED_LIST_H

#include "../Basics/ListNode.h"

class Reverse_Linked_List {
public:
    ListNode<>* reverseList(ListNode<>* head) {
        if(head==nullptr||head->next==nullptr)
            return head;
        ListNode<> *pre, *cur, *nex;
        pre=head;
        cur=pre->next;
        nex=cur->next;
        head->next=nullptr;
        while(nex!=nullptr)
        {
            cur->next=pre;
            pre=cur;
            cur=nex;
            nex=nex->next;
        }
        cur->next=pre;
        return cur;
    }
};


#endif //LEETCODE_REVERSE_LINKED_LIST_H
