#include "Math5.h"
#include <vector>

namespace math5 {
    //n!
    int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    //permutation find how many combinations that can be made. order: true, repetition false.
    int p(int n, int k) {
        return factorial(n) / factorial(n - k);
    }

    //combination find how many combinations that can be made. order: false, repetition: false.
    int c(int n, int k) {
        return p(n, k) / factorial(k);
    }

    bool isPrime(int x) {
        bool isPrime = true;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                isPrime = false;
                return isPrime;
            }
        }
        return isPrime;
    }

    //finds all prime factors of a nummber
    int findPrimeFactors(int x) {
        std::vector<int> facctors;

        return 0;
        
    }

    //finds the largest common factor.
    int SGF(int a, int b) {
        return 0;
    }

}