//
// Created by congxin on 10/29/17.
//

#ifndef LEETCODE_LISTNODE_H
#define LEETCODE_LISTNODE_H

#include <vector>
template <class T=int>
struct ListNode {
    T val;
    ListNode<T> *next;
    ListNode(T x) : val(x), next(nullptr) {}
};

template <class T=int>
ListNode<T>* Vector_to_List(const std::vector<T>& vec) {
    if(vec.empty()) return nullptr;
    ListNode<T> *head =new ListNode<T>(vec[0]);
    ListNode<T> *p=head;
    auto sz=vec.size();
    for(size_t i(1); i<sz; i++){
        p->next=new ListNode<T>(vec[i]);
        p=p->next;
    }
    return head;
}

template <class T=int>
std::vector<T> List_to_Vector(ListNode<T>* head) {
    std::vector<T> ret;
    ListNode<T> *p=head;
    while(p!=nullptr) {
        ret.push_back(p->val);
        p=p->next;
    }
    return ret;
}

#endif //LEETCODE_LISTNODE_H
