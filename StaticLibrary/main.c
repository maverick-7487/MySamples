#include "mf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	mf_print_version();

	double x = 0.2;
	double x0 = 0.0;
	double sigma = 0.1;

	printf("The gaussian at x = %f, with x0 = %f and sigma = %f, is equal to %f.\n",
	x, x0, sigma, mf_gaussian(x,x0,sigma));

	return 0;
}
