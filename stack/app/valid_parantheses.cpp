#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

bool isValid(string s) {
  string bracket{};
  string open = "([{";
  for (auto i : s) {
    if (open.find(i) != string::npos) {
      bracket.push_back(i);
    } else if (!bracket.empty()) {
      auto top = bracket[bracket.size() - 1];
      switch (i) {
        case ')':

          if (top != '(') {
            return false;
          } else {
            bracket.pop_back();
          }
          break;

        case ']':
          if (top != '[') {
            return false;
          } else {
            bracket.pop_back();
          }

          break;

        case '}':
          if (top != '{') {
            return false;
          } else {
            bracket.pop_back();
          }

          break;

        default:
          break;
      }
    }
  }

  if (bracket.empty()) {
    return true;
  } else
    return false;
}

int main() {
  string s = "]";

  std::cout << isValid(s);
  return 0;
}
