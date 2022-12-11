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
    return false;
}

/**
 * @brief stoi() doesn't work for numbers starting with a letter so we check if the first digit is a number.
 * We check the if because k[0] - '0' is actually the first digit of k and by that we can know if the first digit is a number or not.
 * 
 * @param k The string given from argv for the KNN algorithm.
 * @return int return the actual number of k.
 */
int KCheck(std::string k){
    int firstDigit = k[0]-'0';
    if (firstDigit >= 0 && firstDigit < 10){
        return stoi(k);
    }
    std::cout << "k should be a number" << std::endl;
    return 0;
}

/**
 * Checking if maybeDouble is a number.
 * @param maybeDouble The string we got we want to confirm to a number.
 * @return True if the first digit is a number; false otherwise.
 */
bool IsDouble(std::string maybeDouble){
    int firstDigit = maybeDouble[0] - '0';
    if (firstDigit >= 0 && firstDigit <= 9){
        //The function stod(maybeDouble) will return a double even if there are letters in th number.
        return true;
    }
    //The first digit is not a number thus stod(maybeDouble) will return an error and we do not want that to happen.
    return false;
}
