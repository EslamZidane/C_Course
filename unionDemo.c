#include <stdio.h>
 
union variables
{
  int i;
  long double ld;
  long long ll;
  char c;
};
 
void main(void)
{
  union variables var;
  var.c = 'a';
  var.i=10;
  //var.ll =6424525252;
  printf("Size of Union: %d\nSize of long Double: %d\n" , sizeof(union variables) , sizeof(var.ll) );
  printf("c: %c\n" , var.c);
  printf("i: %d\n" , var.i);
  printf("ll: %lld\n" , var.ll);
   
  return;
   
}
