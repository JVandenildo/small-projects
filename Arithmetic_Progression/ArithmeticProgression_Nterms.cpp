#include <iostream>
#include <vector>

std::vector<double> ArithmeticProgression(int n, double term, double constant)
{
    std::vector<double> listTerms = {term};

    while (listTerms.size() < n)
    {
        term = term + constant;
        listTerms.push_back(term);
    }

    return listTerms;
}

/*int main()
{
    int n;
    std::cout << "Number of terms: ";
    std::cin >> n;

    double term, constant;
    std::cout << "1st term: ";
    std::cin >> term;
    std::cout << "Constant: ";
    std::cin >> constant;

    for (auto i : ArithmeticProgression(n, term, constant))
    {
        std::cout << i << ", ";
    }

    return 0;
}*/