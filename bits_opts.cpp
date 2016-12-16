#include <iostream>
//   5 43210
// [0]01011
// & true = 0
// & false = 0
//   5 43210
// [1]01011
// & true = 1
// & false = 0

void print(int n) {
    if(n != 0) {
        print(n >> 1);
        std::cout << (n & 1);
    }
}



int main() {
    print(5); // 0000101;
    std::cout << std::endl;

    return 0;
}