#include <stdio.h>
void get_power(int num);
int power =0;
void main(void)
{
    int num = 2;
     
    printf("Enter the Number: ");
    scanf("%d",&num);
    get_power(num);
    printf("Power is: %d\n" , power);
    return;
}
 
void get_power(int num)
{
    int remainder = 0;
     
    if(num == 1) return ;
    else if (num%2 !=0)
    {
        printf("This number is not a power of two !\n");
        exit(0);
    }
    else
    {
        num = num/2;
        power++;
        get_power(num);
 
    }
}
