#include <stdio.h>
int main()
{
	char *nume=(char *)malloc(sizeof(char));
	scanf("%s", nume);
	printf("Hello, %s", nume);
	return 0;
}
