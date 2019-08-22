#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	int b;
	a = 1;
	b = a++;
	printf("%d\n", b);
	return 0;
}