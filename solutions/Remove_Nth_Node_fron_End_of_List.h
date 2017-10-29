//
// Created by congxin on 10/27/17.
//

// Leetcode 19

#ifndef TEST_REMOVE_NTH_NODE_FRON_END_OF_LIST_H
#define TEST_REMOVE_NTH_NODE_FRON_END_OF_LIST_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


class Remove_Nth_Node_fron_End_of_List {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front=head;
        ListNode *del=head;
        ListNode *pre= new ListNode(0);
        pre->next=del;
        for(int i=0;i<n;i++){
            front=front->next;
        }
        while(front){
            pre=pre->next;
            del=del->next;
            front=front->next;
        }
        if(del==head){
            head=head->next;
            delete del;
            return head;
        }else{
            pre->next=del->next;
            delete del;
            return head;
        }
    }
};


#endif //TEST_REMOVE_NTH_NODE_FRON_END_OF_LIST_H
