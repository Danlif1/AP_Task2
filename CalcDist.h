#ifndef T1_calcDist_HPP
#define T1_calcDist_HPP

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include "Point.h"
double Euclidan(std::vector<double>, std::vector<double>);
double Manhattan(std::vector<double>, std::vector<double>);
double Chebyshev(std::vector<double>, std::vector<double>);
double Canberra(std::vector<double>, std::vector<double>);
double Minkowski(std::vector<double>, std::vector<double>, int);

char* doubleFormat(double);

double calcDistance(std::string, std::vector<double>, Point);
#endif //T1_calcDist_HPP