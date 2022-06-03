#include <iostream>
using namespace std;

void sayhi(string name, int age)
{
    cout << "Hello " << name << ", you are " << age << " years old" << endl;    
}

int main()
{
    sayhi("Arijit", 21);
    sayhi("Abhijit", 28);
    return 0;
}