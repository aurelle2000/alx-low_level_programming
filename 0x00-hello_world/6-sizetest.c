#include <stdio.h>

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of an long int: %d byte(s)\n", sizeof(c));
	printf("Size of an long long int: %d byte(s)\n", sizeof(d));
	printf("Size of an float: %d byte(s)\n", sizeof(e));

	return (0);

}
