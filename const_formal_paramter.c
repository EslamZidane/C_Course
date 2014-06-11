#include <stdio.h>
void modify(int *a ,  int *b);
void main(void)
{
    const int a =13;
    int b = 1;
    modify(&a,&b);
    printf("%d\n%d\n" ,a,b );
    return;
 
}
 
void modify(int *a ,  int *b)
{
    *a=11;
    *b=5;
    return;
}
