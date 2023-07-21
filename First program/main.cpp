#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
using namespace std;
//1(Basic)
/*int main()
{
    cout<<"Hello C++!\n";
    cout<<"Hello abc";
    return 0;
}*/

//2(Creating variables)
/*int main()
{
    int myNum = 16;
    float abc = 15.6;
    int myAge = 21;
    cout<<myNum<<endl;
    cout<<abc<<endl;
    cout<<"My age is"<< myAge <<"years";
}*/

//3(Simple addition)
/*int main()
{
    int x,y,sum;
    x=12;
    y=13;
    sum = x+y;
    cout<<"sum is equal to "<<sum;
}*/

//4(Taking input)
/*int main()
{
    int a;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"Value of A is"<<a;
}*/

//5(Simple Calculator)
/*int main()
{
    int a,b,sum;
    cout<<"Enter the value of a and b:\n";
    cin>>a>>b;
    sum = a+b;
    cout<<sum;
}*/

//6(Exponentials in real)
/*int main()
{
    float f1 = 11e2;
    double f2 = 32e3;
    cout<<f1<<endl;
    cout<<f2;
}*/

//7(Boolean(T/F))
/*int main()
{
    bool Rishab = true;
    bool Ribash = false;
    cout<<Rishab<<endl;
    cout<<Ribash;
}*/

//8(Character data type)
/*int main()
{
    char abc = 'A';
    cout<<abc;
}*/


//9(String)
/*int main()
{
    string gt = "Hello C";
    cout<<gt;
}*/

//10(Addition of string)
/*int main()
{
    string x = "10";
    string y = "20";
    cout<<x+y;
}*/

//11(Length of string(.length() or .size())
/*int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<txt.size();
}*/

//12(Accessing string character)
/*int main()
{
    string mystring = "Hello";
    cout<<mystring[1];
}*/


//13(Changing string character)
/*int main()
{
    string abc = "Ashutosh";
    abc[3] = 's';
    cout<<abc;
}*/


//14(Max value)
/*int main()
{
    int x,y;
    x = 10;
    y = 28;
    cout<<max(x,y)<<endl;
    cout<<min(x,y);
}*/


//15(C math library)
/*int main()
{
    cout<<sqrt(81)<<endl;
    cout<<round(23.67)<<endl;
    cout<<log(1);
}*/


//16(Booleans(T/F))
/*int main()
{
    bool abc = true;
    bool xyz = false;
    cout<<abc<<endl;
    cout<<xyz;
}*/

//17(if)
/*int main()
{
    int x,y;
    cout<<"Enter the value of x and y: \n";
    cin>>x>>y;
    if(x>y)
        cout<<"X is greater than y";
    else
        cout<<"y is greater than x";
}*/

//18(Else if)
/*int main()
{
    int x = 21;
    if(x<20)
        cout<<"Hello\n";
    else if(x>20)
        cout<<"Hi!\n";
    else
        cout<<"Bye";
}*/

//19(Ternary operator)
/*int main()
{
    int x = 20;
    string result = (x<12)?"Good":"Bad";
    cout<<result;
}*/


//20(Switch case)
/*int main()
{
    int day;
    cout<<"Enter the weekday number: ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"OOh no";
    }
}*/

//21(While loop)
/*int main()
{
    int i;
    i=0;
    while(i<5)
    {
         cout<<i;
         i++;
    }

}*/

//22(do while)
/*int main()
{
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++;
    }
    while (i<=10);
}*/

//23(for loop)
/*int  main()
{
    int a;
    for(a=1;a<=10;a++)
    {
        cout<<a<<endl;
    }
}*/

//24(C++ break)
/*int main()
{
    int i;
    for(i=0;i<=4;i++)
    {
        if(i==3)
        {
            break;
        }
    }
    cout<<i;
}*/

//25(C++ continue)
/*int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==4)
        {
            continue;
        }
    }
    cout<<i;
}*/


//26(Array)
/*int main()
{
    int a[5]={2,3,4,5,6};
    //cout<<a[2];
    a[1]=1; //changing array element
    cout<<a[1];
}*/

//27(Loop through an array)
/*int main()
{
    string cars[4]={"BMW","MERCEDES","LEMBORGHINI","FERRARI"};
    for(int i = 0;i<4;i++)
    {
        //cout<<cars[i]<<endl;
        cout<<i<<":"<<cars[i]<<endl;
    }
}*/

//28(Using reference variable)
/*int main()
{
    string food = "rice";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal;
}*/

//29(Memory address)
/*int main()
{
    string food = "Pizza";
    cout<<&food;
}*/


//30(Pointer in C++)
/*int main()
{
    string food = "Pizza";
    string* ptr = &food;
    cout<<food<<endl;
    cout<<&food<<endl;
    cout<<*ptr<<endl;
    *ptr = "Hamburger";
    cout<<*ptr;
}*/

