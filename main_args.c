#include <stdio.h>
 
void main(int argc, char *argv[])
{
  int i=0;
  for(i=0;i<argc;i++)
  {
    printf("Argurment #%d: %s\n", i , argv[i]);
  }
  return;
}
