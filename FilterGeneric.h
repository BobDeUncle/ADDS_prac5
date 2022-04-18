#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

class FilterGeneric {
  virtual bool g(int) = 0;
  public:
    virtual std::vector<int> filter(std::vector<int>) = 0;
};

#endif