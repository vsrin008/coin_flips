#include <iostream>
#include <vector>
#include "coin.h"
using namespace std;

int main() {
    cout << "Welcome to Vinay's coin flip simulator.";
    cout << "Enter how many coins you would like to flip: \n";
    int numFlips;
    cin >> numFlips;

    vector<int> AllFlips(numFlips);

    for (int i=0; i<AllFlips.size(); ++i) {
        FlippedCoin coin;
        AllFlips.at(i) = coin.GetCoinNumber();
    }


return 0;


}