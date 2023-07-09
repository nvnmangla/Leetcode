#include <iostream>
#include <vector>
using std::cout;
using std::vector;

class MinStack {
 public:
 
  MinStack() {
    stack_ = {};
    // min = {};
  }

  void push(int val) {
    if (stack_.empty()) {
      stack_.push_back({val, val});
    } else {
      stack_.push_back({val, std::min(val, this->getMin())});
    }
  }

  void pop() { stack_.pop_back(); }

  int top() { return stack_.back().first; }

  int getMin() { return stack_.back().second; }

 private:
  vector<std::pair<int, int>> stack_;
  // vector<int> min;
};

int main() {
  MinStack stack;
  stack.push(0);
  stack.push(1);
  stack.push(0);

  cout << stack.getMin() << '\n';

  stack.pop();
  cout << stack.getMin() << '\n';\
  

  return 0;
}