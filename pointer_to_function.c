#include <stdio.h>
 
double add(double a, double b);
double sub(double a, double b);
double divid(double a, double b);
double product(double a, double b);
typedef double (*p2fun)(double, double) ;
//p2fun op(int num);
double (*op(int num))(double, double);
void main(void)
{
    int num = 0;
    double a, b;
    double (*temp)(double , double) = NULL;
     
    a = b =0;
    printf("0:add\n1:sub\n2:divid\n3:product\n");
    scanf("%d", &num);
    scanf("%lf %lf", &a, &b);
     
    temp = op(num);
    printf("%lf %lf\n" , a , b);
    printf("Result: %lf\n", temp(a , b));
    return;
}
//The commented prototype is the easy way using typedef.
//p2fun op(int num)
double (*op(int num))(double, double)
{
    double (*operation[4])(double , double);
    operation[0] = add;
    operation[1] = sub;
    operation[2] = divid;
    operation[3] = product;
    return operation[num];
}
 
double add(double a, double b)
{
    return a+b;
}
 
double sub(double a, double b)
{
    return a-b;
}
 
double divid(double a, double b)
{
    return a/b;
}
 
double product(double a, double b)
{
    return a*b;
}
