#include <stdio.h>
#include <stdlib.h>

#include "add.h"

int main(void)
{
	int sum;

	sum = add(3, 3);

	printf("sum = %d.\n", sum);

	exit(0);
}
