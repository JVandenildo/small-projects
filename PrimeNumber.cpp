#include <iostream>
#include <vector>
using namespace std;

bool primeNumber(int number)
{
    int numberHalf = number / 2;
    int divisor = 1;
    vector<int> divisorList;

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
    cout << "What number: ";
    cin >> number;

    // 1 is for true, 0 for false
    cout << primeNumber(number);

    return 0;
}*/