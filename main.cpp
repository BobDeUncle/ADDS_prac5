#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std;

int main() {
  string stringInput[20];
  vector<int> intInput;
  vector<int> output;

  for (int i = 0; i < 19; i++) {
    cin >> stringInput[i];
    // From Fred Larson on StackOverflow - 'remove commas from string'
    stringInput[i].erase(std::remove(stringInput[i].begin(), stringInput[i].end(), ','), stringInput[i].end());
    intInput.push_back(stoi(stringInput[i]));
  }

  MapTriple maptriple;
  MapAbsoluteValue mapabsolutevalue; 

  FilterForTwoDigitPositive filterfortwodigitpositive;
  FilterOdd filterodd;

  ReduceMinimum reduceminimum;
  ReduceGCD reducegcd; 

  output = maptriple.map(intInput);
  output = mapabsolutevalue.map(output);

  output = filterfortwodigitpositive.filter(output);
  output = filterodd.filter(output);

  cout << reduceminimum.reduce(output) << " " << reducegcd.reduce(output) << endl; 
}