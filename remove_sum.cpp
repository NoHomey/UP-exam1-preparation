#include <iostream>

int input() {
    int value;
    std::cin >> value;
    return value;
}

int main() {
    int array[1000];
    int n = input();
    for(size_t i = 0; i < n; ++i) {
        array[i] = input();
    }
    int sum = array[0];
    int i = 1;
    while(i < n) {
        if(sum > array[i]) {
            for(size_t j = i; j < n; ++j) {
                array[j] = array[j + 1];
            }
            array[n - 1] = 0;
            n--;
            //        0    1  2  3     4
            // n = 5 [10, 20, 1, 500, 60]
            // sum = 10, i = 1
            // 10 > 20 => sum = 30, i = 2
            // 30 > 1 =>  
            //         0  1   2    3
            // n = 4 [10, 20, 500, 60|, 0]
            // 30 > 500 => sum = 530, i = 3
            // 530 > 60 =>
            //        0   1   2
            // n = 3 [10, 20, 500|, 0, 0]
            // n == i => break
        } else {
            sum += array[i];
            i++;
        }
    }
    // array[i], i = [0, 1, 2]
    for(size_t i = 0; i < n; ++i) {
        std::cout << array[i] << ((i == n - 1) ? '\n' : ' ');
    }

    return 0;
}