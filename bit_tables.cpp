#include <iostream>
#include <iomanip>

void print(bool a, bool b, bool res) {
    std::cout << a << ' ' << b << ' ' << res << std::endl;
}

void bit(int n) {
    if(n != 0) {
        bit(n >> 1);
        std::cout << (n & 1);
    }
}

int main() {
    std::cout << std::boolalpha;

    std::cout << '&' << std::endl;
    print(false, false, false & false);
    print(false, true, false & true);
    print(true, false, true & false);
    print(true, true, true & true);
    std::cout << std::endl;

    std::cout << '|' << std::endl;
    print(false, false, false | false);
    print(false, true, false | true);
    print(true, false, true | false);
    print(true, true, true | true);
    std::cout << std::endl;

    std::cout << '^' << std::endl;
    print(false, false, false ^ false);
    print(false, true, false ^ true);
    print(true, false, true ^ false);
    print(true, true, true ^ true);
    std::cout << std::endl;

    bit(5 & 3);
    std::cout << std::endl;

                                       // 0101
                                       // &
                                       // 0011
                                       // ----
                                       // 0001

    bit(5 | 3);
    std::cout << std::endl;
                                       // 0101
                                       // |
                                       // 0011
                                       // ----
                                       // 0111

    bit(5 ^ 3);
    std::cout << std::endl;
                                       // 0101
                                       // &
                                       // 0011
                                       // ----
                                       // 0110

    return 0;
}