#include <iostream>
#include <cmath>

void print(int n) {
    if(n != 0) {
        print(n >> 1);
        std::cout << (n & 1);
    }
}

int mul(const int n) {
    return n << 1;
}

int div(const int n) {
    return n >> 1;
}

bool isOdd(const int n) {
    return n & 1;
}

bool isEven(const int n) {
    return !(n & 1);
}

int addOne(const int n) {
    if(isEven(n)) {
        return n | 1;
    } else {
        return (n | 2) ^ (n & 1); // dont work, will fix
    }
}

/*int reverse(int n) {
    const int bits = (int)log2(n) + 1;
    for(int i = 0; i < n; ++i) {
        n = n ^ (~(n & (1 << i))); 
    }

    return n;
}*/

int main() {
    print(5); // 0000101;
    std::cout << std::endl;
    print(mul(5)); // 0001010;
    std::cout << std::endl;
    print(div(10)); // 0000101;
    std::cout << std::endl;
    print(div(mul(5))); // 0000101;
    std::cout << std::endl;
    std::cout << isOdd(5) << std::endl;
    std::cout << isOdd(6) << std::endl;
    std::cout << isEven(5) << std::endl;
    std::cout << isEven(6) << std::endl;
    std::cout << addOne(5) << std::endl;
    std::cout << addOne(6) << std::endl;
    std::cout << addOne(7) << std::endl;
    return 0;
}