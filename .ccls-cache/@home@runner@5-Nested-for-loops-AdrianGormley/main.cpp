#include <iostream>
using namespace std;
#include <iostream>
#include <iomanip>

int main() {
  const int NUM_ROWS = 3;
  const int NUM_COLUMNS = 4;

  // 2D array of integers
  int MyInts[NUM_ROWS][NUM_COLUMNS] = {
    {34, -1, 879, 22}, {24, 365, -101, -1}, {-20, 40, 90, 97}};

  // Outer loop, access one row at a time
  for (int row = 0; row < NUM_ROWS; ++row) {
    // then iterate through all of the column values in that row
    int dummy = 0;
    for (int column = 0; column < NUM_COLUMNS; ++column) {
        //cout.width(5);
        std::string str = to_string(MyInts[row][column]);
        cout<< "I[" << row << "][" << column << "](" << abs(MyInts[row][column]) << ")";
        //cout << " ";
        //if(column != NUM_COLUMNS - 1)
        {
            //cout.width(dummy + 1);
            cout << "\t";
        }

        //dummy = str.length();
        //if(dummy == 2)
        //    dummy = 0;
    }
      
    cout << endl;
  }

  return 0;
}