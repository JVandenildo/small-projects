#include <iostream>
#include <vector>

int main()
{
    int nth_term, n1, n2;
    std::cout << "Last term: ";
    std::cin >> nth_term;
    std::cout << "First term: ";
    std::cin >> n1;
    std::cout << "Second term: ";
    std::cin >> n2;
    std::vector<int> secFib = {n1, n2};

    if (nth_term <= 0)
    {
        std::cout << "Only numbers above zero!";
    }
    else
    {
        int nth = n1 + n2;
        while (nth <= nth_term)
        {
            secFib.push_back(nth);
            n1 = n2;
            n2 = nth;
            nth = n1 + n2;
        }
    }
    std::cout << "Your Fibonacci sequence, with " << secFib.size() << " terms, is ";
    for (size_t i = 0; i < secFib.size(); i++)
    {
        std::cout << secFib[i];
        if (i < secFib.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "." << std::endl;

    return 0;
}
