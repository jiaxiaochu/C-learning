#include <stdio.h>
int main(int argc, char const *argv[])
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(enter q to quit):");
	status = scanf("%1d", &num);
	while (status == 1){  // == 意思是 等于
		sum = sum + sum;
		printf("Please enter next integer (enter q to quit) :");
		status = scanf("%1d", &num);
	}
	printf("Those integers sum to %1d.\n",sum );
	return 0;
}