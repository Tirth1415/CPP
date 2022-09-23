#include<iostream>
using namespace std;
class Matrix1
{
    public:
    int a[3],i;
    void input()
    {
        for ( i = 0; i < 3; i++)
        {
            cout<<"Enter A ["<<i<<"] : ";
            cin>>a[i];
        }
    }
    void display()
    {
        for ( i = 0; i < 3; i++)
        {
            cout<<"\n A ["<<i<<"] : "<<a[i]<<"";
        }
    }
};
class Matrix2 : public Matrix1
{
    public:
    int b[3];
    void input()
    {
        for ( i = 0; i < 3; i++)
        {
            cout<<"Enter B ["<<i<<"] : ";
            cin>>b[i];
        }
    }
    void display()
    {
        for ( i = 0; i < 3; i++)
        {
            cout<<"\n B ["<<i<<"] : "<<b[i]<<"";
        }
    }
};
class Matrix3 : public Matrix2
{
    public:
    int c[3];
    void add()
    {
        cout<<"\n";
        for ( i = 0; i < 3; i++)
        {
            c[i] = a[i] + b[i];
            cout<<"\n C ["<<i<<"] : "<<c[i]<<"";
        }
    }
};

main()
{
    Matrix3 obj;

    obj.Matrix1::input();
    obj.input();
    obj.Matrix1::display();
    obj.display();
    obj.add();
};