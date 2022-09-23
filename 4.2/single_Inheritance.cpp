#include <iostream>
#include <string.h>
using namespace std;
class cricketer
{
public:
    int a, b, c;
    char d[20];
    void name()
    {
        cout << "Enter Batsmen Name : ";
        cin >> d;
        cout << "Enter Runs : ";
        cin >> a;
        cout << "Enter Total Innings : ";
        cin >> b;
        cout << "Enter Highest Score of Batsmen : ";
        cin >> c;
    }
};
class batsmen : public cricketer
{
    float average;

public:
    void calculateAverage()
    {
        average = (float)a / (float)b;
    }

    void display()
    {
        cout << "\n\n Batsmen Name : " << d;
        cout << "\n Total Runs : " << a;
        cout << "\n Total Innings : " << b;
        cout << "\n Best Performance of his Carrier : " << c;
        cout << "\n Avrage of his Carrier : " << average;
    }
};

main()
{
    batsmen b1;

    b1.name();
    b1.calculateAverage();
    b1.display();
};
