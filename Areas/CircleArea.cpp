#include <iostream>
#include <math.h>
using namespace std;

class Circle
{
public:
    Circle(double radius)
    {
        double Radius = radius;
    }

    double Area(double radius)
    {
        return M_PI * powf(radius, 2);
    }
};

int main()
{
    double r;
    cout << "Radius: ";
    cin >> r;

    Circle circle1(r);

    cout.precision(5);
    cout << circle1.Area(r) << " squared units.\n";

    return 0;
}