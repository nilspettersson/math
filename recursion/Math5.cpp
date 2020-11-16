#include "Math5.h"


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

}