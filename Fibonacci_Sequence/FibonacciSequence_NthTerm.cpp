#include <iostream>
#include <vector>

/*int main()
{
    int nth_term, n1, n2;
    std::cout << "Last term: "; // all terms in the sequence are smaller than this one
    std::cin >> nth_term;
    std::cout << "First term: ";
    std::cin >> n1;
    std::cout << "Second term: ";
    std::cin >> n2;

    std::vector<int> secFib = {n1, n2}; // sequence begins here

    if (nth_term <= 0)
    {
        std::cout << "Only number above zero!";
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

        for (auto i : secFib)
        {
            std::cout << i << ", ";
        }
        std::cout << "it has " << secFib.size() << " terms.\n";
    }

    return 0;
}*/