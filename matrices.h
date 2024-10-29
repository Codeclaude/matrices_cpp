#ifndef __MATRICES_H
#define __MATRICES_H
void affmat(double m[3][3], int t);
void saisirmat(double m[3][3], int t);
void addmat(double a[3][3], double b[3][3], double res[3][3], int t);
void submat(double a[3][3], double b[3][3], double res[3][3], int t);
void mulmat(double a[3][3], double b[3][3], double res[3][3], int t);
void transpomat(double a[3][3], double res[3][3], int t);
double detmat(double a[3][3], int t) ;
bool invmat(double a[3][3], double res[3][3]);
double tracemat(double a[3][3], int t);
#endif


