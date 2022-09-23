#include <iostream>
using namespace std;
class Shape
{
    float a, b, s, ans;

public:
    void area(float a)
    {
        cout << "\nEnter Radius of Circle : ";
        cin >> a;

        ans = 3.14 * a * a;
        cout << "\n\n Area of circle : " << ans;
    }
    void area(float a, float b)
    {
        cout << "Enter Height of Triangle : ";
        cin >> a;
        cout << "enter Width of Triangle : ";
        cin >> b;

        ans = .5 * a * b;
        cout << "\n\n Area of Triangle : " << ans;
    }
    void area()
    {
        cout << "\n Enter One Side : ";
        cin >> a;
        cout << "Enter Other Side : ";
        cin >> b;

        ans = a * b;
        cout << "\n\n Area of Square/Rectangle : " << ans;
    }
};
main()
{
    Shape obj;
    int n;
    float a, b, s;

    cout << "Select The Shape To Perform a Program. \n 1.) Circle \n 2.) Traingle \n 3.) Rectangle \n";
    cin >> n;

    switch (n)
    {
    case 1:
        obj.area(a);
        break;

    case 2:
        obj.area(a, b);
        break;

    case 3:
        obj.area();
        break;

    default:
        cout << "\n Invalid Input.";
    }
};