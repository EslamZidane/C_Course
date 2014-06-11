/*
    In this code I want to declare:
        1- How to declare a pointer and assign its value.
        2- The name of the array is a pointer to its address.
        3- Pointer arithmatics
        4- We can use pointers to get all elements of the array
           instead of normal method of printing out an array
        5- Printing pointers more about printf fucntion
*/
 
#include <stdio.h>
 
void main(void)
{
    //Array of integers:
    int a[5] = {0,1,2,3,4}; //Note that size(integer) = 4 Bytes
    //Array of long doubles
    long double b[5] = {.1,.2,.3,.4,.5}; //Note that size of (long double) = 12 Bytes
    int i =0;   // Loop index
 
    int *p_a = a; // A pointer to Array a
    long double *p_b = b; // A pointer to Array b
    //Print the value of both pointers
    printf("Address of Array(a):%p\nAddress of Array(b):%p\n", p_a, p_b);
    printf("Integer Array\n");
    //Printing the elements of the integer array and their addresses
    for(i=0; i<5; i++)
    {
        printf("Address(%d):%p  Value(%d): %d\n" , i, p_a+i, i, *(p_a+i));
 
    }
    printf("Long Double Array\n");
    //Printing the elements of long double array and their addresses
    for(i=0; i<5; i++)
    {
        printf("Address(%d):%p  Value(%d): %llf\n" , i, p_b+i, i, *(p_b+i));
         
    }
    return;
 
 
}
