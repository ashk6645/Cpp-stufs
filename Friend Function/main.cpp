#include <iostream>

using namespace std;

//Friend function(it can access the private and protected data of a class)

class complex
{
    int a, b;
public:
    void setNumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void printNumber()
    {
        cout<<"Your number is " <<a<<" + " <<b<<"i"<<endl   ;
    }

};
complex sumcomplex(complex x, complex y)
{
    complex z;
    z.setNumber((x.a + y.a), (x.b + y.b));
    return z;
}
int main()
{
    complex c1,c2,sum;
    c1.setNumber(1,7);
    c2.setNumber(2,7);
    c1.printNumber();
    c2.printNumber();
    sum = sumcomplex(c1,c2);
    sum.printNumber();
    return 0;
}
