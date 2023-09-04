#include <iostream>
#include <vector>
using namespace std;

vector<double> ArithmeticProgression(int n, double term, double constant)
{
    vector<double> listTerms = {term};

    while (listTerms.size() < n)
    {
        term = term + constant;
        listTerms.push_back(term);
    }

    return listTerms;
}

// int main()
// {
//     int n;
//     cout << "Number of terms: ";
//     cin >> n;

//     double term, constant;
//     cout << "1st term: ";
//     cin >> term;
//     cout << "Constant: ";
//     cin >> constant;

//     for (auto i : ArithmeticProgression(n, term, constant))
//     {
//         cout << i << ", ";
//     }

//     return 0;
// }