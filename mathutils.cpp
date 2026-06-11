#include "mathutils.h"

namespace mathutils {

    // added function 
    long long fibonacci(int n) {
        long long a = 0, b = 1;
        for (int i = 0; i < n; ++i) {
            long long next = a + b;
            a = b;
            b = next;
        }
        return a;
    }

    long long factorial(int n) {
        long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int t = b;
            b = a % b;
            a = t;
        }
        return a;
    }
}
