
#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// Function to display the board
void showBoard() {
  cout << "   |   |   \n";  // Added spaces for proper alignment
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << " " << board[i][j] << " ";
      if (j < 2) {
        cout << "|";
      } else {
        cout << "   "; // Added spaces for right alignment of last column
      }
    }
    cout << "\n";
    if (i < 2) {
      cout << "---+---+---\n"; // Use "+" for better grid representation
    }
  }
}