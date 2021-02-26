// Raxel Ortiz
// CPSC 120-05
// 2021-24-02
// raxelortiz7@csu.fullerton.edu
// @raxelortiz7
//
// Lab 03-02
//
// This program has an outer loop and two inner loops that produce a pattern when ran in the termial 
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare and initialize a const integer named counter max (max for
  // maximum). Initialize it to 22.
const int kCounterMax = 22;
  // Write an outer loop which starts from 0 and goes up to the counter
  // max.
for ( int i = 0; i < kCounterMax; i++ ) {
  // Write an inner loop which starts from the current line number and
  // counts down to zero. Make sure that this loop is inside the outer loop.

  string dash = "-";
  for ( int dashes = i; dashes > 0; --dashes ) {
    cout << dash << "";
}
  // Print an asterisk.
  cout << "*";

  // Write another inner loop which starts from the current line number
  // and counts up to the counter max. Make sure that this loop is inside the
  // outer loop but outside the first inner loop.
  string lines = "|";
  for ( int line = i; line < kCounterMax; ++line ) {
    cout << lines << "";
  }
  // print a new line character
cout << "\n";
}
  return 0;
}
