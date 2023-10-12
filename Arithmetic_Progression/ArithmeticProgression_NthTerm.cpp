#include <iostream>
#include <vector>

std::vector<double> ArithmeticProgression(double iTerm, double fTerm, double const constant)
{
    std::vector<double> listTerms;

    if (constant < 0 && iTerm > fTerm)
    {
        while (iTerm >= fTerm)
        {
            listTerms.push_back(iTerm);
            iTerm = iTerm + constant;
        }
    }
    else if (constant > 0 && iTerm < fTerm)
    {
        while (iTerm <= fTerm)
        {
            listTerms.push_back(iTerm);
            iTerm = iTerm + constant;
        }
    }
    else
    {
        return listTerms;
    }

    return listTerms;
}

/*int main()
{
    double initialTerm, finalTerm, constant;
    std::cout << "First term: ";
    std::cin >> initialTerm;
    std::cout << "Last term: "; // depending on the constant may not be the last
    std::cin >> finalTerm;
    std::cout << "Constant: ";
    std::cin >> constant;

    for (auto i : ArithmeticProgression(initialTerm, finalTerm, constant))
    {
        std::cout << i << ", ";
    }
    std::cout << "total of " << ArithmeticProgression(initialTerm, finalTerm, constant).size() << " terms.\n";

    return 0;
}*/