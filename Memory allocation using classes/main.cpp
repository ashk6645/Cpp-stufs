#include <iostream>

using namespace std;

//1(Memory allocation using array)
class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;
public:
    void initcounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);

};
void shop :: setPrice(void)
{
    cout<<"Enter the Id of your item number "<<counter+1<<endl;
    cin>>ItemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>ItemPrice[counter];
    counter++;
}
void shop :: displayPrice(void)
{
    for(int i = 0;i<counter;i++)
    {
        cout<<"The price of item with Id "<<ItemId[i]<<" is "<<ItemPrice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
