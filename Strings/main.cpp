#include <iostream>
#include <string>

using namespace std;

//1(Printing string)
/*int main()
{
    string a = "Hello CPP";
    cout<<a;
    return 0;
}*/

//2(Size of a entered string)
int main()
{
    string a;
    cout<<"Enter any string:";
    cin>>a;
    cout<<"Length of the string is:"<<a.size();
    printf("Size of the entered string is %d",a.size());
}
