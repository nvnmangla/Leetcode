
#include <time.h>

#include <utils.hpp>

/*
Solution by recurrances
Solutions by Recursion:

•   Divide a problem into smaller sub-problems
•   Solve the sub-problems recursively until they are small enough for
    trivial solutions
•   Combine the solutions to solve the original problem

*/

// Merge sort
vector<int> merge(vector<int> v1, vector<int> v2);

void merge_sort(vector<int> &v);

int main() {
  auto v = Unsorted;
  cout << "Unsorted Array:";
  printv(v);

  merge_sort(v);
  cout << "Sorted Array: ";
  printv<int>(v);

  return 0;
}

vector<int> merge(vector<int> v1, vector<int> v2) {
  auto v = vector<int>{};

  int i{}, j{};
  while (v.size() < (v1.size() + v1.size())) {
    if (v1[i] < v2[j]) {  // For ascending order
      v.push_back(v1[i]);
      i++;
      if (i == (int)v1.size()) {
        add_v(v, v2, j);
        break;
      };
    } else {
      v.push_back(v2[j]);
      j++;

      if (j == (int)v2.size()) {
        add_v(v, v1, i);
        break;
      };
    }
  }
  return v;
}

void merge_sort(vector<int> &v) {
  auto l = (int)v.size();

  auto n_r = floor(l / 2);
  if (n_r > 0) {
    auto right = get_subarray(v, 0, n_r);
    auto left = get_subarray(v, n_r, l);

    merge_sort(right);
    merge_sort(left);
    v = merge(left, right);
  }
}

/**
 * Master Solution for solving Recurrences problems
 *
 */
