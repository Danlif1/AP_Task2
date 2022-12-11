//
// Created by Daniel Lifshitz on 30/11/2022.
//
#include "SafetyChecks.h"
#include "Point.h"
#include "PointReader.h"
#include "KNN.h"
#include <iostream>

int main(int argc, char **argv) {
    if(NumberOfArguments(argc)){
        //Saving the K.
        int k = std::stoi(argv[1]);
        //Saving the file name.
        std::string file = argv[2];
        //Saving the distance metric.
        std::string metric = argv[3];
        //Create classified Iris vector.
        PointReader classifiedPointReader(file);
        Point cPoint;
        std::vector<Point> classifiedPoints;
        while (classifiedPointReader.getNextPoint(cPoint)) { classifiedPoints.push_back(cPoint); }
        //Making an infinite loop to read points.
        KNN knn_run(k,metric);
        knn_run.fit(classifiedPoints);
        while (true) {
            //sPoint = string point.
            std::string sPoint;
            std::cin >> sPoint;
            //uPoint = unclassified point.
            Point uPoint;
            //The types don't match here. this function takes a vector<string> and not a regular char*.
            uPoint.setFromVector(sPoint);
            knn_run.predict(uPoint);
            //TODO: Add a KNN calculating algorithm.

        }
        //DONE: Read the file.
        //TODO: Safety checks to the code.
        //TODO: Add explanations to the code.
    }

}
