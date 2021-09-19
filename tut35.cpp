/* Inheritance 
base case == current 
derive case 
syntax :
class {{derive class }} : visibility and base class
{
    public:

}
*/
#include<iostream>
using namespace std;
class employee{
    public:
     int id;
     int salary=34;
    employee(){}
    employee(int inpid ){
        id=inpid;
        cout<<id<<endl;
    }
    
   
};
class programmer : public employee{
    public:
    programmer(int n )
    {
        id=n;
    }
    int ip=9;
    void getid(){
        cout<<id<<endl;
    }
};  
int main()
{
    employee a1(12),a2(43);
    cout<<a1.salary<<endl;
    cout<<a2.salary<<endl;
    programmer a3(5);
    cout<<a3.ip<<endl;
    a3.getid();




    return 0;
}