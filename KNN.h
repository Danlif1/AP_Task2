
#ifndef AP_TASK2_KNN_H
#define AP_TASK2_KNN_H

#include "Point.h"
#include "CalcDist.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


class KNN {
    int k;
    string distance_metric;
    vector<Point> data;

public: KNN(int k, string metric);
    void fit(vector<Point> classified_point);
    string predict(vector<double>);
    vector<tuple<double,string>> distance(vector<double> a);
    string nearestNeighbor(vector<tuple<double,string>> distances);


};


#endif //AP_TASK2_KNN_H
