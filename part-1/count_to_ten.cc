// Raxel Ortiz
// CPSC 120-05
// 2021-24-02
// raxelortiz7@csu.fullerton.edu
// @raxelortiz7
//
// Lab 03-01
//
// This program has three loops and prints out numbers 1-9 with for loop, while loop and do-while loop.
//

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declare and initialize a const integer named counter max (max for
  // maximum). Initialize it to 10.
  const int Kmax = 10;
  cout << "With a for loop\n";
  // Write a for loop which prints out the numbers 0 through 9 with each
  // number on a line by itself. Use the previously defined constant to control
  // the loop.
  for ( int i = 0; i < Kmax; i++ ) {
    cout << i << "\n";
  }
  cout << "\nWith a while loop\n";
  // Write a while loop which prints out the numbers 0 through 9 with each
  // number on a line byc itself. Use the previously defined constant to control
  // the loop.
int i = 0;
while ( i < Kmax ) {
  cout << i << "\n";
  i = i + 1;
}
  cout << "\nWith a do-while loop\n";
  // Write a do-while loop which prints out the numbers 0 through 9 with
  // each number on a line by itself. Use the previously defined constant to
  // control the loop.
int e = 0;
do {
  cout << e << "\n";
  e = e + 1;
} while (e < Kmax);

  return 0;
}
