#include <iostream>
#include <vector>
#include "Math5.h"
using namespace std;


void printVector(vector<int> vector) {
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{

    printVector(math5::findPrimeFactors(6));
    printVector(math5::findPrimeFactors(12));
    cout << math5::MGM(48, 180) << endl;

}
