#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"

#include <vector>

class FilterOdd : public FilterGeneric {
  bool g(int input);
  public:
    std::vector<int> filter(std::vector<int> inputVect);
};

#endif