#include <stdio.h>
void main(void)
{
    // The "array" is a vector of vectors
    int array[3][3]=
    {
        {1,2,3},{4,5,6},{7,8,9}
    };
    int i;
/*
    We will print the addresses of vectors of the vector "array".
    Please notice the step of each address and how we are getting them.
*/
    for(i=0;i<=2;i++)
    {
        printf("Address of Vector #%d is %p\n",i+1, array+i );
    }
    printf("**********************************\n");
/*
    We will print the addresses of each "intger" in the whole vector "array" and their values
    Please notice the step of each address and value and how we are getting them.
*/
    for(i=0;i<=8;i++)
    {
        printf("Element #%d is %d\n",i+1, *(*array+i) );
        //The next commented code is the same ast the previous line, we use the absence of "Array Limit Exceeded Error"
        //to print out the elements outside the first vector's range.
        //uncomment the next code line and comment the previous one. The result won't change.
        //printf("Element #%d is %d\n",i+1, array[0][i] );
        printf("Address of intger #%d is %p\n",i+1, *(array)+i );
    }
    return;
}
