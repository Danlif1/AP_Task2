//
// Created by lenovo on 12/10/2022.
//

#ifndef AP_TASK2_KNN_H
#define AP_TASK2_KNN_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class KNN {
int k;
string distance_metric;
vector<double> data;
vector<string> labels;

KNN();
void fit(vector<double> x, vector<string> y);
vector<double> predict(vector<double>);
vector<double> distance(vector<double> a);
string nearestNeighbor(vector<double> distances);



};


#endif //AP_TASK2_KNN_H
