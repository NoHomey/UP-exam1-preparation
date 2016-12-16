#include <iostream>
#include <cmath>

bool isPrime(const int n) {
    const int root = std::sqrt(n);
    if(n == 1) {
        return false;
    }
    for(int i = 2; i <= root; ++i) {
        if((n % i) == 0) {
            return false;
        }
    }

    return true;
}

int input() {
    int value;
    std::cin >> value;
    return value;
}

int main() {
    int array1[1000];
    int array2[1000];
    int n = input();
    int j = 0;
    for(size_t i = 0; i < n; ++i) {
        array1[i] = input();
    }
    for(size_t i = 0; i < n; ++i) {
        if(isPrime(array1[i])) {
            array2[j++] = array1[i];
        }
    }
    for(size_t i = 0; i < j; ++i) {
        std::cout << array2[i] << ((i == j - 1) ? '\n' : ' ');
    }

    return 0;
}