#include <iostream>

int input() {
    int value;
    std::cin >> value;
    return value;
}

int qadroncii(const int b1, const int b2, const int b3, const int b4, const int n) {
    switch(n) {
        case 1: return b1;
        case 2: return b2;
        case 3: return b3;
        case 4: return b4;
        default: return qadroncii(b2, b3, b4, b1 + b2 + b3 + b4, n - 1);
    }
}

int qadroncii_loop(int b1, int b2, int b3, int b4, int n) {
    if(n < 4) {
        return 0;
    }
    int tmp = b4;
    for(int i = 4; i < n; ++i) {
        b4 = b1 + b2 + b3 + b4;
        b1 = b2;
        b2 = b3;
        b3 = tmp;
    }
    // i = 4 b1 = b2, b2 = b3, b3 = b4, b4 = b1 + b2 + b3 + b4
    // i = 5 b1 = b3, b2 = b4, b3 = sum1, b4 = b2 + b3 + b4 + sum1
    // i = 6 b1 = b4, b2 = sum1, b3 = sum2, b4 = b3 + b4 + sum1 + sum2
    // i = 7 b1 = sum1, b2 = sum2, b3 = sum3, b4 = b4 + sum1 + sum2 + sum3
    // i = 8 b1 = sum2, b2 = sum3, b3 = sum4, b4 = sum1 + sum2 + sum3 + sum4
    return b4;
}

int main() {
    int a1 = input();
    int a2 = input();
    int a3 = input();
    int a4 = input();
    int n = input();
    std::cout << qadroncii(a1, a2, a3, a4, n) << std::endl;
    std::cout << qadroncii_loop(a1, a2, a3, a4, n) << std::endl;

    return 0;
}