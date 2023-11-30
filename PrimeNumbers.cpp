// PrimeNumbers.cpp

#include "PrimeNumbers.h"
#include <iostream>
#include <bitset>
#include <cmath>
#define TESTING
#include "test.cpp"

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long setPrimeBits() {
    long long  result = 0;
    for (int i = 0; i < 64; i++) {
        if (isPrime(i)) {
            result |= (1LL << i);
        }
    }
    return result;
}

void printResult() {
    long long result = setPrimeBits();
    cout << "Binary: " << bitset<64>(result) << endl;
    cout << "Hexadecimal: " << hex << result << endl;
    cout << "Decimal: " << dec << result << endl;
}

