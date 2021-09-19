/* =====>Oops concept <<====
The copying of constructor
  */


#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int x)
    {
        a = x;
    }
    number(number &obj)
    {
        cout << "Copy contructor is " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};
int main()
{
    number x, y, z2, z(10);
    z.display();
    y.display();
    x.display(); 
    number z1(x);
    z1.display();
    z2=x;
    z2.display();
    number z3=z;
    z3.display();

    return 0;
}