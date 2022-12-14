#include <iostream>
using namespace std;

int main() {
  const int NUM_ROWS = 3;
  const int NUM_COLUMNS = 4;

  // 2D array of integers
  int MyInts[NUM_ROWS][NUM_COLUMNS] = {
      {34, -1, 879, 22}, {24, 365, -101, -1}, {-20, 40, 90, 97}};

  // Outer loop, access one row at a time
  for (int row = 0; row < NUM_ROWS; ++row) {
    // then iterate through all of the column values in that row
    for (int column = 0; column < NUM_COLUMNS; ++column) {
      cout << "Integer[" << row << "][" << column
           << "] = " << MyInts[row][column] << endl;
    }
  }

  return 0;
}