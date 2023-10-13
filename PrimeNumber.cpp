#include <iostream>
#include <vector>

bool primeNumber(int number)
{
    int numberHalf = number / 2;
    int divisor = 1;
    std::vector<int> divisorList;

    while (divisor <= numberHalf)
    {
        if (number % divisor == 0)
        {
            divisorList.push_back(divisor);
        }
        divisor = divisor + 1;
    }

    if (divisorList.size() == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*int main()
{
    int number;
    std::cout << "What number: ";
    std::cin >> number;

    // 1 is for true, 0 for false
    std::cout << primeNumber(number);

    return 0;
}*/