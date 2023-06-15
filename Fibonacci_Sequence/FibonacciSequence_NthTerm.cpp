#include <iostream>
#include <vector>
using namespace std;

/*int main()
{
    int nth_term, n1, n2;
    cout << "Last term: "; // all terms in the sequence are smaller than this one
    cin >> nth_term;
    cout << "First term: ";
    cin >> n1;
    cout << "Second term: ";
    cin >> n2;

    vector<int> secFib = {n1, n2}; // sequence begins here

    if (nth_term <= 0)
    {
        cout << "Only number above zero!";
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
            cout << i << ", ";
        }
        cout << "it has " << secFib.size() << " terms.\n";
    }

    return 0;
}*/