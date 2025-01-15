#include <iostream>
#include <vector>

bool primeNumber(int number)
{
    float numberHalf = number / 2;
    int divisor = 1;
    std::vector<int> divisorList = {};

    while (divisor <= numberHalf)
    {
        if (number % divisor == 0)
        {
            divisorList.push_back(divisor);
        }
        divisor++;
    }

    return divisorList.size() == 1;
}

int main()
{
    int number;
    std::cout << "What number: ";
    std::cin >> number;

    std::cout << primeNumber(number) << std::endl; // 1 for true, 0 for false

    return 0;
}
