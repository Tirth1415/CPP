#include <iostream>
using namespace std;
class Calculator
{
    int a, b;
    float ans;

public:
    void input()
    {
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;
    }
    void Addition()
    {
        ans = a + b;
        cout << "\nAddition : " << ans;
    }
    void Substraction()
    {
        ans = a - b;
        cout << "\nSubstraction : " << ans;
    }
    void Multiplication()
    {
        ans = a * b;
        cout << "\nMultiplication : " << ans;
    }
    void Division()
    {
        ans = a / b;
        cout << "\nDivision : " << ans;
    }
};
main()
{
    Calculator obj;

    obj.input();
    obj.Addition();
    obj.Substraction();
    obj.Multiplication();
    obj.Division();
};