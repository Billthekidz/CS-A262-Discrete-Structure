#include <iostream>

#include "lab04.h"

using namespace std;


int main(){
    // Some sanity tests
    const int SIZE = 6;
    int nums[] = {-3, 6, -12, 16, 18, -21};
    double prices[] = {4.5, 6.90, 2, 0.50, -2.6};

    cout << "findMax(nums, SIZE) --> " << findMax(nums, SIZE) << endl;
    cout << "Expected: " << 18 << endl;

    cout << "maxMult(num, SIZE, 6) --> " << maxMult(nums, SIZE, 6) << endl;
    cout << "Expected: " << 18 << endl;
    cout << "maxMult(num, SIZE, 10) --> " << maxMult(nums, SIZE, 10) << endl;
    cout << "Expected: " << 0.0/0.0 << endl;

    cout << "canAdd(prices, SIZE, 5) --> " << canAdd(prices, SIZE, 5) << endl;
    cout << "Expected: " << true << endl;

    cout << "isSubString(popcorn, pop) --> " << isSubString("popcorn", "pop") << endl;
    cout << "Expected: " << true << endl;
    cout << "isSubString(pirate, pete) --> " << isSubString("pirate", "pete") << endl;
    cout << "Expected: " << false << endl;


    return 0;
}
