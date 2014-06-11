#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
double calculate(int numd , int numf,...);
 
void main(void)
{
  double i;
  i=calculate(2, 3, 3, 5, .2, .9, .54);
   
  printf("Result:%f\n" , i);
   
}
 
 
double calculate(int numd , int numf,...)
{
  double var;
  int i;
  double result=0;
  va_list parg;
  va_start(parg,numf);
  for(i=0;i<numd;i++ )
  {
    var=va_arg(parg,int);
    result+=var;
  }
 
  for( i=0;i<numf;i++)
  {
    var=va_arg(parg,double);
    result+=var;
  }
   
  va_end(parg);
  return result;
}
