//
// Created by Daniel Lifshitz on 30/11/2022.
//

#include "Point.h"
/**
 * @brief Iris will be represented as points in space as it is the same and could be minimally changed to fit other discriptions.
 */


/**
 * @brief Construct a new Point:: Point object using a vector and a type
 * 
 * @param Stats A vector of information about the point.
 * @param type The type of the point.
 */
Point::Point(std::vector<double> Stats, pointType type) 
            : pointStats(Stats), type(type) {}

/**
 * @brief Construct a new Point:: Point object using a different point.
 * 
 * @param point The point we copy.
 */
Point::Point(const Point& point){
    for (int i = 0; i < point.getAll().size(); i++){
        this->pointStats[i] = point.getStat(i);
    }
    this->type = point.getType();
}



/**
 * @brief Specific getter.
 * Will return a specific stat in the point.
 * for example: in (x,y,z) you could get x y or z.
 * 
 * @return double The stat of the point asked by the user.
 */
double Point::getStat(int place) const {
    if(place >=0 && place <= pointStats.size()){
        return pointStats[place];
    }
    else {
        std::cout << "No stat like that exists please pick another number";
        return NULL;
    }
}

/**
 * @brief Type getter.
 * 
 * @return pointType The type the point has.
 */
pointType Point::getType() const{
    return type;
}

/**
 * @brief Point getter.
 * Will return the entire point.
 * for example: with (x,y,z) you will get (x,y,z).
 * 
 * @return std::vector<double> The entire point.
 */
std::vector<double> Point::getAll() const {
    return pointStats;
}


