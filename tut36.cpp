  #include<iostream>
  using namespace std;
  class base{
      int data1;
      public:
      int data2;
      void setdata();
      int getdata1();
      int getdata2();

  };
  void base :: setdata(){
      data1=10;
      data2=20;
  }
  int base:: getdata1(){
      return data1;
  }
  int base:: getdata2(){
      return data2;
  }

  class derive : public base{  
      public:
      int process();
      int data3;
      void display();

  };
  int derive:: process(){
      return data3=data2*getdata1() ;
  }
  void derive :: display() {
      cout<<"Value of 1 is "<<getdata1()<<endl;
      cout<<"Value of 2 is "<<data2<<endl;
      cout<<"Value of 3 is "<<data3<<endl;
  }
  
  int main()
  {
    derive c1,c2;
    c1.setdata();
    c1.getdata1();
    c1.process();
    c1.display();
    return 0;
  }