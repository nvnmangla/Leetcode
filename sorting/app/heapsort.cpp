
#include "utils.hpp"

int main() {
  auto v = Unsorted;
  auto heap_size = (int)v.size();

  for (int i = floor(v.size() / 2); i >= 0; i--) {
    max_heapify(v, i, heap_size);
  }

  for (int i = v.size() - 1; i > 0; i--) {
    swap(v, 0, i);
    heap_size -= 1;

    max_heapify(v, 0, heap_size);
  }
  printv(v);
}
