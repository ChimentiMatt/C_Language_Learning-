#include <stdio.h>

int main()
{
    // print first element
    int age[] = {21, 29, 25, 32, 17};
    printf("%d", age[0]);

    // get last item of the array after getting length
    int length = sizeof(age) / sizeof(int);
    printf("\n%d", age[length -1]);

    // reassign the first element of the array
    age[0] = 50;

    printf("\n%d", age[0]);

    return 0;
}









// NOTE
// int age[5] = {21, 29, 25}; // last two positions have value of 0