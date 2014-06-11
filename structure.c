#include <stdio.h>
 
 
 
struct class
{
  struct student Astudent[10];
  int id;
  char name;
};
 
struct student
{
  char name[100];
  int id ;
  int degree;
};
 
void main(void)
{
 struct class classA;
 classA.Astudent[0].id = 5234;
 classA.id = 1;
  
 printf("Student1 id: %d\n" , classA.Astudent[0].id);
 printf("Class A id: %d\n" , classA.id);
  
 return;
  
}
