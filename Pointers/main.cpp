#include <iostream>

using namespace std;

//1(Pointer simple)
/*int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;
    cout<<"Address of a is:"<<&a<<endl;
    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of a is:"<<*b<<endl;
    cout <<"Address of a is:"<<b << endl;
    cout<<"Address of b is:"<<&b<<endl;
    cout<<"Address of b is:"<<c<<endl;
    cout<<"Value of b is:"<<**c<<endl;
    return 0;
}*/

//2
int main()
{
    int marks[] = {23,24,25,26};
    cout<<marks[2]<<endl;
    int *p = marks;
    cout<<*(p+1)<<endl;
    cout<<*p<<endl;
    cout<<*(p+2)<<endl;

}
