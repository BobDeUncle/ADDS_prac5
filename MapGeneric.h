#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

class MapGeneric {
  virtual int f(int) = 0;
  public:
    virtual std::vector<int> map(std::vector<int>) = 0;
};

#endif