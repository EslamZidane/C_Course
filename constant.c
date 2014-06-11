#include <stdio.h>
 
void main(void)
{
    const int constInt = 10;
    int a , b;
    int * p_constInt_normal = &constInt;
    // Pointer to Constant
    const int *p_constInt_constant = &constInt;
    //Constant Pointer
    int *const  p_const_pointer= &a;
 
    a = 5;
    b = 1;
    // Testing Changing values of constants ...
    printf("Testing Changing values of constants ...\n");
    printf("Value: %d Address: %p\n" , constInt, p_constInt_normal);
 
    *p_constInt_normal = 15;
 
    printf("Value: %d Address: %p\n" , constInt, p_constInt_normal);
 
    p_constInt_normal =&b;
    printf("Value: %d Address: %p\n" , *p_constInt_normal, p_constInt_normal);
 
    //Testing pointer to constants
 
    printf("Testing pointer to constants ...\n");
 
    *p_constInt_constant = 100;
    printf("Value: %d Address: %p\n" , *p_constInt_constant, p_constInt_constant);
 
    p_constInt_constant = &b;
    printf("Value: %d Address: %p\n" , *p_constInt_constant, p_constInt_constant);
 
    //Testing Constant Pointers ...
    printf("Testing Constant Pointers ... \n");
 
    printf("Value: %d Address: %p\n" , *p_const_pointer, p_const_pointer);
 
    *p_const_pointer = 100;
    printf("Value: %d Address: %p\n" , *p_const_pointer, p_const_pointer);
 
    p_const_pointer = &b;
    printf("Value: %d Address: %p\n" , *p_const_pointer, p_const_pointer);
 
    //Can we declare a constant pointer to a constant???
    return;
 
}
