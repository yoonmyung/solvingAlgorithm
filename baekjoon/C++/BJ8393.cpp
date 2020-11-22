#include <iostream>

int returnSum(int lastPointofSum) {
    int sum = 0;
    for (int num = 1; num <= lastPointofSum; num++) {
        sum += num;
    }
    return sum;
}

int main(void) {
    int input;

    std::cin >> input;

    //method 1
    std::cout << input * (input + 1) / 2;

    //method 2
    // input = returnSum(input);
    // std::cout << input;

    return 0;
}