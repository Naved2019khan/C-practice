#include <iostream>
using namespace std;
class cal
{
protected:
    int n1, n2;
    int x;
    char op;

public:
    void setno(int a1, int a2);
    void display(void);
};
void cal ::setno(int a1, int a2)
{
    n1 = a1;
    n2 = a2;
}
void cal ::display(void)
{

    cout << n1 + n2 << endl;
    cout << n1 - n2 << endl;
    cout << (float(n1) / n2) << endl;
    cout << n1 * n2 << endl;
}
class scal : public cal
{
    int ch;

public:
    void setch(char);
    void display();

} ;void scal ::setch(char op)
{
    ch = op;
}
void scal ::display()
{
    switch (ch)
    {
    case '+':
    cout << n1 + n2 << endl;
    break;
    case '-':
    cout << n1 - n2 << endl;
    break ;
    case '*':
    cout << n1 * n2 << endl;
    break ;
    case '/':
    cout << float(n1) / n2 << endl;
    break ;
    
    
    default:
    cout<<"Invalid"<<endl;
        break;
    }
}
int main()
{
    int a1, a2;
    char ch;
    cout << "Enter no. " << endl;
    cin >> a1 >> a2;
    scal c;
    c.setno(a1, a2);

    cout << "Enter opteration" << endl;
    cin >> ch;

    c.setch(ch);
    c.display();
    return 0; 
}