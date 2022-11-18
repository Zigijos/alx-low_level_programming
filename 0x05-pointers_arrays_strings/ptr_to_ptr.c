#include <stdio.h>

int main(void)
{
	int n;

	int *ptr1;

	int **ptr2;

	n = 50;

	ptr1 = &n;

	ptr2 = &ptr1;

	printf("the value for n - %d\n", n);
	printf("the value for ptr1 - %p\n", ptr1);
	printf("the value for ptr2 - %p\n", ptr2);

	//printf("the value for n in ptr1 - %d\n", *ptr1);
	//printf("the value for n in ptr2 - %d\n", **ptr2);

	//printf("the value of ptr1 in ptr2 - %p\n", *ptr2);
	
	ptr2++;

	printf("the value of the next ptr - %d\n", **ptr2);


}	
