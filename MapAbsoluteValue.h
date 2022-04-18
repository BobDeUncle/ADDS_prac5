#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include "MapGeneric.h"

#include <vector>

class MapAbsoluteValue : public MapGeneric {
  int f(int input);
  public:
    std::vector<int> map(std::vector<int> inputVect);
};

#endif