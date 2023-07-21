#include <iostream>

using namespace std;

//1(Print natural numbers using while loop)
/*int main()
{
    int i;
    i=1;
    while(i<=10){
        cout<<i<<endl;

    i++;
    }

    return 0;
}*/

//2(Print natural number till n)
/*int main()
{
    int num,i;
    i=1;
    cout<<"Enter the value of num:";
    cin>>num;
    while(i<=num)
    {
        cout<<i<<endl;
        i++;
    }

}*/

//3(Natural number in reverse order)
/*int main()
{
    int n,i;
    cout<<"Enter the value of n:";
    cin>>n;
    i=n;
    while(i>=1)
    {
        cout<<i<<endl;
        i--;
    }
}*/

//4(Print alphabet from a to z in lowercase)
/*int main()
{
    char ch;
    for(ch='a';ch<='z';ch++)
    {
        cout<<ch<<" ";
    }
}*/

//5(Even numbers between 1 to 100)
/*int main()
{
    int even,i;
    i=1;
    cout<<"Even numbers between 1 to 100:\n";
    while(i<=100)
    {
        if(i%2==0)
            cout<<i<<" ";
        i++;
    }

}*/

//6(Sum of all natural number between 1 to n)
/*int main()
{
    int n,i,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    cout<<"Sum of numbers till n is :"<<sum;
}*/

//7(Sum of all even natural numbers from 1 to n)
/*int main()
{
    int i,n,even,sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=2;i<=n;i+=2)
    {
        sum = sum+i;
    }
    cout<<sum;
}*/

//8(Print multiplication table)
/*int main()
{
    int i,n;
    cout<<"Enter the number:";
    cin>>n;
    //for(i=n;i<=(n*10);i+=n)
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,(n*i));
    }
}*/

//9(Count number of digit)
/*int main()
{
    int count = 0,i,n;
    cout<<"Enter the number:";
    cin>>n;
    do
    {
        count++;
        n=n/10;
    }while(n!=0);
    cout<<count;
}*/

//10(find firt and last digit of a number)
/*int main()
{
    int n,first,last,sum;
    cout<<"Enter the number:";
    cin>>n;
    first = n;
    while(first>=10)
    {
        first = first/10;
    }
    cout<<"First digit is:"<<first<<endl;
    last = n%10;
    cout<<"Last digit is:"<<last;
    sum = first+last;
    cout<<endl<<"Sum is:"<<sum;
}*/

//11(Add the digits of a number)
/*int main()
{
    int num, sum = 0;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0)
    {
        sum += num%10;
        num = num/10;
    }
    cout<<"Sum of digits is :"<<sum;
}*/

//12(Find the product of digits of a entered number)
int main()
{
    int num;
    long product = 1;
    cout<<"Enter a number:";
    cin>>num;
    product = (num==0 ? 0:1);
    while(num!=0)
    {
        product = product*(num%10);
        num = num/10;
    }
    cout<<"Product of digits are:"<<product;
}
