#include<iostream>
using namespace std;
class Bank

{
    char name[20],ac_type[20];
    int ac_no,balance,depo,with;
    public:
    Bank()
    {
        cout<<"\n\nEnter name :";
        cin>>name;
        cout<<"Enter Account nimber :";
        cin>>ac_no;
        cout<<"Enterr account type :";
        cin>>ac_type;
        cout<<"Enter Balance :";
        cin>>balance;
    }

    void deposite()
    {
        cout<<"\nEnter the account to Diposited Amount : ";
        cin>>depo;

        balance = balance +depo;
        cout<<"\nDeposite Susscuful....\n Avaliable Amount : "<<balance;

    }

    void withdraw()
    {
        cout<<"\nEnter the amount to withdraw : ";
        cin>>with;

        if(with >=balance)
        {
            cout<<"\nAmount exceeded balance limit";
        }
        else
        {
            balance = balance - with;
            cout<<"\n\nwithdrawval successful!!\n Avilable balance : "<<balance;
        }
    }

    void inquiry()
    {
        cout<<"\nname ="<<name;
        cout<<"\nbalance ="<<balance;
    }
};

main()
{
    int n;
    Bank b1;

    cout<<"select from option : \n1. Depositr \n2.withdraw \n3.balance : ";
    cin>>n;

    switch(n)
    {
        case 1:
        b1.deposite();
        break;

        case 2:
        b1.withdraw();
        break;

        case 3:
        b1.inquiry();
        break;

        default:
        cout<<"\ninvalid input!!!";
   }
}