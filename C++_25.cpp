#include <iostream>
using namespace std;
class Book
{
    public:
        string title;
        string author;
        int pages;
    Book(){
        title = "no title";
        author = "no author";
        pages = 0;
    }
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};
int main()
{

    Book book1("Harry potter", "J.K. Rowling", 900);
    
    Book book2("The Lord Of The Rings", "Tolkein", 700);

    Book book3;
    cout << book3.author << endl;
    return 0;
}