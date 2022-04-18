#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include <vector>

class ReduceGCD {
  virtual int binaryOperator(int input1, int input2);
  public:
    virtual int reduce(std::vector<int> inputVect);
};

#endif