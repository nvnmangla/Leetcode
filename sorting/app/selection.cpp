#include <utils.hpp>

int main() {
  auto v = Unsorted;
  for (int j = 0; j < (int)v.size(); j++) {
    int key = v[j];
    for (int i = j + 1; i < (int)v.size(); i++) {
      if (v[i] < key) {  // select smallest element
        key = v[i];
        v[i] = v[j];  // swap the elements
        v[j] = key;
      }
    }
  }

  printv(v);
  return 0;
}