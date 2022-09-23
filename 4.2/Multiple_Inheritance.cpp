#include <iostream>
using namespace std;
class Person
{
public:
    int age;
    char name[20];

    void Name()
    {
        cout << "Enter The Name Of Student : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
};

class Student
{
public:
    float percentage;

    void Percentage()
    {
        cout << "Enter Percentage of Member : ";
        cin >> percentage;
    }
};

class Teacher : public Student, public Person
{
public:
    int salary;

    void Salary()
    {
        cout << "Enter Salary : ";
        cin >> salary;
    }
    void Display()
    {
        cout << "\nName of Student : " << name;
        cout << "\n"
             << name << "'s Age : " << age;
        cout << "\nPercentage of " << name << " : " << percentage;
        cout << "\n"
             << name << "'s Salary : " << salary;
    }
};
main()
{
    Teacher obj;

    obj.Name();
    obj.Percentage();
    obj.Salary();
    obj.Display();
};