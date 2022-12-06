//
// Created by Daniel Lifshitz on 30/11/2022.
//

#ifndef AP_TASK2_POINT_H
#define AP_TASK2_POINT_H

#include <vector>
#include <iostream>
//Called PointType so you could change the thing you try to classfiy/want to add more types.
enum pointType
{
    setosa,
    virginica,
    versicolor,
    UNKNOWN
};

class Point {
    // We don't want the iris specific stats to be changed.
    private:
        std::vector<double> pointStats;
        pointType type;
    public:
        Point(std::vector<double> = {0}, pointType type = UNKNOWN);
        Point(const Point& point);
        //We do want to access the information of the iris so we will create getters.
        //But we want to be able to add as much information of the iris as wanted.
        double getStat(int) const;
        pointType getType() const;
        std::vector<double> getAll() const;
        

};


#endif //AP_TASK2_POINT_H
