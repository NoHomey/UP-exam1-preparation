#include <iostream>

int input() {
    int value;
    std::cin >> value;
    return value;
}

int main() {
    int array[1000];
    int n = input();
    bool result = true;
    for(size_t i = 0; i < n; ++i) {
        array[i] = input();
    }
    // 1, 2, 3, 4, 5
    // 0, 1, 2, 3, 4
    for(size_t i = 1; i <= n; ++i) {
        if((i % 2) == 0) {
            if((array[i - 1] % 2) != 0) {
                result = false;
                break;
            } else if((array[i - 1] % i) != 0) {
                result = false;
                break;
            }
        }
    }
    std::cout << (result ? "Yes" : "No") << std::endl;

    return 0;
}