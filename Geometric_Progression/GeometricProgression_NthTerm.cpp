#include <iostream>
#include <vector>
using namespace std;

vector<double> GeometricProgression(double iTerm, double fTerm, double const constant){
    vector<double> listTerms;

    if(constant < 1 && iTerm > fTerm){
        while(iTerm >= fTerm){
            listTerms.push_back(iTerm);
            iTerm = iTerm * constant;
        }
    }
    else if(constant > 1 && iTerm < fTerm){
        while(iTerm <= fTerm){
            listTerms.push_back(iTerm);
            iTerm = iTerm * constant;
        }
    }
    else{
        return listTerms;
    }

    return listTerms;
}

/*int main(){
    double initialTerm, finalTerm, constant;
    cout << "First term: ";
    cin >> initialTerm;
    cout << "Last term: "; // depending on the constant may not be the last
    cin >> finalTerm;
    cout << "Constant: ";
    cin >> constant;

    cout.precision(5);
    for(auto i: GeometricProgression(initialTerm, finalTerm, constant)){
        cout << i << ", ";
    }
    cout << "total of " << GeometricProgression(initialTerm, finalTerm, constant).size() << " terms.\n";

    return 0;
}*/