#include "mf.h"
#include <math.h>

#ifdef VERBOSE
#include <stdio.h>
#endif

double mf_lorentzian(double x, double x0, double gamma)
{
#ifdef VERBOSE
	printf("\nRunning lorentzian function of Math Functions library (%d.%d.%d).\n",
			mf_major, mf_minor, mf_patch);	
#endif
	double l = gamma / ( (x-x0)*(x-x0) + gamma*gamma ) / M_PI ; 
	return l;
}
