#include "ReduceGCD.h"

#include <vector>

using namespace std;

int ReduceGCD::binaryOperator(int input1, int input2) {
  // from https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
  return input2 == 0 ? input1 : this->binaryOperator(input2, input1 % input2); 
}

int ReduceGCD::reduce(std::vector<int> inputVect) {
  if (inputVect.size() == 2) {
    return this->binaryOperator(inputVect.at(0), inputVect.at(1));
  } else {
    int endValue = inputVect.back();
    inputVect.pop_back();
    int highValue = this->reduce(inputVect);
    return this->binaryOperator(endValue, highValue);
  }
}