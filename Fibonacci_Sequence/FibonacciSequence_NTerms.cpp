#include <iostream>
#include <vector>

int main()
{
    int n_terms, n1, n2;
    std::cout << "How many terms: ";
    std::cin >> n_terms;
    std::cout << "First term: ";
    std::cin >> n1;
    std::cout << "Second term: ";
    std::cin >> n2;
    std::vector<int> secFib = {n1, n2};

    if (n_terms < 2)
    {
        std::cout << "Only numbers above zero and sequence bigger than two terms!" << std::endl;
    }
    else
    {
        while (secFib.size() < n_terms)
        {
            int nth = n1 + n2;
            secFib.push_back(nth);
            n1 = n2;
            n2 = nth;
        }
    }

    std::cout << "Your Fibonacci sequence, with " << secFib.size() << " terms, is ";
    for (int i = 0; i < secFib.size(); i++)
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
