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

    if (n_terms <= 0 || n_terms < 2)
    {
        std::cout << "Only numbers above zero and sequence bigger than 2 terms!";
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

    for (auto i : secFib)
    {
        std::cout << i << ", ";
    }
    std::cout << "it has " << secFib.size() << " terms.\n";

    return 0;
}