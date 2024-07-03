#include "mf.h"
#include <math.h>

#ifdef VERBOSE
#include <stdio.h>
#endif

double mf_logistic(double x, double L, double k, double x0)
{
#ifdef VERBOSE
	printf("\nRunning logistic function of Math Functions library (%d.%d.%d).\n",
			mf_major, mf_minor, mf_patch);	
#endif
	double arg = -k*(x-x0) ;
	double l = L / (1 + exp( arg ) ); 
	return l;
}
