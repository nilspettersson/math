#include "Math5.h"
#include <iostream>
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
        for (int i = 2; i < x / 2 + 1; i++) {
            if (x % i == 0) {
                isPrime = false;
                return isPrime;
            }
        }
        return isPrime;
    }

    //finds all prime factors of a nummber
    std::vector<int> findPrimeFactors(int x) {
        std::vector<int> factors;
        int current = x;
        std::cout << current << std::endl;
        while (true)
        {
            if (isPrime(current)) {
                factors.push_back(current);
                break;
            }
            for (int i = 2; i < sqrt(current) + 1; i += 2) {
                if (current % i == 0) {
                    std::cout << current << "  " << i << std::endl;
                    factors.push_back(i);
                    break;
                }
                i -= 1;
            }
            current /= factors[factors.size() - 1];
        }

        return factors;
        
    }

    //finds the largest common factor.
    int SGF(int a, int b) {
        return 0;
    }

}