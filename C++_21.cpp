#include <iostream>
using namespace std;
int main()
{
    int secretNumber = 7;
    int guess;
    while(guess != secretNumber)
    {
        cout << "Enter the guess number: " << endl;
        cin >> guess;
    }
    cout << "You win" << endl;
    return 0;
}