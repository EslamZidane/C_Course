/*
 * In this function we make our simple custom scanf function.
 * This function accepts types of float and integers only and has no means of detecting misuse and handling exceptions.
 *
 * myScanf() decodes the control statement to know the number of inputs and their types.
 * getNum() extracts the digit-characters and sends them back to myScanf().
 * Then myScanf() can get the strings of input numbers and converts them to intgers and/or floats.
 * myScanf() stores the extracted input back to the sent memory location in the calling statement.
 * Then, I can now use them in my calculations.
 *
 * Note: For some reason I don't know, you have to enter at least one space in the command line screen. Or, the first digit will be missing.
 */
 
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
 
char * getNum(char *input, int *countString , int inputLength);
void myScanf(char *statement ,...);
 
void main(void)
{
    int a,c;
    float b;
     
    printf("Sent Pointers(f,d): %p %p\n", &b , &a);
    getchar();
    myScanf("%d%f%d",&c, &b , &a);
    printf("%d\n%f\n%d\n", c, b , a);
     
  
  return;
}
 
//statement is the control statement sent by the user to control input parameters
void myScanf(char *statement ,...)
{
  char types[10]; //Array to store types of the input parameters in the control statement.
  int i; //index for iterating on the characters of the control statement
  int j=0; //for counting the control characters preceding % sign
  char *pWord = NULL; //pointer to an array of pointers to characters
  float **pf = NULL;
  int **pd = NULL;
 
  char input[100]; //Array of characters to store the user input from gets() function
  int countString=0;
  //Getting the input from the user.
  gets(input);
   
  //Getting the address of the first parameter in the variable length parameter list
  va_list parg = NULL;
  va_start(parg , statement);
   
  //Storing and casting the void * parg to be a pointer to pointer to float/int
  pf = (float **)parg;
  pd = (int **)parg;
   
    //Counting to number of control parameters and storing them in an array
    for(i = 0;i< strlen(statement)-1;i++)
    {
    if(statement[i] =='%')
    {
      types[j] = statement[i+1];
      j++;
    }
     
    }
     
    //Here we call the function that extract the strings of numbers to be converted and then convert them.
    for(i = 0;i<j;i++)
    {
      switch(types[i])
      {
    case 'i':
    case 'd':
      pWord=getNum(input, &countString,strlen(input));
//    printf("Intermediate result(integer): %d\n", atoi(pWord));
      **pd=atoi(pWord);
      pd++;
      pf++;
       
      free(pWord);
      break;
    case 'f':
      pWord=getNum(input, &countString,strlen(input));
//    printf("Intermediate result(float): %f\n", atof(pWord));
 
      **pf=atof(pWord);  
      pd++;
      pf++;
      free(pWord);
      break;
    default:;
       
      }
      
    }
     
  va_end(parg);
  return;
}
 
 
char * getNum(char *input, int *countString, int inputLength)
{
  int i=0;
  int count=0;
  char *p = NULL;
   
  //Remove preceding white spaces.
  while(!isgraph(input[*countString])&& *countString<inputLength)
  {
    (*countString)++;
  }
   
  //Counting the number of characters in the string representing the input number.
  while(isgraph(input[(*countString)+count]) && (*countString)+count<inputLength)
  {
    count++;
  }
 
  //Storing the string in a dynamically allocated space.
  p = (char *)malloc((count)*sizeof(char));
  for(i=0;i<=count;i++)
  {
   p[i]= input[(*countString)+i];
  }
   
  //Updating the index at which the next String scanning will start.
  *countString+=count;
  // returning the pointer of the extracted string.
  return p;
}
