#include <iostream>
#include <vector>
using namespace std;

vector<double> GeometricProgression(int n, double term, double constant){
    vector<double> listTerms;

    while(listTerms.size() < n){
        term = term * constant;
        listTerms.push_back(term);
    }

    return listTerms;
}

int main(){
    int n;
    cout << "Number of terms: ";
    cin >> n;

    double term, constant;
    cout << "1st term: ";
    cin >> term;
    cout << "Constant: ";
    cin >> constant;

    cout.precision(5);
    for(auto i: GeometricProgression(n, term, constant)){
        cout << i << ", ";
    }
    cout << " size of " << GeometricProgression(n, term, constant).size() << ".\n";

    return 0;
}