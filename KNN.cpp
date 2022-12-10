
#include <tuple>
#include <algorithm>
#include "KNN.h"
#include "Point.h"

/**
 * constructor
 * @param k
 * @param metric
 */
KNN::KNN(int k, string metric) {
    KNN::k = k;
    KNN::distance_metric = metric;

}

//point might not need to be a class of its own, if it is its only to separate the vector from the label
/**
 * fits the training data to the knn object. training data consists of data(x) and labels(y).
 * @param x - classified vectors
 * @param y - labels corresponding to given data
 */
void KNN::fit(vector<Point> x, vector<string> y) {
    //need to decide if we store the data as to separate arrays. might be better to utilize the class point.
    //if we decide to not separate them we need to take care of functions in distance method.
    KNN::data = x;
    KNN::labels = y;
}

/**
 * predicts the label of a given unclassified vector
 * @return
 */
string KNN::predict(vector<double> newpoint) {
    vector<tuple<double, string>> dis_from_point = distance(newpoint);
    string label = nearestNeighbor(dis_from_point);
    return label;
}

/**
 * calculates the distance from the unclassified vector, to the classified data we have
 * @param a the unclassified information
 * @return a vector of tuples (the tuple will consist of the distance and the classified label) with the distance of the unclassified data from the classified vector
 */
vector<tuple<double, string>> KNN::distance(vector<double> a) {
    vector<tuple<double, string>> dis_from_point;
    double tmp;
    for (int i = 0; i < KNN::data.size(); ++i) {
        //add calcDistance to distance file
        tmp = calcDistance(distance_metric, a, data[i]);
        dis_from_point.emplace_back(tmp, labels[i]);
    }
    return dis_from_point;
}

/**
 * receives an array of distances and finds the max label that appears
 * @param distances the vector obtained from the distance method.
 * @return the label that appears most in the distances vector
 */
string KNN::nearestNeighbor(vector<tuple<double, string>> distances) {
    //sort distances based on first element in ascending order
    std::sort(distances.begin(), distances.end(), greater<>());
    vector<string> label_of_dis;
    string most_common;
    for (int i = 0; i < k; ++i) {
        label_of_dis.emplace_back(get<1>(distances[i]));
    }
    sort(label_of_dis.begin(), label_of_dis.end());
    string check = label_of_dis[0];
    string max_label;
    int count = 0;
    int max = 0;
    for (int i = 0; i < label_of_dis.size(); ++i) {
        if (check == label_of_dis[i]) {
            count++;
        } else {
            if (count > max) {
                max = count;
                max_label = check;
            }
            count = 0;
            check = label_of_dis[i];
        }

    }
    return max_label;
}
