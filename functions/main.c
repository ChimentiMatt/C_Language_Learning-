#include <stdio.h>

int addNumbers(int number1, int number2); // function prototype. Contains name, parameters but not function body 

void greet()
{
    printf("Good Morning\n");
}

void calculateSquare(int number)
{
    int square = number * number;
    printf("Square of %d is %d\n", number, square);
}

int addNumbers(int number1, int number2)
{
    int sum = number1 + number2;
    // printf("Sum of %d is %d\n", number1, number2);
    return sum;
}


int main() {

    greet();
    calculateSquare(5);
    int result = addNumbers(4,10);
    printf("Result %d\n", result);
}