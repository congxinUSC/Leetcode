//
// Created by congxin on 10/29/17.
//

// Leetcode 23

#ifndef LEETCODE_MERGE_K_SORTED_LISTS_H
#define LEETCODE_MERGE_K_SORTED_LISTS_H

#include <vector>
#include <map>
#include "../Basics/ListNode.h"

class Merge_k_Sorted_Lists {
public:
    ListNode<>* mergeKLists(std::vector<ListNode<>*>& lists) {
        ListNode<> *rethead=new ListNode<>(0);
        ListNode<> *cur=rethead;
        std::multimap<int,int> p_map;
        for(size_t i(0);i<lists.size(); i++){
            if(lists[i] != nullptr){
                p_map.insert({lists[i]->val, i});
            }
        }
        while(true) {
            bool end=true;
            for(auto p:lists){
                if(p != nullptr){
                    end=false;
                    break;
                }
            }
            if(end) break;
            auto next=*p_map.begin();
            p_map.erase(p_map.begin());
            cur->next=new ListNode<>(next.first);
            cur=cur->next;
            lists[next.second]=lists[next.second]->next;
            if(lists[next.second] != nullptr)
                p_map.insert({lists[next.second]->val, next.second});
        }
        return rethead->next;
    }
};


#endif //LEETCODE_MERGE_K_SORTED_LISTS_H
