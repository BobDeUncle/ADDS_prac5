#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"

#include <vector>

class MapTriple : public MapGeneric {
  int f(int input);
  public:
    std::vector<int> map(std::vector<int> inputVect);
};

#endif