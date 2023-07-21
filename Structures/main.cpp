#include <iostream>

using namespace std;

/*struct employe
{
    int eid;
    char favChar;
    float salary;
};
int main()
{
    struct employe Rishab;
        Rishab.eid =  538;
        Rishab.favChar = 'A';
        Rishab.salary = 10000000000;
        cout<<Rishab.eid<<endl;
        cout<<Rishab.favChar<<endl;
        cout<<Rishab.salary<<endl;
}*/

//2(Union)
union money
{
    int rice;
    int car;
};
int main()
{
    union money m1;
    m1.rice = 34;
    cout<<m1.rice;
    cout<<m1.car;
}

