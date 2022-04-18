#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

using namespace std;

int main() {
  string stringInput[20];
  vector<int> intInput;
  vector<int> intOutput;

  for (int i = 0; i < 5; i++) {
    cin >> stringInput[i];
    // From Fred Larson on StackOverflow - 'remove commas from string'
    stringInput[i].erase(std::remove(stringInput[i].begin(), stringInput[i].end(), ','), stringInput[i].end());
    intInput.push_back(stoi(stringInput[i]));
  }
  
  for (int i = 0; i < 5; i++) {
    cout << intInput.at(i) << endl; 
  }

  MapAbsoluteValue test;
  intOutput = test.map(intInput);

  for (int i = 0; i < intOutput.size(); i++) {
    cout << intOutput.at(i) << endl; 
  }
}