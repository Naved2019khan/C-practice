#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"hello world";
    }
};
class base2{
    public:
    void greet(){
        cout<<"Good morning";
    }
};
class derived: public base1,public base2{
    int a;
    public:
    void greet(){
        // base1::greet();
        base2::greet();
    }
    
};

int main()
{
  derived der;
  der.greet();

    return 0;
}