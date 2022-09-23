#include<iostream>
using namespace std;
class Student
{
    public : 
    int a;
    void rollnumber()
    {
        cout<<"Enter Roll Number : ";
        cin>>a;
    }
};
class TestScore : public Student
{
    public :
    int b,c;
    void marks()
    {
        cout<<"Enter First Subject Marks : ";
        cin>>b;
        cout<<"Enter First Subject Marks : ";
        cin>>c;
    }
};
class Result : public TestScore
{
    public :
    int d;
    void Total()
    {
        d = b+c;
    }
    void display()
    {
        cout<<"\n\nYour Roll Number : "<<a;
        cout<<"\nYour First Subject Marks : "<<b;
        cout<<"\nYour Second Subject Marks : "<<c;
        cout<<"\nTotal Marks : "<<d;
    }

};
main()
{
    Result i;
    i.rollnumber();
    i.marks();
    i.Total();
    i.display();
};