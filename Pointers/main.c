// https://www.programiz.com/c-programming/c-pointers


// C Pointers
// In this tutorial, you'll learn about pointers; what pointers are, how do you use them and the common
//  mistakes you might face when working with them with the help of examples.

// Pointers are powerful features of C and C++ programming. Before we learn pointers, let's learn about 
// addresses in C programming.


// Address in C -------------------------------------------------------------------------------

// If you have a variable var in your program, &var will give you its address in the memory.

// We have used address numerous times while using the scanf() function.

scanf("%d", &var);

// Here, the value entered by the user is stored in the address of var variable.
//  Let's take a working example.

#include <stdio.h>

int main() 
{
    int var = 5;
    printf("var: %d\n", var); // var: 5

    // Notice the use of & before var
    printf("address of var: %p", &var);   // address of var: 0061FF1C
    return 0;

    return 0;
}


// C Pointers ------------------------------------------------------------------------------

// Pointer Syntax
// Here is how we can declare pointers.

int* p;

// Here, we have declared a pointer p of int type.

// You can also declare pointers in these ways.

int *p1;
int * p2;


// Let's take another example of declaring pointers.
int* p1, p2;
// Here, we have declared a pointer p1 and a normal variable p2.


// Assigning addresses to Pointers -----------------------------------------------------------
// Let's take an example.

int* pc, c;
c = 5;
pc = &c;

// Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.


// Get Value of Thing Pointed by Pointers -----------------------------------------------------

// To get the value of the thing pointed by the pointers, we use the * operator. For example:

int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);  // Output: 5

// Here, the address of c is assigned to the pc pointer. To get the value stored in that 
// address, we used *pc.

// Note: In the above example, pc is a pointer, not *pc. 
// You cannot and should not do something like *pc = &c;

// By the way, * is called the dereference operator (when working with pointers). 
// It operates on a pointer and gives the value stored in that pointer.



// Changing Value Pointed by Pointers -----------------------------------------------------

int* pc, c;
c = 5;
pc = &c;
c = 1;
printf("%d", c);    // Output: 1
printf("%d", *pc);  // Output: 1


// We have assigned the address of c to the pc pointer.

// Then, we changed the value of c to 1. Since pc and the address of c is the same, *pc gives us 1.

// Let's take another example.

int* pc, c;
c = 5;
pc = &c;
*pc = 1;
printf("%d", *pc);  // Ouptut: 1
printf("%d", c);    // Output: 1

// We have assigned the address of c to the pc pointer.

// Then, we changed *pc to 1 using *pc = 1;. Since pc and the address of c is the same, c will be equal to 1.

// Let's take one more example.


int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

// Initially, the address of c is assigned to the pc pointer using pc = &c;. Since c is 5, *pc gives us 5.

// Then, the address of d is assigned to the pc pointer using pc = &d;. Since d is -15, *pc gives us -15.





// Example: Working of Pointers -----------------------------------------------------------------------------
// Let's take a working example.

#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}

// Output

// Address of c: 2686784
// Value of c: 22

// Address of pointer pc: 2686784
// Content of pointer pc: 22

// Address of pointer pc: 2686784
// Content of pointer pc: 11

// Address of c: 2686784
// Value of c: 2