#include <iostream>

void changeNumberToOne(int input, int countOfCalculating);
int* storingData;

int main() {
    int input;

    std::cin>>input;
    storingData = new int[input];
    std::fill_n(storingData, input, 1111111);
    changeNumberToOne(input, 0);
    std::cout<<storingData[1];
    free(storingData);
    return 0;
}

void changeNumberToOne(int input, int countOfCalculating) {
    if(input < 4) {
        if(input > 1) {
            if ((countOfCalculating + 1) < storingData[1]) {
                storingData[1] = ++countOfCalculating;
            }
        }
        return;
    }
    if (input % 3 == 0) {
        input /= 3;
        if ((countOfCalculating + 1) < storingData[input]) {
            storingData[input] = ++countOfCalculating;
            changeNumberToOne(input, countOfCalculating);
            countOfCalculating--;
        }
        input *= 3;
    }
    if (input % 2 == 0) {
        input /= 2;
        if ((countOfCalculating + 1) < storingData[input]) {
            storingData[input] = ++countOfCalculating;
            changeNumberToOne(input, countOfCalculating);
            countOfCalculating--;
        }
        input *= 2;
    }
    input -= 1;
    if ((countOfCalculating + 1) < storingData[input]) {
        storingData[input] = ++countOfCalculating;
        changeNumberToOne(input, countOfCalculating);
    }
}