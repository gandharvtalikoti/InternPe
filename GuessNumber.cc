// InternPe week 1 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand((unsigned int)time(NULL));// set a starting point based on the current time
    int number = (rand() % 100) + 1; // generates a random integer number between 1to100
    
    int guess = 0;
    do
    {
        cout << "Enter the Guess(1-100): ";
        cin >> guess;
        if (guess > number)
            cout << "Guess lower!" << endl;
        else if (guess < number)
            cout << "Guess Higher!" << endl;
        else
            cout << "You WONN!" << endl;

    } while (guess != number);

    return 0;
}