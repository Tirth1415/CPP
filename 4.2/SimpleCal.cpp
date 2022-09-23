#include <iostream>
using namespace std;
class Calculator
{
    int a, b, c, ans1, ans2, ans3, ans4;

public:
    Calculator()
    {
        cout << "Enter First Value : ";
        cin >> a;
        cout << "Enter Second Value : ";
        cin >> b;
        cout << "Enter Third Value : ";
        cin >> c;

        ans1 = a + b + c;
        cout << "\n\nAddition : " << ans1;
        ans2 = a - b - c;
        cout << "\nSubstraction : " << ans2;
        ans3 = a * b * c;
        cout << "\nMultiplication : " << ans3;
        ans4 = a / b / c;
        cout << "\nDivision : " << ans4;
    }
};

main()
{
    Calculator a;
};