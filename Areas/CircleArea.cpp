#include <iostream>
#include <math.h>

double CircleArea(double radius)
{
    return M_PI * powf(radius, 2);
}

/*int main()
{
    double r;
    std::cout << "Radius: ";
    std::cin >> r;

    std::cout.precision(5);
    std::cout << CircleArea(r) << " squared units.\n";

    return 0;
}*/