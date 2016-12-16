#include <iostream>

void removeFromString(char* string, char symbol) {
    for(size_t i = 0; string[i] != '\0'; ++i) {
        if(string[i] == symbol) {
            for(size_t j = i; string[j] != '\0'; ++j) {
                string[j] = string[j + 1];
            }
        }
    }
}

void replaceFromString(char string[], char search, char symbol) {
    for(size_t i = 0; string[i] != '\0'; ++i) {
        if(string[i] == search) {
            string[i] = symbol;
        }
    }
}

int main() {
    char str[] = "Up-to e mn qko 4owek"; // [][][][][][][][][]
    replaceFromString(str, 'o', 'q');
    std::cout << str << std::endl; 

    return 0;
}