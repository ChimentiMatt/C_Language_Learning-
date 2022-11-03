#include <stdio.h>

int result;

int addNumbers(int number1, int number2)
{
    result = number1 + number2;
    // printf("Sum of %d is %d\n", number1, number2);

}

int main() {
    addNumbers(4,10);
    printf("Result %d\n", result);
}
