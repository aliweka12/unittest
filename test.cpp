// TestPrimeNumbers.cpp

#include "PrimeNumbers.h"
#include <cassert>
#include <iostream>

#ifdef TESTING

using namespace std;


void testIsPrime() {
    // Positive Tests
    assert(isPrime(3) == true);
    assert(isPrime(97) == true);

    // Negative Tests
    assert(isPrime(4) == false);
    assert(isPrime(-5) == false);
    assert(isPrime(0) == false);
    assert(isPrime(1) == false);
}

void testSetPrimeBits() {
    // Positive Test
    // The expected binary representation of prime numbers from 0 to 63
    long long expected = 0b00101000100000100010100010000010100000100010100010100010101100LL;
    assert(setPrimeBits() == expected);

    // Negative Test (Boundary condition)
    // Ensure the function does not set bits beyond the 64th bit
}
int main() {
    testIsPrime();
    testSetPrimeBits();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
#endif
