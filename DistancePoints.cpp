#include <iostream>
#include <math.h>

int main()
{
    // coordinates for the 1st point
    float x1, y1;
    std::cout << "X1: ";
    std::cin >> x1;
    std::cout << "Y1: ";
    std::cin >> y1;

    // coordinates for the 2nd point
    float x2, y2;
    std::cout << "X2: ";
    std::cin >> x2;
    std::cout << "Y2: ";
    std::cin >> y2;

    // distance between points on each axis
    float x = abs(x1 - x2);
    float y = abs(y1 - y2);

    // distance itself
    float distance = sqrt(pow(x, 2) + pow(y, 2));

    /* for example use:
    x1 = 1
    y1 = 1
    x2 = 5
    y2 = 4
    */
    std::cout << distance << std::endl;

    return 0;
}
