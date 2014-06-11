#include <stdio.h>
char *get_statement(int num, char *a);
void main(void)
{
    char a[3][10]={"Hello", "New Line", "Once More"};
    int num = 0;
    printf("Enter Statement's Number:\a\n");
    scanf("%d", &num);
    printf("%s\n" , get_statement(num,a));
    return;
}
 
char *get_statement(int num, char *a)
{   //return a pointer to next string.
    return a+(num*10);
}
