#include <stdio.h>
 
struct status
{
  unsigned CU3:1;
  unsigned CU2:1;
  unsigned CU1:1;
  unsigned CU0:1;
  unsigned RP:1;
  unsigned FR:1;
  unsigned RE:1;
  unsigned : 2;
    int a[20];
  unsigned BEV:1;
  unsigned: 1;
  unsigned SR:1;
  unsigned NMI:1;
  unsigned :3;
  unsigned IPL:6;
  unsigned R:2;
  unsigned :3;
  unsigned UM:1;
  unsigned :1;
  unsigned ERL:1;
  unsigned EXL:1;
  unsigned IE:1;
   
}statusReg ;
 
void main(viod)
{
  struct status *pstatus = &statusReg;
  pstatus->ERL = 1;
  statusReg.IE = 1;
  printf("Status value: %#0x\n" , *pstatus);
  printf("Size of Status Register: %d\n" , sizeof(struct status));
   
  return;
}
