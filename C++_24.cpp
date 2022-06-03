#include <iostream>
using namespace std;

class Book
{
    public:
        string title;
        string author;
        int pages;
};
int main()
{

    Book book1;
    book1.title = "Harry potter";
    book1.author = "J.K. Rowling";
    book1.pages = 900;

    Book book2;
    book2.title = "The Lord Of The Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.author << endl;
    return 0;
}