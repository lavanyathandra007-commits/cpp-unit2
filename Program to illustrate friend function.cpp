#include <iostream>
using namespace std;

class Demo
{
private:
    int num;

public:
    Demo(int n)
    {
        num = n;
    }

    friend void display(Demo obj);
};

void display(Demo obj)
{
    cout << "Number = " << obj.num << endl;
}

int main()
{
    Demo d(100);

    display(d);

    return 0;
}
