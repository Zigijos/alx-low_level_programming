#include <stdio.h>

int main(void)
{	
	char name[20];

	printf("what is your name:\n");

	scanf("%s", name);

	printf("Hello %s, how are you today?\n", name);

	return 0;
}
