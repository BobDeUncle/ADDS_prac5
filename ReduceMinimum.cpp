#include "ReduceMinimum.h"

#include <vector>

using namespace std;

int ReduceMinimum::binaryOperator(int input1, int input2) {
  return (input1 < input2) ? input1 : input2;
}

int ReduceMinimum::reduce(std::vector<int> inputVect) {
  if (inputVect.size() == 2) {
    return this->binaryOperator(inputVect.at(0), inputVect.at(1));
  } else {
    int endValue = inputVect.back();
    inputVect.pop_back();
    int highValue = this->reduce(inputVect);
    return this->binaryOperator(endValue, highValue);
  }
}