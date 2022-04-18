#include "MapTriple.h"

#include <cmath>
#include <vector>

using namespace std;

int MapTriple::f(int input) {
  return 3 * input;
}

std::vector<int> MapTriple::map(std::vector<int> inputVect) {
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