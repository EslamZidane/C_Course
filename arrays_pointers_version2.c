#include <stdio.h>
void main(void)
{
    // The "array" is a vector of vectors
    int array[3][3]=
    {
        {1,2,3},{4,5,6},{7,8,9}
    };
    int i,j;
/*
    We will print the addresses of vectors of the vector "array".
    Please notice the step of each address and how we are getting them.
*/
    for(i=0;i<=2;i++)
    {
        printf("Address of Vector #%d is %p\n",i+1, array[i] );
    }
    printf("**********************************\n");
/*
    We will print the addresses of each "intger" in the whole vector "array" and their values
    Please notice the step of each address and value and how we are getting them.
*/
     
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("Element #%d is %d\n",i+1, *(array[j]+i) );
            printf("Address of intger #%d is %p\n",i+1, array[j]+i);
 
        }
    }
 
    return;
}
