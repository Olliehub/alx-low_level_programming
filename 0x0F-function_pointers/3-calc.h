#ifndef _CALC_H_
#define _CALC_H_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}
