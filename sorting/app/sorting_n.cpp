#include <utils.hpp>

/**
 * O(n)
 * We assume that:
 *      we know the range of the array
 *      or k = O(n)
 ** Radix Sort
 *     for each digit unit-d:
 *          count_sort(A based on digit)
 */

vector<int> count_sort(vector<int> &A, int k);

int main() {
  auto A = Unsorted;
  auto B = count_sort(A, 20);

  printv(B);

  return 0;
}

/**
 * @brief Counting Sort
 *
 * @param A  Unsorte array
 * @param k  range of the array
 * @return vector<int> sorted_array
 */
vector<int> count_sort(vector<int> &A, int k) {
  auto count = vector<int>(k, 0);
  for (int i{}; i < A.size(); i++) {
    count[A[i]] += 1;
  }

  for (int i{1}; i < k; i++) {
    count[i] += count[i - 1];  // counting numbers of elements less than j
  }

  auto B = vector<int>(A.size(), 0);
  int s = (int)A.size();
  for (int i{s}; i >= 0; i--) {
    B[count[A[i]]] = A[i];
    count[A[i]] -= 1;
  }
  return B;
}

/**
 * @brief Bucket sort
 *
 */