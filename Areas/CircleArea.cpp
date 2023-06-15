#include <iostream>
#include <math.h>
using namespace std;

double CircleArea(double radius)
{
    return M_PI * powf(radius, 2);
}

int main()
{
    double r;
    cout << "Radius: ";
    cin >> r;

    cout.precision(5);
    cout << CircleArea(r) << " squared units.\n";

    return 0;
}