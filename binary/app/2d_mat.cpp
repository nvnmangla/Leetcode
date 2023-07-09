

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {

  if(target >  matrix[matrix.size()-1][matrix[0].size()-1]  || target < matrix[0][0]){
    return false;
  }   


  int row{};

  int col{};

  int row_s{};
  int row_e = matrix.size();
  if (matrix.size() == 1) {
    if (matrix[0].size() == 1) {
      if (matrix[0][0] == target) {
        return true;
      }

      else {
        return false;
      }
    }

    else {
      row = 0;
    }

  }

  else {
    while (!((matrix[row][col] <= target) && (matrix[row + 1][col] > target))) {
      if (matrix[matrix.size() - 1][col] <= target) {
        row = matrix.size() - 1;

        if ((matrix[row][col] == target)) {
          return true;
        }
        break;
      }

      if (matrix.size() == 1) {
        row = 0;
        if ((matrix[row][col] == target)) {
          return true;
        }
        break;
      }

      row = (row_s + row_e) / 2;
      
      if (matrix[row][col] > target) {
        row_e = row + 1;
      }

      if (row + 1 < matrix.size() && matrix[row + 1][col] < target) {
        row_s = row;
      }
    }
  }

  auto nums = matrix[row];

  if (nums.size() == 1) {
    if (nums[0] != target) {
      return false;
    } else {
      return true;
    }
  }

  int e = matrix[0].size();
  int s = 0;
  int i{};

  // int i = (s+e)/2;

  while (nums[i] != target) {
    if ((i == (s + e) / 2) && (nums[i] != target)) {
      return false;
    }

    i = (s + e) / 2;

    if (nums[i] > target) {
      e = i;
    }

    else if (nums[i] < target) {
      s = i;
    }
  }

  return true;
}

int main() {
  vector<vector<int>> matrix = {{1}, {3}};
  int target = 1;

  cout << searchMatrix(matrix, target) << '\t';

  return 0;
}