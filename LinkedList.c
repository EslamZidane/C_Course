#include <stdio.h>
#include <stdio.h>

struct linkedList
{
	int data;
	void* nextElement;
};

typedef struct linkedList listElement;

listElement newElement();
void dropElement(int *n);
listElement* createList();


listElement* hol;

int main(void)
{
	int n =0;
	printf("%p\n" , &hol);
	return 0;
}

listElement* createList()
{
	listElement* newElement;
	newElement = (listElement*)malloc(sizeof(listElement));
	return newElement;
}

void addElement(int* n)
{
	listElement* newElement;
	newElement = (listElement*)malloc(sizeof(listElement));
	*n++;
	newElement->nextElement = hol->nextElement;
	hol->nextElement=newElement;
	return;
}

void dropElement(int *n)
{
	listElement* temp;
	temp = hol->nextElement;
	free(hol);
	hol=temp;
	*n--;
	return;
	
}
