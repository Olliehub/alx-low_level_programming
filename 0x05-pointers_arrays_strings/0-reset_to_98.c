#include "main.h"
#include <stdio.h>
/**
  * reset_to_98 - function
  *
  * Return: Always 0
  */
void reset_to_98{int *n};
{
	*n = 402;
	printf("%d\n", n);
	reset_to_98(&n)
	printf("%d\n", n);
	return(0);

}

