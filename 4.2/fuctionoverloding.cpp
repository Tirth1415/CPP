#include <iostream>
using namespace std;
class Calculator
{
    int a, b, ans = 0;

public:
    void input()
    {
        cout << "Enter A : ";
        cin >> a;
        cout << "Enter B : ";
        cin >> b;
    }

    void Cal(int d)
    {
        ans = a + b;
        cout << "\n Addition : " << ans;
    }
    void Cal(double e)
    {
        ans = a - b;
        cout << "\n substraction : " << ans;
    }

    void Cal(char f)
    {
        ans = a * b;
        cout << "\n Multiplication : " << ans;
    }

    void Cal(int g, char h)
    {
         ans = (double) a / (double) b;
        cout << "\n Division : " << ans;
    }
};

main()
{
    Calculator obj;

    obj.input();
    obj.Cal(8);
    obj.Cal(9.99);
    obj.Cal('d');
    obj.Cal(9, 'd');
};