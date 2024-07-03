#include "mf.h"
#include <stdio.h>

int mf_major = 0;
int mf_minor = 0;
int mf_patch = 1;

void mf_print_version()
{
	printf("\nMath functions library MF, version %d.%d.%d\n\n", mf_major, mf_minor, mf_patch);
}
