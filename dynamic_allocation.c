#include <stdio.h>
#include <stdlib.h>
#define MAX 16
#define MIN 2
 
//void Resize(int size, int *a);
//void copy(int arr1[], int arr2[], int count);
 
void main(void)
{
    int range = MAX;
    int *a =(int *)malloc(MIN*sizeof(int));
    int i, counter, size;
    char command = 'i';
     
    counter = i = 0;
    size = 2;
 
    while(1)
    {
         
        printf("Enter the Command:\n");
        scanf("%c", &command);
        switch(command)
        {
            case 'i':
            if(counter < size)
            {
                printf("Enter The Element:\n");
                scanf("%d", a+counter);
                counter++;
            }
            else
            {
                size=size*2;
                printf("New Size is: %d\n",size);
                a=(int*)realloc(a,size*sizeof(int));
                if (a == NULL)
                {
                    printf("No Enough Memory in The Segment ! \n");
                }
                else
                {
                    printf("Enter The Element(size changed %d):\n",size);
                    scanf("%d", a+counter);
                    counter++;
                }
 
            }
            break;
 
            case 's':
            for (i = 0; i < counter; ++i)
            {
 
                printf("%d\n", a[i]);
                 
            }
            break;
            case 'q':
            exit(0);
            break;
            default:;
 
        }
        getchar();
    }
 
 
    return;
}
/*
void Resize(int *size, int *a)
{
    int b[*size];
    copy(a,b, *size);
    free(a);
    *size = (*size)*2;
    printf("New Size is: %d\n", *size);
    a = (int *)malloc(*size*sizeof(int));
    if (a == NULL)
    {
        return;
    }
    copy(b,a,(*size)/2);
    return;
}
 
void copy(int arr1[], int arr2[], int count)
{
    int i =0;
    for (i = 0; i < count; ++i)
    {
        arr2[i]=arr1[i];
    }
    return;
}
*/
