#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m)
    {
        marks = m;
    }

    Student(const Student &obj)
    {
        marks = obj.marks;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1(95);

    Student s2 = s1;

    cout << "Original object:" << endl;
    s1.display();

    cout << "Copied object:" << endl;
    s2.display();

    return 0;
}
