//
// Created by congxin on 10/19/17.
//

// Leetcode 79

#ifndef TEST_WORD_SEARCH_H
#define TEST_WORD_SEARCH_H

#include <vector>
#include <string>

class Word_Search {
public:
    bool dfs(std::vector<std::vector<char>> &board, std::vector<std::vector<int>> &visited, std::string word, int index, int x,
                          int y, int tag) {
        if(x>=board.size()||x<0) return false;
        if(y>=board[0].size()||y<0) return false;
        if(visited[x][y]==tag) return false;
        if(word[index]!=board[x][y]) return false;
        if(index == word.size()-1) return word[index]==board[x][y];
        visited[x][y]=tag;
        if(dfs(board, visited, word, index+1, x-1, y, tag)
           || dfs(board, visited, word, index+1, x+1, y, tag)
           || dfs(board, visited, word, index+1, x, y-1, tag)
           || dfs(board, visited, word, index+1, x, y+1, tag)){
            return true;
        }else{
            visited[x][y]=0;
            return false;
        }
    }


    bool exist(std::vector<std::vector<char>> &board, std::string word) {
        if(word.size()==0) return false;
        int h=board.size();
        if(h==0) return false;
        int w=board[0].size();
        if(w==0) return false;
        std::vector<std::vector<int>> visited(h, std::vector<int>(w, 0));
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(dfs(board, visited, word, 0, i, j, i*w+j+1)) return true;
            }
        }
        return false;
    }
};


#endif //TEST_WORD_SEARCH_H
