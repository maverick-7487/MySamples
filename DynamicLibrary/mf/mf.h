#ifndef MF_H
#define MF_H

extern int mf_major;
extern int mf_minor;
extern int mf_patch;

void mf_print_version();
double mf_gaussian(double x, double mu, double sigma);
double mf_logistic(double x, double L, double k, double x0);
double mf_lorentzian(double x, double x0, double gamma);

#endif
