#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_no(int);
    void get_no();
};
void student :: set_no(int r){
    roll_number=r;
}
void student :: get_no(){
    cout<<"The roll no. of student "<<roll_number<<endl;
}
class exam : public student{
    protected:
    float physics , maths;
    public:
    void setmarks(float , float);
    void getmarks();
};

void exam :: setmarks(float m1,float m2){
    physics=m1;
    maths = m2;

}
void exam :: getmarks(){
    cout<<"Marks of physics are "<<physics<<endl;
    cout<<"Marks of maths are "<<maths<<endl;
}
class result : public exam{
    float percentage;
    public:
    void display_result();

};
void result::display_result(){
    percentage=(physics+maths)/2;
    cout<<"The result of both subject is "<<percentage<<endl;
}

int main()
{
    result c;
    c.set_no(420);
    c.get_no();

    c.setmarks(94,90);
    c.getmarks();
    c.display_result();   

    return 0;
}