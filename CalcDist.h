#ifndef AP_Task2_calcDist_HPP
#define AP_Task2_calcDist_HPP


#include <math.h>
#include "Point.h"
using namespace std;
double Euclidan(std::vector<double>, std::vector<double>);
double Manhattan(std::vector<double>, std::vector<double>);
double Chebyshev(std::vector<double>, std::vector<double>);
double Canberra(std::vector<double>, std::vector<double>);
double Minkowski(std::vector<double>, std::vector<double>, int);

char* doubleFormat(double);

double calcDistance(std::string, std::vector<double>, Point);
#endif //AP_Task2_calcDist_HPP
