
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int>box[9];
        map<char,int>col[9];
        map<char,int>row[9];

        

        for (int i{}; i < 9 ; i++) {
            for (int j{}; j < 9 ;j++) {
                
                auto ch = board[i][j];
                
                if (ch != '.'){

                    if(row[i][ch] || col[j][ch] || box[(i/3)*3 + j/3][ch]){
                        return false;
                    }
                    else{
                        
                        row[i][ch] = col[j][ch] = box[(i/3)*3 + j/3][ch] = 1;
                    }

                }
                else{
                    continue;
                }
            }
        }

        return true;
    }
};

int main(){

    Solution solution;

    vector<vector<char>>board {{'5','3','.','.','7','.','.','.','.'}
                                ,{'6','3','.','1','9','5','.','.','.'}
                                ,{'.','9','8','.','.','.','.','6','.'}
                                ,{'8','.','.','.','6','.','.','.','3'}
                                ,{'4','.','.','8','.','3','.','.','1'}
                                ,{'7','.','.','.','2','.','.','.','6'}
                                ,{'.','6','.','.','.','.','2','8','.'}
                                ,{'.','.','.','4','1','9','.','.','5'}
                                ,{'.','.','.','.','8','.','.','7','9'}};

    cout<<solution.isValidSudoku(board);

    return 0;
}