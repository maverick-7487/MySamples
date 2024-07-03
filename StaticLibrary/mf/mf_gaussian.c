#include "mf.h"
#include <math.h>

#ifdef VERBOSE
#include <stdio.h>
#endif

double mf_gaussian(double x, double mu, double sigma)
{
#ifdef VERBOSE
	printf("\nRunning gaussian function of Math Functions library (%d.%d.%d).\n",
			mf_major, mf_minor, mf_patch);	
#endif
	double arg = - pow( (x-mu)/(sqrt(2.)*sigma), 2 );
	double g = exp( arg ) / (sqrt(2.*M_PI) * sigma);
	return g;
}
