#include <iostream>
#include <math.h>
using namespace std;

double sphericVolume(double radius)
{
    return (M_PI * powf(radius, 3) * 4) / 3;
}

/*int main()
{
    double r;
    cout << "Radius: ";
    cin >> r;

    cout.precision(5);
    cout << sphericVolume(r);

    return 0;
}*/