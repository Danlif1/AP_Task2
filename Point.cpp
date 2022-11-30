//
// Created by Daniel Lifshitz on 30/11/2022.
//

#include "Point.h"
/**
 * @brief Iris will be represented as points in space as it is the same and could be minimally changed to fit other discriptions.
 */

/**
 * @brief Width getter.
 * 
 * @return double The width of the point.
 */
double Point::getWidth() const {
    return width;
}

/**
 * @brief Sepal length getter.
 * 
 * @return double The sepal length of the point.
 */
double Point::getSepalLength() const {
    return sepalLength;
}

/**
 * @brief Sepal width getter.
 * 
 * @return double The sepal width of the point.
 */

double Point::getSepalWidth() const {
    return sepalWidth;
}

/**
 * @brief Petal length getter.
 * 
 * @return double The petal length of the point.
 */

double Point::getPetalLength() const {
    return petalLength;
}

/**
 * @brief PointType getter.
 * 
 * @return PointType The point type (enum).
 */
pointType Point::getType() const {
    return type;
}
