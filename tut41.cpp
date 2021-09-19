/* 
student-->test,sports;
test,sports -->result;
*/
// solving ambiguity
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_r(int r)
    {
        roll = r;
    }
    void print_r()
    {
        cout << "student roll number is :"
             << roll << endl;
    }
};
class test : virtual public student
{
protected:
    float physics, maths;

public:
    void set_marks(float m1, float m2)
    {
        physics = m1;
        maths = m2;
    }
    void print_marks()
    {
        cout << "Physics Marks are : "
             << physics << endl
             << maths << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float scr)
    {
        score = scr;
    }
    void print_score()
    {
        cout << "and score is : " << score << endl;
    }
};
class result : public test, public sport
{
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_r();
        print_marks();
        print_score();
        cout << "Total result is : " << total << endl;
    }
};

int main()
{
    result m;
    m.set_r(10);
    m.set_marks(45.56, 56.23);
    m.set_score(50.5);
    m.display();

    return 0;
}