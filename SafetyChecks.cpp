//
// Created by Daniel Lifshitz on 30/11/2022.
//

#include "SafetyChecks.h"

/**
 * @brief checks that there is a K, file and a distance.
 * 
 * @param argc the amount of things given.
 * @return true The amount is ok.
 * @return false The amount is not ok.
 */
bool NumberOfArguments(int argc){
    if (argc == 4){
        return true;
    }
    else if (argc < 4){
        std::cout << "Insufficient information please try to add more arguments in the command line" << std::endl;
    }
    else {
        std::cout << "Too much information please try to add less arguments in the command line" << std::endl;
    }
    return false;

}

/**
 * @brief Checks the amount of points given and the amount of points needed for the KNN algorithm is ok.
 * 
 * @param k The amount of points of points needed for the KNN algorithm.
 * @param amountOfPoints The amount of points given.
 * @return true The K is ok.
 * @return false The K is not ok.
 */
bool PointsCount(int k, int amountOfPoints){
    if (k > 0 && k < amountOfPoints){
        return true;
    }
    else if (k <= 0){
        std::cout << "K is too small please try to enter a bigger number as K" << std::endl;
    }
    else{
        std::cout << "K is too big please try to enter a smaller number as K" << std::endl;
    }
}
