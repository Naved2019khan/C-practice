#include<iostream>
using namespace std;
class base1{
    protected :
    int base1int;
    public:
    void set_no1(int a){
            base1int=a;
    }
};
class base2{
    protected :
    int base2int;
    public:
    void set_no2(int a){
        base2int=a;
    }
};
class derive: public base1 ,public base2{
    public:
    void show(){
        cout<<base1int<<endl;
        cout<<base2int<<endl;
        cout<<base1int+base2int<<endl;        
    }
        
};

int main()
{
  derive der;
  der.set_no1(25);
  der.set_no2(5);
  der.show();



    return 0;
}