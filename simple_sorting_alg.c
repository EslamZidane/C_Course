include <stdio.h>
void sort(int a[]);
  
void main(void)
{
    int a[5] = {6,3,1,8,4};
    int c;
  
    sort(a);
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n", a[i]);
    }
    return;
  
}
  
void sort(int a[])
{
    int temp;
    int i, j;
    for( i =0; i<5;i++)
    {
        for ( j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return ;
} 
