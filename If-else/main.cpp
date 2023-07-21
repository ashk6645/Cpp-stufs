#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;
//1(Max between two numbers)
/*int main()
{
    int num1,num2;
    cout<<"Enter two numbers:\n";
    cin>>num1;
    cin>>num2;

    if(num1>num2)
        cout<<num1<<"is greater than"<<num2;
    else
        cout<<num2<<"is greater than"<<num1;

    return 0;
}*/

//2(A number is negative positive or zero)
/*int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num>0)
        cout<<num<<"is positive";
    else if(num<0)
        cout<<num<<"is negative";
    else
        cout<<num<<"is zero";
}*/

//3(Check divisibility by 5 and 11)
/*int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%5==0)
    {
        cout<<num<<"is divisible by 5\n";

    }
    if(num%11==0)
       {
        cout<<num<<"is divisible by 11";

       }
    else
        cout<<num<<"is neither divisible by 5 nor 11";
}*/

//4(Check for even or odd)
/*int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    if(num%2==0)
        cout<<"Even\n";
    else
        cout<<"Odd\n";
}*/

//5(Leap year)
/*int main()
{
    int year;
    cout<<"Enter year:";
    cin>>year;
    if(year%4==0)
        cout<<year<<" "<<"is a leap year";
    else
        cout<<year<<" "<<"is not a leap year";
}*/

//6(Input character is a alphabet or not)
/*int main()
{
    char ch;
    cout<<"Enter a character";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       {
       cout<<ch<<" "<<"is a alphabet";
       }
       else
        cout<<ch<<" "<<"is not a alphabet";

}*/

//7(Find week name using switch)
/*int main()
{
    int day;
    cout<<"Enter day number:";
    cin>>day;
    switch(day)
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
        cout<<"Saturday";
        break;
    default:
        cout<<"Wrong entry";

    }
}*/

//8(Program to count total number of notes)
/*int main()
{
    int amount;
    int note500, note200, note100, note50, note20, note10, note5, note2, note1;
    note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    cout<<"Enter the amount:";
    cin>>amount;
    if(amount>=500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount>=200)
    {
        note200 = amount/200;
        amount -= note200 * 200;
    }
    if(amount>=100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount>=50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount>=20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount>=10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount>=5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount>=2)
    {
        note2 = amount/2;
        amount -= note2 * 2;
    }
    if(amount>=1)
    {
        note1 = amount/1;
        amount -= note1 * 1;
    }
    cout<<"Total number of notes:\n";
    cout<<"500="<<note500<<endl;
    cout<<"200="<<note200<<endl;
    cout<<"100="<<note100<<endl;
    cout<<"50 ="<<note50<<endl;
    cout<<"20 ="<<note20<<endl;
    cout<<"10 ="<<note10<<endl;
    cout<<"5  ="<<note5<<endl;
    cout<<"2  ="<<note2<<endl;
    cout<<"1  ="<<note1<<endl;


}*/

//9(Finding the roots of a quadratic equation)
int main()
{
    float a,b,c;
    float root1, root2, imaginary, d;
    cout<<"Enter the value of a, b, c of the quadratic equation ax^2+bx+c=0";
    scanf("%f %f %f",&a,&b,&c);
    d = (b*b)-(4*a*c);
    if(d>0)
    {
        root1 = (-(b) + sqrt(d))/(2*a);
        root2 = (-(b) - sqrt(d))/(2*a);
        printf("Two distinct and real roots exist .%2f .%2f",root1,root2);
    }
    else if(d==0)
    {
        root1 = root2 = -b/(2*a);
        cout<<"Two equal root are"<<root1<<" "<<root2;
    }
    else if(d<0)
    {
            root1 = root2 = -b/(2*a);
            imaginary = sqrt(-d)/(2*a);
            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                root1, imaginary, root2, imaginary);
    }


}
