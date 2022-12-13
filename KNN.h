
#ifndef AP_TASK2_KNN_H
#define AP_TASK2_KNN_H

#include <tuple>
#include <algorithm>
#include "CalcDist.h"



class KNN {
    int k;

    string distance_metric;
    vector<Point> data;

    vector<tuple<double, string>> distance(vector<double> a);

    string nearestNeighbor(vector<tuple<double, string>> distances) const;


public:
    KNN(int k, string metric);

    void fit(vector<Point> classified_point);

    string predict(Point newpoint);
=======
    std::string distance_metric;
    std::vector<Point> data;

};
#endif //AP_TASK2_KNN_H
