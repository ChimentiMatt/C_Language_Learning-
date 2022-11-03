#include <stdio.h>

// int main()
// {
//     // int arr[2][3];   // 2d array: the array can store arrays inside this array, and each array will have 3 elements 
//     int arr[2][3] = { {1, 3, 5}, {2, 4, 6} };
//     printf("%d\n", arr[0][0]);

//     printf("%d\n\n", arr[1][2]);

//     arr[0][2] = 7;
//     arr[1][1] = 8;

//     printf("%d\n", arr[0][2]);
//     printf("%d", arr[1][1]);

//     return 0;
// }


int main() {
    int arr[2][3] = { {1, 3, 5}, {2, 4, 6}};

    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}







// NOTE
// int age[5] = {21, 29, 25}; // last two positions have value of 0