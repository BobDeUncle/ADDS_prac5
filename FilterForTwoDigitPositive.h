#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"

#include <vector>

class FilterForTwoDigitPositive : public FilterGeneric {
  bool g(int input);
  public:
    std::vector<int> filter(std::vector<int> inputVect);
};

#endif