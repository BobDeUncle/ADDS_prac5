#include "MapSquare.h"

#include <vector>

using namespace std;

int MapSquare::f(int input) {
  return input * input;
}

std::vector<int> MapSquare::map(std::vector<int> inputVect) {
  int size = inputVect.size();
  vector<int> output;

  if (size == 1) {
    output.push_back(this->f(inputVect.at(0)));
    return output;
  } else {
    int endValue = inputVect.back();
    inputVect.pop_back();
    output = this->map(inputVect);
    output.push_back(this->f(endValue));
    return output;
  }
}