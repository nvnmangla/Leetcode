// Instert sort

#include <utils.hpp>
int main() {
  auto v = Unsorted;
  for (int j = 1; j < (int)v.size(); j++) {
    auto key = v[j];
    int i = j - 1;
    while (i >= 0 && v[i] > key) {
      v[i + 1] = v[i];
      i--;
    }
    v[i + 1] = key;
  }

  printv(v);

  return 0;
}