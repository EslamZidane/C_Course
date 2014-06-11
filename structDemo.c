#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
struct school
{
  int rank;
  int capacity;
  char school[100];
  char address[100];
};
 
struct son
{
  int age ;
  int Nid;
  char name[100];
  struct school *eduData;
};
 
struct parent
{
  int age;
  int Nid;
  int sons;
  char name[100];
  char job[50];
  struct son *mySons;
  
};
 
void fillSons(struct parent *p2father);
void fillParent(struct parent *p2father);
void fillEducation(struct school *p2school);
void fillSon(struct son *p2son , int index);
 
void main(void)
{
   
  int i;
    struct parent ahmed;
    struct school mansouraPrim;
     
     
    fillEducation(&mansouraPrim);
    fillSons(&ahmed);
    fillParent(&ahmed);
    for(i=0; i<ahmed.sons;i++)
    {
      fillSon(ahmed.mySons+i , i);
    }
     
  return;
}
 
void fillSons(struct parent *p2father)
{
  printf("Enter %s's Sons' Number: " , p2father->name);
  scanf("%d", &(p2father->sons));
   
  p2father->mySons = (struct son *)malloc( (p2father->sons)*sizeof(struct son));
   
  return;
}
 
void fillSon(struct son *p2son , int index)
{
  printf("***Data of Son #%d***\n" , index+1);
   
  printf("Enter Son's name: ");
  scanf("%s" , p2son->name);
   
  printf("Enter Son's National ID: ");
  scanf("%d" , &p2son->Nid);
   
  printf("Enter Son's Age: ");
  scanf("%d" , &p2son->age);
   
  return;
}
 
void fillEducation(struct school *p2school)
{
  printf("Enter School's name: ");
  scanf("%s" , p2school->school);
   
  printf("Enter School's Address: ");
  scanf("%s" , p2school->address);
   
  printf("Enter School's Rank: ");
  scanf("%d" , &p2school->rank);
   
  printf("Enter School's Capacity: ");
  scanf("%d" , &p2school->capacity);
   
  return;
}
 
void fillParent(struct parent *p2father)
{
  printf("Enter Parent's name: ");
  scanf("%s" , p2father->name);
   
  printf("Enter Parent's job: ");
  scanf("%s" , p2father->job);
   
  printf("Enter Parent's National ID: ");
  scanf("%d" , &p2father->Nid);
   
  printf("Enter Parent's Age: ");
  scanf("%d" , &p2father->age);
   
  return;
}
