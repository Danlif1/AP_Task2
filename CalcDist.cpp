#include "CalcDist.h"

/**
 * @brief Calculating the distance of two vectors using Euclidian distance.
 * Actually just calling Minkowski with 2 as it does the same thing.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Euclidian(std::vector<int> point1, std::vector<int> point2){
    return Minkowski(point1,point2,2);
}

/**
 * @brief Calculating the distance of two vectors using Manhattan distance.
 * Actually just calling Minkowski with 1 as it does the same thing.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Manhattan(std::vector<int> point1, std::vector<int> point2){
    return Minkowski(point1,point2,1);
}

/**
 * @brief Calculating the distance of two vectors using Chebyshev distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Chebyshev(std::vector<int> point1, std::vector<int> point2){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){
        if (result < (double)abs((double)point1[i] - (double)point2[i])){
            result = (double)abs((double)point1[i] - (double)point2[i]);
        }
    }
    return result;
}

/**
 * @brief Calculating the distance of two vectors using Canberra distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Canberra(std::vector<int> point1, std::vector<int> point2){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){
        result += (double)abs((double)point1[i] - (double)point2[i])/(abs((double)point1[i])+abs((double)point2[i]));
    }
    return result;
}

/**
 * @brief Calculating the distance of two vectors using Minkowski distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @param power The power with which we use in the function as its (|p1[i]-p2[i]|)^p.
 * @return double The distance between two vectors.
 */
double Minkowski(std::vector<int> point1, std::vector<int> point2, int power){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){

        result += (double)pow(abs((double)point1[i] - (double)point2[i]),power);
    }
    result = pow(result, 1.0/power);
    return result;
}

/**
 * @brief Formatting the result gotten in the distance function into a double with 16 digits given a non integer.
 * and a .0 number given an integer.
 * 
 * @param num The result gotten from the distance function.
 * @return char* The result formatted into a double.
 */
char* doubleFormat(double num) {
    int inum = num;
    char* perc = (char*)"%.16f";
    if ((double)(num - inum) == 0.0) {
        perc = (char*)"%.1f";
    }
    char* output = (char*)malloc(100);
    snprintf(output,100,  perc,  num);
    return output;
}

double calcDistance(std::string metric, vector<double> uPoint, Point kPoint){
    //A distance metric is given by 3 letters.
    for (int i = 0; i < 3; i++){
        metric[i] = std::toupper(metric[i]);
    }
    metric = metric.toUpper
    int isEqual = metric.compare("AUC");
    if (!isEqual){
        //Meaning its AUC.
        return Euclidian(uPoint, kPoint.getAll());
    }
    int isEqual = metric.compare("MAN");
    if (!isEqual){
        //Meaning its MAN.
        return Manhattan(uPoint, kPoint.getAll());
    }
    int isEqual = metric.compare("CHB");
    if (!isEqual){
        //Meaning its CHB.
        return Chebyshev(uPoint, kPoint.getAll());
    }
    int isEqual = metric.compare("CAN");
    if (!isEqual){
        //Meaning its CAN.
        return Canberra(uPoint, kPoint.getAll());
    }
    int isEqual = metric.compare("MIN");
    if (!isEqual){
        //Meaning its MIN.
        return Minkowski(uPoint, kPoint.getAll());
    }
}