#ifndef FILTERRNONPOSITIVE_H
#define FILTERRNONPOSITIVE_H

#include "FilterGeneric.h"

#include <vector>

class FilterNonPositive : public FilterGeneric {
  bool g(int input);
  public:
    std::vector<int> filter(std::vector<int> inputVect);
};

#endif