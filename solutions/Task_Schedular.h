//
// Created by congxin on 10/21/17.
//

// Leetcode 621

#ifndef TEST_TASK_SCHEDULAR_H
#define TEST_TASK_SCHEDULAR_H
#include <vector>
#include <algorithm>
class Task_Schedular {
public:
    static bool desc(int i, int j){return i>j;}
    int leastInterval(std::vector<char>& tasks, int n) {
        int sz=tasks.size();
        int ret=0;
        std::vector<int> table(26,0);
        for(auto c:tasks){
            table[c-'A']++;
        }
        sort(table.begin(), table.end(), desc);
        int remain=sz;
        int groupsz=n+1;
        while(remain>0){
            for(int i=0;i<groupsz;i++){
                if(i>=26){
                    ret+=groupsz-i;
                    break;
                }
                if(table[i]>0){
                    table[i]--;
                    remain--;
                }
                ret++;
                if(remain==0) break;
            }
            sort(table.begin(), table.end(), desc); // this part could be optimized
        }
        return ret;
    }
};


#endif //TEST_TASK_SCHEDULAR_H