//31(Functions)
/*void hello()
{
    cout<<"I am ASHUTOSH\n";
}
int main()
{
    hello();
    hello();
    hello();
}*/

//32(Addition using fucntion)
/*int add(int,int);
int main()
{
    int a,b,sum;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    add(a,b);
}
int add(int x,int y)
{
    int sum;
    sum = x+y;
    cout<<sum;
    //return sum;
}*/


//33(Parameters)
/*void myFun(string fname)
{
    cout<<fname;
}
int main()
{
    myFun("Lion\n");
    myFun("Tiger\n");
    myFun("lee");
}*/

//34(Factorial using function)
/*int factorial(int);
int main()
{
    int a,i,fact;
    cout<<"Enter a number:";
    cin>>a;
    fact = factorial (a);
    cout<<fact;

}
int factorial (int a)
{
    int i,f=1;
    for(i=1;i<=a;i++)
    {
        f = f*i;
    }
    return f;
}*/

//35(Pass by reference)
/*void swapNum(int &x, int &y)
{
    int z = x;
    x=y;
    y=z;
}
int main()
{
    int firstNum = 10;
    int secondNum = 20;
    cout<<"Before swap:"<<"\n";
    cout<<firstNum<<"\n"<<secondNum;
    swapNum(firstNum,secondNum);
    cout<<"After swap:"<<"\n";
    cout<<firstNum<<"\n"<<secondNum;
}*/


//36(Function Overloading)(Function has same name with different parameters)
/*int plusFun(int x,int y)
{
    return x+y;
}
double plusFun(double x, double y)
{
    return x+y;
}
int main()
{
    int num1 = plusFun(2,3);
    int num2 = plusFun(2.2,3.3);
    cout<<num1<<"\n";
    cout<<num2;
}*/

//37(Recursion)
/*int sum(int x)
{
    if(x>0)
        return x+sum(x-1);
    else
        return 0;
}
int main()
{
    int result = sum(11);
    cout<<result;
}*/

//38(Class)
/*class person
{
    char name[30];
    int age;
public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void)
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
}
void person :: display(void)
{
    cout<<"\nName: "<<name;
    cout<<"\nAge: "<<age;
}
int main()
{
    person p;
    p.getdata();
    p.display();
    return 0;
}*/

//39(ADD)
/*int main()
{
    int a=10,b=12;
    /*cout<<"Enter two numbers: \n";
    cin>>a>>b;
    cout<<"Sum:"<<a+b<<endl;
    cout<<"Difference:"<<a-b<<endl;
    cout<<"Product:"<<a*b<<endl;
    cout<<"Division:"<<a/b<<endl;
    cout<<"Modulo:"<<a%b<<endl;
    cout<<a++<<endl<<a++<<endl<<b++;*/
    //{Comparison operators} and Logical Operator
    /*cout<<((a==b) && (a>=b))<<endl;
    cout<<((a!=b) || (b+=a))<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;}*/

//40(Factorial)

/*int main()
{
    int fact=1,i,num;
    cout<<"Enter a number:\n";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    cout<<fact;

}*/

//41(size of)
/*int main()
{
    int a ;
    float b;
    char c;
    double d;
    long double e;
    bool z;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(z);
}*/

//42(Reference variable)
/*int main()
{
    int x=123;
    int &y = x;
    cout<<x<<endl<<y;
}*/

//43(Constants)
/*int main()
{
    const int a = 4;
    cout<<"Value of  a:"<<a<<endl;
    a=5;
    cout<<"New value:"<<a<<endl;
}*/

//44(setw)
/*int main()
{
    int a=3,b=45,c=1234;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;

}*/

//45(Profit or loss)
/*int main()
{
    int profit,loss,cp,sp;
    cout<<"Enter the cost price:"<<endl;
    cin>>cp;
    cout<<"Enter the selling price:"<<endl;
    cin>>sp;
    if(cp>sp)
        cout<<"Loss of:"<<(cp-sp)<<endl;
    else if(sp>cp)
        cout<<"Profit of:"<<(sp-cp)<<endl;

    else
    cout<<"Neither profit nor loss";

}*/

//46
/*int main()
{
    int a;
    long l;
    char ch;
    float f;
    double d;
    cin>>a>>l>>ch>>f>>d;
    cout<<a<<endl<<l<<endl<<ch<<endl<<f<<endl<<d;
}*/

//47(Check for square)
/*int main()
{
    int l,b;
    cout<<"Enter the length and breadth of the rectangle:";
    cin>>l>>b;
    if(l==b)
        cout<<"It's a square";
    else
        cout<<"Not a square";

}*/

//48(Greatest number)
int main()
{
    int a,b;
    cout<<"Enter two values:";
    cin>>a>>b;
    if(a>b)
        cout<<a<<"is greatest\n";
    else
        cout<<b<<"is greatest";
}


