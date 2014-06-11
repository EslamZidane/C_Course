#include <stdio.h>
#include <stdlib.h>
 
inline double add(double a, double b){return a+b;}
inline double sub(double a, double b){return a-b;}
inline double divid(double a, double b){return a/b;}
inline double product(double a, double b){return a*b;}
 
typedef double (*p2fun)(double, double) ;
p2fun op(char op_char);
double (*op(char))(double, double);
 
void main(int argc, char *argv[])
{
    char op_code = argv[3][0];
    double (*temp)(double , double) = NULL;
 
    temp = op(argv[2][0]);
     
    printf("%lf %lf\n" , atof(argv[1]) , atof(argv[3]));
    printf("Result: %lf\n", temp(atof(argv[1]) , atof(argv[3])));
     
    return;
}
 
p2fun op(char op_char)
{  
    switch(op_char)
    {
      case '+':
        return add;
        break;
      case '-':
        return sub;
      case '/':
        return divid;
      case '*':
        return product;
      default:;
    }
} 
