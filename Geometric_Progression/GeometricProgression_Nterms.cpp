#include <iostream>
#include <vector>

std::vector<double> GeometricProgression(int n, double term, double constant)
{
    std::vector<double> listTerms;

    while (listTerms.size() < n)
    {
        term = term * constant;
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

    std::cout.precision(5);
    for (auto i : GeometricProgression(n, term, constant))
    {
        std::cout << i << ", ";
    }
    std::cout << " size of " << GeometricProgression(n, term, constant).size() << ".\n";

    return 0;
}*/