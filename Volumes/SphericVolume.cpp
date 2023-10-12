#include <iostream>
#include <math.h>

double sphericVolume(double radius)
{
    return (M_PI * powf(radius, 3) * 4) / 3;
}

/*int main()
{
    double r;
    std::cout << "Radius: ";
    std::cin >> r;

    std::cout.precision(5);
    std::cout << sphericVolume(r);

    return 0;
}*/