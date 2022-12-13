
#include "SafetyChecks.h"
#include "Point.h"
#include "PointReader.h"
#include "KNN.h"
#include <iostream>

int main(int argc, char **argv) {
    KNN new_knn(3, "AUC");
    vector<Point> classified_vector;
    Point point1(vector<double>({5.4, 3.9, 1.7, 0.4}), "Iris-setosa");
    classified_vector.push_back(point1);
    Point point2(vector<double>({4.6, 3.4, 1.4, 0.3}), "Iris-setosa");
    classified_vector.push_back(point2);
    Point point3(vector<double>({5, 3.4, 1.5, 0.2}), "Iris-setosa");
    classified_vector.push_back(point3);
    Point point4(vector<double>({4.4, 2.9, 1.4, 0.2}), "Iris-setosa");
    classified_vector.push_back(point4);
    Point point5(vector<double>({6.1, 2.8, 4, 1.3}), "Iris-versicolor");
    classified_vector.push_back(point5);
    Point point6(vector<double>({6.6, 3, 4.4, 1.4}), "Iris-versicolor");
    classified_vector.push_back(point6);
    Point point7(vector<double>({6.8, 2.8, 4.8, 1.4}), "Iris-versicolor");
    classified_vector.push_back(point7);
    Point point8(vector<double>({6.7, 3, 5, 1.7}), "Iris-versicolor");
    classified_vector.push_back(point8);
    Point point9(vector<double>({7.7, 2.6, 6.9, 2.3}), "Iris-virginica");
    classified_vector.push_back(point9);
    Point point10(vector<double>({7.7, 2.8, 6.7, 2}), "Iris-virginica");
    classified_vector.push_back(point10);
    Point point11(vector<double>({6.1, 3, 4.9, 1.8}), "Iris-virginica");
    classified_vector.push_back(point11);
    Point point12(vector<double>({5.6, 2.8, 4.9, 1.9}), "Iris-virginica");
    classified_vector.push_back(point12);

    new_knn.fit(classified_vector);
    Point newPoint(vector<double>({7.7, 2.8, 6.7, 2}), " ");
    cout << new_knn.predict(newPoint);
}

