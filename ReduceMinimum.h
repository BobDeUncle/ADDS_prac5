#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include <vector>

class ReduceMinimum {
  virtual int binaryOperator(int input1, int input2);
  public:
    virtual int reduce(std::vector<int> inputVect);
};

#endif