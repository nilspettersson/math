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

    printVector(math5::findPrimeFactors(1764453212));

}
