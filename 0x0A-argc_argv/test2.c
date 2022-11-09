#include <stdio.h>

int main(void)
{	
	char name[20];
	printf("what is your name:");
	scanf("Name: %s\n", name);
	printf("Hello, how are you today?\n");
	printf("%s",name);

	return 0;
}
