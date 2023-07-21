#include <iostream>

using namespace std;

//1(Exception handling)
/* int main()
{
    int result,numerator, denominator;
    cout<<"Enter numerator and denominator"<<endl;\
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0)
        {
            throw(denominator);
        }
        result = numerator/denominator;
    }
    catch(int x)
    {
        cout<<"Exception: Divide by zero is not allowed"<<endl;
    }

    cout<<"The value is"<<result;

    return 0;
}*/


//2(Exception handling)
/*int main()
{
    int age;
    cout<<"Enter age ";
    cin>>age;
    try
    {
        if(age>=18)
        {
            cout<<"You are eligible"<<endl;
        }
        else
        {
            throw(age);
        }
    }
    catch (int x)
    {
        cout<<"Sorry you are not eligible to vote"<<endl;
        cout<<"Your age is: "<<age;
    }
}*/

//3(Exception handling)
int main()
{
    int pass,fail,result;
    cout<<"Enter the result ";
    cin>>result;
    try
    {
        if(result>=33)
        {
            cout<<"You are pass"<<endl;
        }
        else
        {
            throw(result);
        }
    }
    catch (int x)
    {
        cout<<"Sorry you are not passed"<<endl;
        cout<<"Your result is "<<result;
    }
}
