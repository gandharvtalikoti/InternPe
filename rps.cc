// let's play game with 
// rock beats scissors
// paper beats rock
// scissors beats paper

#include <bits/stdc++.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{

  srand((unsigned int)time(NULL));

  int my_move = 0;
  int computer_move = 0;
  bool draw = false;
  // Continually play the game until there is a winner
  do
  {
    // Prompt the user to enter their throw, store it into my_move
    cout << "Select your throw." << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Selection: ";
    cin >> my_move;

    cout << endl;

    computer_move = (rand() % 3) + 1;

    // display what computer plays
    if (computer_move == ROCK)
    {
      cout << "computer goes for ROCK." << endl;
    }
    else if (computer_move == PAPER)
    {
      cout << "computer goes for PAPER." << endl;
    }
    else if (computer_move == SCISSORS)
    {
      cout << "computer goes for SCISSORS." << endl;
    }

    draw = false;

    if (my_move == computer_move)
    {
      draw = true;
      cout << "Draw! Play again!" << endl;
    }
    else if (my_move == ROCK && computer_move == SCISSORS)
    {
      cout << "ROCK beats SCISSORS! YOU WIN." << endl;
    }
    else if (my_move == ROCK && computer_move == PAPER)
    {
      cout << "PAPER beats ROCK! YOU LOSE." << endl;
    }
    else if (my_move == PAPER && computer_move == ROCK)
    {
      cout << "PAPER beats ROCK! YOU WIN." << endl;
    }
    else if (my_move == PAPER && computer_move == SCISSORS)
    {
      cout << "SCISSORS beats PAPER! YOU LOSE." << endl;
    }
    else if (my_move == SCISSORS && computer_move == PAPER)
    {
      cout << "SCISSORS beats PAPER! YOU WIN." << endl;
    }
    else if (my_move == SCISSORS && computer_move == ROCK)
    {
      cout << "ROCK beats SCISSORS! YOU LOSE." << endl;
    }
    cout << endl;

  } while (draw);

  return 0;
}