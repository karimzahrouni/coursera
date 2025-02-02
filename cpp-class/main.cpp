/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

using namespace std;

int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  cout << "Volume: " << volume << endl;

  return 0;
}
