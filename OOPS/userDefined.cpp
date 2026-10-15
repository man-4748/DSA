#include <iostream>
#include <string>
using namespace std;
// Student -> User-defined data type (Class / Blueprint)
class Student {
    public:
        // name, rollNo, cgpa -> Data members (Attributes / Properties / Fields)
        string name;
        int rollNo;
        float cgpa;
};
int main() 
{
    // int class ---> restricted keyword
    Student x;// datatype of x is Student ---> class
    //x --> object
    // name --> attributes
    x.name = "Harish";
    x.rollNo = 55925;
    x.cgpa = 8.3;
    // x, alpha -> Instances of the class (Objects)
    Student alpha ;
    alpha.name = "Alpha Zero";
    alpha.rollNo = 1;
    alpha.cgpa = 9.923;

    cout << x.name << " | Roll: " << x.rollNo << " | CGPA: " << x.cgpa << "\n";
    cout << alpha.name << " | Roll: " << alpha.rollNo << " | CGPA: " << alpha.cgpa << "\n";
}
