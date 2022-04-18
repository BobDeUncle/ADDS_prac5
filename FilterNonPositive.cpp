#include "FilterNonPositive.h"

#include <vector>

using namespace std;

bool FilterNonPositive::g(int input) {
  return input < 0;
}

std::vector<int> FilterNonPositive::filter(std::vector<int> inputVect) {
  int size = inputVect.size();
  vector<int> output;

  if (size == 1) {
    if (this->g(inputVect.at(0))) {
      output.push_back(inputVect.at(0));
    }
    return output;
  } else {
    int endValue = inputVect.back();
    inputVect.pop_back();
    output = this->filter(inputVect);
    if (this->g(endValue)) {
      output.push_back(endValue);
    }
    return output;
  }
}