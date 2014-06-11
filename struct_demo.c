#include <stdio.h>
 
 
void main(void)
{
  //Try to Copy it outside the main function
  struct student
  {
    int id;
    int age;
    int class;
    char name[50];
    char grad;
  };
 
  struct student ahmed = {53643, 13, 4, "Ahmed Al-Sayed Hegazy" , 'B'};
   
  printf("%s's Data:\n Id:%d\n Age:%d\n Class:%d\n Name:%s\n Grade:%c\n", ahmed.name, ahmed.id, ahmed.age, ahmed.class,
     ahmed.name, ahmed.grad);
  return;
}
