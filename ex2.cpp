
#include "SafetyChecks.h"
#include "Point.h"
#include "PointReader.h"
#include "KNN.h"
#include <iostream>

int main(int argc, char **argv) {
    std::fstream fout;

    // opens an existing csv file or creates a new file.
    fout.open("classified.csv", std::ios::out | std::ios::app);
    if(NumberOfArguments(argc)) {
        //Saving the K.
        int k;
        if (KCheck(argv[1])) {
            k = stoi(argv[1]);
        } else {
            //K is equal 0, so we need to terminate the program.
            return 0;
        }
        //Saving the file name.
        std::string file = argv[2];
        if (!CheckFile(file)) {
            //The file doesn't end with .csv so we need to terminate the program.
            return 0;
        }
        //Saving the distance metric.
        std::string metric = argv[3];
        if (!CheckMetric(metric)) {
            //The metric isn't one of the given 5 so we need to terminate the program.
            return 0;
        }
        //Create classified vector.

        PointReader classifiedPointReader(file);
        Point cPoint;
        std::vector<Point> classifiedPoints;
        //creating an array of classified points.
        while (classifiedPointReader.getNextPoint(cPoint)) { classifiedPoints.push_back(cPoint); }

        if (!PointsCount(k, classifiedPoints.size())){
            //K is either too big or too small so we need to terminate the program.
            return 0;
        }
        if(!IsSameSize(classifiedPoints)){
            cout << "not all vectors are the same size, please enter the vectors again." << std::endl;
            return 0;
        }
        //initializing a run of KNN
        KNN knn_run(k,metric);
        knn_run.fit(classifiedPoints);
        //Making an infinite loop to read points.
        while (true) {
            //sPoint = string point.
            Point uPoint;
            do {
                std::string sPoint;
                getline(cin, sPoint);
                //uPoint = unclassified point.
                //The types don't match here. this function takes a vector<string> and not a regular char*.
                uPoint.setFromString(sPoint, ' ');
                if (!GoodVector(uPoint, classifiedPoints[0])){
                    std::cout << "Please enter the correct amount of arguments into the vector." << std::endl;
                }
            } while (!GoodVector(uPoint, classifiedPoints[0]));


            //DONE: Add a KNN calculating algorithm.
            //print predicted label to screen.
            std::cout << knn_run.predict(uPoint);


        }
        //DONE: Read the file.
        //DONE: Safety checks to the code.
        //TODO: Add explanations to the code.
    }
    else {
        std::cout << "Not all arguments are given please enter the K, file and distance metric." << std::endl;
    }

}

