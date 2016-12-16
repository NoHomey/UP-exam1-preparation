#include <iostream>

int input() {
    int value;
    std::cin >> value;
    return value;
}

int main() {
    int k = input();
    int n = input();
    int array[1000];
    int array2[1000];
    for(int i = 0; i < n; ++i) {
        array[i] = input();
    }
    int value = array[0];
    int max = value;
    for(int i = 0; i < n; ++i) {
        if(array[i] > max) {
            max = array[i];
        }
        if(array[i] < value) {
            value = array[i];
        }
    }
    array2[0] = value;
    for(int j = 1; j < k; ++j) {
        value = max;
        for(int i = 0; i < n; ++i) {
            if((array[i] < value) && (array[i] > array2[j - 1])) {
                value = array[i];
            }
        }
        array2[j] = value;
    }
    int sum = 0;
    for(size_t i = 0; i < k; ++i) {
        sum += array2[i];
    }
    std::cout << sum << std::endl;

    return 0;
}