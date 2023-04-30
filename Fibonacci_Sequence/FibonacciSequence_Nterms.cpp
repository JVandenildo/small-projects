#include <iostream>
#include <vector>
using namespace std;

/*int main(){
    int n_terms, n1, n2;
    cout << "How many terms: ";
    cin >> n_terms;
    cout << "First term: ";
    cin >> n1;
    cout << "Second term: ";
    cin >> n2;

    vector<int> secFib = {n1, n2};

    if(n_terms <= 0 || n_terms < 2){
        cout << "Only numbers above zero and sequence bigger than 2 terms!";
    }
    else{
        while(secFib.size() < n_terms){
            int nth = n1 + n2;
            secFib.push_back(nth);

            n1 = n2;
            n2 = nth;
        }
    }

    for (auto i: secFib)
    {
        cout << i << ", ";
    }
    cout << "it has " << secFib.size() << " terms.\n";

    return 0;
}*/