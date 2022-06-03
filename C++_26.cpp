#include <iostream>
using namespace std;
class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa)
        {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        bool hasHonours(){
            if(gpa >= 9.1){
                return true;
            }else{
                return false;
            }
        }
};
int main()
{
    Student student1("Arijit","B.Tech", 9.0);
    Student student2("Abhijit", "B.Sci", 9.2);
    cout << student2.hasHonours() << endl;
    return 0;
}