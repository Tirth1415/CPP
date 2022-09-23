#include <iostream>
using namespace std;
class Cube
{
    float a, b, multi, cube;

public:
    void multiplication(float a, float b)
    {
        multi = a * b;
        cout << "\n Multiplication : " << multi;
    }
    void cubic(float a)
    {
        cube = multi * multi * multi;
        cout << "\n Cube : " << cube;
    }
};

main()
{
    float a, b;

    Cube obj;

    cout << "Enter First Value : ";
    cin >> a;
    cout << "Enter Second Value : ";
    cin >> b;

    obj.multiplication(a, b);
    obj.cubic(a);
};