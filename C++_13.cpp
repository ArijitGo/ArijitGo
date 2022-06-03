#include <iostream>
using namespace std;
int main()
{
    string colour, pluralNoun, footballer;
    
    cout << "Enter the colour: ";
    getline(cin, colour);
    
    cout << "Enter the plural noun: ";
    getline(cin, pluralNoun);
    
    cout << "Enter the footballer: ";
    getline(cin, footballer);


    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are brave" << endl;
    cout << "Favorite footballer is " << footballer << endl;
    return 0;
}