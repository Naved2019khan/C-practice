/*Calculating intrest value using class 
  input principal , year and intrest
   output as returnvalue 
   frist input intrest in float 
   second input intrest in integer
*/

#include <iostream>
using namespace std;
class simple
{
    int principal;
    int year;
    float intrest;
    float returnvalue;

public:
    simple(){}
    simple(int p, int y, float f);
    simple(int p, int y, int F);
    void display();
};
simple::simple(int p, int y, float f)
{
    principal = p;
    year = y;
    intrest = f;
    returnvalue = principal;
    for (int i = 0; i < year; i++)
    {
        returnvalue *= (1 + intrest);
    }
}
simple::simple(int p, int y, int F)
{
    principal = p;
    year = y;
    intrest = float(F) / 100;
    returnvalue = principal;
    for (int i = 0; i < year; i++)
    {
        returnvalue = returnvalue * (1 + intrest);
    }
}
void simple::display()
{
    cout << "The returnvalue of " << year << " year "
         << " is " << returnvalue << endl;
}

int main()
{
    int p, y, F;
    float f;
    simple c, c1, c2;
    cout << "Enter value of principal year and intrest " << endl;
    cin >> p >> y >> f;
    c = simple(p, y, f);
    c.display();

    cout << "Enter value of principal year and intrest " << endl;
    cin >> p >> y >> F;
    c1 = simple(p, y, F);
    c1.display();

    return 0;
}